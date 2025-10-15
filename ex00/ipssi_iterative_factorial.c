#include <stdio.h>

int ipssi_iterative_factorial(int nb)
{
	int	fact;
 
	fact = 1;
	if (nb < 0)
		return 0;
	while (nb >= 1)
	{
		fact = fact*nb;
		nb--;
	}
	return fact;
}

int main ()
{
	printf("%d\n",ipssi_iterative_factorial(2));
	return 1;
}
