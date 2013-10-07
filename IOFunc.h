
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

int fileInit(std::string fname);
int writeImg();
