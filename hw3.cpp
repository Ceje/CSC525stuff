/* This will be the main file.*/

// Now this is a slightly bigger file.


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "drawFunc.h"
#include "IOFunc.h"

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

int main(int argc, char** argv)
{
    cout << "This is the Main fucntion of HW3!" << endl;
    
    fileInit("Stuff.txt");

    glutInit(& argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 0);
    glutCreateWindow("Homework assignment 3!");

    myInit();

    glutDisplayFunc(myDisplayCallback);

    glutMainLoop();
    return 0;
}

