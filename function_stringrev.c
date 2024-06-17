#include <stdio.h>
#include <string.h>
char reverse(char str[])
{
    int len = strlen(str); 
    for (int i = len - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    printf("\n");  
}
void main()
{
    char str[100]; 
    printf("Enter the string: ");
    gets(str);
    reverse(str); 
}