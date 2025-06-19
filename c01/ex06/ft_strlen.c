/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 21:28:35 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/17 22:29:54 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	size;

	size = 0;
	while (*(str + size))
		size++;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	char *s;

	s = "o sol ja nasceu la na fazendinha?";
	printf ("resultado: %d\n", ft_strlen(s));
}