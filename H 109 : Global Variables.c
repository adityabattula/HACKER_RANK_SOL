#include <stdio.h>

int sum;
int fun(int var1, int var2)
{
	sum = var1+var2;
    return sum;
	
}
int main()
{
	int var1, var2;
	scanf("%d %d",&var1,&var2);


	
	printf("%d",fun(var1, var2));

	return 0;
}
