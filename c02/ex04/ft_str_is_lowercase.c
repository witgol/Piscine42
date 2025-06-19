/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:29:15 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:11:32 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 97 || str[i] > 122))
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
	char g[15] = "protection!!";
	printf("%d\n", ft_str_is_lowercase(s));
	printf("%d\n", ft_str_is_lowercase(t));
	printf("%d\n", ft_str_is_lowercase(r));
	printf("%d\n", ft_str_is_lowercase(g));
}
