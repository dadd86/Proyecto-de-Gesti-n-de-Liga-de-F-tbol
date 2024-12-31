Proyecto de Gestión de Liga de Fútbol

Este proyecto está diseñado para gestionar una liga de fútbol, incluyendo la creación de ligas, clubes, y jugadores, así como la gestión de datos relacionados con ellos. 
El programa permite al usuario interactuar a través de un menú para realizar diversas operaciones como agregar clubes, jugadores, modificar datos y calcular los gastos en salarios.

Descripción del Proyecto:
Este proyecto en C permite la creación y administración de una liga de fútbol, donde se pueden registrar clubes, introducir jugadores, modificar sus datos, y realizar cálculos sobre los gastos salariales. 
Cada liga tiene un conjunto de clubes, y cada club tiene un conjunto de jugadores asociados. A continuación, se describen las principales características del proyecto:

Estructuras de Datos:
Fecha: Representa una fecha con tres campos: dia, mes y anio.
Jugador: Representa un jugador de fútbol con su Nombre, Apellido1, Apellido2, Nickname, Dorsal, Posicion y Salario.
Club: Representa un club de fútbol, que incluye la Denominacion del club, el número de Abonados, el Presupuesto, la Fecha_fundacion y los Jugadores asociados.
Liga: Representa la liga de fútbol, con la Denominacion, la Categoria, el Organizador, el Estatus, el Numero_equipos, el Presupuesto y los Clubes que participan.

Funcionalidades:
Crear Liga: Permite crear una liga con información básica como el nombre, categoría, organizador, estatus, número de equipos y presupuesto.
Introducir Clubes: Permite agregar clubes a la liga, especificando la denominación, número de abonados, presupuesto y fecha de fundación.
Introducir Jugadores: Permite agregar jugadores a un club, solicitando su nombre, apellidos, apodo, dorsal, posición y salario.
Modificar Datos de Jugadores: Permite modificar la información de un jugador ya registrado.
Listar Datos: Permite listar la información de la liga, clubes y jugadores.
Eliminar Jugadores: Permite eliminar jugadores de un club.
Calcular Gastos Salariales: Permite calcular y mostrar los gastos totales en salarios de los jugadores de cada club.

Menú de Opciones:

El menú de opciones incluye las siguientes opciones:
Introducir datos de la liga.
Introducir clubes de la liga.
Listar datos de la liga.
Listar datos de los clubes.
Introducir jugadores en un club.
Modificar datos de un jugador.
Listar jugadores de un club.
Borrar jugadores de un club.
Calcular gastos salariales de los clubes.
Salir del programa.

Requisitos:

Compilador: Se requiere un compilador de C compatible con el estándar C99 o superior.
Sistema Operativo:
Funciona en sistemas operativos como Windows, Linux y macOS.

Instrucciones de Uso:

Compilación y Ejecución:
Para compilar el proyecto, utiliza un compilador de C (por ejemplo, GCC) con el siguiente comando:

gcc -o gestion_liga gestion_liga.c

Para ejecutar el programa, utiliza el siguiente comando:

./gestion_liga

Interacción:

El programa se ejecutará mostrando el menú de opciones. El usuario puede seleccionar las opciones introduciendo el número correspondiente.
El programa permite agregar, modificar y listar datos de ligas, clubes y jugadores.
También se pueden calcular los gastos en salarios de los jugadores de cada club.

Ejemplo de Uso

Crear una liga: El usuario puede ingresar el nombre de la liga, la categoría, el organizador, el estatus, el número de equipos y el presupuesto.
Agregar clubes: El usuario puede agregar varios clubes a la liga, incluyendo información como el nombre del club, el número de abonados, el presupuesto y la fecha de fundación.
Agregar jugadores a un club: Los jugadores pueden ser añadidos a un club con datos como su nombre, apellidos, apodo, dorsal, posición y salario.
Modificar jugadores: Es posible modificar los datos de un jugador previamente ingresado.
Eliminar jugadores: Los jugadores pueden ser eliminados de un club.
Calcular gastos: El programa puede calcular y mostrar los gastos salariales de todos los jugadores de un club.

Contribuciones
Las contribuciones al proyecto son bienvenidas. Si deseas mejorar el código, agregar nuevas funcionalidades o corregir errores, por favor sigue estos pasos:

Haz un fork del repositorio.
Crea una nueva rama para tu cambio (git checkout -b feature/nueva-funcionalidad).
Realiza tus cambios y haz commit (git commit -am 'Añadir nueva funcionalidad').
Haz push a la rama (git push origin feature/nueva-funcionalidad).
Crea un pull request describiendo los cambios realizados.