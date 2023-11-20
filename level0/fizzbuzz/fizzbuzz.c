#include <unistd.h>

void putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int main(void)
{
	int n;
	n = 1;
	while(n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if(n % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(n);
		n++;
		write(1, "\n", 1);
	}
	return(0);
}
