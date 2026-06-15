#include<GLFW/glfw3.h>
#include<stdio.h>
void plotEllipsePoints(int xc,int yc,int x,int y){
    glVertex2i(xc+x,yc+y);
    glVertex2i(xc-x,yc+y);
    glVertex2i(xc+x,yc-y);
    glVertex2i(xc-x,yc-y);
}
void midpointEllipse(int xc,int yc,int rx,int ry){
    float dx,dy,d1,d2;
    int x=0,y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25f*rx*rx);
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    glBegin(GL_POINTS);
    while(dx<dy){
        plotEllipsePoints(xc,yc,x,y);
        if(d1<0){
            x++;
            dx+=2*ry*ry;
            d1+=dx+ry*ry;
        }
        else{
            x++;
            y--;
            dx+=2*ry*ry;
            dy-=2*rx*rx;
            d1+=dx-dy+ry*ry;
        }
    }
    d2=(ry*ry*(x+0.5f)*(x+0.5f))+(rx*rx*(y-1)*(y-1))-(rx*rx*ry*ry);
    while(y>=0){
        plotEllipsePoints(xc,yc,x,y);
        if(d2>0){
            y--;
            dy-=2*rx*rx;
            d2+=rx*rx-dy;
        }
        else{
            x++;
            y--;
            dx+=2*ry*ry;
            dy-=2*rx*rx;
            d2+=dx-dy+rx*rx;
        }
    }
    glEnd();
}
int main(){
    int xc,yc,rx,ry;
    printf("Enter center x: ");
    scanf("%d",&xc);
    printf("Enter center y: ");
    scanf("%d",&yc);
    printf("Enter x radius: ");
    scanf("%d",&rx);
    printf("Enter y radius: ");
    scanf("%d",&ry);
    if(!glfwInit()){
        printf("Failed to initialize GLFW\n");
        return -1;
    }
    GLFWwindow *window=glfwCreateWindow(800,600,"Midpoint Ellipse Algorithm",NULL,NULL);
    if(!window){
        printf("Failed to create window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,800,0,600,-1,1);
    glMatrixMode(GL_MODELVIEW);
    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        glColor3f(0.0f,1.0f,0.0f);
        midpointEllipse(xc,yc,rx,ry);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}