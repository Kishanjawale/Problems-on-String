#include<stdio.h>

void ToggleCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch=ch-32;
        printf("After toggleCase Letter: %c ",ch);
    }
    else if(ch >= 'A' && ch <='Z' )
    {
        ch=ch+32;
        printf("After toggleCase Letter: %c ",ch);
    }
    else
    {
         printf("Invalid Letter: %c ",ch);
    }
   
}
int main()
{
    char cValue;
    printf("Enter the Character:\n");
    scanf("%c",&cValue);
    ToggleCase(cValue);
    return 0;

}