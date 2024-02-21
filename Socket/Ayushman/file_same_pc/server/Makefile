CC=gcc  #compiler
TARGET=server #target file name

all: server.c server.h serverfunc.c
	$(CC) server.c server.h serverfunc.c -o $(TARGET) -I.
clean:
	rm -f $(TARGET)
