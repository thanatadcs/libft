/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:48:54 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 21:45:35 by tanukool         ###   ########.fr       */
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
	size_t	front;
	size_t	back;
	size_t	return_len;
	char	*to_return;

	front = 0;
	back = 0;
	while (s1[back] && s1[back + 1])
		back++;
	if (front == back && is_contain(*s1, set))
		return (calloc(1, 1));
	while (s1[front] && is_contain(s1[front], set))
		front++;
	while (front < back && is_contain(s1[back], set))
		back--;
	if (front <= back)
		return_len = back - front + 1;
	else
		return_len = 0;
	to_return = malloc((return_len + 1) * sizeof(char));
	if (to_return == 0)
		return (0);
	ft_strlcpy(to_return, s1 + front, return_len + 1);
	return (to_return);
}
