#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>  // for usleep

// DDA line drawing function
void dda(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    int steps = fabsf(dx) > fabsf(dy) ? (int)fabsf(dx) : (int)fabsf(dy);
    float xinc = dx / steps;
    float yinc = dy / steps;
    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++) {
        glVertex2f(x, y);
        x += xinc;
        y += yinc;

        glEnd();
        glFlush();          // draw point immediately
        usleep(5000);       // small delay
        glBegin(GL_POINTS);
    }
    glEnd();
    glFlush();
}

int main() {
    float x1, y1, x2, y2;

    printf("Digital Differential Line Drawing Algorithm\n");
    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    if (!glfwInit()) {
        printf("Failed to initialize GLFW\n");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "DDA Line Drawing", NULL, NULL);
    if (!window) {
        printf("Failed to create window\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glewInit();

    // Set 2D orthographic projection (0,0 bottom-left)
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 0, 600, -1, 1);
    glMatrixMode(GL_MODELVIEW);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();

        // Red color for line
        glColor3f(1.0f, 0.0f, 0.0f);

        // Draw DDA line
        dda(x1, y1, x2, y2);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}