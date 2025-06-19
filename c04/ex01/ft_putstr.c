/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 04:18:18 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:14:27 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write (1, str, 1);
	if (*str)
		ft_putstr (str + 1);
}

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
		ft_putstr(argv[i]), write(1, "\n", 1);
}