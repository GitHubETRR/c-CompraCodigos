#include <stdio.h>

int main(void) {
   int cantidad;
   printf("Bienvenido al programa para pasar lista del Facundo\n");
   printf("Ingrese la cantidad de alumnos: ");
   scanf("%d", &cantidad);

   char lista[cantidad][50]; // Matriz para almacenar los nombres
   FILE *archivo;
   archivo = fopen("alumnos_presentes.txt", "w"); // Abre el archivo en modo escritura

   // Ingreso de nombres de alumnos y marcado de asistencia
   for (int i = 0; i < cantidad; i++) {
       printf("Ingrese el nombre del estudiante %d: \n ", i+1);
       scanf("%s", lista[i]);
       printf("El nombre del estudiante %d es: %s\n", i+1, lista[i]);

       char asistencia;
       printf("¿Está presente el estudiante %s? (S/N): ", lista[i]);
       scanf(" %c", &asistencia);

       // Validar la entrada de asistencia correcta
       while (asistencia != 'S' && asistencia != 's' && asistencia != 'N' && asistencia != 'n') {
           printf("Ingrese una asistencia válida (S/N): ");
           scanf(" %c", &asistencia);
       }

       if (asistencia == 'S' || asistencia == 's') {
           printf("El estudiante %s está presente.\n", lista[i]);
           fprintf(archivo, "%s\n", lista[i]); // Escribe el nombre en el archivo
       } else {
           printf("El estudiante %s está ausente.\n", lista[i]);
       }
       printf("\n");
   }

   fclose(archivo); // Cierra el archivo
   return 0;
}