#include<stdio.h>
int Difference(char *str)
{
    int iSmall=0;
    int iLarge=0;
    int iDiff=0;

    while (*str!='\0')
    {
        if(*str >='a' && *str <='z')
        {
            iSmall++;
        }
        if(*str >='A' && *str <='Z')
        {
            iLarge++;
        }
        str++;
    }
    iDiff=iSmall-iLarge;
    return iDiff;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter the String\n");
    scanf("%[^'\n']s",&Arr);
    iRet=Difference(Arr);
    printf("Difference Between frequency of small and large Characters:%d",iRet);
    return 0;

}