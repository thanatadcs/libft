/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:48:54 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 20:17:36 by tanukool         ###   ########.fr       */
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
	{
		to_return = malloc(back - front + 2);
		ft_strlcpy(to_return, s1 + front, back - front + 2);
	}
	else
	{
		to_return = malloc(1);
		to_return[0] = '\0';
	}
	return (to_return);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = ft_strtrim("abcdba", "acb");
	printf("%s\n", s);
}
*/
