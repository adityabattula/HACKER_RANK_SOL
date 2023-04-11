#include<stdio.h>
char str[100],str1[100];
void strcpy(str,str1)
{
    for(int i =0;i<2;i++)
    {
        printf("%s %s\n",str,str1);
    }
}
int main()
{
	scanf("%s %s",str,str1);
    strcpy(str,str1);
}
