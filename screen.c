#include <stdbool.h>
#include <stddef.h>

#include "vga.h"
#include "temp.h"


#define VGA_TEXT_BUFFER 0xB8000

static vga_cell *video = (vga_cell*)0xB8000;

static vga_color color = VGA_COLOR_RED;
static vga_color colort = VGA_COLOR_GREEN;

void screen(void)
{

 video[0] = (color << 8) | 'H';
 video[1] = (colort << 8) | 'I';
	
}
