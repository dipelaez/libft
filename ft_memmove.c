/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:51:37 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/03 18:23:06 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (dest > src)
	{
		while (n--)
			dest_cpy[n] = src_cpy[n];
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
