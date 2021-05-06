#include"header.h"
void stud_add(ST** ptr)// ptr=&hp
{
	char op,op2;
	ST *temp,*temp1,*temp2,*temp3;
	do
	{
		temp=malloc(sizeof(ST));
		printf("Enter the roll no\n");
		scanf("%d",&temp->id);

		temp2=*ptr;
		while(temp2)
		{
			if(temp->id==temp2->id)
			{
				printf("These rollno is already present......Are u want to replace?\nif yes press(y/Y)\n");
				scanf(" %c",&op2);
				if(op2=='y'||op=='Y')
				{
					printf("Enter the new name\n");
					scanf("%s",temp2->name);
					printf("Enter the new marks\n");
					scanf("%f",&temp2->marks);

				} 
				free(temp);
				goto l1;
			}
			temp3=temp2;
			temp2=temp2->next;
		}
		printf("Enter the name\n");
		scanf("%s",temp->name);
		printf("Enter the marks\n");
		scanf("%f",&temp->marks);
		/*-----------------------------------------------*/
		if(*ptr==0||(*ptr)->id > temp->id)
		{
			temp->next=*ptr;
			*ptr=temp;
		}
		else
		{
			temp1=*ptr;
			while(temp1)
			{
				if(temp1->next==0||temp1->next->id > temp->id)
				{
					temp->next=temp1->next;
					temp1->next=temp;
					break;
				}
				temp1=temp1->next;
			}
		}
l1:		printf("Do you want to add new student press (y/Y)\n");
		scanf(" %c",&op);
	}while(op=='y'||op=='Y');

}
