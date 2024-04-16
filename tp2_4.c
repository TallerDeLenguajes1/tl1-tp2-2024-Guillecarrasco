#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5

struct compu {
    int velocidad; // entre 1 y 3 GHz
    int anio; // entre 2015 y 2024
    int cantidad; // entre 1 y 8
    char *tipo_cpu; // puntero a una cadena en el arreglo tipos
};

void mostrar(struct compu pcs[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Características de la PC %d:\n", i+1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Año: %d\n", pcs[i].anio);
        printf("Cantidad de núcleos: %d\n", pcs[i].cantidad);
        printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
        printf("\n");
    }
}


void pcVieja(struct compu pcs[], int n) {
    int i;
    int k=2024;
    int l;
        for(int j = 0; j < n; j++) {
            if(pcs[i].anio<k) {
                k=pcs[i].anio;
                l=i;
            }
        }

        printf("Características de la PC más vieja:\n");
        printf("Velocidad: %d GHz\n", pcs[l].velocidad);
        printf("Año: %d\n", pcs[l].anio);
        printf("Cantidad de núcleos: %d\n", pcs[l].cantidad);
        printf("Tipo de CPU: %s\n", pcs[l].tipo_cpu);
        printf("\n");
    
}

void pcVelocidad(struct compu pcs[], int n) {
int i;
    int k=0;
    int l;
        for(int j = 0; j < n; j++) {
            if(pcs[i].velocidad>k) {
                k=pcs[i].velocidad;
                l=i;
            }
        }

        printf("Características de la PC con mayor velocidad:\n");
        printf("Velocidad: %d GHz\n", pcs[l].velocidad);
        printf("Año: %d\n", pcs[l].anio);
        printf("Cantidad de núcleos: %d\n", pcs[l].cantidad);
        printf("Tipo de CPU: %s\n", pcs[l].tipo_cpu);
        printf("\n");
    
}



int main() {
    struct compu pcs[N];
    int i, j;
    char *tipos[6] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    char input[10];

    srand(time(NULL));

    for(i = 0; i < N; i++) {
        printf("Por favor, ingresa las características de la PC %d:\n", i+1);

        printf("Velocidad (GHz): ");
        scanf("%d", &pcs[i].velocidad);

        printf("Año: ");
        scanf("%d", &pcs[i].anio);

        printf("Cantidad de núcleos: ");
        scanf("%d", &pcs[i].cantidad);

        printf("Tipo de CPU: ");
        scanf("%s", input);


        for(j = 0; j < 6; j++) {
            if(strcmp(input, tipos[j]) == 0) {
                pcs[i].tipo_cpu = tipos[j];
                break;
            }
        }

        if(j == 6) {
            printf("Tipo de CPU inválido. Por favor, ingresa uno de los siguientes tipos: Intel, AMD, Celeron, Athlon, Core, Pentium\n");
            i--; 
        }

        printf("\n");
    }

    return 0;
}
