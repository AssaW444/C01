#include <stdio.h>

int	ipssi_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ipssi_recursive_factorial(nb - 1));
}
