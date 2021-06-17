#include <stdio.h>
#include <assert.h>


float average(int arr[], int s);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }

float average(int arr[], int s)
 { int sum=0;
  float avg=1;
  for(i=0;i<s;i++)
  { sum+=arr[i]; }
  avg=sum/s;
   return avg;
 }
