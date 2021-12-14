///////// NO SE PONEN FUNCIONES EN EL MAIN

// PROYECTO FINAL ESTRUCTURA DE DATOS
// Busqueda por placa, por numero de reseve
#include <stdio.h>
#include <stdlib.h>
#include "car.h"

// Solo usa la macro SYSCLEAR para limpiar la consola

int main(void)
{

    // struct autos[] = crear_autosbasicos(); posible solucion para el uso de los autos en todo el programa
    char nombre[TAM_NOMBRE];
    int dias, ticket;
    int opcion, carro, ver = 0, renta_ticket = 0, modificar, nodoBuscado = 0, rentas = 0;
    long double final = 0;

    Autos basicos[TAM_CARS], intermedios[TAM_CARS], lujo[TAM_CARS];

    fillsCarInfoBasicos(basicos);
    fillsCarInfoIntermedios(intermedios);
    fillsCarInfoLujo(lujo);

    Lista lista = NULL;
    pNodo p, buscado, ini, fin;

    do
    {

        printf("\n|---------------------------------------|");
        printf("\n|       ° BIENVENIDO A ABMODEL. °       |");
        printf("\n|--------------------|------------------|");
        printf("\n| 1. ALQUILAR AUTO   | 5. GANANCIA      |");
        printf("\n| 2. DISPONIBLES     | 6. SALIR         |");
        printf("\n| 3. VERIFICAR RES   |                  |");
        printf("\n| 4. MODIFICAR RES   |                  |");
        printf("\n|--------------------|------------------|");
        printf("\n\nNOTA: NO HAY CAMBIO DE AUTOS, SOLO SE PUEDE CAMBIAR EL NUMERO DE DIAS A RENTAR\n");
        puts("\nSelecciona una opcion:");
        printf("-> ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            do
            {

                printf("\n|---------------------------------------|");
                printf("\n|          ° ALQUILA UN AUTO °          |");
                printf("\n|--------------------|------------------|");
                printf("\n| 1. BASICO          | 4. SALIR         |");
                printf("\n| 2. INTERMEDIO      |                  |");
                printf("\n| 3. LUJOSO          |                  |");
                printf("\n|--------------------|------------------|");
                printf("\n\nNOTA: SE TE BRINDARA UN TICKET CON EL QUE PUEDES VERIFICAR TU RESERVA O MODIFICARLA\n");

                puts("\nSelecciona una opcion:");
                printf("-> ");
                scanf("%d", &opcion);
                fflush(stdin);

                if (opcion == 1)
                {
                    SYSCLEAR

                    ver = _verificar_dispo(basicos);

                    if (ver == TOT_AUTOS)
                    {
                        SYSCLEAR
                        puts("No hay disponibilidad en autos basicos :(");
                    }
                    else
                    {
                        SYSCLEAR
                        puts("\tCOCHES BASICOS\n");
                        imprimirCochesBasicos(basicos);
                        printf("Digita el numero de auto\n");
                        printf("-> ");
                        scanf("%d", &carro);
                        fflush(stdin);
                        _menu_autos(basicos, carro, &lista, &rentas, &renta_ticket);
                    }
                }
                if (opcion == 2)
                {
                    SYSCLEAR
                    ver = _verificar_dispo(intermedios);
                    if (ver == TOT_AUTOS)
                    {
                        SYSCLEAR
                        puts("No hay disponibilidad en autos intermedios :(");
                    }
                    else
                    {
                        puts("\tCOCHES INTERMEDIOS\n");
                        imprimirCochesIntermedios(intermedios);
                        printf("Digita el numero de auto\n");
                        printf("-> ");
                        scanf("%d", &carro);
                        fflush(stdin);
                        _menu_autos(intermedios, carro, &lista, &rentas, &renta_ticket);
                    }
                }
                if (opcion == 3)
                {
                    SYSCLEAR
                    ver = _verificar_dispo(lujo);
                    if (ver == TOT_AUTOS)
                    {
                        SYSCLEAR
                        puts("No hay disponibilidad en autos de lujo :(");
                    }
                    else
                    {
                        puts("\tCOCHES LUJOSOS\n");
                        imprimirCochesLujos(lujo);
                        printf("Digita el numero de auto\n");
                        printf("-> ");
                        scanf("%d", &carro);
                        fflush(stdin);

                        _menu_autos(lujo, carro, &lista, &rentas, &renta_ticket);
                    }
                }

            } while (opcion != 4);
            opcion = 1;

            break;

        case 2:
            do
            {

                printf("\n|---------------------------------------|");
                printf("\n|          ° AUTOS DISPONIBLES °        |");
                printf("\n|--------------------|------------------|");
                printf("\n| 1. BASICO          | 4. SALIR         |");
                printf("\n| 2. INTERMEDIO      |                  |");
                printf("\n| 3. LUJOSO          |                  |");
                printf("\n|--------------------|------------------|");
                puts("\nSelecciona una opcion:");
                printf("-> ");
                scanf("%d", &opcion);

                if (opcion == 1)
                {
                    SYSCLEAR
                    imprimirCochesBasicos(basicos);
                }
                if (opcion == 2)
                {
                    SYSCLEAR
                    imprimirCochesIntermedios(intermedios);
                }
                if (opcion == 3)
                {
                    SYSCLEAR
                    imprimirCochesLujos(lujo);
                }

            } while (opcion != 4);
            opcion = 1;

            break;

        case 3:
            SYSCLEAR
            if (rentas == 0)
                printf("\nNO HAY CARROS RENTADOS\n");
            else
            {
                verificar(lista, rentas, renta_ticket);
            }
            break;

        case 4:
            SYSCLEAR
            // MODIFICAR
            printf("\n|---------------------------------------|");
            printf("\n|          ° MODIFICAR RESERVA °        |");
            printf("\n|--------------------|------------------|");
            printf("\n| 1. MODIFICAR       | 2. CANCELAR      |");
            printf("\n|--------------------|------------------|");
            printf("\nDigita la opcion: ");
            printf("-> ");
            scanf("%d", &modificar);
            if (modificar == 1)
            {
                // SYSCLEAR
                printf(" INGRESE SU TICKET: ");
                scanf("%d", &nodoBuscado);
                ini = lista, fin = lista;

                if (rentas != 0 && nodoBuscado <= renta_ticket && nodoBuscado > 0)
                {

                    if (rentas == 1)
                    {

                        SYSCLEAR
                        buscado = lista;
                        modificar_ticket(buscado);
                    }
                    else
                    {

                        while (fin->siguiente)
                            fin = fin->siguiente;
                        SYSCLEAR
                        buscado = binarysearch(lista, nodoBuscado, ini, fin);
                        modificar_ticket(buscado);
                    }
                }
                else
                {
                    SYSCLEAR
                    printf("\nEl ticket buscado no existe\n");
                }
            }
            else if (modificar == 2)
            {
                SYSCLEAR
                printf("\t\nLISTA SIN MODIFICAR\n");
                MostrarLista(lista, 1);
                ini = lista, fin = lista;
                printf("\nDIGITA EL TICKET: ");
                scanf("%d", &nodoBuscado);

                if (rentas != 0 && nodoBuscado <= renta_ticket && nodoBuscado > 0)
                {
                    // NOTA, SI renta_ticket VALE 1 IMPLICA QUE EL NODO BUSCADO SEA EL INICIO, POR LO TANTO ES DIRECTO Y
                    // LO QUE HACE ES COMPARAR buscado->tipo con tipoauto[i].modelo y así desde antes de entrar ya esta libre
                    if (rentas == 1)
                    {
                        buscado = lista;
                        if (strcmp(buscado->tipo, "BASICO") == 0)
                        {

                            SYSCLEAR

                            for (int i = 0; i < TAM_CARS; i++)
                            {
                                if (strcmp(basicos[i].modelo, buscado->modelo) == 0)
                                {
                                    basicos[i].disponible = 0;
                                }
                            }

                            borrar(&lista, buscado, &rentas);
                            printf("\t\nLISTA  MODIFICADA\n");
                            MostrarLista(lista, 1);
                        }
                        else if (strcmp(buscado->tipo, "INTERMEDIO") == 0)
                        {
                            SYSCLEAR

                            for (int i = 0; i < TAM_CARS; i++)
                            {
                                if (strcmp(intermedios[i].modelo, buscado->modelo) == 0)
                                {
                                    intermedios[i].disponible = 0;
                                }
                            }
                            borrar(&lista, buscado, &rentas);
                            printf("\t\nLISTA  MODIFICADA\n");
                            MostrarLista(lista, 1);
                        }
                        else
                        {
                            SYSCLEAR
                            for (int i = 0; i < TAM_CARS; i++)
                            {
                                if (strcmp(lujo[i].modelo, buscado->modelo) == 0)
                                {
                                    lujo[i].disponible = 0;
                                }
                            }
                            borrar(&lista, buscado, &rentas);
                            printf("\t\nLISTA  MODIFICADA\n");
                            MostrarLista(lista, 1);
                        }
                    }
                    else
                    {

                        while (fin->siguiente)
                            fin = fin->siguiente;
                        SYSCLEAR
                        buscado = binarysearch(lista, nodoBuscado, ini, fin);
                        // //borrar(&lista, buscado, nodoBuscado);
                        // printf("\tLISTA  MODIFICADA\n");
                        // MostrarLista(lista, 1);
                        if (buscado != NULL)
                        {
                            if (strcmp(buscado->tipo, "BASICO") == 0)
                            {

                                SYSCLEAR

                                for (int i = 0; i < TAM_CARS; i++)
                                {
                                    if (strcmp(basicos[i].modelo, buscado->modelo) == 0)
                                    {
                                        basicos[i].disponible = 0;
                                    }
                                }

                                borrar(&lista, buscado, &rentas);
                                printf("\t\nLISTA  MODIFICADA\n");
                                MostrarLista(lista, 1);
                            }
                            else if (strcmp(buscado->tipo, "INTERMEDIO") == 0)
                            {
                                SYSCLEAR

                                for (int i = 0; i < TAM_CARS; i++)
                                {
                                    if (strcmp(intermedios[i].modelo, buscado->modelo) == 0)
                                    {
                                        intermedios[i].disponible = 0;
                                    }
                                }
                                borrar(&lista, buscado, &rentas);
                                printf("\t\nLISTA  MODIFICADA\n");
                                MostrarLista(lista, 1);
                            }
                            else
                            {
                                SYSCLEAR
                                for (int i = 0; i < TAM_CARS; i++)
                                {
                                    if (strcmp(lujo[i].modelo, buscado->modelo) == 0)
                                    {
                                        lujo[i].disponible = 0;
                                    }
                                }
                                borrar(&lista, buscado, &rentas);
                                printf("\t\nLISTA  MODIFICADA\n");
                                MostrarLista(lista, 1);
                            }
                        }
                    }
                }
                else
                {
                    SYSCLEAR
                    printf("No existe el ticket especificado");
                }

                break;
            case 5:
                if (lista == NULL || rentas > 0)
                {
                    SYSCLEAR
                    printf("HAY EN TOTAL %d CARROS RENTADOS\n\n", rentas);
                    ganancia_total(lista, &final);
                    printf("GANANCIA: %.3Lf\n", final);
                }
                else
                {
                    puts("NO SE HA RENTADO NINGUN VEHICULO\n");
                }

                break;

            case 6:
                SYSCLEAR
                puts("Programa ejecutado correctamente\n");
                break;

            default:
                SYSCLEAR
                puts("OPCION INVALIDA");
                break;
            }
        }

    } while (opcion != 6);

    return 0;
}