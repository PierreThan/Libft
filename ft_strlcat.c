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
	size_t	i;
	size_t	s;

	i = 0;
	n = 0;
	s = ft_strlen(src);
	while (n < size && dst[n])
		n++;
	while ((size - 1) > n && src[i])
		dst[n++] = (char)(src[i++]);
	while (n < size)
		dst[n] = '\0';
	return (n + s - i);
}
