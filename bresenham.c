#include <GL/glew.h>      // GLEW library for managing OpenGL extensions
#include <GLFW/glfw3.h>  // GLFW for window creation and input handling
#include <stdio.h>       // Standard input-output functions (printf)
#include <stdlib.h>      // For abs() function
#include <unistd.h>      // For usleep() to create delay (animation)
// Bresenham's Line Drawing Algorithm function
void bresenham(int x1, int y1, int x2, int y2) {
    // Calculate difference in x and y
    int dx = abs(x2 - x1);   // Absolute difference in x
    int dy = abs(y2 - y1);   // Absolute difference in y
    // Determine direction of movement in x and y
    int sx = (x1 < x2) ? 1 : -1;  // Step direction for x (+1 or -1)
    int sy = (y1 < y2) ? 1 : -1;  // Step direction for y (+1 or -1)
    // Initial decision parameter (error term)
    int err = dx - dy;
    // Start from the first point
    int x = x1;
    int y = y1;
    glBegin(GL_POINTS);  // Start drawing points
    while (1) {  // Infinite loop (we break when endpoint is reached)
        glVertex2i(x, y);  // Plot current pixel (point)
        // If current point reaches ending point, stop
        if (x == x2 && y == y2)
            break;
        int e2 = 2 * err;  // Double the error term
        // Move in x-direction if needed
        if (e2 > -dy) {
            err -= dy;     // Update error
            x += sx;       // Move x in correct direction
        }
        // Move in y-direction if needed
        if (e2 < dx) {
            err += dx;     // Update error
            y += sy;       // Move y in correct direction
        }
        // End current drawing batch so it appears immediately
        glEnd();
        glFlush();         // Force OpenGL to render immediately
        glBegin(GL_POINTS); // Start drawing next point batch
    }
    glEnd();    // End drawing
    glFlush();  // Ensure everything is rendered
}
int main() {
    // Initialize GLFW (required before using it)
    if (!glfwInit()) {
        printf("Failed to initialize GLFW\n");
        return -1;
    }
    // Create a window (400x400 pixels) with a title
    GLFWwindow* window = glfwCreateWindow(400, 400, "Bresenham Line", NULL, NULL);
    // If window creation fails
    if (!window) {
        printf("Failed to create window\n");
        glfwTerminate();  // Clean up GLFW
        return -1;
    }
    // Make the window's OpenGL context current
    glfwMakeContextCurrent(window);
    // Initialize GLEW (must be done after context creation)
    glewInit();
    // Set projection matrix (defines coordinate system)
    glMatrixMode(GL_PROJECTION);  // Switch to projection mode
    glLoadIdentity();             // Reset matrix
    // Set coordinate system: (0,0) bottom-left to (400,400) top-right
    glOrtho(0, 400, 0, 400, -1, 1);
    glMatrixMode(GL_MODELVIEW);   // Switch back to model view matrix
    // Main loop (runs until window is closed)
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen
        glLoadIdentity();  // Reset transformations
        // Set drawing color to red (R, G, B)
        glColor3f(1.0f, 0.0f, 0.0f);
        // Draw lines using Bresenham (same pattern as your DDA)
        bresenham(100,100,200,100);
        bresenham(200,100,200,200);
        bresenham(200,200,100,200);
        bresenham(100,200,100,100);
        bresenham(100,100,200,200);
        bresenham(100,200,200,100);
        // Display the rendered frame
        glfwSwapBuffers(window);
        // Handle window events (keyboard, mouse, etc.)
        glfwPollEvents();
    }
    // Cleanup: destroy window and terminate GLFW
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;  // Exit program
}