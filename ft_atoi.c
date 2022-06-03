/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 03:02:09 by tanukool          #+#    #+#             */
/*   Updated: 2022/06/03 10:46:21 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	if (c < 0)
		return (-1);
	return ((cc >= '\t' && cc <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	to_return;
	int	sign;

	to_return = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		to_return = to_return * 10 + *str++ - '0';
	return (sign * to_return);
}
