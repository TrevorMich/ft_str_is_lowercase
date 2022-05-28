#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	int output;
	
	output = ft_str_is_lowercase("asdf");
	printf("%d\n", output);

	output = ft_str_is_lowercase("1234");
	printf("%d\n", output);

	output = ft_str_is_lowercase("");
	printf("%d\n", output);


}
