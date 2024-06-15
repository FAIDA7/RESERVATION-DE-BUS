// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void initializeBuses();
void displayBuses();
void generateReservationCode(char *code);
void reserveSeat();
void viewReservations();
void searchReservation();
void displayMenu();
int phrase_existe(const char *nom_fichier, const char *phrase_recherchee);
int findBus(int bus_id);

#endif
