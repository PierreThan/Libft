#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char		*res;

	res = NULL;
	n = 0;
	if (s)
	{
		res = ft_strnew(ft_strlen(s));
		while (*s)
		{
			*res = (*f)(n, *s);
			n++;
			s++;
			res++;
		}
		*res = '\0';
	}
	return (res);
}
