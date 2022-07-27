#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char *str)
{
    bool Check = false;
    while (*str!='\0')
    {
        if( *str== 'a' ||*str== 'e' ||*str== 'i' ||*str== 'o' ||*str== 'u'
        ||*str== 'A'||*str== 'E'||*str== 'I'||*str== 'O'||*str== 'U')
        {
            Check=true;
            break;
        }
        str++;
    }
    return Check;
}
int main()
{
    char Arr[20];
    bool bRet=0;
    printf("Enter the String\n");
    scanf("%[^'\n']s",&Arr);
    bRet=CheckVowel(Arr);
        if(bRet==true)
        {
            printf("String Contains Vowel");
        }
        else
        {
            printf("String Do Not Contains Vowel");
        }
    return 0;

}