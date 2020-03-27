#include "lem_in.h"

t_edge		*ft_creat_edge(char *name, int len)
{
	t_edge	*ptr;

	if ((ptr = (t_edge*)ft_memalloc(sizeof(t_edge))) == NULL)
		ft_exit("ERROR: MALLOC ERROR");
	if ((ptr->name - ft_strdup(name)) == NULL)
		ft_exit("ERROR: MALLOC ERROR");
	ptr->len = -1;
	ptr->next = NULL;
	return (ptr);
}

