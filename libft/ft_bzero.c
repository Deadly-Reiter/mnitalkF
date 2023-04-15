/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eborunov <eborunov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:33:12 by eborunov          #+#    #+#             */
/*   Updated: 2023/01/11 21:33:38 by eborunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*suc;

	i = 0;
	suc = (unsigned char *)s;
	while (i < n)
	{
		suc[i] = 0;
		i++;
	}
	s = suc;
}
