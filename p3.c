#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"


int main(){

    // Comment and uncomment in any fashion to check the functionality of the code
    
    //////////Declaring all my pointers:
    Nod * padr = NULL;    //The pointer will point to the head of the list
    Nod * test;
    Nod * test2;
    Nod * test3;
    Nod * test4;
    Nod * searchptr;
    Nod * empty = NULL;
    
    //////////Creating Nodes:
    test = newnode("alan", 111);
    test2 = newnode("chloe",222);
    test3 = newnode("chris",333);
    //test4 = newnode("asik",444);
    
    //////////Inserting Nodes:
    insertnod(&padr,test);
    insertnod(&padr,test2);
    insertnod(&padr,test3);

    //////////Removing Nodes:
    removenod(&padr,test);
    removenod(&padr,test2);
    removenod(&padr,test3);
    //removenod(&empty,test);    //attempting to remove a node from an empty list
    //removenod(&padr,test4);     //Attempting to remove a node which isnt in a list
    
    //////////Printing the node:
    //printnod(padr);
    //printnod(test3);
    //I have an issue of printing a node that has been removed from a list


    //////////Printing the list:
    //printlist(empty); //Testing to print an empty list
    //printlist(padr);  //Testing to print a list that isnt empty
  

    //////////Retrieving a node for given telephone number:
    searchptr = search(padr,111); //Searching for the telephone number 333 in the list padr
    printnod(searchptr);


    //when running use the following : gcc p3.c lista.c
    //                                 ./a.out
  
}