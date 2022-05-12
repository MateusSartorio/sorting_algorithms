#include "../h/item.h"

extern void sort(Item* a, int lo, int hi) {
    int indice_do_menor;

    for(int i = lo; i <= hi; i++) {
        indice_do_menor = i;

        for(int j = i + 1; j <= hi; j++)
            if(less(a[j], a[indice_do_menor]))
                indice_do_menor = j;

        exch(a[i], a[indice_do_menor]);
    }
    
}