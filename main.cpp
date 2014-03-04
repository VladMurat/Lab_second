#include "head.h"
void main()
{
	int n, i=0;
	srand(time(NULL));
	printf("Please, enter size of array ");
	scanf("%d", &n);
	char* mas = new char[n];
	for(int i=0; i<n; i++)
	{
		mas[i] = rand()%256 + 64;
	    printf(" %c ", mas[i]);
	}
	printf("\n Bubble: \n");
	bubble(mas, n);
	printf("Array = "); 
	for(int i=0; i < n; i++)
		printf(" %c ", mas[i]);
	printf("\n\n");
	for(int i=0; i<n; i++)
	{
		mas[i] = rand()%256 + 64;
	    printf(" %c ", mas[i]);
	}
	printf("\n Merge: \n");
	merge(mas, 1, n);
	printf("Array = ");
	for(int i=0; i < n; i++)
		printf(" %c ", mas[i]);
	getch();
}