#include<stdio.h>
#include<string.h>
union stud{int i;
float f;
} ;
int main()
{
	union stud s1,s2;

s1.f=19.55;
s1.i=188;

s2.i=17281;
s2.f=102.23;

printf("mark= %f\n",s1.f);
printf("Roll no. %d",s1.i);
return 0;
}
