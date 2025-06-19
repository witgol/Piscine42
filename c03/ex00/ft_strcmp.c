/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:36:07 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:13 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i] != '\0') && s1[i] == s2[i])
	i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
	char s[60] = "Mellon Collie ";
	char t[] = "and the ";
	char r[] = "Infinite";
	char g[] = "Sadness";
	char f[] = "Sadness";
	printf("%i\n", ft_strcmp(s, t));
	printf("%i\n", ft_strcmp(t, s));
	printf("%i\n", ft_strcmp(r, g));
	printf("%i\n", ft_strcmp(g, r));
	printf("%i\n", ft_strcmp(f, g));
}