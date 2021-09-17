#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"


Nod *newnode(char name[30], int tel){   
    Nod *result = malloc( sizeof(Nod) );
    strcpy(result->name, name);
    result->tel=tel;
    result->next=NULL;
    result->prev=NULL;
    return result;
}

void insertnod(Nod ** padr, Nod * tobeadded){
  if (*padr==NULL){   //if the list is empty then simply point at the new node which is the first node
       *padr=tobeadded;
    }
    else {   //Otherwise add new node at the front of list 
      tobeadded->next=*padr;            
      (*padr)->prev=tobeadded;     
      *padr=tobeadded;
      }
      
    }

void removenod(Nod ** padr, Nod * toberemoved){    
   if(toberemoved->prev==NULL){   //If the first node is to be removed, then point to the next node
     *padr=toberemoved->next;

     if (toberemoved->next){      //If its not the only node in the list
        toberemoved->next->prev=NULL;
        }
     }
  
   else if (toberemoved->next){   //if a node after it exists (in the middle of the list), repoint the next and prev pointers
     toberemoved->next->prev=toberemoved->prev;
     toberemoved->prev->next=toberemoved->next;
     }
     
     else { //if its the final node in the list
       toberemoved->prev->next=NULL;
       }
       
   free(toberemoved);
}


void printnod(Nod * p){
  if (p==NULL){ //In the case that the pointer isnt pointing to a node
    printf("Unable to print a node that is empty/doesnt exist\n");
  }

  else{
  printf("Their name is: %s\n",p->name);
  printf("With the following telephone number: %d\n\n",p->tel);
  }
}

void printlist(Nod * p){
  if (p != NULL){ //If the list isnt empty
      Nod * temp = p;
      printf("The list consists of the following nodes:\n");
      int i = 1;  //To count how many times the while loop repeats
    while (temp != NULL){   //Go through the entire list
      printf("Node #%d:\n",i);
      printnod(temp);
      temp = temp->next;
      i++;
    }
  }

  else {
    printf("The list is empty\n");
  }
}

Nod * search(Nod * p, int tel){
  while (p && p->tel!=tel){ //The pointer will move through the list until it reaches the end or finds the telephone number
    p = p->next;
  }
  if(p==NULL){
    printf("You attempted to search for a phone number that didnt exist in the list\n");
  }
  return p;
}