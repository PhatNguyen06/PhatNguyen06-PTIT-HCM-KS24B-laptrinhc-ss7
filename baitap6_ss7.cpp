#include<stdio.h>

int main()
{
	int arr[5];
	int min, max;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] % 2 == 0)
		{
			arr[i] += 3;
			printf("%d ", arr[i]);
		}
		else
		{
			arr[i] += 2;
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
