/**************************************************************

Autor: Rufián en la Red
Web: http://rufianenlared.com

Basado en el trabajo de BQ (http://diwo.bq.com) el cuál está
protegido por una licencia CC-BY-SA.

Este programa se comparte con esa misma licencia que se puede
encontrar en:
http://creativecommons.org/licenses/by-sa/4.0/

**************************************************************/

#include <Servo.h>

/***   Global variables   ***/
Servo servo_6;Servo servo_9;

/***   Function declaration   ***/

void setup()
{
  servo_6.attach(8);
  servo_9.attach(9);
}


void loop()
{
  int luz_derecha=analogRead(A2);
  int luz_izquierda=analogRead(A3);
  if ((luz_derecha > 300) && (luz_izquierda > 300)) {
    servo_6.write(0);
    delay(20);
    servo_9.write(0);
    delay(20);
   }
  if (luz_derecha > luz_izquierda) {
    servo_6.write(180);
    delay(20);
    servo_9.write(90);
    delay(20);
   }
  if (luz_derecha < luz_izquierda) {
    servo_6.write(90);
    delay(20);
    servo_9.write(0);
    delay(20);
   }
  if ((luz_derecha < 100) && (luz_izquierda < 100)) {
    servo_6.write(90);
    delay(20);
    servo_9.write(90);
    delay(20);
   }

}

