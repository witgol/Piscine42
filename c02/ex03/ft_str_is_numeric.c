/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:20:03 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:11:16 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57))
			return (0);
		++i;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char s[15] = "777";
	char t[15] = "Hearts";
	char r[15] = "1234";
	char g[15] = "Protection!!";
	printf("%d\n", ft_str_is_numeric(s));
	printf("%d\n", ft_str_is_numeric(t));
	printf("%d\n", ft_str_is_numeric(r));
	printf("%d\n", ft_str_is_numeric(g));
}