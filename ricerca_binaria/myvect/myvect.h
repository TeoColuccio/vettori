/* myvect.h */

#ifndef MYVECT_H
#define MYVECT_H

/* libreria per la gestione di vettori di interi */

void myvect_init();

/* inizializza un vettore con numeri pseudocasuali nell'intervallo [min, max] */
void myvect_init_in_range(int v[], int size, int min, int max);

/* inverte l'ordine degli elementi */
void myvect_reverse(int v[], int size);

/* stampa gli elementi del vettore */
void myvect_print(const int v[], int size);

#endif
