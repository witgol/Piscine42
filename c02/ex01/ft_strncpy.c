/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 20:05:34 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:10:48 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[30] = "soft hearts need protection!";
	char dest[30];
	int i = 7;

	ft_strncpy(dest, src, i);
	printf("%s\n", dest);
	return(0);
}