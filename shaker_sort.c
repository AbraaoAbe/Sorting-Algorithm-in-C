//
// Created by AbeSantos on 27/02/2021.
//

#include "shaker_sort.h"

void shaker_sort(Item *a, int lo, int hi){
    for (int i = 0; i < hi/2; ++i) {
        for (int j = 0, k=hi-1; j < hi-1; ++j, --k) {
            compexch(a[j],a[j+1])
            compexch(a[k-1], a[k])
        }
    }
}