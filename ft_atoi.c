/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <pthan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:17:42 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 15:46:47 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	if ((c == ' ' || c == '\t' || c == '\n' || c == '\r')
		|| (c == '\v' || c == '\f'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	res;
	int	i;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] && is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	i++;
	return (n * res);
}
