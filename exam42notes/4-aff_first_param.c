#include <unistd.h>
void aff_first_param(void)
{
	write(1, "cris\n", 5);
}
int main(void)
{
	aff_first_param();
	return (0);
}

/*esse exercicio pede uma string como argumento, 
o que funciona tambem com o write. 
*/