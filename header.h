#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int id;
	char name[20];
	float marks;
	struct student *next;
}ST;

extern void stud_add(ST**);
extern void stud_del(ST**);
extern void stud_mod(ST**);
extern void stud_save(ST*);
extern void stud_rev(ST**);
extern void stud_sort(ST**);
extern void stud_show(ST*);
extern int node_count(ST*);
extern void stud_exit(void);
extern void stud_delall(ST**);

