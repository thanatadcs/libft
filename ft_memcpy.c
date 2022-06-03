/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:09:32 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 23:56:57 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 || src == 0)
		return (dst);
	while (i < n)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}
