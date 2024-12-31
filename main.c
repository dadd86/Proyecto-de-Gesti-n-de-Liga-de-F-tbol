#include <stdio.h>
#include <stdbool.h>

#define MAX_CARACTERES 20
#define MAX_JUGADORES 30
#define MAX_CLUBES 20

// Estructura para representar una fecha
typedef struct {
    int dia;        // Día de la fecha
    int mes;        // Mes de la fecha
    int anio;       // Año de la fecha
} fecha;

// Estructura para representar un jugador
typedef struct {
    char Nombre[MAX_CARACTERES];    // Nombre del jugador.
    char Apellido1[MAX_CARACTERES]; // Primer apellido.
    char Apellido2[MAX_CARACTERES]; // Segundo apellido.
    char Nickname[MAX_CARACTERES];  // Apodo o nickname.
    int Dorsal;                     // Número del dorsal.
    char Posicion[MAX_CARACTERES];  // Posición en el campo.
    float Salario;                  // Salario del jugador.
} jugador;

// Estructura para representar un club
typedef struct {
    char Denominacion[MAX_CARACTERES];  // Nombre del club.
    int Abonados;                       // Número de abonados.
    float Presupuesto;                  // Presupuesto del club.
    fecha Fecha_fundacion;              // Fecha de fundación del club.
    jugador Jugadores[MAX_JUGADORES];   // Array de jugadores.
    int Jugadores_guardados;            // Número de jugadores registrados.
} club;

// Estructura para representar una liga
typedef struct {
    char Denominacion[MAX_CARACTERES];  // Nombre de la liga.
    char Categoria[MAX_CARACTERES];     // Categoría de la liga.
    char Organizador[MAX_CARACTERES];   // Organizador de la liga.
    char Estatus[MAX_CARACTERES];       // Estatus actual de la liga.
    int Numero_equipos;                 // Número de equipos en la liga.
    float Presupuesto;                  // Presupuesto total de la liga.
    bool Creada;                        // Indica si la liga ha sido creada.
    club Clubes[MAX_CLUBES];            // Array de clubes.
    int clubes_guardados;               // Número de clubes registrados.
} Liga;
// Función para inicializar una liga con valores por defecto
void crearLiga(Liga *miLiga) {
    miLiga->Creada = false;             // Inicializa la liga como no creada
    miLiga->clubes_guardados = 0;       // Inicializa el contador de clubes
}
// Función para introducir datos de la liga
void introducirDatosLiga(Liga *miLiga) {
    int intro_clubes= 0;                            // Inicializa la variable para introducir clubes
     int entradaValida;                             // Variable para controlar la validez de la entrada
    // Verifica si la liga ya ha sido creada
    if (miLiga->Creada) {
        printf("La liga ya está creada. Si quieres modificar los datos de la liga tendrás que ir al apartado correspondiente\n");
    } else {
        // Solicita y almacena la denominación de la liga
        printf("Teclea la denominación de la liga: ");
        scanf("%s", miLiga->Denominacion);          // Lee un string y lo guarda en Denominacion
        // Solicita y almacena la categoría de la liga
        printf("Teclea la categoria de la liga: ");
        scanf("%s", miLiga->Categoria);             // Lee un string y lo guarda en Categoria
        // Solicita y almacena el organizador de la liga
        printf("Teclea el organizador de la liga: ");
        scanf("%s", miLiga->Organizador);           // Lee un string y lo guarda en Organizador
        // Solicita y almacena el estatus de la liga
        printf("Teclea el estatus de la liga: ");
        scanf("%s", miLiga->Estatus);               // Lee un string y lo guarda en Estatus
        // Solicita y almacena el número de equipos de la liga
        printf("Teclea el número de equipos que tendrá la liga: ");
        scanf("%d", &miLiga->Numero_equipos);       // Lee un entero y lo guarda en Numero_equipos
        // Solicita y almacena el presupuesto de la liga
        printf("Teclea el presupuesto de la liga: ");
        scanf("%f", &miLiga->Presupuesto);          // Lee un float y lo guarda en Presupuesto
        // Marca la liga como creada
        miLiga->Creada = true;
        // Pregunta si el usuario quiere introducir clubes ahora
        // Bucle para introducir clubes
        do {
            printf("Quieres ahora introducir los clubes? Teclea 1 si es que si, o 0 si es que no.\n");
            entradaValida = scanf("%d", &intro_clubes);
            // Limpia el buffer de entrada en caso de entrada inválida
            if (entradaValida != 1 || (intro_clubes != 0 && intro_clubes != 1)) {
                printf("Entrada inválida. Por favor, teclea 1 o 0.\n");
                entradaValida = 0;
                // Limpia el buffer de entrada
                while (getchar() != '\n');
            }
        } while (!entradaValida);
    }
}
// Función para introducir datos de clubes en la liga
void introducirClubes(Liga *miLiga) {
    club c;                                             // Variable para almacenar la información del club
    printf("Teclea la denominación del club: ");
    scanf("%s", c.Denominacion);                        // Lee la denominación del clu
    printf("Teclea el numero de abonados del club: ");
    scanf("%d", &c.Abonados);                           // Lee el número de abonados
    printf("Teclea el presupuesto del club: ");
    scanf("%f", &c.Presupuesto);                        // Lee el presupuesto
    printf("Teclea la fecha de fundación del club\n");
    printf("Introduce el dia: ");
    scanf("%d", &c.Fecha_fundacion.dia);                // Lee el día
    printf("Introduce el mes: ");
    scanf("%d", &c.Fecha_fundacion.mes);                // Lee el mes
    printf("Introduce el año: ");
    scanf("%d", &c.Fecha_fundacion.anio);               // Lee el año
    c.Jugadores_guardados = 0;                          // Inicializa el número de jugadores guardados
    miLiga->Clubes[miLiga->clubes_guardados] = c;       // Almacena el club en la liga
    miLiga->clubes_guardados++;                         // Incrementa el contador de clubes guardados
}

