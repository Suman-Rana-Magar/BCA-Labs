#include<GLFW/glfw3.h>
#include<stdio.h>
void midpointCircle(int xc, int yc, int r){
    int x=0;
    int y=r;
    int p=1-r;
    glBegin(GL_POINTS);
    while(x<=y){
        glVertex2i(xc+x,yc+y);
        glVertex2i(xc-x,yc+y);
        glVertex2i(xc+x,yc-y);
        glVertex2i(xc-x,yc-y);
        glVertex2i(xc+y,yc+x);
        glVertex2i(xc-y,yc+x);
        glVertex2i(xc+y,yc-x);
        glVertex2i(xc-y,yc-x);
        x++;
        if(p<0){
            p=p+2*x+1;
        }
        else{
            y--;
            p=p+2*x-2*y+1;
        }
    }
    glEnd();
}
int main(){
    int xc,yc,r;
    printf("Enter center x: ");
    scanf("%d", &xc);
    printf("Enter center y: ");
    scanf("%d", &yc);
    printf("Enter radius: ");
    scanf("%d", &r);
    if(!glfwInit()){
        printf("Failed to initialize GLFW\n");
        return -1;
    }
    GLFWwindow *window=glfwCreateWindow(500,500, "Midpoint Circle Algorithm", NULL, NULL);
    if(!window){
        printf("Failed to create window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,500,0,500,-1,1);
    glMatrixMode(GL_MODELVIEW);
    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        glColor3f(1.0f,1.0f,1.0f);
        midpointCircle(xc,yc,r);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}