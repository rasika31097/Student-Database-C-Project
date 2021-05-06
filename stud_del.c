#include"header.h"
void stud_del(ST **ptr)
{
	ST *temp, *temp1;	
	char op;
	char s[20];
	int rn, del;
	temp=temp1= *ptr;
	printf("Delete a record based on?\n r/R :Enter roll no to delete\nn/N :Enter name to delete\n");
	scanf(" %c", &op);	
	while(temp)
	{
		if(op=='r'||op=='R')
		{
			printf("Enter the roll_no\n");
			scanf("%d", &rn);
			if(temp->id==rn)
			{
				if(temp==*ptr)
					*ptr=temp->next;
				else
					temp1->next=temp->next;
				free(temp);
				return;
			}
		}
		else if(op=='n'||op=='N')
		{	printf("Enter name\n");
			scanf("%s", s);
			if((strcmp(s,temp->name))==0)
			{
				if(temp==*ptr)
					*ptr=temp->next;
				else
					temp1->next=temp->next;
				free(temp);
				return;
			}
		}
		temp1=temp;
		temp=temp->next;
	}
	printf("Record not found\n");
}
void stud_delall(ST **ptr)
{
	ST *temp;

	while(*ptr)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}
