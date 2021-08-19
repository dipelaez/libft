/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:51:30 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 13:51:31 by dipelaez         ###   ########.fr       */
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
