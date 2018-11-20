/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:21:51 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:44:56 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*tmpd;
	char	*tmps;

	tmpd = (char *)dst;
	tmps = (char *)src;
	while (0 < n--)
	{
		*tmpd = *tmps;
		if ((unsigned char)c == (unsigned char)(*tmpd))
			return (tmpd);
		tmpd++;
		tmps++;
	}
	return (NULL);
}
