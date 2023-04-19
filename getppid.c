#include "main.h"
/**
 *
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%d\n", ppid);
	return (0);
}
