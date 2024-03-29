/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:16:53 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/02 00:47:52 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = (int)(count * size);
	if (size != 0 && count != 0 && total / size != count)
		return (NULL);
	ptr = malloc(total);
	if (ptr)
		ft_bzero(ptr, total);
	return (ptr);
}
