CC = g++
CFLAGS = -Wall
PROG = hw3

SRCS = hw3.cpp

ifeq ($(shell uname),Darwin)
	LIBS = -framework OpenGL -framework GLUT
else
	LIBS = -lglut
endif

all: $(PROG) 

$(PROG): hw3.o drawFunc.o
	$(CC) $(CFLAGS) -o $(PROG) hw3.o drawFunc.o $(LIBS)

hw3.o: hw3.cpp drawFunc.h
	$(CC) $(CFLAGS) -c hw3.cpp

drawFunc.o: drawFunc.cpp drawFunc.h
	g++ -Wall -g -c drawFunc.cpp

clean:
	rm -f $(PROG) drawFunc
