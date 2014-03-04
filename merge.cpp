#include "head.h"

using namespace std;

void merge(char *A, int first, int last)
{
int middle, start, final, j;
int *mas=new int[100];
{
middle=(first+last)/2; 
start=first; 
final=middle+1; 
for(j=first; j<=last; j++) 
if ((start<=middle) && ((final>last) || (A[start]<A[final])))
{
mas[j]=A[start];
start++;
}
else
{
mas[j]=A[final];
final++;
}

for (j=first; j<=last; j++) A[j]=mas[j];
}
delete[]mas;
};

void MergeSort(char *A, int first, int last)
{
   if (first<last)
   {
     MergeSort(A, first, (first+last)/2); 
     MergeSort(A, (first+last)/2+1, last); 
     merge(A, first, last); 
   }
};