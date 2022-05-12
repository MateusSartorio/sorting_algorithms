#include "../h/item.h"

extern void sort(Item* a, int lo, int hi) {
    int start_index = lo;
    int end_index = hi;

    while(start_index < end_index) {
        for(int i = start_index; i < end_index; i++)
            compexch(a[i], a[i+1]);
        end_index--;

        for(int i = end_index; i > start_index; i--)
            compexch(a[i-1], a[i]);
        start_index++;
    }
}