// Función para listar los datos de la liga
void ListarDatosLiga(const Liga *miLiga) {
    // Verifica si la liga ha sido creada
    if (miLiga->Creada) {
        // Imprime la denominación de la liga
        printf("La denominación de la liga es: %s\n", miLiga->Denominacion);
        // Imprime la categoría de la liga
        printf("La categoría de la liga es: %s\n", miLiga->Categoria);
        // Imprime el nombre del organizador de la liga
        printf("El organizador de la liga es: %s\n", miLiga->Organizador);
        // Imprime el estatus actual de la liga
        printf("El estatus de la liga es: %s\n", miLiga->Estatus);
        // Imprime el número de equipos que participan en la liga
        printf("El número de equipos que tendrá la liga es: %d\n", miLiga->Numero_equipos);
        // Imprime el presupuesto total asignado a la liga
        printf("El presupuesto de la liga es: %.2f\n", miLiga->Presupuesto);
    } else {
        // Imprime un mensaje en caso de que la liga no haya sido creada
        printf("La liga aún no ha sido creada.\n");
    }
}

// Función para listar los datos de todos los clubes en la liga
void ListarDatosClubes(const Liga *miLiga) {
    int i; // Variable para iterar a través de los clubes
    // Bucle para recorrer todos los clubes guardados en la liga
    for (i = 0; i < miLiga->clubes_guardados; i++) {
        // Imprime la denominación del club
        printf("La denominación del club es: %s\n", miLiga->Clubes[i].Denominacion);
        // Imprime el número de abonados del club
        printf("El número de abonados del club es: %d\n", miLiga->Clubes[i].Abonados);
        // Imprime el presupuesto del club
        printf("El presupuesto del club es: %.2f\n", miLiga->Clubes[i].Presupuesto);
        // Imprime la fecha de fundación del club
        printf("La fecha de fundación del club es: %02d / %02d / %d\n",
               miLiga->Clubes[i].Fecha_fundacion.dia,
               miLiga->Clubes[i].Fecha_fundacion.mes,
               miLiga->Clubes[i].Fecha_fundacion.anio);
        // Imprime el número de jugadores inscritos en el club
        printf("El número de jugadores inscritos es: %d\n", miLiga->Clubes[i].Jugadores_guardados);
    }
}
// Función para introducir los datos de un jugador y retornar la estructura de tipo jugador
jugador introducirDatosJugador() {
    jugador j;                                  // Variable para almacenar los datos del jugador
    // Solicita y almacena el nombre del jugador
    printf("Teclea el nombre del jugador: ");
    scanf("%s", j.Nombre);                      // Lee un string y lo guarda en Nombre
    // Solicita y almacena el primer apellido del jugador
    printf("Teclea el primer apellido del jugador: ");
    scanf("%s", j.Apellido1);                   // Lee un string y lo guarda en Apellido1
    // Solicita y almacena el segundo apellido del jugador
    printf("Teclea el segundo apellido del jugador: ");
    scanf("%s", j.Apellido2);                   // Lee un string y lo guarda en Apellido2
    // Solicita y almacena el apodo del jugador
    printf("Teclea el apodo del jugador: ");
    scanf("%s", j.Nickname);                    // Lee un string y lo guarda en Nickname
    // Solicita y almacena el dorsal del jugador
    printf("Teclea el dorsal del jugador: ");
    scanf("%d", &j.Dorsal);                     // Lee un entero y lo guarda en Dorsal
    // Solicita y almacena la posición del jugador
    printf("Teclea la posición del jugador: ");
    scanf("%s", j.Posicion);                    // Lee un string y lo guarda en Posicion
    // Solicita y almacena el salario del jugador
    printf("Teclea el salario del jugador: ");
    scanf("%f", &j.Salario);                    // Lee un float y lo guarda en Salario
    return j; // Retorna la estructura jugador con los datos ingresados
}
// Función para modificar los datos de un jugador
void modificarDatosJugador(Liga *miLiga) {
    int clubIndex, jugadorIndex, i;
    jugador j;
    printf("De que club quieres modificar los jugadores? (Ingresa un número entre 1 y %d):\n", miLiga->clubes_guardados);
    for (i = 0; i < miLiga->clubes_guardados; i++) {
        printf("%d . %s\n", i + 1, miLiga->Clubes[i].Denominacion);
    }
    scanf("%d", &clubIndex);
    clubIndex--;                // Ajuste del índice (el usuario ingresa un número basado en 1)
    printf("De que jugador quieres modificar algún valor? (Ingresa un número entre 1 y %d):\n", miLiga->Clubes[clubIndex].Jugadores_guardados);
    for (i = 0; i < miLiga->Clubes[clubIndex].Jugadores_guardados; i++) {
        printf("%d . %s %s %s\n", i + 1, miLiga->Clubes[clubIndex].Jugadores[i].Nombre, miLiga->Clubes[clubIndex].Jugadores[i].Apellido1, miLiga->Clubes[clubIndex].Jugadores[i].Apellido2);
    }
    scanf("%d", &jugadorIndex);
    jugadorIndex--;             // Ajuste del índice
    printf("Teclea el nombre del jugador: ");
    scanf("%s", j.Nombre);
    printf("Teclea el primer apellido del jugador: ");
    scanf("%s", j.Apellido1);
    printf("Teclea el segundo apellido del jugador: ");
    scanf("%s", j.Apellido2);
    printf("Teclea el apodo del jugador: ");
    scanf("%s", j.Nickname);
    printf("Teclea el dorsal del jugador: ");
    scanf("%d", &j.Dorsal);
    printf("Teclea la posición del jugador: ");
    scanf("%s", j.Posicion);
    printf("Teclea el salario del jugador: ");
    scanf("%f", &j.Salario);
    miLiga->Clubes[clubIndex].Jugadores[jugadorIndex] = j;
}

