/*************************************************************************************
 * Authors:	    CJ Done, Jacob Allen
 *Course:	    CSC 525/625
 *Modified By:	    CJ Done, Jacob Allen
 *Last Mod Date:    10/8/2013
 *Description:	    Program that draws a very colorful caution sign demoing the use of several
 *		    OpenGL techniques learned so far this semester.
 *Notes:	    N/A
 *Files:	    hw3.cpp, IOFunc.h, IOFunc.cpp, drawFunc.h, drawFunc.cpp (hwProj.sln)
 *IDE/Compiler:	    Visual Studio 2012 / GNU C++ Compiler g++ (with make)
 *Instructions for Compilation / Execution:
 *  Posix complient systems:
 *	1.  cd /source/directory/
 *	2.  make
 *	3.  ./hw3
 *  Windows Systems
 *	1.  Double click on hwProj.sln to open the project
 *	2.  Press Ctrl+F7 to compile
 *	3.  Press Ctrl+Shift+B to build (compile and link)
 *	4.  Press Ctrl+F5 to execute
 *************************************************************************************/


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
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
    string path;

#ifdef __APPLE__
    path = "/tmp/savedImg.txt";
#else
    path = "C:\\\\TEMP\\savedImg.txt";
#endif

    fileInit(path); // full path to the file that we want to write to.

    loadPixelMap();

    glutInit(& argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 0);
    glutCreateWindow("Homework assignment 3!");

    myInit();

    glutDisplayFunc(myDisplayCallback);

    glutMainLoop();
    return 0;
}

