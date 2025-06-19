/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:50:52 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:09:45 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>

int main (void)

{
	int div, mod, c, d;

	c = 42;
	d = 21;

	ft_div_mod (c, d, &div, &mod);
	printf ("\n%d/%d = %d left %d\n\n", c, d, div, mod);
	return (0);
}