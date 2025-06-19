/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:38:07 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:11:43 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90))
			return (0);
		++i;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char s[15] = "SOFT";
	char t[15] = "hearts";
	char r[15] = "NEED";
	char g[15] = "";
	printf("%d\n", ft_str_is_uppercase(s));
	printf("%d\n", ft_str_is_uppercase(t));
	printf("%d\n", ft_str_is_uppercase(r));
	printf("%d\n", ft_str_is_uppercase(g));
}