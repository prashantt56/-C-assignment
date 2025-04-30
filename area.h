#ifndef AREA_H
#define AREA_H
int tri(int x, int y);
int squ(int x, int y);
int rec(int x, int y);
typedef int (*AreaFunc)(int, int);
struct Area {
    const char* name;
    AreaFunc func;
};
#endif
