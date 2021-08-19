/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:52:00 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 13:52:02 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char	*s)
{
	char	*p;
	int		len;

	len = ft_strlen(s) + 1;
	p = (char *) malloc(len);
	if (p)
		ft_strlcpy(p, s, len);
	return (p);
}
