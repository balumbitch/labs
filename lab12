#include <stdio.h>
#include "func.h"

int main() {
    int n;
    printf("Введите количество параллелепипедов: ");
    scanf("%d", &n);

    Parallelepiped parallelepipeds[n];
    for (int i = 0; i < n; i++) {
        printf("Введите стороны a, b и высоту h для параллелепипеда. %d: ", i+1);
        scanf("%lf %lf %lf", &parallelepipeds[i].a, &parallelepipeds[i].b, &parallelepipeds[i].h);
    }

    int minVolumeIndex = findMinVolume(parallelepipeds, n);
    printf("Параллелепипед наименьшего объёма имеет стороны: a=%.2f, b=%.2f, h=%.2fn", parallelepipeds[minVolumeIndex].a, parallelepipeds[minVolumeIndex].b, parallelepipeds[minVolumeIndex].h);

    return 0;
}
