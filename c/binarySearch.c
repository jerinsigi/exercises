#include <stdio.h>
#define max 50
int a[max];
int size;

int binarySearch(int x){
    int low=0;
    int high=size-1;
    int mid = (low+high)/2;
    while(low<=high){
        mid=(low+high)/2;
        if(x>a[mid])
            low=mid+1;
        else if(x<a[mid])
            high=mid-1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int i,element,pos;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements in sorted order : ",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search : ");
    scanf("%d",&element);

    pos=binarySearch(element);
    if(pos==-1){
        printf("Element %d not found",element);
    }else{
        printf("Element %d found at location %d",element,pos+1);
    }

    return 0;
}
