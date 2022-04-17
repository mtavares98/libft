/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:12:48 by mtavares          #+#    #+#             */
/*   Updated: 2022/04/16 15:02:51 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int a)
{
	char	chr;

	chr = (char)a;
	printf("chr = %c", chr);
	return (ft_isalpha(chr) || ft_isdigit(chr));
}

int	main(void)
{
	int	i;

	i = 262;
	printf("%i\n", ft_isalnum(i));
	printf("%i\n", isalnum(i));
}
