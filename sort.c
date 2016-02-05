#include <stdio.h>

void insertionSort(int *A, int n);
void bubbleSort(int *B, int n);
void printArray(int *C, int n);

int main()
{
	int A[] = {25, 30, 90, 100, 1, 5, 98, 256, 999};
	int B[] = {3, 5, 1, 2, 4, 9, 10, 15};
	
	insertionSort(A, 9);
	bubbleSort(B, 8);
	
	printArray(A, 9);
	printArray(B, 8);
	return 0;
}

void insertionSort(int *A, int n)
{
	int i, j, key;
	for (i = 0; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		
		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}

void bubbleSort(int *B, int n)
{
	int i, j, tmp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (B[j] > B[j + 1])
			{
				tmp = B[j];
				B[j] = B[j + 1];
				B[j + 1] = tmp;
			}
		}
	}
}

void printArray(int *C, int n)
{
	int i;
	
	printf("Array is: {");
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", C[i]);
	}
	printf("%d}\n", C[n-1]);
}
