/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:19:38 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:31:31 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*res;

	res = NULL;
	if (s)
	{
		i = ft_strlen(s);
		while (is_whitespace(s[i]))
		{
			s++;
			i--;
		}
		while (is_whitespace(s[i]))
			i--;
		if ((res = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		while (i--)
		{
			*res = *s;
			res++;
			s++;
		}
		*res = '\0';
	}
	return (res);
}
