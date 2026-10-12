#include <GL/glut.h>

void bresenham(int x1, int y1, int x2, int y2)
{
    glBegin(GL_POINTS);

    while (y1 <= y2)
    {
        glVertex2i(x1, y1);
        y1++;
    }

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    bresenham(300, 100, 300, 400);

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Vertical Line");

    gluOrtho2D(0, 640, 0, 480);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
