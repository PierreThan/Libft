#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t		i;

	if (b == NULL || len == 0)
		return (NULL);
	tmp = (unsigned char *) b;
	i = 0;
	while (len > i)
	{
		tmp[i] = (unsigned char) (c);
		i++;
	}
	return (b);
}
