#include "head.h"

void bubble(char* arr, int n)
{
  for (int i=n-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (arr[j] > arr[j+1])
      {
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

