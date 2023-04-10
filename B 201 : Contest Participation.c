#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("Performed well");
    }
    else if(a>b)
    {
        printf("Did not perform well");
    }
    else
    {
        printf("Did not participate");
    }
    return 0;
}
