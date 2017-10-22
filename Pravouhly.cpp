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

	if(((b*b+c*c)==a*a) || ((a*a+b*b)==c*c) || ((c*c+a*a)==b*b))
		{
			printf("Triangle is rectangular");

		}
		else {
			printf("Triangle is not rectangular");
		}
}








