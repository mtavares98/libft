/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:56:47 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/01 23:23:09 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	sig;
	int	n;

	n = 0;
	while (*s > 8 && *s < 14 || *s == 32)
		s++;
	sig = (*s != '-') - (*s == '-');
	while (*s >= '0' && *s <= '9')
		n = (n * 10) + sig * (*s++ - '0');
	return (n);
}
