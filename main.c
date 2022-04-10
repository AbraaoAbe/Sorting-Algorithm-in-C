#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "selectsort.h"
#include "insert_sort.h"
#include "bubble_sort.h"
#include "shaker_sort.h"
#include "merge_sort.h"

extern void sort(Item *a, int lo, int hi){
    //select_sort(a, lo, hi);
    //insert_sort(a, lo, hi);
    //bubble_sort(a, lo, hi);
    //shaker_sort(a, lo, hi);
    sort_m(a, lo, hi);
}

static Item * cria_Item(int n){
    Item *a = (Item*) malloc(sizeof(Item)*n);
    return a;
}

static void le_Item(Item *a){
    int i = 0;
    //FILE *fp = fopen("in.txt","r");
    while (!feof(stdin)){
        fscanf(stdin, "%d", &a[i]);
        i++;
    }
}

static void imprime_Item(Item *a, int max){
    for (int i = 0; i < max; ++i) {
        printf("%d\n", a[i]);
    }
    printf("\n");
}
int main(int argc, char ** argv) {
    int n = atoi(argv[1]);

    Item *v = cria_Item(n);

    le_Item(v);
    imprime_Item(v, n);
    printf("\n");
    sort(v, 0, n);
    imprime_Item(v, n);




//    Item a[10];
//    srand(10);
//    for (int i = 0; i < 10; ++i) {
//        a[i] = rand()%100;
//    }
//    imprime_Item(a, 10);
//
//    insert_sort(a, 0, 10);
//    imprime_Item(a, 10);

    return 0;
}
