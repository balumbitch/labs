#include "func.h"

double calculateVolume(double a, double b, double h) {
    return a * b * h;
}

int findMinVolume(Parallelepiped parallelepipeds[], int n) {
    double minVolume = calculateVolume(parallelepipeds[0].a, parallelepipeds[0].b, parallelepipeds[0].h);
    int minVolumeIndex = 0;

    for (int i = 1; i < n; i++) {
        double volume = calculateVolume(parallelepipeds[i].a, parallelepipeds[i].b, parallelepipeds[i].h);
        if (volume < minVolume) {
            minVolume = volume;
            minVolumeIndex = i;
        }
    }

    return minVolumeIndex;
}
