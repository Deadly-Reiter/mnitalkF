/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eborunov <eborunov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:08:40 by eborunov          #+#    #+#             */
/*   Updated: 2023/01/15 18:10:48 by eborunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*k;
	char	*l;

	k = (char *)dst;
	l = (char *)src;
	if (dst == src)
		return (dst);
	if (l < k)
	{
		while (len--)
			*(k + len) = *(l + len);
		return (dst);
	}
	while (len--)
		*k++ = *l++;
	return (dst);
}
