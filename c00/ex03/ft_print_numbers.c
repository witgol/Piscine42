/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:41:02 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:44:03 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '/';
	while (++number < ':')
	{
		write (1, &number, 1);
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }