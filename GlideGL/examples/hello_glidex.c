#include <glidex.h>
#include <stdio.h>

int main(void)
{
    printf("Starting GlideX...\n");
    gxInit();

    // Normally you would load surfaces and render here
    // This is just a placeholder example

    gxPresent();
    gxShutdown();

    printf("GlideX shutdown complete.\n");
    return 0;
}
