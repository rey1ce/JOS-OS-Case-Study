#include <inc/syscall.h>
#include <inc/np.h>

int syscall(int num, ...) __attribute__((__cdecl__));

int
np(void)
{
    return syscall(SYS_np, 0, 0, 0, 0, 0);
}
