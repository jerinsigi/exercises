#include <stdio.h>

int main(){
    int size,i,j,temp;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter %d elements into array: ",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array before reversing : ");
    for(i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    for(i=0,j=size-1;i<j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\nThe array after reversing : ");
    for(i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
