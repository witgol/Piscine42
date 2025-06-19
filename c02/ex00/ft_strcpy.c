/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 20:05:05 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:10:37 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*pti;

	pti = dest;
	while (*src != '\0')
	{
		*pti++ = *src++;
	}
	*pti = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[30] = "soft hearts need protection!";
	char dest[30];

	ft_strcpy(dest, src);

	printf ("string copiada: %s\n", dest);
	return(0);
}
