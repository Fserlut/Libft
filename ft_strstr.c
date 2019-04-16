/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:29:52 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/15 22:47:35 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int fg;
	int res;

	fg = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*needle != '\0' || haystack[i])
	{
		if (haystack[i] == *(needle++))
		{
			if (fg != 1)
			{
				res = i;
				fg = 1;
			}
			i++;
		}
		else if (haystack[i] != '\0')
			i++;
		else
			return (NULL);
	}
	return ((char*)&haystack[res]);
}
