#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int binarySearch(int array[], int x, int low, int high) {
  time_t begin = time(NULL);
  int s=0;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    
    if (array[mid] == x)
      s=s+1;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  if(s==0){
    printf("Number not found in binary search \n");
  }
  else{
    printf("Number found in binary search \n");
  }
time_t end = time(NULL);
    return (end-begin);
  
}
int search(int arr[], int n, int x)
{
    time_t begin = time(NULL);
    int i,s=0;
    for (i = 0; i < n; i++)
    {
         if(arr[i] == x)
        {
             s=s+1;
        }
    }
        
           
     if(s==0){
    printf("Number not found in linear search \n");
  }
  else{
    printf("Number found in linear search \n");
  }
time_t end = time(NULL);
    return (end-begin);
}
int main(){
    int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int resultb = binarySearch(array, x, 0, n - 1);
  int resultl= search(array,n-1,x);
  if(resultb>resultl){
    printf("linear better");

  }
  else{
    printf("binary better");
  }
}
