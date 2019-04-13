/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 04:38:57 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/12 06:52:45 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len-- > 0)
	{
		if (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		else
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (&dst[0]);
}
