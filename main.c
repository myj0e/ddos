/*main.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include "syn.h"
#include "icmp.h"

#define true 1

void start();
void help();
void sighandler(int sig);


int main(){
    signal(SIGINT, sighandler);
    start();
    char cmd[1024];
    while(true)
    {
        printf("dg14 >");
        gets(cmd);
        if(!strcmp(cmd,"exit")) break;
        else if(!strcmp(cmd,"icmp"))
        {
            //do something
            icmp();
        }
        else if(!strcmp(cmd,"syn"))
        {
            //do something
            syn();
        }
        else if(!(strcmp(cmd,"h") && strcmp(cmd,"help")))
        {
            help();                 //get help
        }
        else
        {
            printf("Cannot recognize the instruction,please input \"h\" or \"help\" for help.\n");
        }
    }
}


void start()//输出开始图形
{
    system("reset");
    printf(\
    "\033[40;31m╭━━━┳━━━┳━━━╮\033[0m╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱\033[1;34m╭┳╮╱╭╮ \033[0m\n"
    "\033[40;31m╰╮╭╮┃╭━╮┃╭━╮┃\033[0m╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱\033[1;34m╭╯┃┃╱┃┃ \033[0m\n"
    "╱\033[40;31m┃┃┃┃┃╱┃┃╰━━╮\033[0m╭━━┳━┳━━┳╮╭┳━━╮\033[1;34m╰╮┃╰━╯┃ \033[0m\n"
    "╱\033[40;31m┃┃┃┃┃╱┃┣━━╮┃\033[0m┃╭╮┃╭┫╭╮┃┃┃┃╭╮┃╱\033[1;34m┃┣━━╮┃ \033[0m\n"
    "\033[40;31m╭╯╰╯┃╰━╯┃╰━╯┃\033[0m┃╰╯┃┃┃╰╯┃╰╯┃╰╯┃\033[1;34m╭╯╰╮╱┃┃ \033[0m\n"
    "\033[40;31m╰━━━┻━━━┻━━━╯\033[0m╰━╮┣╯╰━━┻━━┫╭━╯\033[1;34m╰━━╯╱╰╯ \033[0m\n"
    "╱╱╱╱╱╱╱╱╱╱╱╱╱╭━╯┃╱╱╱╱╱╱╱┃┃\n"
    "╱╱╱╱╱╱╱╱╱╱╱╱╱╰━━╯╱╱╱╱╱╱╱╰╯\n"
    "\n\nDesigned by:\n[    16030140099-杨峥勇    ]\n[    16030140073-刘哲      ]\n[    16030140074-徐邦宪    ]\n\n\n"
    );

}

void help()
{
    printf(\
    "Please input:\n"
    "icmp:    Use function ping_flood\n\n"
    "syn:     Use function syn_flood\n\n"
    "exit:    Exit the application\n\n"
    "help:    Print usage\n\n"
    );
}


void sighandler(int sig){
    printf("\nExiting the application....\n");
    exit(1);
}
