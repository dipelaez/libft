/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez </var/mail/dipelaez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:46:12 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 11:46:54 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	if (c > 127)
		c %= 256;
	i = (unsigned char *)s;
	while (n--)
	{
		if (*i == (unsigned char)c)
			return (i);
		i++;
	}
	return (0);
}
