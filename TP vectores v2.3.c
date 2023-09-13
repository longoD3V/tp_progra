#include "stdio.h"
#include "time.h"
#include "stdlib.h"

//FUNCION ESTETICA
void barra_arriba (void){

    printf("\n%c",201);
    for (int i =0;i<43;i++){
        printf("%c",205);
    }
    printf("%c\n",187);
}
//FUNCION ESTETICA
void barra_arriba_1 (void){

    printf("\n%c",201);
    for (int i =0;i<58;i++){
        printf("%c",205);
    }
    printf("%c\n",187);
}
//FUNCION ESTETICA
void barra_abajo (void){

    printf("%c",200);
    for (int i =0;i<43;i++){
        printf("%c",205);
    }
    printf("%c\n",188);
}
//FUNCION ESTETICA
void barra_abajo_1 (void){

    printf("%c",200);
    for (int i =0;i<58;i++){
        printf("%c",205);
    }
    printf("%c\n",188);
}
//FUNCION ESTETICA
void vec1(int vector1[10]){

    barra_arriba_1();
    printf("%25cVECTOR 1\n",' ');
    barra_abajo_1();
    printf("%16c",' ');
    for (int i = 0;i<10 ;i++ )
    {
        printf("%d ",vector1[i]);
    }
}
//FUNCION ESTETICA
void vec2(int vector2[10]){

    barra_arriba_1();
    printf("%25cVECTOR 2\n",' ');
    barra_abajo_1();
    printf("%16c",' ');
    for (int i = 0;i<10 ;i++ )
    {
        printf("%d ",vector2[i]);
    }
}
// FUNCION ESTETICA
void res(void){

    barra_arriba_1();
    printf("%24cRESULTADOS\n",' ');
    barra_abajo_1();
}
void primera_opcion(int vector1[10], int vector2[10]) {
    int contador1 = 0; // Para contar las repeticiones en vector1
    int contador2 = 0; // Para contar las repeticiones en vector2

    vec1(vector1);
    // Contar las repeticiones en vector1
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vector1[i] == vector1[j])
            {
                contador1++;
                break; // Salir del bucle interior una vez que se encuentre una repetición
            }
        }
    }
    vec2(vector2);
     // Contar las repeticiones en vector2
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vector2[i] == vector2[j])
            {
                contador2++;
                break; // Salir del bucle interior una vez que se encuentre una repetición
            }
        }
    }
    res();
    printf("%1c",' ');
    printf("La cantidad de datos que se repiten en el vector 1 son: %d\n", contador1);
    printf("%1c",' ');
    printf("La cantidad de datos que se repiten en el vector 2 son: %d\n", contador2);
}

void segunda_opcion(int vector1[10], int vector2[10]){
    int nuevoVector1[10];
    int nuevoVector2[10];
    int  contador = 0; // Contador para el nuevo vector

    vec1(vector1);
    // Recorrer el vector1
    for (int i = 0; i < 10; i++)
    {
        int esRepetido = 0; // Variable para verificar si el elemento se repite

        // Verificar si el elemento ya está en el nuevo vector
        for (int j = 0; j < contador; j++)
        {
            if (vector1[i] == nuevoVector1[j])
                esRepetido = 1;
        }
        // Si el elemento no es repetido, agregarlo al nuevo vector
        if (esRepetido==0)
        {
            nuevoVector1[contador] = vector1[i];
            contador++;
        }
    }

    // Mostrar el vector 1 sin repeticiones
    barra_arriba_1();
    printf("%16c",' ');
    printf("VECTOR 1 SIN REPETICIONES \n");
    barra_abajo_1();
    printf("%16c",' ');
    for (int i = 0; i < contador; i++) {
        printf("%d ", nuevoVector1[i]);
    }
    contador = 0;

    vec2(vector2);
    // Recorrer el vector2
    for (int i = 0; i < 10; i++)
    {
        int esRepetido = 0; // Variable para verificar si el elemento se repite

        // Verificar si el elemento ya está en el nuevo vector
        for (int j = 0; j < contador; j++)
        {
            if (vector2[i] == nuevoVector2[j])
                esRepetido = 1;
        }
        // Si el elemento no es repetido, agregarlo al nuevo vector
        if (esRepetido==0)
        {
            nuevoVector2[contador] = vector2[i];
            contador++;
        }
    }

    // Mostrar el vector 2 sin repeticiones
    barra_arriba_1();
    printf("%16c",' ');
    printf("VECTOR 2 SIN REPETICIONES \n");
    barra_abajo_1();
    printf("%16c",' ');
    for (int i = 0; i < contador; i++) {
        printf("%d ", nuevoVector2[i]);
    }
}

