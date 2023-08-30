#include <stdio.h>
int main(void)
{
	printf("%x", -255);
}

// base: 0123456789abcdef
size_t	ft_putnbr_base(long int num, char *base)
{
	int		base_len;
	size_t	size;

	base_len = ft_strlen(base);
	size = 0;
	if (num < 0)
	{
		num = -num;
		size += ft_putchar('-');
	}
	if (num >= base_len)
		size += ft_putnbr_base(num / base_len, base);
	size += ft_putchar(base[num % base_len]);
	return (size);
}