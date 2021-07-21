int	ft_isalpha(int c)
{
	int	ascii;

	ascii = c - 0;
	if (ascii >= 'A' && ascii <= 'Z')
		return (ascii);
	if (ascii >= 'a' && ascii <= 'z')
		return (ascii);
	return (0);
}
