int	ft_isascii(int	c)
{
	if (c < 0)
		return (0);
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
