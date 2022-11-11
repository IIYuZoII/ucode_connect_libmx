#include "../inc/libmx.h"

char *mx_file_to_str_via_fd(const int fd, size_t buf_size) {
    if (fd < 0) return NULL;
    char buff[1];
    size_t i = 0;
    char *str_res = (char *)malloc(sizeof(char) * buf_size);
    // int lenght = 0;

    while (read(fd, buff, 1)) {
        if (i > buf_size) {
            printf("%zu ", i);
            // mx_realloc(str_res, i);
            buf_size = i;
        }
        str_res[i] = buff[0];
        i++;
    }
    printf("\n1========================1\n%s\n2========================2\n", str_res);
    // // int fd_temp = fd;

    // while (read(fd, &buff, 1) > 0) {
    //     lenght++;
    //     printf("%c", buff);
    // }
    // printf("\n");

    // // if (close(fd_temp) == -1) return NULL;
    // // fd_temp = fd;
    // // if (fd_temp != 0) return NULL;
    // str_res = mx_strnew(lenght);

    // for (int i = 0; i < lenght; i++) {
    //     read(fd, &buff, 1);
    //     printf("%c", buff);
    //     str_res[i] = buff;
    // }
    // printf("\n");
    // // if (close(fd) == -1) return NULL;
    return str_res;
}

// int main(void) {
//     int fd = open("../text.txt", O_RDONLY);
//     // printf("%s\n", mx_file_to_str_via_fd(fd, 30));
//     mx_file_to_str_via_fd(fd, 30);
//     // mx_file_to_str_via_fd(fd);
//     return 0;
// }

// int main(int argc, char const *argv[]) {
//     if (argc) {}
//     printf("%s\n", mx_file_to_str(argv[1]));
//     return 0;
// }
