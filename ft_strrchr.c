/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:29:11 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/01 19:08:22 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*to_return;
	char	cc;

	to_return = 0;
	cc = (char) c;
	while (*s)
	{
		while (*s && *s != cc)
			s++;
		if (*s == cc)
			to_return = (char *) s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (to_return);
}
