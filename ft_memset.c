/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:12:15 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/12 23:28:23 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Another idea that i have for pontentially more performance
/* void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (len <= 0)
		return (b);
	else
	{
		i = len -1;
		*(unsigned char *)(b + i) = (unsigned char)c;
		return (ft_memset(b, c, --len));
	}
} */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b)
		return (NULL);
	while (len--)
		*(unsigned char *)(b + i) = (unsigned char)c;
	return (b);
}
