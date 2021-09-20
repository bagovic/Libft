#include "libft.h"
#include "string.h"

int main()
{
	printf("strncmp: %i \n", strncmp("1234", "1235", -5));
	printf("ft_strncmp: %i", ft_strncmp("1234", "1235", -1));
	return (0);
}