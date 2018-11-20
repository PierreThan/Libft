/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:58:25 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 09:00:00 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	if ((res = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (*s1)
	{
		*res = *s1;
		res++;
		s1++;
	}
	*res = '\0';
	return (res);
}
