/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:41:39 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:09:35 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)

{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int main (void)
{
	int o, h;
	o = 21;
	h = 42;
	printf ("before \n %d %d\n", o, h);
	ft_swap (&o, &h);
	printf ("after \n %d %d\n", o, h);
	return (0);
}