/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:41:53 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 19:45:29 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	if (!s1 && !s2)
		return (0);
	if (!tmp1)
		return ((int)(*tmp2));
	if (!tmp2)
		return ((int)(*tmp2));
	while (n-- > 0 && *tmp1 == *tmp2)
	{
		tmp1++;
		tmp2++;
	}
	return ((int)((unsigned char)(*tmp1) - (unsigned char)(*tmp2)));
}
