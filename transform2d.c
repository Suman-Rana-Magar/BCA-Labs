#include<stdio.h>
#include<GLFW/glfw3.h>
#include<math.h>
#define PI 3.1415
typedef struct{
    float x;
    float y;
} Point;
Point original[3]={
    {2,4},
    {6,7},
    {-1,-3}
};
Point transformed[3];
void drawTriangle(Point p[]){
    glBegin(GL_LINE_LOOP);
    glVertex2f(p[0].x,p[0].y);
    glVertex2f(p[1].x,p[1].y);
    glVertex2f(p[2].x,p[2].y);
    glEnd();
}
void drawAxes(){
    glColor3f(0.7f,0.7f,0.7f);
    glBegin(GL_LINES);
    glVertex2f(-15,0);
    glVertex2f(15,0);
    glVertex2f(0,-15);
    glVertex2f(0,15);
    glEnd();
}
void translation(float tx, float ty){
    for(int i=0; i<3; i++){
        transformed[i].x=original[i].x+tx;
        transformed[i].y=original[i].y+ty;
    }
}
void scaling(float xf, float yf, float sx, float sy){
    for(int i=0; i<3; i++){
        transformed[i].x=xf+sx*(original[i].x-xf);
        transformed[i].y=yf+sy*(original[i].y-yf);
    }
}
void rotation(float xr, float yr, float angle){
    float rad=angle*PI/180.0f;
    for(int i=0; i<3; i++){
        float x=original[i].x-xr;
        float y=original[i].y-yr;
        transformed[i].x=xr+x*cos(rad)-y*sin(rad);
        transformed[i].y=yr+x*sin(rad)+y*cos(rad);
    }
}
void shearing(float xref, float yref, float shx, float shy){
    for(int i=0; i<3; i++){
        float x=original[i].x;
        float y=original[i].y;
        transformed[i].x=x+shx*(y-yref);
        transformed[i].y=y+shy*(x-xref);
    }
}
void reflection(float m, float c){
    float a11=(1-m*m)/(1+m*m);
    float a12=(2*m)/(1+m*m);
    float a13=(-2*c*m)/(1+m*m);
    float a21=(2*m)/(1+m*m);
    float a22=(m*m-1)/(1+m*m);
    float a23=(2*c)/(1+m*m);
    for(int i=0; i<3; i++){
        float x=original[i].x;
        float y=original[i].y;
        transformed[i].x=x*a11+y*a12+a13;
        transformed[i].y=x*a21+y*a22+a23;
    }
}
int main(){
    int choice;
    printf("\n1. Translation");
    printf("\n2. Scaling");
    printf("\n3. Rotation");
    printf("\n4. Shearing");
    printf("\n5. Reflection");
    printf("\n\nEnter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            float tx,ty;
            printf("tx: ");
            scanf("%f",&tx);
            printf("ty: ");
            scanf("%f",&ty);
            translation(tx,ty);
            break;
        }
        case 2:{
            float xf,yf,sx,sy;
            printf("Center x: ");
            scanf("%f",&xf);
            printf("Center y: ");
            scanf("%f",&yf);
            printf("sx: ");
            scanf("%f",&sx);
            printf("sy: ");
            scanf("%f",&sy);
            scaling(xf,yf,sx,sy);
            break;
        }
        case 3:{
            float xr,yr,angle;
            printf("Center x: ");
            scanf("%f",&xr);
            printf("Center y: ");
            scanf("%f",&yr);
            printf("Angle: ");
            scanf("%f",&angle);
            rotation(xr,yr,angle);
            break;            
        }
        case 4:{
            float xref, yref, shx, shy;
            printf("Reference x: ");
            scanf("%f",&xref);
            printf("Reference y: ");
            scanf("%f",&yref);
            printf("shx: ");
            scanf("%f",&shx);
            printf("shy: ");
            scanf("%f",&shy);
            shearing(xref,yref,shx,shy);
            break;
        }
        case 5:{
            float m,c;
            printf("m: ");
            scanf("%f",&m);
            printf("c: ");
            scanf("%f",&c);
            reflection(m,c);
            break;
        }
        default:
            return 0;
    }
    if(!glfwInit())
        return -1;
    GLFWwindow *window=glfwCreateWindow(800,600,"2D Transformations",NULL,NULL);
    if(!window){
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15,15,-15,15,-1,1);
    glMatrixMode(GL_MODELVIEW);
    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        drawAxes();
        glColor3f(0,1,0);
        drawTriangle(original);
        glColor3f(1,0,0);
        drawTriangle(transformed);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}