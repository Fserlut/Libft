/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:06:38 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/12 02:15:01 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (len-- > 0)
		*ptr++ = *ptr2++;
	*ptr = '\0';
	return (dst);
}
