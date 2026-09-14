#include <stdio.h>
#include <stdlib.h>

int queue[10];
int size;
int front=-1;
int rear=-1;

void enqueue(){
    int element;
    if(rear==size-1){
        printf("Queue Overflow");
    }else{
        printf("Enter element to insert : ");
        scanf("%d",&element);
        if(rear==-1){
            front++;
        }
            rear++;
            queue[rear]=element;
    }
    return;
}

void display(){
    int temp;
    if(front==-1){
        printf("Queue is empty");
    }else{
        for(temp=front;temp<=rear;temp++){
            printf("%d ",queue[temp]);
        }
    }
    return;
}

void dequeue(){
    if(front==-1){
        printf("Queue is underflow");
    }else{
        printf("Deleted element is %d",queue[front]);
        if(front==rear){
            front=rear=-1;
        }else{
        front++;}
    }
    return;
}

int main(){
    int choice;

    printf("Enter size of queue : ");
    scanf("%d",&size);
    while(1){
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Invalid Choice!");
        }
    }
    return 0;
}
