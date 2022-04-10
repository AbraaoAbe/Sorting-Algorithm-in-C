//
// Created by AbeSantos on 26/02/2021.
//

#include "selectsort.h"

void select_sort(Item *a, int lo, int hi){
    int ult = 0;
    int menor=1000000000;
    int indiceMen =0;
    int aux = 0;
    for (int i = 0; i < hi; ++i) {
        for (int j = i+1; j < hi; ++j) {
             if (menor > a[j] ){
                 indiceMen = j;
                 menor = a[j];
             }
        }
        menor = 1000000000;
        compexch(a[i], a[indiceMen])
    }
}
