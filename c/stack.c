#include <stdio.h>
#include <stdlib.h>
#define limit 10

int stack[limit];
top=-1;

void push(){
    if(top==limit-1){
        printf("=================\n");
        printf("Stack Overflow!!\n");
        printf("=================\n");
    }else{
        top++;
        printf("Enter element to push to stack : ");
        scanf("%d",&stack[top]);
        display();
    }
    return;
}

void pop(){
    if(top==-1){
        printf("=================\n");
        printf("Stack Underflow!!\n");
        printf("=================\n");
    }else{
        printf("Popped element: %d\n",stack[top]);
        top--;
        display();
    }
    return;
}

void display(){
    int i;
    if(top==-1){
        printf("==================\n");
        printf("Stack is Empty\n");
        printf("==================\n");
    }else{
        printf("\nStack elements are : ");
        for(i=0;i<=top;i++){
            printf(" %d ",stack[i]);
        }
        printf("\n\n");
    }
    return;
}

int main(){
    int choice;
    while(1){
        printf("Stack Operations\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Choice not fount!!\n");
        }
    }
    return 0;
}