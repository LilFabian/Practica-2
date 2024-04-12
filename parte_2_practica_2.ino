/*
	Fundacion Kinal
    Centro educativo tecnico laboral kinal
    quinto perito 
    quinto electronica
    Codigo Tecnico: EB5AM
    Curso: Taller de electronica digital y reparacion de computadoras I
    Proyecto :Escritura en  un pin digital(Encender o apagar un pin digital)
    Dev: Fabian Andree Sinay Canel
    Fecha: 12 de abril
*/

//Directivas de preprocesador
#define LedNaranja   4   //pin4 conectado a un led
#define tiempo_espera 500 //tiempo entre estadps del led

void setup()
{
  pinMode(LedNaranja, OUTPUT); //Pin4 como salida.
  digitalWrite(LedNaranja, LOW); //LED conectado a pin13 inicia apagado
  
}

void loop()
{
 digitalWrite(LedNaranja, HIGH); //enciendo el led conectado al pin4
 delay(tiempo_espera); //espera de 500 milisegundos.
 digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
 delay(tiempo_espera); //espera de 500 milisegundos
}