/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:44:41 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:11:53 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 126))
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
	char r[15] = "\n";
	char g[15] = "";
	printf("%d\n", ft_str_is_printable(s));
	printf("%d\n", ft_str_is_printable(t));
	printf("%d\n", ft_str_is_printable(r));
	printf("%d\n", ft_str_is_printable(g));
}