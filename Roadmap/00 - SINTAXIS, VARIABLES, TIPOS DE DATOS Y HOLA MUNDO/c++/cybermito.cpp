/*
 * ¿Preparad@ para aprender o repasar el lenguaje de programación que tú quieras?
 * - Recuerda que todas las instrucciones de participación están en el
 *   repositorio de GitHub.
 *
 * Lo primero... ¿Ya has elegido un lenguaje?
 * - No todos son iguales, pero sus fundamentos suelen ser comunes.
 * - Este primer reto te servirá para familiarizarte con la forma de participar
 *   enviando tus propias soluciones.
 *
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
 *
 * ¿Fácil? No te preocupes, recuerda que esta es una ruta de estudio y
 * debemos comenzar por el principio.
 */

 #include <iostream>

 int main(){

    //Comentario de una sola línea
    /*
        Este comentario es para varias líneas
        El lenguaje de programación seleccionado es C++
        No tiene una web oficial pero investigando estas dos url's serían las más importantes en cuanto a
        documentación

        Estas fuentes las saque también con una consulta a GEMINI.

        cppreference.com: Es como la enciclopedia definitiva. Está siempre actualizada y es el sitio de confianza para ver qué hace cada pieza del lenguaje.

        isocpp.org: El portal oficial de la comunidad de C++, donde se discuten las nuevas reglas del juego.

        Esta página es de tutoriales y cursos de muchos lenguajes de programación w3school.com

    */

    //Crea una variable
    int variable = 0;
    //Crea una constante
    const float PI = 3.1416;

    /* Crea variables con los tipos de datos del lenguaje 
    El lenguaje C++ tiene muchos tipos de datos y es fuertemente tipado con lo que solamente pondré los más
    usado en la lógica de programación
    En esta url, se pueden encontrar todos los tipos de datos y el espacio que ocupan en memoria: 
    https://cppreference.com/cpp/language/types

    */
    
    //Datos primitivos
    int enteroConSigno = 10;
    float decimalFloat = 3.5f;
    double decimalDouble = 45.98093450;
    char letra = 'A';
    bool boolean = true;
    //String en C++ se considera un tipo de dato compuesto, pero lo meto aquí
    //ya que se usa desde el principio para realizar el típico "hola mundo"
    std::string mensaje = "Hola, C++";

    std::cout << "Este es un tipo entero: " << enteroConSigno << std::endl;
    std::cout << "Este es un tipo decimal float: " << decimalFloat << std::endl;
    std::cout << "Este es un tipo decimal de doble precisión: " << decimalDouble << std::endl;
    std::cout << "Este es un tipo carácter: " << letra << std::endl;
    std::cout << "Este es un tipo booleano: " << boolean << std::endl;
    std::cout << "Este es un tipo cadena: " << mensaje << std::endl;


    return 0;
 }