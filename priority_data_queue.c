#include<stdio_ext.h>
#include<stdio_ext.h>
#include<stdlib.h>
struct anu
{
        struct anu *pre;
        int data;
        int pry;
        struct anu *next;
};
struct anu* front =NULL;

void insert(int num,int p)
{
        struct anu* temp;
        struct anu *pre,*ptr,*ptr2;
        ptr=(struct anu *)malloc(1*sizeof(struct anu));
        ptr->data=num;
        ptr->pry=p;
        temp=front;
        if(temp==NULL)
        {
                pre->pre=NULL;
                ptr->next=NULL;
                front=ptr;
                return;
        }
        if(front->pry>p)
        {
                ptr->pre=NULL;
                ptr->next=temp;
                temp->pre=ptr;
                front=ptr;
                return;
        }
        while(temp!=NULL)
        {
                if((temp->pre=NULL)&&(temp->next==NULL))
                {
                        if(p>temp->pry)
                        {
                                ptr->pre=temp;
                                ptr->next=NULL;
                                temp->next=ptr;
                                return;
                        }
                }
                if(p<temp->pry)
                {
                        ptr->pre=temp->pre;
                        ptr->next=temp;
                        ptr->pre->next=ptr;
                        ptr->pre=ptr;
                        return;
                }
	} 
}	

void display()
{
	struct anu *temp;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	temp=front;
	while(temp!=NULL)
	{
		printf("%d %d\n",temp->data,temp->pry);
	
		temp=temp->next;
	}

}
void display_priority(int p)
{
	struct anu *temp,*ptr;
	if(front ==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	ptr->pry=p;
	temp=front;
	while(temp!=NULL)
	{
		if(temp->pry==p)
			printf("%d %d\n",temp->data,temp->pry);
		temp=temp->next;
	}


}
void delete_at_beg()
{
	struct anu*temp;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	temp=front;
	if(front->next==NULL)
	{
		free(front);
		front=NULL;
		return;
	}
	front=front->next;
	front->pre=NULL;
	free(temp);
}
void delete()
{
	struct anu* temp;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	temp=front;
	while(temp!=NULL)
	{
		front=temp->next;
		free(temp);
		temp=temp->next;
	}
}
void dlt_data_priority(int num,int p)
{
	struct anu* temp,*ptr;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	if((front->data==num)&&(front->pry==p))
	{
		if(front->next==NULL)
		{
			free(front);
			front=NULL;
			return;
		}
	}
	temp=front;
	while(temp!=NULL)
	{
		if((temp->data==num)&&(temp->pry==p))
		{
			if(temp->pre==NULL)
			{
				temp->next->pre=temp->pre;
				front=temp->next;
				free(temp);
				return;
			}
			if(temp->next==NULL)
			{
				temp->pre->next=temp->next;
				free(temp);
				return;
				temp->pre->next=temp->next;
				temp->next->pre=temp->pre;
				free(temp);
				return;
			}
			temp=temp->next;
		}

		printf("invalid data &priority\n");
	}

}

void dlt_priority(int p)
{
	struct anu* temp;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	temp=front;
	while(temp!=NULL)
	{
		if(temp->pry==p)
		{
			if(temp->pre==NULL)
			{
				temp->pre->next=temp->pre;
				front=temp->next;
				free(temp);
			}
			else if(temp->next==NULL)
			{
				temp->pre->next=temp->next;
				free(temp);
			}
			else
			{
				temp->pre->next=temp->next;
				temp->next->pre=temp->pre;
				free(temp);
			}
		}
		temp=temp->next;
	}
	//printf("invalid priority\n");
}


void creat_list(int *ptr1,int *ptr2,int n)
{
	struct anu* temp,*ptr,*ptr3,*pre;
	int i,p;
	for(i=0;i<n;i++)
	{
		ptr=(struct anu*)malloc(1*sizeof(int));
		if(ptr==NULL)
		{
			printf("failed to allocated\n");
			exit(1);
		}
		ptr->data=ptr1[i];
		ptr->pry=ptr2[i];
		temp=front;
		if(front==NULL)
		{
			pre->pre=NULL;
			ptr->next=NULL;
			front =ptr;
			continue;
		}
		if(front->pry>p)
		{
			ptr->pre=NULL;
			ptr->next=temp;
			temp->next=ptr;
			front=ptr;
			continue;
		}
		if((temp->pre==NULL)&&(temp->next==NULL))
		{
			if(p>temp->pry)
			{
				ptr->pre=temp;
				ptr->next=NULL;
				temp->next=ptr;
			}
		}
		if(ptr2[i]<temp->pry)
		{
			ptr->pre=temp->pre;
			ptr->next=temp;
			if(temp->pre!=NULL)
				temp->pre->next=ptr;
			else
			{
				front=ptr;
			}
			temp->pre=ptr;
			break;
		}
		ptr3=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		ptr->pre=ptr3;
		ptr->next=NULL;
		ptr3->next=ptr;
	}
}




void main()
{
	int num,i,opt,p,n;
	int *ptr1,*ptr2,ptr;
	while(1)
	{
		printf("MENU:\n0.exit\n1.insert elements:\n2.display:\n3.display by priority:\n4.delete:\n5.delete at beg:\n6.delete by priority:\n7.delete by data and priority:\n8.creat queue:\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:printf("enter element and priority:\n");
			       scanf("%d %d",&num,&p);
			       insert(num,p);
			       break;
			case 2:display();
			       break;
			case 3:printf("enter priority\n");
			       scanf("%d",&p);
			       display_priority(p);
			       break;
			case 4:delete();
			       break;
			case 5:delete_at_beg();
			       break;
			case 6:printf("enter priority\n");
			       scanf("%d",&p);
			       dlt_priority(p);
			       break;
			case 7:printf("enter data and priority\n");
			       scanf("%d %d",&num,&p);
			       dlt_data_priority(num,p);
			       break;
			case 8:printf("enter n no.of elements\n");
			       __fpurge(stdin);
			       scanf("%d",&n);

			       __fpurge(stdin);
			       ptr1=(int*)malloc(n*sizeof(int));
			       ptr2=(int*)malloc(n*sizeof(int));
			       printf("enter element&priority\n");
			       for(i=0;i<n;i++)
			       {
				       scanf("%d %d",&ptr1[i],&ptr2[i]);

				       __fpurge(stdin);
			       }
			       creat_list(ptr1,ptr2,n);
			       break;
		
				      
defalut:printf("invalid option please check the option which you have entered\n");
		}
	}
}


