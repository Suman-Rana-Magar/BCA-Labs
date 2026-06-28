#include <GLFW/glfw3.h>
#include <stdio.h>
#define LEFT   1
#define RIGHT  2
#define BOTTOM 4
#define TOP    8
#define XMIN -6.0f
#define XMAX  6.0f
#define YMIN -4.0f
#define YMAX  4.0f
int computeCode(float x, float y)
{
    int code = 0;
    if (x < XMIN)
        code |= LEFT;
    else if (x > XMAX)
        code |= RIGHT;
    if (y < YMIN)
        code |= BOTTOM;
    else if (y > YMAX)
        code |= TOP;
    return code;
}
int cohenSutherlandClip(
    float *x1,
    float *y1,
    float *x2,
    float *y2)
{
    int code1 = computeCode(*x1, *y1);
    int code2 = computeCode(*x2, *y2);
    int accept = 0;
    while (1)
    {
        if (!(code1 | code2))
        {
            accept = 1;
            break;
        }
        else if (code1 & code2)
        {
            break;
        }
        else
        {
            float x, y;
            int codeOut =
                code1 ? code1 : code2;
            if (codeOut & TOP)
            {
                x = *x1 +
                    (*x2 - *x1) *
                    (YMAX - *y1) /
                    (*y2 - *y1);
                y = YMAX;
            }
            else if (codeOut & BOTTOM)
            {
                x = *x1 +
                    (*x2 - *x1) *
                    (YMIN - *y1) /
                    (*y2 - *y1);
                y = YMIN;
            }
            else if (codeOut & RIGHT)
            {
                y = *y1 +
                    (*y2 - *y1) *
                    (XMAX - *x1) /
                    (*x2 - *x1);
                x = XMAX;
            }
            else
            {
                y = *y1 +
                    (*y2 - *y1) *
                    (XMIN - *x1) /
                    (*x2 - *x1);
                x = XMIN;
            }
            if (codeOut == code1)
            {
                *x1 = x;
                *y1 = y;
                code1 = computeCode(*x1, *y1);
            }
            else
            {
                *x2 = x;
                *y2 = y;
                code2 = computeCode(*x2, *y2);
            }
        }
    }
    return accept;
}
void drawRectangle()
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(XMIN, YMIN);
    glVertex2f(XMAX, YMIN);
    glVertex2f(XMAX, YMAX);
    glVertex2f(XMIN, YMAX);
    glEnd();
}
void drawAxes()
{
    glBegin(GL_LINES);
    glVertex2f(-15, 0);
    glVertex2f(15, 0);
    glVertex2f(0, -10);
    glVertex2f(0, 10);
    glEnd();
}
int main()
{
    float x1, y1, x2, y2;
    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);
    float cx1 = x1;
    float cy1 = y1;
    float cx2 = x2;
    float cy2 = y2;
    int accepted =
        cohenSutherlandClip(
            &cx1,
            &cy1,
            &cx2,
            &cy2);
    if (!glfwInit())
        return -1;
    GLFWwindow *window =
        glfwCreateWindow(
            800,
            600,
            "Cohen-Sutherland Line Clipping",
            NULL,
            NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15, 15, -10, 10, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        /* Axes */
        glColor3f(0.7f, 0.7f, 0.7f);
        drawAxes();
        /* Clipping Window */
        glColor3f(0.0f, 1.0f, 0.0f);
        drawRectangle();
        /* Original Line */
        glColor3f(1.0f, 0.0f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glEnd();
        if (accepted)
        {
            glColor3f(0.0f, 1.0f, 1.0f);
            glBegin(GL_LINES);
            glVertex2f(cx1, cy1);
            glVertex2f(cx2, cy2);
            glEnd();
        }
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    printf("\nClipped Coordinates:\n");
    if (accepted)
    {
        printf("(%f, %f)\n", cx1, cy1);
        printf("(%f, %f)\n", cx2, cy2);
    }
    else
    {
        printf("Line rejected.\n");
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}