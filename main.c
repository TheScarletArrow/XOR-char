#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int CharToBin(char ch){
int val;
    for (int i=7;i>=0;i--)
    {
  val=    putchar((ch&(1<<i))?'1':'0');
    }
return val;
};
int main() {

    char inputString[1024];
    char outputStringEncrypted[1024];
    char mask[1024];


    puts("Enter your message");
    scanf("%s", inputString);
//puts("\n\nGreat, now mask");
//fgets(mask, sizeof(mask), stdin);

int first;
for (int i=0;i<strlen(inputString);i++)
   first= CharToBin(inputString[i]);
printf("%l", first);
return 0;
}
