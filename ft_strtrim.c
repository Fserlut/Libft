/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 00:34:30 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/19 18:40:58 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		i_o;
	char	*s_new;

	i_o = 0;
	i = ft_strlen(s);
	s_new = ft_strnew(i);
	if (s_new != NULL)
	{
		ft_strcpy(s_new, s);
		if ((s_new[i_o] == ' ') || (s_new[i_o] == '\t') || (s_new[i_o] == '\n'))
			while (s_new[i_o] != s_new[i - 2])
			{
				s_new[i_o] = s_new[i_o + 1];
				i_o++;
			}
		if ((s_new[i - 1] == ' ') || (s_new[i - 1] == '\t') || (s_new[i - 1] == '\n'))
			s_new[i - 2] = '\0';
		return (s_new);
	}
	return (NULL);
}
