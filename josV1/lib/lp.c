#include <inc/syscall.h>
#include <inc/lp.h>

int syscall(int num, ...) __attribute__((__cdecl__));

int
lp(void)
{
    return syscall(SYS_lp, 0, 0, 0, 0, 0);
}
