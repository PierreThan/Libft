#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;

	res = NULL;
	if (s)
	{
		res = ft_strnew(ft_strlen(s));
		while (*s)
		{
			*res = (*f)(*s);
			s++;
			res++;
		}
		*res = '\0';
	}
	return (res);
}
