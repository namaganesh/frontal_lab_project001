#include<stdio.h>
int main()
{
int a[5] = { 1, 2, 3, 4, 5 };
int *p = a, *q = &a;
printf("pointer content p : %p\n",p);
printf("pointer content q : %p\n",q);
return 0;
}

	

