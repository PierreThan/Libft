/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:52:05 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:52:40 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_line_tab(s, c)
{
	char	**res;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s)
		return (0);
	if (!c)
		return (2);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	n = -1;
	res = (char**)malloc(sizeof(char*) * n);
	while (res && s && c && s[i])		////TERMINER REMPLISSAGE DU TAB
	{
		n++;
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
		{
			res [n] = 0;
			return (res);
		}
		while (s[i + j] && s[i + j] != c)
			j++;
	}
}
