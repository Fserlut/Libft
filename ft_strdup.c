/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 00:47:08 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/11 23:16:36 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int			i;
	char		*s;

	i = 0;
	while (s1[i])
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (s1[++i])
			s[i] = s1[i];
		s[i] = '\0';
	}
	return (s);
}
