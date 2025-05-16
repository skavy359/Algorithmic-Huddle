#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100],sen[100];
    scanf("%c\n",&ch);
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    scanf("\n");
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
