/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:17:41 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 17:37:20 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	if (b == NULL || len == 0)
		return (b);
	tmp = (unsigned char *)b;
	i = 0;
	while (len > i)
	{
		tmp[i] = (unsigned char)(c);
		i++;
	}
	return (b);
}
