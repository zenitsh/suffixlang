#include "label.h"
#include <cstddef>
#include <string.h>
#include <malloc.h>

SLTNode *insertTNode(SLTNode *root,char c){
    SLTNode *r;
    r = (SLTNode*)malloc(sizeof(SLTNode*));
    r->c = c;
    r->data = 0;
    memset(r->child, 0, sizeof(char)*26);
    root->child[c-'a']=r;
    return r;
}

SLTNode *SLInsertTNode(SLTNode *root,const char *name,char *data){
    int n=strlen(name);
    SLTNode *r = root;
    for(int i=0;i<n;++i){
        r = insertTNode(r, name[i]);
    }
    r->data = data;
    return r;
}

char *SLGetTNode(SLTNode *root,const char *name){
    int n=strlen(name);
    SLTNode *r = root;
    int b=0;
    for(int i=0;i<n;++i){
        if(r->child[name[i]]){
            b=1;
            r=r->child[name[i]];
        }
    }
    if(b){
        return r->data;
    }
    return 0;
}