#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int spc;

	i = 0;
	spc = 0;
	if (argc == 2)
	{
		while(argv[1][i] == ' ' || argv [1][i] == '\t')
			i++;
		while(argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				spc = 1;
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				if (spc)
					write(1, " ", 1);;
				spc = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

