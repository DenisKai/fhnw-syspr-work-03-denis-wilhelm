#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]) {
	int fd = open(argv[1], O_WRONLY|O_TRUNC|O_CREAT, S_IRUSR|S_IWUSR); //O_TRUNC sets file to 0
	if (fd == -1) { perror("open"); return -1; }
	char *msg = argv[2];
	int len = strlen(msg);
	int w = write(fd, msg, len);
	if (w == -1) { perror("write"); return -1; }

	close(fd); //close file
	// other stuff if needed
	return 0;
}
