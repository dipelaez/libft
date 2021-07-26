int	ft_strlen(char	*s)
{
	unsigned long int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
