#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	if ((res = (void*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
