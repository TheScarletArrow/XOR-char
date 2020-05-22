#include <stdio.h>

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
int main() {
	char inputString[6]="hello";
	for (int i=0;i<strlen(inputString);i++)
		CharToBin(inputString[i]);
    	printf("\n\n");
    	printf("%s\n",full);  
    	decode(full);
	return 0;
}
