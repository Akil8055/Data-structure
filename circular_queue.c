#include<stdio.h>
int queue[100],size,front=-1,rear=-1;
void enqueue(){
	if(front==rear+1||(front==0&&rear==size-1))
	printf("queue is full\n");
	else{
		int j;
		printf("enter the number : ");
	    scanf("%d",&j);
		rear=(rear+1)%size;
		queue[rear]=j;
	if(front==-1)
	front=0;
   }
}
int dequeue(){
	front%=(size-1);
		if(front==-1||front>rear){
 		printf("deletion is not possible\n");
		 return 0;
		 }
	 else{
	 	int y;
	 	y=queue[front];
	 	front++;
	 	return y;
	 }
}
void display(){
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main(){
 	int i=0;
 	printf("enter the number of elements :");
 	scanf("%d",&size);
 	printf("choose your option\n");
 	printf("1.enqueue\n2.dequeue\n3.diplay\n4.exit\n");
 	while(i!=3){
 		printf("enter the option :");
 		scanf("%d",&i);
 		switch(i){
 			case 1:	enqueue();
 			        break;
 			case 2: printf("%d\n",dequeue());
 			        break;
 		    case 3: display();
 			        break;
 			case 4: printf("exiting");
 			        break;
 			default : 
 			printf("invalid input");
		 }
	 }
	 return 0;
 }

