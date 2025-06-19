/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:17:15 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:40 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && nb--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char s[60] = "Mellon Collie ";
	char t[] = "and the ";
	char r[] = "Infinite ";
	char g[] = "Sadness";
	int i = 2;

	ft_strncat(s, t, i);
	ft_strncat(s, r, i);
	ft_strncat(s, g, i);

	printf("%s\n", s);
	return(0);
}