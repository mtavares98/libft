/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:40:50 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/13 22:55:49 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = -1;
	if (dest_length >= dstsize - 1 && dstsize <= 0)
		return (dstsize + src_length);
	while (src[++i] && dest_length + i < dstsize - 1)
		dst[j + i] = src[i];
	dst[j] = 0;
	return (dest_length + src_length);
}
