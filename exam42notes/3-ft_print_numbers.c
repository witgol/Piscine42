#include <unistd.h>
void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int main(void)
{
	ft_print_numbers();
	return(0);
}

// void    ft_print_numbers(void)
// {
//     char nb;

//     nb = '0';
//     while (nb <= '9')
//     {
//         write(1, &nb, 1);
//         nb++;
//     }
// }

/* esse exercicio e possivel fazer com write tambem, mas 
deixei comentado a forma comum, que ja aprendemos anteriormente.
*/