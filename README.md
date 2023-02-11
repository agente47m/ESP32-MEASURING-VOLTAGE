# ESP32-MEASURING-VOLTAGE
Proyecto donde se usa ESP32 y un sensor de voltaje hasta 25v(dc) para hacer mediciones

En este proyecto aprenderemos a usar el sensor de votlaje, con esto podemos hacer un medidor de cualquier tipo de bateria. 
Tenemos que tener en cuenta que este sensor se rige por el principio de divisor de de voltage, el propio circuito incorpora una resistenca de 7,5 y 30 ohms

![maxresdefault](https://user-images.githubusercontent.com/14801079/218245750-2ab544cb-f712-4d20-8ff6-4c6f41913689.jpg)

Para realizar nuestro poryecto seguiremos el siguiente diagrama electrico, el icono del sensor no corresponde con el orginal
<img width="366" alt="Captura de pantalla 2023-02-11 a las 8 20 17" src="https://user-images.githubusercontent.com/14801079/218246056-4080527d-6ef1-44e2-8a2e-85bf27659479.png">

El cable de vcc del sensor nos lo podemos ahorrar si queremos ya que no hace nada 

<strong> Hay que tener en cuenta que el sensor tiene deteccion de polaridad por lo que si invertes los polos el sensor no medira </strong> 

FOTO DEL SENSOR ORIGINAL 

![61SSAHU3oML _SX342_](https://user-images.githubusercontent.com/14801079/218246183-f6f6d2cb-761f-46a6-b1f1-c0bd2846d7eb.jpg)
