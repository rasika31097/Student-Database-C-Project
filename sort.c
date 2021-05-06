#include"header.h"
void stud_sort(ST **ptr)
{
	ST **p,*t,*next;
	int i,j,c;
	char op;

	printf("Enter option to sort\n");

	printf("N/n :sort with name\n");

	printf("P/p :sort with percentage\n");

	scanf(" %c",&op);
	c=node_count(*ptr);
	p=(ST **)malloc(sizeof(ST *)*c);
	t=*ptr;// all node address stored in  ST * array i.e p
	i=0;
	while(t)
	{
		p[i++]=t;
		t=t->next;
	}
	if(op=='N'||op=='n')
	{
		for(i=0;i<c-1;i++)
		{
			for(j=0;j<c-1-i;j++)
			{			
				if((strcmp(p[j]->name,p[j+1]->name))==1)
				{
					next=p[j+1]->next;
					p[j+1]->next=p[j];
					p[j]->next=next;
					if(j!=0)
						p[j-1]->next=p[j+1];
					t=p[j];
					p[j]=p[j+1];
					p[j+1]=t;
				}
			}
		}
		*ptr=p[0];
	}
	else if(op=='P'||op=='p')
	{
		for(i=0;i<c-1;i++)
		{
			for(j=0;j<c-1-i;j++)
			{			
				if(p[j]->marks > p[j+1]->marks)
				{
					next=p[j+1]->next;
					p[j+1]->next=p[j];
					p[j]->next=next;
					if(j!=0)
						p[j-1]->next=p[j+1];
					t=p[j];
					p[j]=p[j+1];
					p[j+1]=t;
				}
			}

		}
		*ptr=p[0];
	}
	else
		printf("Unknown option....\n");
}

int node_count(ST *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
