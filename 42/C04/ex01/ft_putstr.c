#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char* argv[]){
	int	i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	else
	{
		printf("Please enter values");
	}
}
