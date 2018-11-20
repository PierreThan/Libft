#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	res = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1)
	{
		*res = *s1;
		res++;
		s1++;
	}
	*res = '\0';
	return (res)
}
