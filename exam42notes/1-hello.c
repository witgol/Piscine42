#include <unistd.h>
void	hello(void)
{
	write(1, "Hello World!\n", 13);
}

int	main(void)
{
	hello();
	return(0);
}

/*logica explicada no aff.
todos esses exercicios tem sua versao contraria, mas 
eles podem ser resolvidos apenas com write. lemnbrem sempre 
de nao cair em pegadinhas e boa prova a todos!
*/