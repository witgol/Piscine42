/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:54:00 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:09:15 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int	*nbr)

{
	*nbr = 42;
}

#include <stdio.h> 

int main (void)
{
	int a = 32;
	printf("esse é o endereço da memoria: %p\n", &a);
	printf ("o valor da variavel a é: %d\n", a);
	ft_ft (&a);
	printf ("o valor da var com o endereço apontado pelo ponteiro: %d\n", a);
	return (0);
}
