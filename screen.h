#ifndef SCREEN_H
#define SCREEN_H

#include <stdint.h>

typedef struct {
  int cursor_row;
  int cursor_col;
} Mouse;

 typedef struct
 {
  int width;
  int height;
  uint16_t *video_memory;
    
} Screen;



void screen(const char* str);
void print_color(const char* str, char color);

#endif