// Acción para introducir jugadores en un club específico
void introducirJugadoresClub(Liga *miLiga) {
    int num_club, i;
    // Verificar si hay clubes en la liga
    if (miLiga->clubes_guardados == 0) {
        printf("Primero se han de introducir los clubes.\n");
    } else {
        printf("Indica el numero del club del que quieres introducir los jugadores: \n");
        for (i = 0; i < miLiga->clubes_guardados; i++) {
            printf("%d . %s\n", i + 1, miLiga->Clubes[i].Denominacion);
        }
        scanf("%d", &num_club);
        // Verificar si el número del club es válido
        if (num_club >= 1 && num_club <= miLiga->clubes_guardados) {
            miLiga->Clubes[num_club - 1].Jugadores[miLiga->Clubes[num_club - 1].Jugadores_guardados] = introducirDatosJugador();
            miLiga->Clubes[num_club - 1].Jugadores_guardados++;
        } else {
            printf("Número de club no válido.\n");
        }
    }
}

// 1. Listar los trabajadores de un club existente
void listarJugadoresClub(const Liga *miLiga) {
    int num_club, i;
    if (miLiga->clubes_guardados == 0) {
        printf("No hay clubes para listar.\n");
        return;
    }
    printf("Selecciona el número del club para listar sus jugadores: \n");
    for (i = 0; i < miLiga->clubes_guardados; i++) {
        printf("%d . %s\n", i + 1, miLiga->Clubes[i].Denominacion);
    }
    scanf("%d", &num_club);
    num_club--; // Ajuste para el índice del array
    if (num_club < 0 || num_club >= miLiga->clubes_guardados) {
        printf("Número de club no válido.\n");
        return;
    }
    printf("Jugadores del club %s:\n", miLiga->Clubes[num_club].Denominacion);
    for (i = 0; i < miLiga->Clubes[num_club].Jugadores_guardados; i++) {
        printf("%s %s %s, Dorsal %d, Posición: %s, Salario: %.2f\n",
               miLiga->Clubes[num_club].Jugadores[i].Nombre,
               miLiga->Clubes[num_club].Jugadores[i].Apellido1,
               miLiga->Clubes[num_club].Jugadores[i].Apellido2,
               miLiga->Clubes[num_club].Jugadores[i].Dorsal,
               miLiga->Clubes[num_club].Jugadores[i].Posicion,
               miLiga->Clubes[num_club].Jugadores[i].Salario);
    }
}

