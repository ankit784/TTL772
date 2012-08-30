#include <stdio.h>
#include <iostream>

int main(){
	int n,a=1,b=1;
    printf("Enter the number of terms that you want to generate: \n");
	scanf("%d",&n);
	if(n<=0)
		printf("The number you entered is less than or equal to 0.\n");
	else if(n==1)
	{
		printf("The Fibonacci numbers are: \n");
		printf("%d\n",a);
	}
	else if(n==2)
	{
        printf("The Fibonacci numbers are: \n");
		printf("%d %d",a,b);
	}
	else
	{
        printf("The Fibonacci numbers are: \n");
		printf("%d %d ",a,b);
		while(n!=2)
		{
			int temp = b;
			b = a+b;
			a = temp;
			printf("%d ",b);
			n--;
		}
		printf("\n");
	}
}
