#include"header.h"
void stud_show(ST*ptr)
{
	if(ptr==0)
		printf("No record present....\n");
	else
	{
		printf("\t\t _____________________________\n");
		printf("\t\t| rollno |  name    | marks   |\n");
		printf("\t\t|_____________________________|\n");
		while(ptr)
		{
			printf("\t\t|%5d   |%10s|%9.2f|\n",ptr->id,ptr->name,ptr->marks);
			printf("\t\t|_____________________________|\n");
			ptr=ptr->next;
		}
	}
}
