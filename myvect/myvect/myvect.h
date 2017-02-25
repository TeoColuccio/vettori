#ifndef MYVECT_H
#define MYVECT_H

/* inizializza il modulo */
void myvect_init();

/* inizializza un vettore con numeri casuali compresi tra un minimo e un massimo */
void myvect_init_in_range(int vett[], int size, int min, int max);

/* stampa gli elementi di un vettore */
void myvect_print(int vett[], int size);
 
/* inverte l'ordine degli elementi */
void myvect_reverse(int vett[], int size);

#endif
