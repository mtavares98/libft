/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:53:19 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/13 23:20:23 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] && str2[i] && i < n - 1)
		if (str1[i] == str2[i])
			return (str1[i] - str2[i]);
	return (0);
}
