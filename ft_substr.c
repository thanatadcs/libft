/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:50:23 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 11:32:21 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;
	size_t	s_len;
	size_t	return_len;

	s_len = ft_strlen(s);
	if (start + 1 > s_len)
		return_len = 0;
	else if (s_len - start > len)
		return_len = len;
	else
		return_len = s_len - start;
	to_return = malloc((return_len + 1) * sizeof(char));
	if (to_return == 0)
		return (0);
	ft_strlcpy(to_return, s + start, return_len + 1);
	return (to_return);
}
