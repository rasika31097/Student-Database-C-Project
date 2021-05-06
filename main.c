#include"header.h"

void main()
{
	ST *hp=0; //head pointer
	char choice;
	while(1){
	printf("*****STUDENT RECORD MENU*****\n");
	printf("a/A :add new record\nd/D :delete a record\ns/S :show the list\nm/M :modify a record\nv/V :save\ne/E :Exit\nt/T :sort the list\nl/L :delete all records\nr/R :Reverse the list\n");
	printf("\nEnter your choice\n");
	scanf(" %c", &choice);

	if(choice== 'a' || choice == 'A')
		stud_add(&hp);
	else if(choice== 'd' || choice == 'D')
		stud_del(&hp);
	else if(choice== 's' || choice == 'S')
		stud_show(hp);
	else if(choice== 'm' || choice == 'M')
		stud_mod(&hp);
	else if(choice== 't' || choice == 'T')
		stud_sort(&hp);
	else if(choice== 'l' || choice == 'L')
		stud_delall(&hp);
	else if(choice== 'r' || choice == 'R')
		stud_rev(&hp);
	else if(choice== 'v' || choice == 'V')
		stud_save(hp);
	else if(choice== 'e' || choice == 'E')
		stud_exit();
	else printf("Invalid choice\n");
}

}
