CC=gcc
CFLAGS= -Iinclude/syn -Iinclude/icmp -O2 -lpthread -Wall
OBJS= include/syn/syn.o include/icmp/icmp.o main.o
TARGET=dg14

SYN=include/syn 
ICMP=include/icmp 


RM=rm -f

all:$(TARGET) 

$(TARGET):$(OBJS) SYN_make ICMP_make
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGS)

SYN_make:
	cd $(SYN) && make && cd ../..
ICMP_make:
	cd $(ICMP) && make && cd ../..
$(OBJS):%o:%c
	$(CC) -c -o $@ $< $(CFLAGS)


clean:
	$(RM) $(TARGET) $(OBJS)


run:
	./main

clean:
	rm main.o ; \
	rm include/icmp/icmp.o ; \
	rm include/syn/syn.o ; \
	rm dg14
