#include <stdlib.h>
#include <string.h>
#include "stack.h"

stack *
create_stack(int capacity, int unit){
    stack * st = malloc(sizeof(stack));
    st -> capacity = capacity;
    st -> unit = unit;
    st -> top = 0;
    st -> buffer = calloc(capacity, unit);
    return st ;

}

void
delete_stack (stack * st){
    if(st -> buffer != 0x0)
        free(st->buffer);
    free(st);
}

int
push(stack * st, void * elem){
    if (is_full(st))
        return 1;
    memcpy(st -> buffer + ((st->top) * (st->unit)), elem, st - unit);
    st -> top += 1;

    return 0;
}

int
pop (stack * st, void * elem){
    if(is_empty(st))
        return 1;
    memcpy()
}