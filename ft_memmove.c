/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:06:38 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/21 15:35:51 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *buf;
	unsigned char *ptr1;

	buf = ft_strnew(ft_strlen((unsigned char*)src));
	ft_strcpy(buf,(unsigned char*)src);
	ptr1 = (unsigned char*)dst;
	while (len-- > 0)
		*(ptr1++) = *(buf++);
	return (dst);
}
