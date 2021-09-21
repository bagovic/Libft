#include "libft.h"
#include "string.h"

int main()
{
	char dest[30]; memset(dest, 'C', 5);
	char * src = (char *)"AAAAAAAAA";
	//printf("strlcat: %i \n", strlcat(dest, src, -1));
	printf("ft_strlcat: %zu", ft_strlcat(dest, src, -1));
	return (0);
}