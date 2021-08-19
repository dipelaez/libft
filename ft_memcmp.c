/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:51:22 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 13:51:24 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;

	a = (char *) s1;
	b = (char *) s2;
	while (n--)
	{
		if (*a != *b)
			return (a - b);
		a++;
		b++;
	}
	return (0);
}
