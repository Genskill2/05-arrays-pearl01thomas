#include <stdio.h>
#include <assert.h>


int min(int arr[], int s);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
int min(int arr[], int s)
 { int l=arr[0];
  for(i=1;i<s;i++)
  {if (arr[i]<l)
  {l=arr[i]; }
   }
   return l;
 }
