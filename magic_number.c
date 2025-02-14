#include <stdio.h>
int sod(int);
int reverse(int);
void main()
{
	int num,s,r;
	printf("Enter the number:");
	scanf("%d",&num);
	s=sod(num);
	r=reverse(s);
	if(num==s+r)
	printf("magic number");
	else
	printf("not a magic number");
}
int sod(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
int reverse(int n)
{
	int rem,rev=0;
	while(n!=0);
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
