#include <unistd.h>
void aff_n()
{
	write(1,"n\n",2);
}

int main(void)
{
	aff_n();
	return(0);
}

/* o exercicio consiste em printar um caractere com uma quebra de linha,
apenas isso. para fazer em write, basta modificar o numero de bytes,
ex: write (1, 'n', 1) seria write(1,"n\n",2) nesse exercicio, pois ele pede 
um caractere com quebra de linha, o que adiciona mais um byte na saida. Lembrando
que quando o exercicio pedir apenas pela funcao, deve ser enviado sem o main.
*/	