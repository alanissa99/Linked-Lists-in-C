#ifndef LISTA_H
#define LISTA_H

struct nod {
    char name[30];
    int tel;
    struct nod * next;
    struct nod * prev;
};
typedef struct nod Nod;

void insertnod(Nod ** padr, Nod * tobeadded);
void removenod(Nod ** padr, Nod * toberemoved);
void printnod(Nod * p);
void printlist(Nod * p);
Nod * search(Nod * p, int tel);
Nod *newnode(char name[30], int tel); //My own function to create nodes

#endif