CC=gcc
CFLAGS=  -O2 -lpthread
OBJS=syn.c
TARGET=syn.o 
RM= rm -rf
 all:$(TARGET)


$(TARGET):$(OBJS)
	gcc -c $^ -o $@

clean:
	$(RM) *.o 