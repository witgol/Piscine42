/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:07:15 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:12:17 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91))
			str[i] += 32;
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
	printf("%s\n", ft_strlowcase(s));
	printf("%s\n", ft_strlowcase(t));
	printf("%s\n", ft_strlowcase(r));
	printf("%s\n", ft_strlowcase(g));
}