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