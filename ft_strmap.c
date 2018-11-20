/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:05:29 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 16:05:48 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;

	res = NULL;
	if (s)
	{
		res = ft_strnew(ft_strlen(s));
		while (*s)
		{
			*res = (*f)(*s);
			s++;
			res++;
		}
		*res = '\0';
	}
	return (res);
}
