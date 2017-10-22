#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Side c:");
    scanf("%d",&c);

	if((a+b>c) && (b+c>a) && (c+a>b))
		{
			printf("Triangle can be created");

		}
		else {
			printf("Triangle can't be created");
		}
}








