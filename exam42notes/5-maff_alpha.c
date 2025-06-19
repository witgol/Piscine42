#include <unistd.h>
void	maff_alpha(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}

int	main(void)
{
	maff_alpha();
	return(0);
}


/* seguindo a logica do aff, esse exercicio pode ser feito da mesma forma.
conte sempre o numero de caracteres + a quebra de linha. outro ponto importante:
aspas duplas sao usadas quando há mais de um caractere.
*/