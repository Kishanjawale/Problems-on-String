#include<stdio.h>
#include<stdbool.h>
void ToggleCaseString(char *str)
{
    while (*str!='\0')
    {
        if(*str <= 'Z' && *str >= 'A')
        {
            *str=*str+32;
            
        }
        else if(*str <= 'z' && *str >= 'a')
        {
            *str=*str-32;       
        }
    str++;
    }
}
int main()
{
    char Arr[30];
    printf("Enter String:\n");
    scanf("%[^'\n']s",&Arr);
    ToggleCaseString(Arr);
    printf("After Toggeling:\n%s",Arr); 
    return 0;

}