#ifndef __LABEL_H
#define __LABEL_H

typedef struct tag_TRIENODE{
   char c;
   char *data;
   struct tag_TRIENODE *child[26]; 
}SLTNode;

SLTNode *SLInsertTNode(SLTNode *root,const char *name,char *data);

char *SLGetTNode(SLTNode *root,const char *name);

#endif