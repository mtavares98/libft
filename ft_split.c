/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:45:03 by mtavares          #+#    #+#             */
/*   Updated: 2022/04/13 20:33:05 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_free(char ****new_str, int k)
{
	while (--k < -1)
		free(**new_str[k]);
	free(*new_str[k]);
}

static int	ft_str_counter(char const *s, char c)
{
	int	i;
	int	counter_str;

	i = 0;
	counter_str = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			counter_str++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter_str);
}

static char	**ft_cpy_strofstr(char ***new_str, char const *s, char c, int k)
{
	int	i;

	i = 0;
	printf("Inicio\n");
	while (*s)
	{
		printf("s = %p\n", s);
		while (*s == c)
			s += 1;
		printf("s = %p\n", s);
		while (s[i] && s[i] != c)
			i++;
		printf("word len = %i\n", i);
		if (new_str && *s)
		{
			*new_str[k] = ft_substr(s, 0, i);
			if (!*new_str[k])
			{
				ft_free(&new_str, k);
				break ;
			}
			printf("new_str[%i] = %s\n", k, *new_str[k]);
			k++;
			s += i;
		}
	}
	return (*new_str);
}

char	**ft_split(const char *s, char c)
{
	char	**new_str;
	size_t	i;

	printf("Inicio\n");
	if (!s)
		return (0);
	new_str = NULL;
	i = ft_str_counter(s, c);
	printf("i = %lu\n", i);
	new_str = malloc(sizeof(char *) * (i + 1));
	if (!new_str)
		return (NULL);
	printf("new_str address\t%p\n", new_str);
	if (new_str)
	{
		new_str = ft_cpy_strofstr(&new_str, s, c, 0);
		if (new_str)
			new_str[i] = 0;
	}
	return (new_str);
}

int	main(void)
{
	int		i;
	char	**str;

	str = ft_split("  tripouille  42  ", ' ');
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
}
