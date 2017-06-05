/* MyVect_search */

#ifndef MYVECT_SEARCH
#define MYVECT_SEARCH

int ricerca_lineare(int x, int v[], const int size);
int ricerca_binaria(int x, int v[], int size);
int ricerca_binaria_helper(int x, int v[], int low, int high);

#endif
