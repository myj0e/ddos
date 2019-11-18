/*icmp.h*/
#ifndef ICMP_H
#define ICMP_H


#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <string.h>
#include <syslog.h>
#include <arpa/inet.h>
#include <setjmp.h>
#include <errno.h>

//最多线程数
#define MAXCHILD 10

#endif