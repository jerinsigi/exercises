#include <stdio.h>

int main(){
    int flag=0,key,size,i,location;

    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements into array: ",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<size;i++){
        if(key==arr[i]){
            flag=1;
            location=i+1;
            break;
        }
    }
    if(flag==1){
        printf("%d found at location %d",key,location);
    }
    else{
        printf("%d not found in array",key);
    }
    return 0;
}
