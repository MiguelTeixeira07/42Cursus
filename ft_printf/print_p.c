#include "ft_printf.h"

int print_p(void *ptr) {
	unsigned long	num = (unsigned long)ptr;

	if (ptr)
	{
		write(1, "0x", 2);
		return (2 + print_x(num, 'x'));
	}
	write(1, "(nil)", 5);
	return (5);
}