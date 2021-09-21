#include "libft.h"
#include "string.h"

int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("strlcat: %s \n", strnstr(haystack, needle, -1));
	printf("ft_strlcat: %s", ft_strnstr(haystack, needle, -1));
	return (0);
}
