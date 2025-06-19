/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:39:16 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:31 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
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

	ft_strcat(s, t);
	ft_strcat(s, r);
	ft_strcat(s, g);

	printf("%s\n", s);
	return(0);
}