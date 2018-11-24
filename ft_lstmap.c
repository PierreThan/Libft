#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*res;
	size_t	n;

	n = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	if (!(res = (t_list*)malloc(sizeof(t_list*) * n)))
		return (NULL);
	tmp = res;
	while (n--)
	{
		tmp = f(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
