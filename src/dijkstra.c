#include "lem_in.h"

t_path		**ft_create_path1(t_room *start)
{
	t_queue	*q;
	t_queue	*ptr;
	t_edge	*link;

	q = ft_creat_elem(start->name);
	while (ft_isempty(q))
	{
		ptr = ft_pop(q);
		link = ft_find_data(ptr->name)->links;
		while (link != NULL)
		{
			if (flag == 0 && )
		}
	}
}