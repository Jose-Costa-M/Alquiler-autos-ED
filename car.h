#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TOT_AUTOS 120
#define ANTIGUO 1
#define NUEVO 0
#define TAM_CARS 40
#define TAM_MAX 100
#define TAM_PLACAS 7
#define ILIM 10
#define TAM_NOMBRE 50

#ifdef __unix__
#define SYSCLEAR system("clear");

#elif _WIN32
#define SYSCLEAR system("cls");

#endif

//Lista doblemente enlazada 
typedef struct _nodo {
   int valor; // Dias a rentar
   char modelo[TAM_MAX]; 
   char placas[TAM_PLACAS]; 
   float costo_final; // Tarifa * dias uso
   char nombre[TAM_NOMBRE];
   int ticket;
   char tipo[ILIM];
   struct _nodo *siguiente;
   struct _nodo *anterior;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Lista;

//Estructura Autos
typedef struct autos
{
  char placas[TAM_PLACAS]; 
  char kilometraje[ILIM];  
  char modelo[TAM_MAX]; 
  char color[TAM_MAX]; 
  char _tipo_auto[ILIM];
  int numero_asientos;
  float tarifa;
  int disponible; 
}Autos;

//Funciones de la Lista
void Insertar(Lista *, int, int, Autos *, char*, int*, int*);
void borrar(Lista *,pNodo, int*);
void MostrarLista(Lista, int);

//Display de Carros
void imprimirCochesIntermedios(Autos intermedios[TAM_CARS]);
void imprimirCochesBasicos(Autos basicos[TAM_CARS]);
void imprimirCochesLujos(Autos intermedios[TAM_CARS]);

int _verificar_dispo(Autos basicos[TAM_CARS]);

void _menu_autos(Autos basicos[TAM_CARS], int carro, Lista *lista, int *rentas, int *);

void _quitar_disp(Autos (*carros)[TAM_CARS],int pos); 

pNodo binarysearch(Lista lista, int ticket_buscado, pNodo ini, pNodo fin); 

void  fillsCarInfoBasicos(Autos basicos[TAM_CARS]);
void  fillsCarInfoIntermedios(Autos intermedios[TAM_CARS]);
void  fillsCarInfoLujo(Autos lujo[TAM_CARS]);
void  modificar_ticket(pNodo buscado);

void verificar(Lista lista, int rentas, int renta_ticket);

void ganancia_total(Lista, long double *total);
