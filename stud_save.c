#include"header.h"
void stud_save(ST*ptr)
{
	int i;
	char *file,op;
	FILE *fp;

	printf("Enter the option\n");

	printf("S/s :save and exit\n");

	printf("E/e :exit without saving\n");       
	do
	{
		scanf(" %c",&op);
		if(op=='s'||op=='S')
		{
			file=malloc(sizeof(char)*10);
			printf("Enter file name to save record.....\n");
			scanf("%s",file);
			fp=fopen(file,"w");
			while(ptr)
			{
				fprintf(fp,"%d\t%s\t%f\n",ptr->id,ptr->name,ptr->marks);
				ptr=ptr->next;
			}
			exit(0);
		}
		else if(op=='e'||op=='E')
			exit(1);
		else
			printf("Unknown option\n");
	}while(1);
}
void stud_exit(void)
{
	exit(1);
}
