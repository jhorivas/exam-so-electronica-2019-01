# exam-so-electronica-2019-01

Acontinuacion se detallara lo que contiene el parcial


Respuesta pregunta 4.

1. En este caso tenemos 5:100 donde 5 es el numero de instrucciones y 100 es
el porcentaje de esa instruccion en la CPU para el caso de -l 5:100 el programa
nos arroja la cantidad de procesos en la CPU agregandole el -c podemos observar
el tiempo y el PID de las 5 instruciones que tenemos ademas de la entradas/salidas 
y cuando agregamos -p podemos observar lo mismo que vemos anteriormente
solo que ahora nos aparecen los porcetajes de la CPU y de las entradas y 
salidas.

2.Cuando ponemos el -l 4:100 observamos el mismo comportamiento que vimos antewriormente
solo que en este caso tenemos 4 instrucciones en vez de 5, para el segundo caso
cuando ponemos -l 1:100 -c nos aparece una tabla con 1 CPU que se esta ejecutando
en el tiempo 1 mientras que las otras instrucciones esperan en el tiempo 2,3,4,5 ya que se produce una solicitud de entradas y salidas y en el tiempo 6
termina. Cuando anexamos el -p obtenemos el porcentaje de uso de la CPU como
de las entradas y salidas conociendo ahora que la mayor parte del programa se
hicieron solicitudes de entradas y salidas.
