#include <stdio.h>
#define max 20

int a[max];
int size;

int partition(int lb,int ub);

void quickSort(int lb,int ub){

    if(lb<ub){
        int loc=partition(lb,ub);
        quickSort(lb,loc-1);
        quickSort(loc+1,ub);
    }
    return;
}


int partition(int lb,int ub){
    int start=lb;
    int end=ub;
    int pivot=a[start];
    int temp;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>=pivot){
            end--;
        }
        if(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }

    }
        temp=a[lb];
        a[lb]=a[end];
        a[end]=temp;
    return end;
}

int main(){
    int i;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements : ",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    quickSort(0,size-1);

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
