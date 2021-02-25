#include <stdio.h>

void bubble(int ary[], int len);

int main(void)
{
	int arr[4];
	int i,j;
	for (i = 0; i < 4; i++)
		scanf_s("%d", &arr[i]);
	bubble(arr, sizeof(arr) / sizeof(int));
	for (j = 0; j < 4; j++)
		printf("%d", arr[j]);
	printf("\n");
	return 0;
}

void bubble(int* ary, int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}