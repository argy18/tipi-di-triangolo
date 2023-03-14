#include <stdio.h>

 int main()
 {
     int l1;
     int l2;
     int l3;
     printf("inserisci un numero");
     scanf(" %d", &l1);
     printf("Inserisci un altro numero");
     scanf(" %d", &l2);
     printf("Inserisci un terzo numero");
     scanf(" %d", &l3);

     if(l1+l2>l3 && l2+l3>l1 && l3+l1>l2 && l1==l2 && l2==l3)
     {
     printf("triangolo equilatero\n");
     }
     else if(l1+l2>l3 && l2+l3>l1 && l3+l1>l2 && l1==l2  && l1!=l3)
     {
     printf("triangolo isoscele\n");
     }
     else if(l1+l2>l3 && l2+l3>l1 && l1 !=l3)
     {
     printf("triangolo scaleno\n");
     }
     else
     {
     printf("no\n");
     }
     }





