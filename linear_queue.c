 #include<stdio.h>
 int front=-1,rear=-1,size,queue[100];
 void enqueue(){
 	int j;
 	if(rear==size-1)
	 printf("queue is full\n");
	 else{
	 	printf("enter the number : ");
	    scanf("%d",&j);
	 	rear++;
	 	queue[rear]=j;
	 	printf("the inserted element is %d\n",j);
	 	if(front==-1)
	     front=0;
	 }	 
 }
 int dequeue(){
 	if(front==-1||front>rear){
 		printf("deletion is not possible\n");
		 return 0;
		 }
	 else{
	 	int y;
	 	y=queue[front];
	 	printf("the deleted element is %d\n",y);
	 	front++;
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

