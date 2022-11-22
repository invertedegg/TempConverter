# compiler
CC = g++
# compilation flags (debugging, errors, etc.)
CFLAGS = -g -Wall
# executable name
TARGET = TempConverter

all:
	$(CC) $(CFLAGS) -o $(TARGET) *.cpp

clean:
	$(RM) $(TARGET)