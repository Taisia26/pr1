#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define for_i for (int i = 0;i < n; i++) 

int sum(int n, int * a)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	return s;
}

int main(int argc, char** argv)
{
	//srand(1);
	srand(time(0));
	int n = 10;
	//int *a = (int*)calloc(n, sizeof(int));
	int *a = (int*)malloc(n * sizeof(int));
	for_i
	{
		a[i]= rand() % 20;
	    //for_i;
		printf("%d\t",*(a + i));
	}
	printf("\n");
	int res = sum(n, a);
	printf("%d\n", res);
	printf("\n");
	printf("%d", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	free(a);
	getchar();
	return 0;//написать сортировку пузырьком
}


