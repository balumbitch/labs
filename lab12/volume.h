#ifndef VOLUME_H
#define VOLUME_H

typedef struct {
    double a;
    double b;
    double h;
} Parallelepiped;

int findMinVolume(Parallelepiped parallelepipeds[], int n);

#endif
