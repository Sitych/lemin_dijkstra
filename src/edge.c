#include "lem_in.h"

t_edge		*ft_creat_edge(char *name)
{
	t_edge	*ptr;

	if ((ptr = (t_edge*)ft_memalloc(sizeof(t_edge))) == NULL)
		ft_exit("ERROR: MALLOC ERROR");
	if ((ptr->name = ft_strdup(name)) == NULL)
		ft_exit("ERROR: MALLOC ERROR");
	ptr->len = 0;
	ptr->next = NULL;
	ptr->prev = NULL;
	return (ptr);
}

void		ft_del_edge(t_edge *ptr)
{
	ft_strdel(&(ptr->name));
	free(ptr);
}

void		ft_del_from_links(t_edge **ptr)
{
	t_edge	*tmp;

	if ((*ptr)->prev == NULL)
	{
		tmp = *ptr;
		*ptr = (*ptr)->next;
		(*ptr)->prev = NULL;
	}
	else
	{
		tmp = *ptr;
		*ptr = (*ptr)->prev;
		(*ptr)->next = tmp->next;
		if ((*ptr)->next != NULL)
			(*ptr)->next->prev = *ptr;
	}
	ft_del_edge(tmp);
	return ;
}
