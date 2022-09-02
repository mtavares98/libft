/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:35:29 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/02 00:56:43 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_writenbr_fd(int n, int fd)
{
	if (n > 9 || n < -9)
		ft_writenbr_fd(n / 10, fd);
	else
		ft_putchar_fd('-', fd);
	ft_putchar_fd("0123456789"[(n % 10) * ((n > 0) - (n < 0))], fd);
}
