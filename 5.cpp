#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int mm,dd,yy;
    printf("Enter the month: \n");
	scanf("%d",&mm);
	while(mm>12)
	{
        printf("Month entered should be between 1 and 12.Enter again: \n");
        scanf("%d",&mm);
	}
    printf("Enter the date: \n");
	scanf("%d",&dd);
    printf("Enter the year: \n");
	scanf("%d",&yy);
	int a[12] = {31,59,90,120,151,181,212,243,273,304,334,365};
	int days = dd;
    if(mm!=1)
        days+=a[mm-2];
	if((yy%4==0 && yy%100!=0) || yy%400 == 0)
	{
		if(mm>2)
			days+=1;
	}
	printf("The number of days from the start of the year to the date you entered is : %d\n",days);
}
