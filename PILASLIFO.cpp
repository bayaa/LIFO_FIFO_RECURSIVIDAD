///PILA  LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO LIFO
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 using namespace std;
struct pilas
{
int Dato;
pilas *a;
}*c,*e;

void menu(void);
void ingresar(void);
void sacar (void);
void actualizar_pila(void);

main()
{
menu();
}
void menu(void)
{
    cout<<"\tPILAS TIPO LIFO";
int y,opc;
 for(;;)
 {
 cout<<"\n1. Ingresar datos a la pila";
 cout<<"\t2. Sacar datos de la pila";
 cout<<"\t0. Terminar";
 cout<<"\n Ingrese opcion: ";cin>>opc;
 switch(opc)
 {
 case 1:
 ingresar();
 break;
 case 2: sacar();
 break;
 case 0: exit(1);
 default: cout<<"\n Opcion no valida!!"; break;
 }
actualizar_pila();
cout<<"\n\nOprima ENTER";
getch();
 }
}

void ingresar (void)
{
 if(!c)
 {
 c=new(pilas);
 cout<<"Ingrese elemento a la pila: ";
 cin>>c->Dato;
 c->a=NULL;
 return;
 }

 e=new(pilas);
 cout<<"\nIngrese elemento a la pila: ";
 cin>>e->Dato;
 e->a=c;
 c=e;
}

void sacar(void)
{
 if(!c)
 {
 cout<<"\n\nNo hay elementos!!";
 return;
 }

 e=new(pilas);
 e=c;
 cout<<"\n\nElemento eliminado: " <<e->Dato;
 c=e->a;
 delete(e);

}
void actualizar_pila(void)
{
 int y=2,i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }

for(i=0;i<=ca;i++)
 {
 cout<<" ";
 }
 //SE MUESTRA LO QUE TIENE LA PILA
 i=0;
 e=c;
 while(e)
 {
 cout<<"\n";
 cout<<++i<<" - "<<e->Dato;
 e=e->a;
 }
}
