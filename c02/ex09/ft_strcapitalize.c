/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-lima <ide-lima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:41:41 by ide-lima          #+#    #+#             */
/*   Updated: 2025/06/19 18:12:28 by ide-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (str[i] >= 96 && str[i] <= 123)
		{
			if (word)
				str[i] -= 32;
		}
		else if (str[i] >= 64 && str[i] <= 91)
		{
			if (!word)
				str[i] += 32;
		}
		if ((str[i] >= 96 && str[i] <= 123) || (str[i] >= 64 && str[i] <= 91)
			|| (str[i] >= 47 && str[i] <= 58))
			word = 0;
		else
			word = 1;
		++i;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char s[30] = "SOFT hearts NEED protection!!";
	printf("%s\n", ft_strcapitalize(s));
}