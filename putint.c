# include <stdlib.h>
# include <unistd.h>

size_t ft_putstr(char *str)
{
	size_t size;
	size = 0;
	while(*str)
	{
		write(1, str, 1);
		size++;
	}
	return(size);
}

char	*ft_itoa(int n)
{
	long int	num;
	size_t		digits;
	char		*result;
	int temp;
	num = n;
	digits = get_digits(num);
	if (n < 0)
	{
		num = -num;
		digits++;
	}
	result = (char *)malloc(sizeof(char) * (digits + 1));
	if (!result)
		return (NULL);
	*(result + digits) = 0;
	while (digits--)
	{
		*(result + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*result = '-';
	temp = ft_putstr(result);
	return(temp);
}

size_t	get_digits(int n)
{
	int size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

int main(void)
{
	ft_itoa(112);
}