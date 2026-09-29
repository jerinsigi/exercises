#include <stdio.h>
#define max 20

int a[max],size;
void merge(int low,int mid,int high);

void mergeSort(int low,int high){
    int mid=(low+high)/2;
    if(low<high){
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
    return ;
}

void merge(int low,int mid,int high){
    int b[max];
    int h=low,i=low,j=mid+1,k;
    while((h<=mid)&&(j<=high)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;
        }else{
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid){
        for(k=j;k<=high;k++){
            b[i]=a[k];
        }
    }
    else{
        for(k=h;k<=mid;k++){
            b[i]=a[k];
        }
    }
    for(k=low;k<=high;k++){
        a[k]=b[k];
    }
    return;
}

int main(){
    int i;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements : ",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting : ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    mergeSort(0,size-1);
    printf("\nSorted array : ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
