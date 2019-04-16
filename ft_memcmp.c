/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:48:20 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/16 04:30:09 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((n-- > 0) && (*(unsigned char*)s1 == *(unsigned char*)s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	printf("My : %d\n", ft_memcmp("test", "tests", 5));
	printf("Sys : %d\n", memcmp("test", "tests", 5));
	return (0);
}