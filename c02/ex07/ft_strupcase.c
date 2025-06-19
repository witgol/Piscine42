/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:56:28 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:12:05 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 96 && str[i] < 123))
			str[i] -= 32;
		++i;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char s[15] = "SOFT";
	char t[15] = "hearts";
	char r[15] = "NEED";
	char g[15] = "protection!!";
	printf("%s\n", ft_strupcase(s));
	printf("%s\n", ft_strupcase(t));
	printf("%s\n", ft_strupcase(r));
	printf("%s\n", ft_strupcase(g));
}