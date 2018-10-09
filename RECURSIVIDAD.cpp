///Recursividad...Recursividad...Recursividad...Recursividad...Recursividad...Recursividad
#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

/* Prototipo de función */
void Permutaciones(char *, int l=0);

int main(int argc, char *argv[]) {
   char palabra[] = "BRAYAN";

   Permutaciones(palabra);

   cin.get();
   return 0;
}

void Permutaciones(char * cad, int l) {
   char c;    /* variable auxiliar para intercambio */
   int i, j;  /* variables para bucles */
   int n = strlen(cad);

   for(i = 0; i < n-l; i++) {
      if(n-l > 2) Permutaciones(cad, l+1);
      else cout << cad << ", ";
      /* Intercambio de posiciones */
      c = cad[l];
      cad[l] = cad[l+i+1];
      cad[l+i+1] = c;
      if(l+i == n-1) {
         for(j = l; j < n; j++) cad[j] = cad[j+1];
         cad[n] = 0;
      }
   }
}
