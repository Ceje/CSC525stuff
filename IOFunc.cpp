
#include "IOFunc.h"

std::ofstream file;

int fileInit(std::string fname)
{
    file.open (fname.c_str());

    if(file.is_open())
    {
	//file << "this is some other stuff.\n";
	return 0;	// denotes successfully opening and writing to the file.
    }
    else
    {
	std::cout << fname << " could not be opened for writing, check the path and file permissions." << std::endl;
	return 1; // denotes failure to open file.
    }
}

int writeImg()
{
    GLfloat* data = new GLfloat [3*512*512];
    
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(44, 44, 512, 512, GL_RGB, GL_FLOAT, data);

    for(int i=0; i<3*512*512; i++)
    {
	file << data[i] << "\n";
    }
    delete  [] data;
    file.close();
    
    return 0;
}