// 2. Borrar jugadores de un club
void borrarJugadoresClub(Liga *miLiga) {
    int num_club, num_jugador, i;
    if (miLiga->clubes_guardados == 0) {
        printf("No hay clubes de los cuales borrar jugadores.\n");
        return;
    }
    printf("Selecciona el número del club para borrar un jugador: \n");
    for (i = 0; i < miLiga->clubes_guardados; i++) {
        printf("%d . %s\n", i + 1, miLiga->Clubes[i].Denominacion);
    }
    scanf("%d", &num_club);
    num_club--; // Ajuste para el índice del array
    if (num_club < 0 || num_club >= miLiga->clubes_guardados) {
        printf("Número de club no válido.\n");
        return;
    }
    printf("Selecciona el número del jugador para borrar: \n");
    for (i = 0; i < miLiga->Clubes[num_club].Jugadores_guardados; i++) {
        printf("%d . %s\n", i + 1, miLiga->Clubes[num_club].Jugadores[i].Nombre);
    }
    scanf("%d", &num_jugador);
    num_jugador--; // Ajuste para el índice del array
    if (num_jugador < 0 || num_jugador >= miLiga->Clubes[num_club].Jugadores_guardados) {
        printf("Número de jugador no válido.\n");
        return;
    }
    // Borrar el jugador desplazando los siguientes hacia arriba
    for (i = num_jugador; i < miLiga->Clubes[num_club].Jugadores_guardados - 1; i++) {
        miLiga->Clubes[num_club].Jugadores[i] = miLiga->Clubes[num_club].Jugadores[i + 1];
    }
    miLiga->Clubes[num_club].Jugadores_guardados--;
    printf("Jugador borrado correctamente.\n");
}