/*void tercera_opcion(int vector1[10],int vector2[10]){


    int vector1_final [] = {};
    int vector2_final [] = {};
    int total1,total2;

        for (int i = 0;i<10 ;i++ )
        {
            if (vector1[i] != vector1[i])
            {
                vector1_final[i] = vector1[i];
            }
        }

        printf("\n");
        for (int i = 0;i<10 ;i++ )
        {
            printf("%d ",vector2[i]);
        }
        printf("\n");

    printf("%10c",' ');
    for (int i = 0;i<10 ;i++ )
    {
        for (int j=0;j<10 ;j++ )
        {
            if (vector1[i] == vector2[j])
            {
                    printf("%d ",vector1[i]);
            }
        }
    }
}*/

/*void cuarta_opcion (int vector1[10],int vector2[10]){

}*/

void quinta_opcion(int vector1[10],int vector2[10]){

int vector_R1[10]={0};

    vec1(vector1);
    vec2(vector2);
    for (int i = 0;i<10 ;i++ )
    {
        vector_R1[i]=(vector1[i]-vector2[i]);
    }
    barra_arriba_1();
    printf("%20cVECTOR RESULTADO\n",' ');
    barra_abajo_1();
    printf("El resultado de la resta entre el vector 2 y el vector 1 es: \n");
    printf("%14c",' ');
     for (int i = 0;i<10 ;i++ )
    {
            printf("%d ",vector_R1[i]);
    }
}

void sexta_opcion(int vector1[10],int vector2[10]){

int vector_R2[10]={0};

    vec1(vector1);
    vec2(vector2);
    for (int i = 0;i<10 ;i++ )
    {
        vector_R2[i]=(vector2[i]-vector1[i]);
    }
    barra_arriba_1();
    printf("%20cVECTOR RESULTADO\n",' ');
    barra_abajo_1();
    printf("El resultado de la resta entre el vector 2 y el vector 1 es: \n");
    printf("%14c",' ');
     for (int i = 0;i<10 ;i++ )
    {
            printf("%d ",vector_R2[i]);
    }
}

int main(){

    barra_arriba_1();
    printf(" TP realizado por Juan Manuel Longombardo y Lautaro Batista\n");
    barra_abajo_1();

    int vector1 [10] = {};
    int vector2 [10] = {};
    int menu;
    char salir;

    srand(time(NULL));

    for (int i = 0;i<11;i++)
    {
        vector1[i] = 20 + (rand() % (35 - 20));
        vector2[i] = 20 + (rand() % (35 - 20));
    }
    do{
        do{
            barra_arriba_1();
            printf("%27cMENU\n",' ');
            barra_abajo_1();
            printf("1 - Mostrar vectores y cantidad de datos repetidos\n");
            printf("2 - Mostrar vectores sin los datos repetidos\n");
            printf("3 - Mostrar union entre vectores\n");
            printf("4 - Mostrar interseccion entre vectores\n");
            printf("5 - Mostrar resta del vector A-B\n");
            printf("6 - Mostrar resta del vector B-A\n\n");
            printf("------------------------------------------------------\n");
            printf("%8cIngrese una opcion del 1 al 7: ",' ');
            scanf("%d",&menu);
            system("cls");

        }while (menu <= 0 || menu >=8);

        barra_arriba_1();
        printf("%25cRESULTADO\n",' ');
        barra_abajo_1();
            switch (menu)
            {
                case 1:
                    primera_opcion(vector1,vector2);
                    break;
                case 2:
                    segunda_opcion(vector1,vector2);
                    break;
                case 3:
                    printf("En construccion");
                    break;
                case 4:
                    printf("En construccion");
                    break;
                case 5:
                    quinta_opcion(vector1,vector2);
                    break;
                case 6:
                    sexta_opcion(vector1,vector2);
                    break;
                case 7:
                    printf("7? Como no ilusionarse con la septima\n");
                    break;
            }

        //BUCLE DEL PROGRAMA
        do{
            printf("\n\nPresione 'S' para salir o 'N' para continuar: ");
            fflush(stdin);
            scanf("%c",&salir);
        }while (salir != 'S' && salir != 's' && salir != 'N' && salir != 'n');


    }while(salir != 'S' && salir != 's');

    return 0;
}
