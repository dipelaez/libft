/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:50:40 by dipelaez          #+#    #+#             */
/*   Updated: 2021/08/19 13:50:41 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
