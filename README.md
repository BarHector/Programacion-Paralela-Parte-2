# Programacion-Paralela-Parte-2
Segunda parte de algunos programas paralelos en lenguaje C. 

En este repositorio se veran dos métodos o clausulas de la programación paralela en lenguaje C.

1. for: Cada hilo trabaja con diferentes partes del arreglo. 
2. critical: Un hilo trabaja con un segmento de código que no puede ser interrumpido por otro hilo. En otras palabras, cada hilo espera su turno para poder trabajar cierta parte del cñodigo.

EXPLICACIÓN DEL CÓDIGO
1. El programa busca el elemento de mayor valor en un arreglo (aunque solo tiene 10 elementos se le pueden agregar más). Cada hilo (en este caso 2) tendra una fracción del arreglo, esto para que cada hilo obtenga el elemento de mayor y obtener al final el elemento de mayor valor de todo el arreglo.
2. Se usa 'for' para que cada hilo pueda trabajar distintas partes del arreglo
3. Se usa 'critial' pero eso genera un problema ya que cada hilo espera su turno para modificar 'max' (el valor máximo), como se peude deducir, esto resulta problematico ya que cada hilo puede tener o no un valor mayor a 'max', por lo que es necesario cotejar nuevamente que elemento del hilo sea mayor a 'max', en otras palabras se tiene que hacer la comprobación dos veces, una para el valor de cada hilo (de forma independiente) y otra en donde se compara con el valor máximo que se tiene hasta el moemnto de todo el arreglo.

VERSIÓN PARALELA VS VERSIÓN SECUENCIAL
  - Aunque no se cuenta con un cronométro (en el programa) para poder determinar el tiempo en el que se tarda cada versión, se deduce que el programa resulta ser mejor en su versión paralela debido a la menor cantidad de comparaciones que el mismo hace.
