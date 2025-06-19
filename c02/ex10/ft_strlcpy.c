/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 21:41:58 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:12:38 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	while (src[i])
	++i;
	return (i);
}

#include <stdio.h>

int main(void)
{
	char src[30] = "soft hearts need protection!";
	char dest[30];
	int i = 7;

	ft_strlcpy(dest, src, i);
	printf("%s\n", dest);
	return(0);
}