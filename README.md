# exam-so-electronica-2019-01

Acontinuacion se detallara lo que contiene el parcial

RESPUESTA PROBLEMA 1.

1. Inicialmente tome el programa de threads.c ubicado en mi repositorio de la tarea que realizamos hace un par de semanas,
ahora con el codigo lo que hago es seguir las instrucciones que nos dan en el documento del parcial.

CASO 1: Para el caso colocamos cerrar puerta antes del for y la abrimos la puerta una vez finalizado el ciclo podemos
observar para este caso que estos son aproximadamente los tiempos de ejecucion:
1000 (t:1s)
100000 (t:1s)
10000000 (t:1s)
1000000000 (t:7s)
100000000000 (t:10s)

CASO 2: Para este caso se coloca cerrar puerta justo antes de incrementar la variable y abrir puerta justo despues de 
incrementar la variable los tiempos de ejecucion aproximadamente son:
10 (t:1s)
1000 (t:1s)
100000 (t:1s)
10000000 (t:3s)
1000000000 (t:43s)

Podemos decir que entre mas grande sea el argumento mas tiempo se demora el proceso, tambien observamos que los tiempos 
de ejecucion para el segunda caso son mucho mayor que el del primero esto se debe a que ponemos tanto cerrar puerta
como abrir puerta justo antes y justo despues de incrementar la variable

RESPUESTA PROBLEMA 2:

Para este ejercicio nuevamente se tomo como archivo principal el threads.c realizado anteriormente en este yo creo dos variables
globales a las cuales llamo v y u, luego creo dos hilos de ejecucion uno llamado primero y el otro llamado segundo en el hilo primero
creo dos variables tipo float las cuales son z y y con valores de 25 y 350 respectivamente luego en la variable u guardo el cociente o la division
de estos dos variables, ahora en el segundo hilo de ejecucion creo una variable tipo float la cual es x con un valor de 1250 y ahora realizo la
multiplicacion entre el valor guardado en u y x y esta operacion la guardo nuevamente en x, luego en el main lo que hago es imprimir el valor
de esta multiplicacion, cabe destacar que para lograr hacer estas operaciones tome el entero.h que realizamos en las clases anteriores y la
anadi al codigo para solamente poner division y multiplicacion y que estas se hicieran sin problema alguno.

RESPUESTA PREGUNTA 3:
 
Para este codigo nuevamente tome como referencia el que realizamos en la tarea entregada hace un par de semanas cogi ese mismo ejercicio
y lo pegue lo unico que cambie que le puse la instruccion int call_wait en el proceso hijo, esto para lograr que siempre se ejecute
primero el padre como lo pedian en el examen.

RESPUESTA PREGUNTA 4.

1. En este caso tenemos 5:100 donde 5 es el numero de instrucciones y 100 es
el porcentaje de esa instruccion en la CPU para el caso de -l 5:100 el programa
nos arroja la cantidad de procesos en la CPU agregandole el -c podemos observar
el tiempo y el PID de las 5 instruciones que tenemos ademas de la entradas/salidas 
y cuando agregamos -p podemos observar lo mismo que vemos anteriormente
solo que ahora nos aparecen los porcetajes de la CPU y de las entradas y 
salidas. El proceso 0 utiliza la CPU durante 5 instantes de tiempo y el proceso 1 durante 5 y 
el total de tiempo usado por la CPU fue de 10.

2.Cuando ponemos el -l 4:100 observamos el mismo comportamiento que vimos antewriormente
solo que en este caso tenemos 4 instrucciones en vez de 5, para el segundo caso
cuando ponemos -l 1:100 -c nos aparece una tabla con 1 CPU que se esta ejecutando
en el tiempo 1 mientras que las otras instrucciones esperan en el tiempo 2,3,4,5 ya que se produce una solicitud de entradas y salidas y en el tiempo 6
termina. Cuando anexamos el -p obtenemos el porcentaje de uso de la CPU como
de las entradas y salidas conociendo ahora que la mayor parte del programa se
hicieron solicitudes de entradas y salidas. Y con base al primer punto se supone que debe tomarle 8 instantes de tiempo
4 instrucciones de CPU y 4 de Entradas y salidas, cuando se ejecuta el comando el tiempo total de ejecucion es de 10
instantes de tiempo de los cuales 4 son intensivos en CPU y 4 intensivos de entradas y salidas
