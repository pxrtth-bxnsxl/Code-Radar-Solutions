#include<stdio.h>
int bubbleSort(int arr[],int n);
void printSort(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printSort(arr,n);
    return 0;    
}
int bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printSort(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
