#include "ft_printf.h"
#include <stdio.h>

/* Prints type conversions 'i', 'p' and 's' and compares output and
character count with original printf(). */
int	main(void)
{
	/* Testing integer */
	int i = 123;
	printf("Printing first value of integer and then char_count \n");
	printf("---> original printf \n");
	printf("%d ", printf("%d ", i));
	printf("\n---> ft_printf \n");
	ft_printf("%d ", ft_printf("%d ", i));


	/* Testing hexa */
	void* u = "15F";
	printf("\n \nPrinting first value of hexadecimal number and then char_count \n");
	printf("---> original printf \n");
	printf("%d ", printf("%p ", u));
	printf("\n---> ft_printf \n");
	ft_printf("%d ", ft_printf("%p ", u));

	/* Testing string. */
	char *string = "TeSt StRiNg";
	printf("\n \nPrinting first value of a string and then char_count \n");
	printf("---> original printf \n");
	printf("%d ", printf("%s ", string));
	printf("\n---> ft_printf \n");
	printf("%d ", ft_printf("%s ", string));

	printf("\n \nPrinting empty string \n");
	printf("---> original printf \n");
	printf("%d ", printf("%s ", ""));
	printf("\n---> ft_printf \n");
	printf("%d ", ft_printf("%s ", ""));

	return (0);
}