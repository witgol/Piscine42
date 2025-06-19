/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 00:58:45 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:30:37 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

#include <stdio.h>
int main(void)
{
	char *s;
	s = "this playlist will make you feel like a 19th century villain";
	printf ("size: %d\n", ft_strlen(s));
}