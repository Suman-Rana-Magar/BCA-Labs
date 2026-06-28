#include <GLFW/glfw3.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592654
typedef struct {
    float x, y, z;
} Point3D;
Point3D cube[8] = {
    {100,100,100},
    {200,100,100},
    {200,200,100},
    {100,200,100},
    {100,100,200},
    {200,100,200},
    {200,200,200},
    {100,200,200}
};
Point3D transformed[8];
int edges[12][2] = {
    {0,1},{1,2},{2,3},{3,0},
    {4,5},{5,6},{6,7},{7,4},
    {0,4},{1,5},{2,6},{3,7}
};
void project(Point3D p, float *sx, float *sy)
{
    *sx = p.x - 0.5f * p.z;
    *sy = p.y - 0.5f * p.z;
}
void drawCube(Point3D v[])
{
    glBegin(GL_LINES);
    for(int i=0;i<12;i++)
    {
        float x1,y1,x2,y2;
        project(v[edges[i][0]], &x1, &y1);
        project(v[edges[i][1]], &x2, &y2);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
    }
    glEnd();
}
void translation(float tx,float ty,float tz)
{
    for(int i=0;i<8;i++)
    {
        transformed[i].x = cube[i].x + tx;
        transformed[i].y = cube[i].y + ty;
        transformed[i].z = cube[i].z + tz;
    }
}
void scaling(float sx,float sy,float sz)
{
    for(int i=0;i<8;i++)
    {
        transformed[i].x = cube[i].x * sx;
        transformed[i].y = cube[i].y * sy;
        transformed[i].z = cube[i].z * sz;
    }
}
void rotateX(float angle)
{
    float r = angle * PI / 180.0f;
    for(int i=0;i<8;i++)
    {
        transformed[i].x = cube[i].x;
        transformed[i].y =
            cube[i].y*cos(r) -
            cube[i].z*sin(r);
        transformed[i].z =
            cube[i].y*sin(r) +
            cube[i].z*cos(r);
    }
}
void rotateY(float angle)
{
    float r = angle * PI / 180.0f;
    for(int i=0;i<8;i++)
    {
        transformed[i].x =
            cube[i].x*cos(r) +
            cube[i].z*sin(r);
        transformed[i].y =
            cube[i].y;
        transformed[i].z =
           -cube[i].x*sin(r) +
            cube[i].z*cos(r);
    }
}
void rotateZ(float angle)
{
    float r = angle * PI / 180.0f;
    for(int i=0;i<8;i++)
    {
        transformed[i].x =
            cube[i].x*cos(r) -
            cube[i].y*sin(r);
        transformed[i].y =
            cube[i].x*sin(r) +
            cube[i].y*cos(r);
        transformed[i].z =
            cube[i].z;
    }
}
int main()
{
    int choice;
    printf("\n1. Translation");
    printf("\n2. Scaling");
    printf("\n3. Rotation about X-axis");
    printf("\n4. Rotation about Y-axis");
    printf("\n5. Rotation about Z-axis");
    printf("\n\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            float tx,ty,tz;
            printf("tx: ");
            scanf("%f",&tx);
            printf("ty: ");
            scanf("%f",&ty);
            printf("tz: ");
            scanf("%f",&tz);
            translation(tx,ty,tz);
            break;
        }
        case 2:
        {
            float sx,sy,sz;
            printf("sx: ");
            scanf("%f",&sx);
            printf("sy: ");
            scanf("%f",&sy);
            printf("sz: ");
            scanf("%f",&sz);
            scaling(sx,sy,sz);
            break;
        }
        case 3:
        {
            float angle;
            printf("Angle (degrees): ");
            scanf("%f",&angle);
            rotateX(angle);
            break;
        }
        case 4:
        {
            float angle;
            printf("Angle (degrees): ");
            scanf("%f",&angle);
            rotateY(angle);
            break;
        }
        case 5:
        {
            float angle;
            printf("Angle (degrees): ");
            scanf("%f",&angle);
            rotateZ(angle);
            break;
        }
        default:
            return 0;
    }
    if(!glfwInit())
        return -1;
    GLFWwindow *window =
        glfwCreateWindow(
            800,
            600,
            "3D Transformations",
            NULL,
            NULL);
    if(!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 600, 0, 600, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();
        glColor3f(0.0f,1.0f,0.0f);
        drawCube(cube);
        glColor3f(1.0f,0.0f,0.0f);
        drawCube(transformed);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}