#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
printf("Enter the student attendence record :");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int key;
printf("Enter the key elements in array :");
scanf("%d",&key);
for(i=1;i<n-1;i++){
    key=arr[i];
    j=i-1;
    
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=arr[j];
}

}