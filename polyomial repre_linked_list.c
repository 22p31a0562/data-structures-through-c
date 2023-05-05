#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int exp;
    struct node*next;
};
typedef struct node NODE;
NODE *insert_a_term(NODE *head,float co,int ex)
{
 NODE *new_term=(NODE*)malloc(sizeof(NODE));
 new_term->coeff=co;
 new_term->exp=ex;
 new_term->next=NULL;
 if(head==NULL ||ex>head->exp)
 {
 	new_term->next=head;
 	head=new_term;
 }
 else
 {
 	NODE *temp=head;
 	while(temp->next!=NULL && temp->next->exp>ex)
 	{
 		temp=temp->next;
	 }
	 new_term->next=temp->next;
	 temp->next=new_term;
 }
 return head;
}
NODE *create_polynomial(){
	NODE *head=NULL;
	int n;
	printf("Enter number of terms:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)// to insert each term
	{
	  float co;
	  int ex;
	  printf("Enter coeff of term %d:",i);
	  scanf("%f",&co);
	  printf("Enter exp of term %d:",i);
	  scanf("%d",&ex);
	  head=insert_a_term(head,co,ex);
	}
	return head;
}
void display_polynomial(NODE *head)
{
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("(%.1fx^%d)",temp->coeff,temp->exp);
		if(temp->next!=NULL)
		{
			printf("+");
		}
		else
		{
			printf("\n");
		}
		temp=temp->next;
	}
}
int main()
{
  printf("Polynomial:\n");
  NODE*poly=create_polynomial();
  display_polynomial(poly);
  
}

