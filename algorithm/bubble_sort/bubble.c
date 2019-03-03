#include<stdio.h>

int main(){
    int arr[]={2,3,1,4,2,6,7,9,1,5};
    int len=10;
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
