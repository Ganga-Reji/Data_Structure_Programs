#include<stdio.h>
#include<stdlib.h>

	struct node{
	int data;
	struct node*next;
	};
	typedef struct node node;
	node *head;
	
	void insert_end()
	{
	int data;
	node*temp,*pre;
	printf("\n Enter Value: ");
	scanf("%d",&data);
	temp=(node*)malloc(sizeof(node));
	temp->data=data;
	

        if(head==NULL){
	head=temp;
	head->next=NULL;
	}

	else{
	pre=head;
	while(pre->next!=NULL){
		pre=pre->next;
		}	

	pre=pre->next=temp;
	temp->next=NULL;
	}
   }

void insert_first()
	{int data;
       	node *temp;
	printf("/n enter value to insert: ");
	scanf("%d",&data);
	temp=(node*)malloc(sizeof(node));
	temp->data=data;

	if(head==NULL)
	{
	 head=temp;
	head->next=NULL;
	}
	
	else
	{
	temp->next=head;
	head=temp;
	}
	}


void insert_pos()
{
	int data;
	int pos;
	int count=2;
	node*temp,*pre;
	printf("\n enter value to insert: ");
	scanf("%d",&data);
	printf("\n Enter position to insert: ");
	scanf("%d",&pos);
	temp=head;
	pre=(node*)malloc(sizeof(node));
	pre->data=data;
	

	if(head==NULL)
	{
		printf("\n List is empty \n");
	}
	
	else if(pos==1)
	{
		pre->next=head;
		head=pre;
	}

	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			if(pos==count)
			{
				pre->next=temp->next;
				temp->next=pre;
				break;
			}
		
			else{
				temp=temp->next;
				count++;
				}
				}
}
}


void display()
{
	node*temp;
	int count=1;
	temp=head;
	if(head==NULL)
	{
	printf("\n List is empty \n");
	}
	
	else
	{
	while(temp->next!=NULL)
 	 {printf("List[%d]:%d\n",count,temp->data);
	  temp=temp->next;
	  count++;
	}	
printf("List[%d]:%d\n",count,temp->data);
}
}


void search()
{
	node*temp;
	int flag=0;
	int count=1;
	temp=head;
	int data;
	printf("enter element to search:");
	scanf("%d",&data);
	if(head==NULL)
	{
	printf("\nList is empty\n");
	}
	else
	{
	while(temp->next!=NULL)
	{
	if (data==temp->data)
	{
		flag=1;
		break;
	}
	temp=temp->next;
	count++;
	}

if(temp->data==data)
{
	flag=1;
}
if(flag==1)

{

	printf("\nfound\n");
	}
else
{
printf("\n not found\n");
}
}
}

void begdelete()
{
struct node*ptr;
if(head==NULL)
{printf("\n List is empty");
}

else
{
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n node deleted fro the beginning...");
	}
}


void enddelete()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("\n List is empty");
	}

else if(head->next==NULL)
{
	head=NULL;
	free(head);
	printf("\n only node of the list deleted...");
}
else
{
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->next;
	}
	ptr1->next=NULL;
	free(ptr);
	printf("\n Deleted Node from the last ...");
	}
}
void posdelete()
{
	struct node*ptr,*ptr1;
	int loc,i;
	printf("\n enter the position: ");
	scanf("%d",&loc);
	loc--;
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;

	if(ptr==NULL)
	{
	printf("\n There are less than %d elements in the list.\n",loc);
	return;
}
}
ptr1->next=ptr->next;
free(ptr);loc++;
printf("\n Deleted %d node",loc);
}


int main()
{
int x;
printf("\n Enter the number of elements in the list:");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
	insert_end();
}
int opt;
do{

	printf("\n1)insert at beginning ");
        printf("\n2)insert at end ");
	printf("\n3)insert at a position");
 	printf("\n4)Display");
 	printf("\n5)Search");
	printf("\n6)Delete from beginning");
	printf("\n7)Delete from end");
	printf("\n8)Delete from a position");
	printf("\n0)Quit\n");
	printf("\n choose option: ");
 	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
	insert_first();
	break;
	case 2:
	insert_end();
	break;
	case 3:
	insert_pos();
	break;
	case 4:
	display();
	break;
	case 5:
	search();
	break;
	case 6:
	begdelete();
	break;
	case 7:
	enddelete();
	break;
	case 8:
	posdelete();
	break;
default:printf("invalid option!Try Again..");
}
}
while(opt!=0);
return 0;
}



