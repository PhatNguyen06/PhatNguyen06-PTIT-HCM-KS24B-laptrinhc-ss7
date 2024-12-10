#include<stdio.h>

int main()
{
	int arr[3] = {6, 7, 8};
	
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("\nDo dai cua mang: %d\n", length);
	
	return 0;
}
