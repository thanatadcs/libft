/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:48:54 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 12:57:11 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_contain(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	return_len;
	size_t	i;
	char	*to_return;

	return_len = 0;
	i = 0;
	while (s1[i])
		if (!is_contain(s1[i++], set))
			return_len++;
	to_return = malloc((return_len + 1) * sizeof(char));
	if (to_return == 0)
		return (0);
	i = 0;
	while (*s1)
	{
		if (!is_contain(*s1, set))
			to_return[i++] = *s1;
		s1++;
	}
	to_return[i] = '\0';
	return (to_return);
}
