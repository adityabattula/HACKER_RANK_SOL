#include <stdio.h>

int fun(int var1, int var2)
{
	return var1+var2;

}
int main()
{
	int var1, var2;
	scanf("%d %d", &var1, &var2);
	int sum = fun(var1, var2);
	//The following line will give an error because the variable sum won't be found
	printf("%d", sum);
	return 0;
}
