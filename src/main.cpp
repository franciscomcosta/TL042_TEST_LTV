#include "main.h"

int LED = 2;
int Button1 = 4;
int Button2 = 5;
int Button3 = 6;
int Button4 = 7;


void setup(){
  Serial.begin(9600);
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
  pinMode(Button4, INPUT);
  pinMode(LED, OUTPUT);
}



/*


TEMPOS init_config


0.0 - Alimentação e inicialização (2 min)
0.1 - Escolha de linguagem (15 sec, um ok);
0.2 - Pular config e redes (12 sec)
0.3 - Aceitar termos; Serviços; Pular apresentação (3x para esquerda); 
Controle tutorial (Ok); Região/País (OK); Modo casa(Ok); Confima (Ok);
ChromeCast Desligado (OK) (12 sec)
0.4 - Pular sintona e configuração final (22 sec)


1 - tunnig (15sec)
2 - usb
3 - input
4 - test lan
5 - wifi aging


*/



void loop(){

  digitalWrite(LED, HIGH);

  if(digitalRead(Button1) == HIGH){
    digitalWrite(LED, LOW);
    //input_test();
    //tunning_tl046();
    //test_lan();
    usb_test();
    
    }

  if(digitalRead(Button2) == HIGH){
    digitalWrite(LED, LOW);
    test_lamb_hdmi_tunner();
    //tunnig();
  }

  if(digitalRead(Button3) == HIGH){
    digitalWrite(LED, LOW);
    test_lan();
    //wifi_aging();
  }

  if(digitalRead(Button4) == HIGH){
    digitalWrite(LED, LOW);
    //usb_test();
    //step_4_init_config();
    h_factory();
  }

}

