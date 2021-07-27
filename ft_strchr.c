char	*ft_strchr(const char	*s, int	c)
{
	char	*r;
		
	r = (char *) s;
	if (c == '\0')
	{
		while (*r != '\0')
		{
			r++;
		}
		return (r);
	}
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (0);
}
