/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eborunov <eborunov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:18:29 by eborunov          #+#    #+#             */
/*   Updated: 2023/01/15 22:13:18 by eborunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size && (0xffffffffffffffff) / size < count)
		return (0);
	s = malloc(size * count);
	if (!s)
		return (0);
	s = ft_memset(s, 0, count * size);
	return (s);
}
