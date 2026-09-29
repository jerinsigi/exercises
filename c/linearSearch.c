#include <stdio.h>
#define max 20

int a[max],flag=0,size;

void linearSearch(int x){
    int i;
    for(i=0;i<size;i++){
        if(a[i]==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element %d found at location %d",x,i+1);
    }else{
        printf("Element %d not found",x);
    }
    return;
}

int main(){
    int i,element,flag=0;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements in sorted order : ",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search : ");
    scanf("%d",&element);
    linearSearch(element);

    return 0;
}
