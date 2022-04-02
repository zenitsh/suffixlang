#ifndef __OBJECT_H_
#define __OBJECT_H_

#include <malloc.h>
#include <string.h>

typedef struct tag_OBJECT{
    unsigned int type;
    char *data;
}SLObject;

SLObject *SLCreate_Object(unsigned int type,const char *data);
void SLDelete_Object(SLObject *o);

#endif