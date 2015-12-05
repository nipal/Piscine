#include <errno.h>
#include <stdio.h>

int	main()
{
	errno = 10;
	printf("%d\n", errno);
	return (0);
}
