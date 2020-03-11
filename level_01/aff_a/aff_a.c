#include <unistd.h>

void aff_a(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		{
			if(s[i] == 'a')
				{
					write(1, "a", 1);
					break;
				}
			s++;
		}
		write(1,"\n", 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		aff_a(av[1]);
	else
		write(1,"a\n", 2);
	
	return (0);
}
