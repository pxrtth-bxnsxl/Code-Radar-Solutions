void bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j+1]=arr[j];
                arr[j+1]=temp;
            }
        }
    }
}
int printSort(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
