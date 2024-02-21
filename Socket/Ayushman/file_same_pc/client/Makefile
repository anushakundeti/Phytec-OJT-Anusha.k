CC=gcc  #compiler
TARGET=client #target file name

all: client.c client.h clientfunc.c
	$(CC) client.c client.h clientfunc.c -o $(TARGET) -I.
clean:
	rm -f $(TARGET)