// 3. Calcular los gastos en salarios de cada club
void calcularGastosSalarios(const Liga *miLiga) {
    float totalSalarios;
    int i, j;
    if (miLiga->clubes_guardados == 0) {
        printf("No hay clubes para calcular salarios.\n");
        return;
    }
    for (i = 0; i < miLiga->clubes_guardados; i++) {
        totalSalarios = 0;
        for (j = 0; j < miLiga->Clubes[i].Jugadores_guardados; j++) {
            totalSalarios += miLiga->Clubes[i].Jugadores[j].Salario;
        }
        printf("Gastos totales en salarios para el club %s: %.2f\n", miLiga->Clubes[i].Denominacion, totalSalarios);
    }
}

// Función para mostrar el menú y devolver la opción seleccionada
int MostrarMenu() {
    int opcion;
    int entradaValida;
    do {
        printf("*****************************************************************************************************\n");
        printf("Menu de opciones:\n");
        printf("1. Introducir datos de la liga.\n");
        printf("2. Introducir clubes de la liga.\n");
        printf("3. Listar datos de la liga.\n");
        printf("4. Listar datos de los clubes.\n");
        printf("5. Introducir jugadores en un club.\n");
        printf("6. Modificar datos de un jugador.\n");
        printf("7. Listar jugadores de un club.\n");
        printf("8. Borrar jugador.\n");
        printf("9. Calcular gastos en los salarios del club.\n");
        printf("10. Salir.\n");
        printf("*****************************************************************************************************\n");
        printf("Seleccione una opcion: ");
        entradaValida = scanf("%d", &opcion);

        // Limpia el buffer de entrada en caso de entrada inválida
        if (entradaValida != 1 || (opcion < 1 || opcion > 10)) {
            printf("Entrada inválida. Por favor, seleccione un número del 1 al 10.\n");
            entradaValida = 0;
            // Limpia el buffer de entrada
            while (getchar() != '\n');
        }
    } while (!entradaValida);
    return opcion;
}

int main() {
    // Declaración de una liga
    Liga miLiga;
    crearLiga(&miLiga);             // Variable que almacena los datos de la liga
    int opcion;                     // Variable para la opción seleccionada del menú
    bool salir = false;             // Bandera para controlar la salida del bucle del menú
    while (!salir) {
        opcion = MostrarMenu();     // Muestra las opciones del menú
        switch (opcion) {
            case 1:
                introducirDatosLiga(&miLiga); // Introduce los datos de la liga
                break;
            case 2:
                introducirClubes(&miLiga);   // Introduce los clubes de la liga
                break;
            case 3:
                ListarDatosLiga(&miLiga);   // Lista los datos de la liga
                break;
            case 4:
                ListarDatosClubes(&miLiga);         // Lista los clubes de la liga
                break;
            case 5:
                introducirJugadoresClub(&miLiga);   // Llamada a la función para introducir jugadores
                break;
            case 6:
                modificarDatosJugador(&miLiga);     // Llamada a la función para modificar datos jugador
                break;
            case 7:
                listarJugadoresClub(&miLiga);       //Llamada a la funcion para listador jugadores de club
                break;
            case 8:
                borrarJugadoresClub(&miLiga);       //Llamada a la funcion para borrar jugadores club
                break;
            case 9:
                calcularGastosSalarios(&miLiga);    //Llamda a la funcion para calcular gastos de salarios
                break;
            case 10:
                salir = true;                   // Sale del programa
                break;
            default:
                printf("Opción no válida.\n"); // Maneja opciones no válidas
        }
    }
    return 0;
}
