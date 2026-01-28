#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
	printf("=== ft_put* functions tests ===\n\n");

	printf("Test 1: ft_putchar_fd('A', 1): ");
	ft_putchar_fd('A', 1);
	printf("\n");
	
	printf("Test 2: ft_putstr_fd(\"Hello\", 1): ");
	ft_putstr_fd("Hello", 1);
	printf("\n");
	
	printf("Test 3: ft_putendl_fd(\"World\", 1): ");
	ft_putendl_fd("World", 1);
	
	printf("Test 4: ft_putnbr_fd(42, 1): ");
	ft_putnbr_fd(42, 1);
	printf("\n");
	
	printf("Test 5: ft_putnbr_fd(-42, 1): ");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	
	printf("Test 6: ft_putnbr_fd(0, 1): ");
	ft_putnbr_fd(0, 1);
	printf("\n");
	
	printf("Test 7: ft_putnbr_fd(2147483647, 1): ");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	
	printf("Test 8: ft_putnbr_fd(-2147483648, 1): ");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");

	printf("\n✓ All output tests completed\n");

	return (0);
}
