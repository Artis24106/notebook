#include <stdio.h>
#include <string.h>
unsigned long hashcode = 0x21DD09EC;
unsigned long check_password(const char* p) {
    int* ip = (int*)p;
    int i;
    int res = 0;
    for (i = 0; i < 5; i++) {
        printf("%c\n", 568134124);
        res += ip[i];
        printf("%d\n", res);
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("usage : %s [passcode]\n", argv[0]);
        return 0;
    }
    printf("length %lu\n", strlen(argv[1]));
    if (strlen(argv[1]) != 20) {
        printf("passcode length should be 20 bytes\n");
        return 0;
    }
    printf("hashcode %lu\n", hashcode);

    if (hashcode == check_password(argv[1])) {
        printf("GOOD OOOOOOOO d.\n");
        return 0;
    } else
        printf("wrong passcode.\n");
    return 0;
}
