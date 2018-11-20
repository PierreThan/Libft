/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:52:07 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 09:54:03 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	n;

	tmp = (char*)s;
	n = ft_strlen(tmp);
	if (s == 0)
		return (0);
	if (c == 0)
		return (tmp + n);
	while (n > 0)
	{
		n--;
		if (*(tmp + n) == (char)(c))
			return (tmp + n);
	}
	return (NULL);
}
