#include<stdio_ext.h>
struct anu
{
	int data;
	struct node *link;
};
struct node *head=NULL;

void insert(int)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate");
		exit(1);
	}
	ptr->data=num;
	temp=head;
	while(temp!=NULL)
	{

	}
}
void display_overall()
{
        struct node *temp;

        if(head==NULL)
        {
                printf("List is empty");
                return;
        }
        temp=head;
        while(temp!=NULL)
        {
        //      printf("%-15p  -- %-15p  -- %-15p", temp->prev, temp, temp->next);
                printf("data=%d ",temp->data);
                temp=temp->link;
        }
}


