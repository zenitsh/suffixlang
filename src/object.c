#include "object.h"

SLObject *SLCreate_Object(unsigned int type,const char *data){
    SLObject *sl = (SLObject*)malloc(sizeof(SLObject));
    sl->type = type;
    sl->data = (char*)malloc(sizeof(char)*strlen(data));
    return sl;
}

void SLDelete_Object(SLObject *o){
    free(o->data);
    free(o);
}