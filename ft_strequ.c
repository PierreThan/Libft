#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s2++;
		s1++;
	}
	if (s1 == NULL && s2 == NULL)
		return (1);
	return (0);
}