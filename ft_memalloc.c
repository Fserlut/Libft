/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:00:53 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/15 01:28:50 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mal;

	mal = (void*)malloc(size);
	if (!(mal == NULL))
	{
		ft_bzero(mal, size);
		return (mal);
	}
	else
		return (NULL);
}
