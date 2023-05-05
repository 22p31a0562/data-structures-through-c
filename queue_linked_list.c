#include <stdio.h>
#include <stdlib.h>//malloc
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE *next;
void enqueue(int val)
{  //inserting 
	NODE *nn;
   if(front==NULL && rear==NULL)
   {
   	front=nn;n
  	rear=nn;
   }
   else
   {
   	rear->next=nn;
   	rear=nn;
   }
}
int dequeue()
{
	NODE *temp=front
	if(front==NULL && rear==NULL)
	{
		printf("Queue is empty")
	}
	else{
	}
}
int main()
{
	while(1)
	{
		int ch,val;
		printf("Enter\n1.enque\n2.deque\n3.display");
		scanf("%d",&ch);
		if(ch==1){
			//enque
			enque(val);
		}
		else if(ch==2){
			//deque
		}
		else if(ch==3){
			//display
		}
		else{
			printf("RAMYA");
			break;
			
		}
	}
}
