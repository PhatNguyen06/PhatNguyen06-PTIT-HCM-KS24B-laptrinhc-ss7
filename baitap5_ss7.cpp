#include<stdio.h>

int main()
{
	int arr[5];
	int min, max;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	min = arr[0];
	max = arr[0];
	
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	printf("Phan tu lon nhat la: %d\n", min);
	printf("Phan tu nha nhat la: %d\n", max);
	
	return 0;
}
