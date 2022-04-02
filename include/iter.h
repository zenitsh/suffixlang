#ifndef __ITER_H
#define __ITER_H

#include "object.h"

typedef struct tag_SLITER{
    SLObject *obj;
    struct tag_SLITER *pnext;
}SLIterator;

#endif