size_t ft_putstr(char *str)
{
	size_t size;
	while(*str)
	{
		write(1, str, 1);
		size++;
	}
	return(size);
}