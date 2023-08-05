#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(int argc, char* argv[]){
	int i = 1;
	if (argc > 1)
	{
		printf("number of characters is: %d\n", ft_strlen(argv[i]));
	}
}
