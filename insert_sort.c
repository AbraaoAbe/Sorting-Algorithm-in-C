//
// Created by AbeSantos on 26/02/2021.
//

#include "insert_sort.h"

static void shift_left(Item *a, int min, int max){
    for (int i = max; i > min ; --i) {
        a[i] = a[i-1];
    }
}

void insert_sort(Item *a, int lo, int hi){
    Item aux[hi];
    int maxAux = 1;
    aux[0] = a[0];

    for (int i = 1; i < hi; ++i) {
        for (int k = 0; k < maxAux && k < hi; ++k) {
            if (less(a[i],aux[k])){
                shift_left(aux, k, maxAux);
                aux[k] = a[i];
                maxAux++;
                break;
            }else if (k == maxAux-1){
                aux[maxAux] = a[i];
                maxAux++;
                break;
            }
        }
    }
    for (int i = 0; i < hi; ++i) {
        a[i] = aux[i];
    }
}