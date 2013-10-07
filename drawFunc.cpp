#include "drawFunc.h"
#include "IOFunc.h"

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void myInit()
{
    glClearColor(1, 1, 1, 0);
    gluOrtho2D(-300, 300, -300, 300);
}

void myDisplayCallback()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    drawImage();

    glFlush();
    writeImg();
}

void drawImage()
{
    glLineWidth(1.0f);

    glColor3b(0, 0, 0);
    glBegin(GL_LINES);
	glVertex2i(-250, 0);
	glVertex2i(250, 0);
	glVertex2i(0, 250);
	glVertex2i(0, -250);
    glEnd();
}
