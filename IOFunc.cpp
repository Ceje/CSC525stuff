
#include "IOFunc.h"
#include <string>
#include <iostream>
#include <stdlib.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

int fileInit(char* fname)
{
    std::cout << fname << std::endl;
    return 0;
}
