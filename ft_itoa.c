/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:07:29 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/01 22:32:44 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_aux(char *str, int *numdig, int counter, int n)
{
	*numdig = counter;
	if (n > 9)
		str = ft_itoa_aux(str, numdig, counter + 1, n / 10);
	if (!str)
		str = ft_calloc(sizeof(char), counter + 1);
	if (!str)
		return (NULL);
	str[*numdig - counter] = (n % 10) + 48;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa_aux(NULL, &i, 1, n);
	return (str);
}
