/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:50:17 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/02 01:10:36 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scpy;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	scpy = malloc((len + 1) * sizeof(char));
	if (!scpy)
		return (NULL);
	i = -1;
	while (++i < len)
		scpy[i] = s1[i];
	scpy[i] = 0;
	return (scpy);
}
