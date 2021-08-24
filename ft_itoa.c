/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:09:02 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/24 15:09:07 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isnegative(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (1);
	}
	return (0);
}

static long int	ft_len(int n)
{
	int	i;
	int tmp;

	i = 2;
	tmp = n;
	while (tmp /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int	len;
	int sign;
	char *str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = ft_isnegative(n);
	len = ft_len(n) + sign;
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}