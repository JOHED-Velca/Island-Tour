#include <stdio.h>

typedef struct island
{
    char* name;
    char* opens;
    char* closes;
    struct  island* next;
}island;

void display(island* start)
{
    island* i = start;
    for (;i!= NULL;i= i->next)
    {
        //printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
        printf("Name: %s \n", i->name);
    }
}

void menu()
{
    int option;

    printf("--------------ISLANDS TOUR--------------\n");
    printf("\t1. Show current itinerary.");
    printf("\t2. Change itinerary.");
    printf("\t3. Exit");
    printf("----------------------------------------\n");
    printf("Choose an option (1-3): ");
    scanf("%d", option);
}

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

    display(&amity);
    
    printf("\n");

    island skull = {
        .name = "Skull",
        .opens = "09:00",
        .closes = "17:00",
        .next = NULL
    };

    IslaNublar.next = &skull;
    skull.next = &shutter;

    display(&amity);

    return 0;
}