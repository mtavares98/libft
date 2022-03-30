/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:40:50 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/30 23:08:30 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length >= dstsize - 1 || dstsize <= 0)
		return (dstsize + src_length);
	while (src[i] && j < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (dest_length + src_length);
}

int	main(void)
{
	char	dst[] = "\0\0\0\0\0\0\0\0\0\0\0\0";

	printf("%lu\n", ft_strlcat(dst, "AAAAA", 1));
	printf("%s\n", dst);
}
