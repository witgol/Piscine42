/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:35:43 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:44:07 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-5);
// 	ft_is_negative(4);
// 	ft_is_negative(10);
// 	ft_is_negative(-2);
// }
