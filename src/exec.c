#include "exec.h"
#include "label.h"
#include "object.h"

SLObject *SLExec(SLTNode **label,SLObject **stack,int *pointer,SLIterator *iter){
    unsigned int t = iter->obj->type;
    SLObject *o;
    char *s;
    int l=0;
    int tl;
    switch (t) {
    case 'a':case '0':case '\'':
        stack[*pointer++]=iter->obj;
        break;
    case 'f':
        s = iter->obj->data;
        tl=l;
        o=NULL;
        while(o==NULL&&l>=0){
            o = (SLObject*)SLGetTNode(label[l], s);
            --l;
        }
        if(o->type=='F'){
            if(0==strcmp(o->data,"add")){
                
            }
        }
    }
}