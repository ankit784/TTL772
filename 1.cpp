#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter n numbers: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n;i++)
	{
		int min = a[i];
		int index = i;
		for(int j=(i+1);j<n;j++)
		{
			if(a[j]<=min)
			{
				min = a[j];
				index = j;
			}
		}
		int temp = a[i];
		a[i]=min;
		a[index]=temp;
	}
	printf("The numbers arranged in ascending order of magnitude:\n");
	for(int k=0;k<n;k++)
		printf("%d ",a[k]);
}
