#include"header.h"
void stud_rev(ST **ptr)
{
	ST *p,*q,*r;
	p=*ptr;
	q=0;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	*ptr=q;
}
