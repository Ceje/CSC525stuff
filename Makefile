CC = g++
CFLAGS = -Wall
PROG = hw3

SRCS = hw3.cpp
OBJS = hw3.o drawFunc.o IOFunc.o

ifeq ($(shell uname),Darwin)
	LIBS = -framework OpenGL -framework GLUT
else
	LIBS = -lglut
endif

all: $(PROG) 

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJS) $(LIBS)

hw3.o: hw3.cpp drawFunc.h IOFunc.h
	$(CC) $(CFLAGS) -c hw3.cpp

drawFunc.o: drawFunc.cpp drawFunc.h
	$(CC) $(CFLAGS) -g -c drawFunc.cpp

IOFunc.o: IOFunc.cpp IOFunc.h
	$(CC) $(CFLAGS) -g -c IOFunc.cpp

clean:
	rm -f $(PROG) $(OBJS)
