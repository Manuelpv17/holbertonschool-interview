#ifndef SLIDE_H
#define SLIDE_H

#define SLIDE_LEFT 1
#define SLIDE_RIGHT 2

#include <stdio.h>

int slide_line(int *line, size_t size, int direction);
void right_side(int *line, size_t size);

#endif
