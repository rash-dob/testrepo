#include<stdio.h>

void namaste();
void bonjour();


int main()
{
    printf(" Enter f for french &  i for Indian : ");
    char ch;
    scanf("%c", &ch);
    namaste();
    
    return 0;
}

void namaste()
{
    printf("namaste!\n");
}
    
void bonjour()
{
    printf("bonjour!\n");
}    


