student:	main.o stud_add.o stud_save.o stud_del.o stud_rev.o stud_mod.o stud_show.o sort.o
		cc main.o stud_add.o stud_save.o stud_del.o stud_rev.o stud_mod.o stud_show.o sort.o -o student
main.o:	main.c
	cc -c main.c
stud_add.o:	stud_add.c
	cc -c stud_add.c
stud_save.o:	stud_save.c	
	cc -c stud_save.c
stud_del.o:	stud_del.c
	cc -c stud_del.c
stud_rev.o:	stud_rev.c
	cc -c stud_rev.c
stud_mod.o:	stud_mod.c
	cc -c stud_mod.c
stud_show.o:	stud_show.c	
	cc -c stud_show.c
sort.o:	sort.c
	cc -c sort.c	


