/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:56:38 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:09:54 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *a;
	}
}

#include <stdio.h>

int	main (void)

{
	int x = 42;
	int y = 21;

	ft_ultimate_div_mod (&x, &y);

	printf ("divisao: %d\n", x);
	printf ("resto: %d\n", y);
	return (0);
}