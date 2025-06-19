/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:59:27 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:10:06 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(void)
{
	char *str = "o sol ja nasceu la na fazendinha?";
	ft_putstr(str);
	write (1, "\n", 1);
}