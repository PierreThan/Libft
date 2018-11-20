#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == ((char)(c)))
			return (tmp);
		tmp++;
	}
	if ((char)c == '\0')
		return (tmp);
	return (NULL);
}
