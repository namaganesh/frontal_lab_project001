

// baisc pointer program for size of pointer;  
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 10;
int *ptr;
int *ptr1;
ptr = &a;
printf("a value is : %d\n",a);
printf("\n");
printf("address of a is : %u\n",&a);
printf("\n");
printf("pointer pointing to address contains the following data : %u\n",*ptr); // this is called dereferencing.
printf("\n");
printf(" pointer contains : %u\n",ptr);
printf("\n");
printf("pointer address : %p\n",&ptr);
printf("pointer address : %p\n",&ptr1);
return 0;
}




/*

// using  'p' format specifier gives addresses in Hexa decimal values.. 

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 10;
int *ptr;

ptr = &a;
printf("a value is : %d\n",a);
printf("\n");
printf("address of a is : %p\n",&a);
printf("\n");
printf("pointer pointing to address contains the following data : %d\n",*ptr); // this is called dereferencing.
printf("\n");
printf(" pointer contains : %p\n",ptr);
printf("\n");
printf("pointer address : %p\n",&ptr);

return 0;
}


*/

/*

// using  'x' format specifier gives addresses in Hexa decimal values.. 

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 10;
int *ptr;
int *ptr1;

ptr = &a;
printf("a value is : %d\n",a);
printf("\n");
printf("address of a is : %x\n",&a);
printf("\n");
printf("pointer pointing to address contains the following data : %d\n",*ptr); // this is called dereferencing.
printf("\n");
printf(" pointer contains : %x\n",ptr);
printf("\n");
printf("1st pointer address : %x\n",&ptr);
printf("2nd pointer address : %x\n",&ptr1);
return 0;
}


*/
