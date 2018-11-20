#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int	n;

	tmp = (char*)s;
	n = ft_strlen(tmp);
	if (s == 0)
		return (0);
	if (c == 0)
		return (tmp + n);
	while (n > 0)
	{
		n--;
		if (*(tmp + n) == (char) (c))
			return (tmp + n);
	}
	return (NULL);
}
