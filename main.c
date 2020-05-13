#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <bitset>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

void CharToBin(char ch){

    for (int i=7;i>=0;i--)
    {
       putchar((ch&(1<<i))?'1':'0');
    }
};
int main() {

    char *inputString[1024];
    char *outputStringEncrypted[1024];
    char *mask[1024];


    puts("Enter your message");
    scanf("%s", inputString);
//puts("\n\nGreat, now mask");
//fgets(mask, sizeof(mask), stdin);


for (int i=0;i<strlen(inputString);i++)
        CharToBin(inputString[i]);
return 0;
}
