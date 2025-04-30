#ifndef SHAPES_H
#define SHAPES_H


int tri(int x, int y);
int squ(int x, int y);
int rec(int x, int y);

typedef int (*ShapeFunc)(int, int);

typedef struct {
    const char* name;
    ShapeFunc func;
} Shape;

#endif
