CC=gcc
CFLAGS= -O2 -lpthread
OBJS=icmp.c
TARGET=icmp.o
RM=rm -f

all:$(TARGET)

$(TARGET):$(OBJS)
	gcc -c $^ -o $@

clean:
	$(RM) *.o