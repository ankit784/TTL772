#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	printf("Start entering numbers(Enter 0 to terminate):\n");
	int n;
	scanf("%d",&n);
	int max = n;
	int min = n;
	while(n!=0)
	{
		if(n>max)
			max = n;
		if(n<min)
			min = n;
		scanf("%d",&n);
	}
	printf("Maximum value is : %d\nMinimum value is : %d\n",max,min);
}
