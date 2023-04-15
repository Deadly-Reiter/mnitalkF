/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eborunov <eborunov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:36:53 by daelee            #+#    #+#             */
/*   Updated: 2023/01/15 18:25:51 by eborunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)b == (unsigned char)c)
			return ((void *)b);
		b++;
	}
	return (0);
}
