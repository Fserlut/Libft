/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:43:21 by fserlut           #+#    #+#             */
/*   Updated: 2019/04/20 20:24:40 by fserlut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_count_numb(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
		i++;
	else
	{
		while (n > 0)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}

void	ft_strrev(char *s)
{
	int i;
	int	i_end;
	char c;

	i = 0;
	i_end = ft_strlen(s) - 1;
	while (i < i_end)
	{
		c = s[i];
		s[i++] = s[i_end];
		s[i_end--] = c;
	}
}

char    *ft_itoa(int n)
{
	char *s;
	int i;
	int fg;

	fg = 0;
	i = 0;
	s = ft_strnew(ft_count_numb(n));	
	if (n < 0)
	{
		n = n * -1;
		fg = 1;
	}
	if (n == 0)
		s[i] = '0';
	while (n > 0)
	{
		s[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (fg == 1)
		s[i++] = '-';
	ft_strrev(s);
	return (s);
}

int		main()
{
	int x;

	x = 0;
	printf("%s\n", ft_itoa(x));
	return (0);
}
