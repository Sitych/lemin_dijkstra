#include "lem_in.h"

void		ft_init_len(void)
{
	t_room	*room;
	t_queue	*ptr;
	t_queue	*elem;
	t_edge	*edge;

	ptr = ft_creat_elem(ft_find_end()->name);
	while (ft_isempty(ptr))
	{
		elem = ft_pop(&ptr);
		room = ft_find_data(elem->name);
		edge = room->links;
		while (edge != NULL)
		{
			if (ft_find_data(edge->name)->bfs_level < room->bfs_level)
			{
				
				ptr = ft_push(ptr, edge->name);
			}
			edge = edge->next;
		}
		ft_del_elem(&elem);
	}
}