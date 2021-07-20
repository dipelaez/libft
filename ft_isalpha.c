int	ft_isalpha(int c)
{
	int	i;

	i = c - 0;
	if (i >= 'A' && i <= 'Z')
		return (i);
	if (i >= 'a' && i <= 'z')
		return (i);
	return (0);
}
