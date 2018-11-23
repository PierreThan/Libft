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

char	*ft_strtrim(char const *s)
{
	size_t	n;
	size_t	l;
	char	*res;

	res = NULL;
	n = 0;
	while (ft_iswhitespace(*s))
		s++;
	l = ft_strlen(s);
	if (!l)
		return (res = ft_strnew(0));
	while (ft_iswhitespace(s[l - n - 1]))
		n++;
	if (!(res = ft_strsub(s, 0, l - n - 1)))
		return (NULL);
	return (res);
}
