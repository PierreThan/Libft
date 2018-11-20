/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:30:15 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:37:04 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (src && dst && size)
	{
		while (*dst)
		{
			dst++;
			n++;
		}
		while ((size - 1) > n && *src)
		{
			*dst = (char)(*src);
			dst++;
			src++;
			size--;
		}
		while (n++ < size)
		{
			*dst = '\0';
			dst++;
		}
	}
}
