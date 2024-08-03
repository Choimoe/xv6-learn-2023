#include "kernel/stat.h"
#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(2, "usage: sleep [seconds]\n");
        exit(1);
    }
    int sleep_time = atoi(argv[1]);
    int sleep_ret = sleep(sleep_time);
    if (sleep_ret != 0) {
        fprintf(2, "sleep: failed to sleep %d\n", sleep_time);
        exit(1);
    }
    exit(0);
}