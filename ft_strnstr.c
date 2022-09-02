/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:17:30 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/02 01:14:04 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[++i] != '\0' && i < len)
	{
		j = -1;
		while (haystack[i + (++j)] != '\0' && haystack[i + j] == needle[j] \
		&& (i + j) < len && needle[j] != '\0')
			if (needle[j + 1] == '\0')
				return ((char *)&(haystack[i]));
	}
	return (0);
}
