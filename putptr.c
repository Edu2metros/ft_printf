#include "printf.h"

int putptr(void *ptr)
{
	int size;

	size = 0;
	if(!ptr)
	{
		size += ft_putstr("(nil)");
		return(size);
	}
	size += ft_putstr("0x");
	size += ft_puthex((unsigned long int)ptr, 'x');
	return(size);
}