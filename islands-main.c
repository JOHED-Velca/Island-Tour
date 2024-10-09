#include <stdio.h>

typedef struct iland
{
    char* name;
    char* opens;
    char* closes;
    struct  island* next;
}island;

int main(int argc, char* argv[]) {
    island amity = {
        .name = "Amity",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    island craggy = {
        .name = "Craggy",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    island IslaNublar = {
        .name = "Isla Nublar",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    island shutter = {
        .name = "Shutter",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    amity.next = &craggy;
    craggy.next = &IslaNublar;
    IslaNublar.next = &shutter;

    return 0;
}