#include "../h/item.h"

extern void sort(Item* a, int lo, int hi) {
    for(int i = lo + 1; i <= hi; i++) {
        int index = i;
        while(less(a[index-1], a[index]) || index > 0) {
            compexch(a[index-1], a[index]);
            index--;
        }
    }   
}