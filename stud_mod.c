#include"header.h"
void stud_mod(ST **ptr)
{
	ST *temp;
	int i,rno;
	char op,op1,nme[10];
	float mrks;
	do
	{
		temp=*ptr;

		printf("Enter which record to search modification\n");
		printf("R/r :to search a roll no\n");
		printf("N/n :to search a name\n");

		printf("P/p :to percentage base\n");

		scanf(" %c",&op);
		if(op=='R'||op=='r')
		{
			printf("enter roll number...\n");
			scanf("%d",&rno);
			while(temp)
			{
				if(temp->id==rno)
				{
					printf("enter the new name...\n");
					scanf("%s",nme);
					strcpy(temp->name,nme);
					printf("enter the new marks...\n");
					scanf("%f",&mrks);
					temp->marks=mrks;
				}
				temp=temp->next;
			}
		}
		else if(op=='N'||op=='n')
		{
			printf("enter the name to search...\n");
			scanf("%s",nme);
			while(temp)
			{
				if((strcmp(temp->name,nme))==0)
				{
					printf("enter the new rollno...\n");
					scanf("%d",&rno);
					temp->id=rno;
					printf("enter the new marks...\n");
					scanf("%f",&mrks);
					temp->marks=mrks;
				}
				temp=temp->next;
			}
		}
		if(op=='P'||op=='p')
		{
			printf("enter the marks to search...\n");
			scanf("%f",&mrks);
			while(temp)
			{
				if(temp->marks==mrks)
				{
					printf("enter the new name...\n");
					scanf("%s",nme);
					strcpy(temp->name,nme);
					printf("enter the new rollno...\n");
					scanf("%d",&rno);
					temp->id=rno;
				}
				temp=temp->next;

			}
		}
		printf("do you want to modify another data press(y/Y)....\n");
		scanf(" %c",&op1);
	}while(op1=='y'||op1=='Y');
}

