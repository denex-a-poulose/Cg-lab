#include <GL/glut.h>
#include <math.h>

void circle(float x,float y,float r){
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<100;i++){
        float a=2*M_PI*i/100;
        glVertex2f(x+r*cos(a),y+r*sin(a));
    }
    glEnd();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glVertex2f(-.9,.8); glVertex2f(-.3,.8);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(0,.8); glVertex2f(.5,.8);
    glVertex2f(.25,.4);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(-.9,.1); glVertex2f(-.3,.1);
    glVertex2f(-.3,-.3); glVertex2f(-.9,-.3);
    glEnd();

    circle(.2,0,.3);

    glBegin(GL_LINE_LOOP);
    glVertex2f(.5,-.3); glVertex2f(.9,-.3);
    glVertex2f(.9,.1); glVertex2f(.5,.1);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(.45,.1); glVertex2f(.7,.4);
    glVertex2f(.95,.1);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(.65,-.3); glVertex2f(.65,-.05);
    glVertex2f(.78,-.05); glVertex2f(.78,-.3);
    glEnd();

    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("2D Shapes");
    glClearColor(1,1,1,1);
    glColor3f(0,0,0);
    gluOrtho2D(-1,1,-1,1);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
