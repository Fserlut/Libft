/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 00:34:30 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/16 02:50:28 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
char		*ft_strtrim(char const *s)
{
	int		i;
	char	*s_new;

	i = ft_strlen(s);
	s_new = ft_strnew(i);
	if (s_new != NULL)
	{
		ft_strcpy(s_new, s);
		if ((s_new[0] == ' ') || (s_new[0] == '\t') || (s_new[0] == '\n'))
			s_new[0] = 'A';
		if ((s_new[i] == ' ') || (s_new[i] == '\t') || (s_new[i] == '\n'))
			s_new[i] = 'A';
		else
		return ((char*)s);
	}
	else
		return (NULL);
}

int		main()
{
	char *s;

	s = "\tHello\n";
	printf("%s\n", ft_strtrim(s));
	return (0);
}
**/