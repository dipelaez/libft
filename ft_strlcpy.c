/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:53:11 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/03 20:37:30 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	dst_size = 0;
	while (src[src_size])
		src_size++;
	if (size != 0)
	{
		while (dst_size < size - 1 && src[dst_size])
		{
			dst[dst_size] = src[dst_size];
			dst_size++;
		}
		dst[dst_size] = '\0';
	}
	return (src_size);
}
