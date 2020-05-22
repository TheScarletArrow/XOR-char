#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int intlength(int);
int WordLengthFromBin(int number);
int CharToBin(char ch){
    int val;
    int temp;
    for (int i=7;i>=0;--i)
    {
        val=putchar((ch&(1<<i))?'1':'0');

    }

    return val;
    };

int main() {

    char inputString[1024];
    char outputStringEncrypted[1024];
    char mask[1024];
puts("Do you want to send message or either receive it?\n To send press 1, to receive press 2");
int choice;
////switch (choice) {
//    case 1:
//        puts("1");
//        break;
//    case 2:
//        puts("2");
//        break;
//    default:
//        puts("Wrong number");
//        break;
//}


    puts("Enter your message");
    scanf("%s", inputString);
//puts("\n\nGreat, now mask");
//fgets(mask, sizeof(mask), stdin);

unsigned long long first=0; //string to binary
unsigned long long number;
for (int i=0;i<strlen(inputString);i++)
   first = CharToBin(inputString[i]);

fscanf(stdout, "%llu", number);
printf("%llu", number);
//#TODO need to make binary int to char
//#TODO
return 0;
}

int intlength(int number)
{
    int length=0;

    while(number) {
        length++;
        number/=10;
    }
    return length;
}

int WordLengthFromBin(int number)
{
    return (int)(intlength(number)/8);
}