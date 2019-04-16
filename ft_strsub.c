/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 06:15:19 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/15 22:32:25 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *s_sub;

	if ((s_sub = (char*)malloc(len)) == NULL)
		return (NULL);
	while (len-- > 0)
		s_sub[start++] = *s++;
	s_sub[start++] = '\0';
	return (s_sub);
}
