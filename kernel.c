#include <stdbool.h>
#include <stddef.h>

#include "vga.h"
#include "screen.h"

#if defined(__linux__)
#error "you are not using cross compiler and blah blah"
#endif

#if !defined(__i386__)
#error "This tutorial needs to be compiled with a ix86-elf compiler blah blah"
#endif

//#define VGA_TEXT_BUFFER 0xB8000


void kernel_main()
{
    screen();

    while (1) {}
}
