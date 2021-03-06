/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:15:39 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/01 17:27:01 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char) c;
	while (*s && *s != cc)
		s++;
	if (cc == *s)
		return ((char *) s);
	return (0);
}
