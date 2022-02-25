#include<stdio.h>
int add(int ,int );
int multiply(int,int,int);
void main()
{
	int s1,s2,z,w;
	int (*ptr)(int,int,int);
	s1=add(30,40);
	s2=multiply(2,3,4);
	printf("%d %d",s1,s2);
}
int add(int x,int y)
{
	int z=x+y;
}
int multiply(int x,int y,int z)
{
	int w=x*y+z;
}
