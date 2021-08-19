/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez </var/mail/dipelaez>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:53:15 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 11:53:51 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	size_t	i;

	i = 0;
	if (dest > src)
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	else if (dest && src)
	{
		while ( i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}	
	return (dest);
}
