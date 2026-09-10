#include <stdio.h>

int main(){
    int size,low,high,mid,key,i,flag=0;

    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements in ascending order to array: ",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    high=size-1;
    low=0;
    while(low<=high){
    mid=(low+high)/2;
        if(key<arr[mid]){
            high=mid-1;
        }else if(key>arr[mid]){
            low=mid+1;
        }else if(key==arr[mid]){
            printf("%d found at location %d",key,mid+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is not found in array",key);
    }
    return 0;

}
