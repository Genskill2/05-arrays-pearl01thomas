#include <stdio.h>
#include <assert.h>


int mode(int arr[], int s);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
int mode(int arr[], int s)
{
   int x=1;
  int y=arr[0];
   for(int i=0;i<s;i++)
   {int c=1;
    
    for(j=i+1;j<n;j++)
      {  if(a[i]==a[j])
          {count++;}
      }
       if(c>x)
         {x=count;
         y=arr[i];
         }
    }
  return y'
 }    
