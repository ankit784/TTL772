#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n = 0,m = 0,k = 0;
    printf("Enter the size of array: \n");
	cin >> n;
	int a[n];
	int ans[n];
    printf("Enter the n values of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter the value that you want to delete from the array: \n");
	scanf("%d",&m);
	for(int j=0;j<n;j++)
	{
		if(a[j]==m)
			continue;
		else
		{
			ans[k] = a[j];
			k++;
		}
	}
	for(int p=0;p<k;p++)
		printf("%d ",ans[p]);
}
