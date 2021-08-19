/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez </var/mail/dipelaez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:47:23 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 11:47:40 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	while (n--)
	{
		*a++ = *b++;
	}
	return (dest);
}
