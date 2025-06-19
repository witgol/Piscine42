/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:21:59 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:11:01 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char s[15] = "Soft";
	char t[15] = "Hearts";
	char r[15] = "Need";
	char g[15] = "Protection!!";
	printf("%d\n", ft_str_is_alpha(s));
	printf("%d\n", ft_str_is_alpha(t));
	printf("%d\n", ft_str_is_alpha(r));
	printf("%d\n", ft_str_is_alpha(g));
}