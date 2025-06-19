/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:08:57 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:22 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && (s1[i] == s2[i]))
	i++;
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int main(void)
{
	char s[60] = "Mellon Collie ";
	char t[] = "and the Infinite";
	char r[] = "and tha Infinite";
	char g[] = "Sadness";
	char f[] = "Sadness";
	int i = 4;

	printf("%d\n", ft_strncmp(s, t, i));
	printf("%d\n", ft_strncmp(t, s, i));
	printf("%d\n", ft_strncmp(r, g, i));
	printf("%d\n", ft_strncmp(g, r, i));
	printf("%d\n", ft_strncmp(f, g, i));
}
