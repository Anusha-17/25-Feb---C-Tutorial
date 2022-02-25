#include<stdio.h>
struct Emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	char* cp;
	int* ip;
	struct Emp* sep;
	printf("Size of char* is: %d\n",sizeof(cp));
	printf("Size of int* is: %d\n",sizeof(ip));
	printf("Size of float* is: %d\n",sizeof(sep));
}
