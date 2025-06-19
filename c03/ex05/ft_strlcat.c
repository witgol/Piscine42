/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:53:09 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:59 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		return (size + s);
	while (src[i] != '\0' && d + i < size -1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

#include <stdio.h>

int main(void)
{
	char s[60] = "Mellon Collie and ";
	char t[] = "the Infinite Sadness";
	int result = ft_strlcat(s, t, 20);

	printf("Resultado: %s\n", s);
	printf("Total: %d\n", result);
	return 0;
}