#include<stdio.h>
int main(){
  int n,i,j,temp;
  printf("Enter the size of array :");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array elements :");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-2;i++){
    for(j=0;j<n-1;j++){
       if (arr[j]>arr[j+1]){
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
       }
    }
  }
 printf("Sorted array :");
  for(i=0;i<n;i++){
     printf("  %d",  arr[i]);
   }
}