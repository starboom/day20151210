#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
	char name[20];
	int  age;
	int  class;
}stu;


int main(int argc, char const *argv[])
{
	// stu p;

	// char name[20] = "fangzhenhua";

	// printf("%s\n",name );

	// p.name = "fangzhenhua";
	// strcpy(p.name,"fangzhenhua");
	// p.age  = 10;
	// p.class = 01;
	// printf("%s\n",p.name);
	// printf("%d\n",p.age);
	// printf("%d\n",p.class);

	stu *q = (stu*)malloc(sizeof(stu) * 3);

	stu *m;

	m = q;

	printf("1-----&m = %p\n",m);
	printf("1-----&q = %p\n", q );
	printf("sizeof(stu) = %p\n",sizeof(stu) );
	m -> age  = 10;
	m -> class = 1;
	strcpy(m->name,"fangzhenhua");

	m++;
	printf("2------&m = %p\n",m);

	m -> age  = 10;
	m -> class = 1;
	strcpy(m->name,"liyue");

	m++;
	printf("3-------&m = %p\n",m);

	m -> age  = 10;
	m -> class = 1;
	strcpy(m->name,"lihaomin");
	
	int i;
	for(i=0;i<3;i++)
	{	
		printf("%s\n",m->name);
		printf("%d\n",m->age);
		printf("%d\n",m->class);
		if(i != 2)
		{
			m--;
		}
	
		printf("&m[%d] = %p\n",i,m);

		//q--;
	}

	printf("&m = %p\n",m);
	printf("&q = %p\n", q );
	free(q);
	q = NULL;
	m = NULL;
	printf("&m = %p\n",m);
	printf("&q = %p\n", q );


	return 0;
}