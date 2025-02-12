#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
