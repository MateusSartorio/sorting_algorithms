#include "../h/item.h"

extern void sort(Item* a, int lo, int hi) {
    for(int i = lo; i < hi; i++)
        for(int j = i; j < hi; j++)
            compexch(a[j], a[j + 1]);
}