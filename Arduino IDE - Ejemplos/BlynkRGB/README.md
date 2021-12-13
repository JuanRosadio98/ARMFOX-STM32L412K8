Este programa encendera cada uno de los colores del Led RGB de la placa y mostrara que Led se enciende en el Monitor Serie usando el puerto USB en modo CDC. Este modo emula un puerto serie a través del USB permitiendo el intercambio de datos con la computadora.

1. Antes de subir este código se necesita habilitar el soporte USB en modo CDC 

![image](https://user-images.githubusercontent.com/68084473/145756553-a3b6e5f9-a9a3-43f7-b548-c0c0b3896753.png)

2. Luego de subido el codigo, su computadora debera detectar el nuevo dispositivo y debera seleccionar el puerto COM respectivo en Arduino. 

(Puede abrir el Administrador de Dispositivos en Windows e ir a la seccion "Puertos (COM y LPT)" para visualizar el puerto COM asignado a su placa).

![image](https://user-images.githubusercontent.com/68084473/145761125-db53cbee-30be-46cf-8c8b-f21993914d39.png)

![image](https://user-images.githubusercontent.com/68084473/145758467-f60b6855-be8c-4d56-9938-a69a8953829b.png)

3. Finalmente debe abrir el Monitor Serie y se observara los datos enviados por la placa

![image](https://user-images.githubusercontent.com/68084473/145759311-af9b4eee-5532-4f0e-8efa-485cb43a62b0.png)

