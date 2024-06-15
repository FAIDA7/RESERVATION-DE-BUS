#include "functions.h"

int main() {
    int choice;
    //srand(time(NULL)); // Initialize random number generator

    initializeBuses();
    system("CLS");

    while (1) {

        displayMenu();

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("CLS");
                reserveSeat();
                break;
            case 2:
                system("CLS");
                viewReservations();
                break;
            case 3:
                system("CLS");
                searchReservation();
                break;
            case 4:
                system("CLS");
                printf("Au revoir!\n");
                return 0;
            default:
                system("CLS");
                printf("Choix invalide. Réessayez.\n");
        }
    }

    return 0;
}
