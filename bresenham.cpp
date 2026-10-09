#include <GL/glut.h>

void bresenham(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int p = 2 * dy - dx;

    while (x1 <= x2)
    {
        glBegin(GL_POINTS);
        glVertex2i(x1, y1);
        glEnd();

        x1++;

        if (p < 0)
            p += 2 * dy;
        else
        {
            y1++;
            p += 2 * (dy - dx);
        }
    }
}

void display()
{
    bresenham(100, 100, 500, 300);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Bresenham");

    gluOrtho2D(0, 640, 0, 480);

    glutDisplayFunc(display);
    glutMainLoop();
}
