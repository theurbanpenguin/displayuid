#include <stdio.h>
#include <unistd.h>
int main () {
	int real = getuid();
	int euid = geteuid();
	printf("The real UID =: %d\n", real);
	printf("The effective UID =: %d\n", euid);
	return 0;
}
