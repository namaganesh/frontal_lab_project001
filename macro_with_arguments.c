# include <stdio.h>
# include <string.h>
# define INCREMENT(x) ++x // here 'x' can be of any datatype.
int main()
{
	char ch = 'C';
	char *ptr = &ch;
	printf("pointer own address : %d\n",&ptr);
	printf("derefernced info : %c\n",*ptr);
	printf("getting ascii value: %d\n",*ptr);
	int x = 10;
	printf("%d\n", INCREMENT(ptr));
	printf("%d\n", INCREMENT(x));
	return 0;
}












