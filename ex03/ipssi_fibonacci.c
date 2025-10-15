#include <stdio.h>

int	ipssi_fibonacci(int index)
{
	if (index < 0)
		return (1);
	if (index == 0)
		return (0);
	return (ipssi_fibonacci(index - 1) + ipssi_fibonacci(index - 2));
}
