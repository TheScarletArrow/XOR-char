#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

#define SIZE 256

char full[1024];
int c=0;
void CharToBin(char ch){
    for (int i=7;i>=0;i--)
    {
 	full[c]=(ch&(1<<i))?'1':'0';
      	c++;
    }
}
void decode(char *str)
{
    int i,a,b;
    for(i=0,a=7,b=0;str[i];i++)
    {
        if((str[i]&~1)!='0') continue;
        b|=(str[i]&1)<<a;
        if(!a)b=putchar(b)&0;
        a--;a&=7;
    }
}
int main(int argc, char *argv[]) {

    pid_t pid1;
    pid_t pid2;

    int pipefd_1[2];
    int pipefd_2[2];

    char inputString[256];
    if (argc < 2)
    {
        printf("Arguments too low\n");
        exit(EXIT_FAILURE);
    }
    char cases[10];
    printf("Send or receive?");
    switch (cases) {
        case 'Send':{
        //#TODO SEND;
        break;
        }
        case 'Receive':{
            //#TODO
            break;
        }
    }
    //#TODO argv[1] - send/receive
    if (pipe(pipefd_1) == -1)
    {
        printf("pipe1 error");
        exit(EXIT_FAILURE);
    }

    if (pipe(pipefd_2) == -1)
    {
        printf("pipe2 error");
        exit(EXIT_FAILURE);
    }

    if((pid1 = fork()) <0)
    {
        printf("Fork error");
        exit(EXIT_FAILURE);
    }

	for (int i=0;i<strlen(inputString);i++)
		CharToBin(inputString[i]);
    	printf("\n\n");
    	printf("%s\n",full);  
    	decode(full);
	return 0;
}
