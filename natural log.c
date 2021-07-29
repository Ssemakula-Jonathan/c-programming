//PROBLEM SOLVING TECHNIQUES IN C
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double sum = 0.0, value, answer;
	int i, n;
	printf("Enter the number and the limit: ");
	scanf("%d %d",&x, &n);
	double frac = (x-1.0)/(x+1.0);
	
	if(x<=0)
	{
		printf("Enter a valid number: ");
	}
	
	else
	{
		for(i=1;i<=n;i+=2)
		{
			value = (1.0/i)*pow(frac, i);
			sum = sum + value;
		}
		
		answer = 2 * sum;
		printf("The value of In%d is %lf",x, answer);
	}
	
	
	return 0;
}
