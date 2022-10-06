#include<stdio.h>
int main()
{
	int i,j,k,sum=0;
	printf("Enter a number : ");
	scanf("%d",&j);
	k=j;
	while(j>0)
	{
		i=j%10;
		sum=sum+(i*i*i);
		j=j/10;
	}
	if(sum==k)
	printf("%d is a Armstrong number",k);
	else
	printf("%d is not a Anmstrong number",k);
	return 0;
}