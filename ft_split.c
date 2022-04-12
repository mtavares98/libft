/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:45:03 by mtavares          #+#    #+#             */
/*   Updated: 2022/04/12 18:40:13 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_free(char **new)
{
	int	i;

	i = 0;
	while (new[i])
		free(new[i++]);
}

static int	ft_str_counter(char **new_str, char const *s, char c, int k)
{
	int	i;
	int	j;
	int	counter_str;

	i = 0;
	counter_str = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			j = i;
		if (s[i])
			counter_str++;
		while (s[i] && s[i] != c)
			i++;
		if (new_str && counter_str)
		{
			new_str[k] = ft_substr(s, j, i - j);
			if (!new_str[k++])
			{
				ft_free(new_str);
				break ;
			}
		}
	}
	return (counter_str);
}

char	**ft_split(const char *s, char c)
{
	char	**new_str;
	size_t	i;

	if (!s)
		return (0);
	new_str = NULL;
	i = ft_str_counter(new_str, s, c, 0);
	new_str = malloc(sizeof(char *) * (i + 1));
	if (!new_str)
		return (0);
	ft_str_counter(new_str, s, c, 0);
	if (new_str)
	new_str[i] = 0;
	return (new_str);
}

/* int	main(void)
{
	int		i;
	char	**str;

	str = ft_split("tripouille", 0);
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	printf("%s\n", str[i]);
	if (str)
		while (--i < -1)
			free(str[i]);
	free(str);
} */
