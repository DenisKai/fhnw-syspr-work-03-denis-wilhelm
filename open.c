#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main (void) {
	int fd = open("hello.txt", O_RDWR);
	if (fd == -1) {
		perror("open");
		return -1;
	}

	printf("fd: %d\n", fd);
	int len = 32;
	char buf[len];
	int r = read(fd, buf, len);
	if (r == -1) {perror("read"); return -1;}
	printf("How many bytes read: %d\n", r);

	while (r > 0) {
		int w = write(STDOUT_FILENO, buf, r); // write to STDOUT
		if (w == -1){perror("write"); return -1;}
		r = read(fd, buf, len);
	}

	return 0;
}
