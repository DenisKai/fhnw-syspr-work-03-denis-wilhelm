#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	printf("Arguments: %i", argc);
	int fd = open(argv[1], O_RDONLY);

	int len = 10;
	char buf[len];
	int r = read(fd, buf, len);


	int fd_w = open(argv[2], O_WRONLY|O_TRUNC|O_CREAT);
	while (r > 0) {
		write(fd_w, buf, r);
		r = read(fd, buf, len);
	}

	close(fd);
	close(fd_w);

	return 0;
}
