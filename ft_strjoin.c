/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:27:51 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:18:11 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (*s1)
	{
		*res = (char)(*s1);
		res++;
		s1++;
	}
	while (*s2)
	{
		*res = (char)(*s2);
		res++;
		s2++;
	}
	*res = '\0';
	return (res - ft_strlen(s1) - ft_strlen(s2));
}
