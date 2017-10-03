#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int arr[7], num = 0;
	for(num; num<=6;num++)
	{
		arr[num] = rand()%36;
		printf("%d\t",arr[num]);
	}
	return 0;
}

