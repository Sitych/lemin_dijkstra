/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:31:47 by snorcros          #+#    #+#             */
/*   Updated: 2019/09/22 17:59:38 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(char *str, char a, char b)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (str);
}