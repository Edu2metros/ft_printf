size_t ft_putchar(char c)
{
	size_t size;
	write(1, &c, 1);
	size++;
	return(size);
}