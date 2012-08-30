#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n,s;
    printf("Enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
    printf("Enter n numbers: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter the number that you want to search: \n");
	scanf("%d",&s);
	int index = -1;
	for(int i=0;i<n;i++)
		if(a[i]==s)
		{
            index = i;
            printf("Number found at index %d\n",index);
		}
	if(index==-1)
		printf("Number not found.\n");
}
