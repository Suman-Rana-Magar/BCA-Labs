#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h> // for usleep

void dda(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    float steps = fabsf(dx) > fabsf(dy) ? fabsf(dx) : fabsf(dy);
    float xinc = dx / steps;
    float yinc = dy / steps;
    float x = x1, y = y1;

    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++) {
        glVertex2f(x, y);
        x += xinc;
        y += yinc;
        glEnd();
        glFlush();          // draw point immediately
        usleep(10000);      // 10ms delay like your Turbo C
        glBegin(GL_POINTS);
    }
    glEnd();
    glFlush();
}

int main() {
    if (!glfwInit()) {
        printf("Failed to initialize GLFW\n");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(400, 400, "Checker Box", NULL, NULL);
    if (!window) {
        printf("Failed to create window\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glewInit();

    // Set coordinate system like (0,0) bottom-left
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 400, 0, 400, -1, 1);
    glMatrixMode(GL_MODELVIEW);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();

        glColor3f(1.0f, 0.0f, 0.0f); // red color

        // Draw checker box lines using DDA
        dda(100,100,200,100);
        dda(200,100,200,200);
        dda(200,200,100,200);
        dda(100,200,100,100);
        dda(100,100,200,200);
        dda(100,200,200,100);
        dda(100,125,200,125);
        dda(100,150,200,150);
        dda(100,175,200,175);
        dda(175,100,175,200);
        dda(175,100,150,200);
        dda(125,100,125,200);
        dda(100,150,150,100);
        dda(150,100,200,150);
        dda(200,150,150,200);
        dda(150,200,100,150);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}