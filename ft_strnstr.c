/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 02:08:40 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/15 22:46:55 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int fg;
	int res;

	fg = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while ((int)len-- > i || *needle || haystack[i])
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
