#include "tests.h"

IRsend irsend;


void test_lan(void){

  irsend.sendNEC(exp_input, 32);
  delay(test_delay);

  irsend.sendNEC(exp_key1, 32);
  delay(test_delay);

  irsend.sendNEC(exp_key1, 32);
  delay(test_delay);

  irsend.sendNEC(exp_key4, 32);
  delay(test_delay);

  irsend.sendNEC(exp_key7, 32);
  delay(2000);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_ok, 32);
  delay(test_delay);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  for(int i = 0;i<8;i++){
    irsend.sendNEC(exp_arrowLeft, 32);
    delay(test_delay);
  }

  irsend.sendNEC(exp_back, 32);
  delay(test_delay);
  
  irsend.sendNEC(exp_back, 32);
  delay(test_delay);
/*
  irsend.sendNEC(back, 32);
  delay(test_delay);*/
  irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

}





void init_config(void){

  irsend.sendNEC(exp_ok, 32);
  delay(10000);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(test_delay);

  irsend.sendNEC(exp_ok, 32);
  delay(test_delay);


  for(int i=0;i<12;i++){
    irsend.sendNEC(exp_arrowDown, 32);
    delay(test_delay);
  }

  irsend.sendNEC(exp_ok, 32);
  delay(test_delay);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

}


void test_lamb_hdmi_tunner(void){
  irsend.sendNEC(exp_arrowDown, 32);
    delay(delay_ok);
    irsend.sendNEC(exp_ok, 32);
    delay(2000);
    irsend.sendNEC(exp_input, 32);
    delay(test_delay);
    irsend.sendNEC(exp_arrowDown, 32);
    delay(450);
    irsend.sendNEC(exp_arrowDown, 32);
    delay(delay_ok);
    irsend.sendNEC(exp_ok, 32);
    delay(2000);
    irsend.sendNEC(exp_input, 32);
    delay(test_delay);
    irsend.sendNEC(exp_arrowUp, 32);
    delay(450);
    irsend.sendNEC(exp_arrowUp, 32);
    delay(delay_ok);
    irsend.sendNEC(exp_ok, 32);
    delay(delay_init);
}


void tunning_tl046(void){
  
  irsend.sendNEC(exp_input, 32);
  delay(test_delay);
  for(int i =0; i<5; i++){
    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);
  }
  

}


void tunnig (void){
  /*
    irsend.sendNEC(arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(arrowRight, 32);
    delay(delay_ok);
*/

    tunning_tl046();

    irsend.sendNEC(exp_ok, 32);
    delay(4000);



    irsend.sendNEC(exp_menu, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowRight, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(9000);

    irsend.sendNEC(exp_exitBtn, 32);
    delay(test_delay);

    irsend.sendNEC(exp_input, 32);
    delay(delay_ok);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

}


void input_test(void){
  
    irsend.sendNEC(exp_input, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(1500);

    irsend.sendNEC(exp_input, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(1500);

    irsend.sendNEC(exp_input, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(1500);

    irsend.sendNEC(exp_input, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowDown, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(1500);

    irsend.sendNEC(exp_homeBtn,32);
    delay(test_delay);

}





void wifi_aging(void){
  
    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);
    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);
    
    irsend.sendNEC(exp_arrowRight, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay); 
    
    irsend.sendNEC(exp_ok, 32);
    delay(5000);

    irsend.sendNEC(exp_input, 32);
    delay(test_delay);

    irsend.sendNEC(exp_key1, 32);
    delay(test_delay);

    irsend.sendNEC(exp_key1, 32);
    delay(test_delay);

    irsend.sendNEC(exp_key4, 32);
    delay(test_delay);

    irsend.sendNEC(exp_key7, 32);
    delay(1000);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_arrowUp, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

    irsend.sendNEC(exp_ok, 32);
    delay(test_delay);

}





void usb_test(void){

    irsend.sendNEC(exp_ok,32);
    delay(delay_init);

    irsend.sendNEC(exp_ok,32);
    delay(delay_init);
    /*
    irsend.sendNEC(ok,32);
    delay(delay_init);
*/
    irsend.sendNEC(exp_arrowDown, 32);
    delay(delay_init);

    irsend.sendNEC(exp_arrowDown, 32);  
    delay(300);

    irsend.sendNEC(exp_arrowRight,32);
    delay(300);

    irsend.sendNEC(exp_arrowRight,32);
    delay(300);
/*
    irsend.sendNEC(arrowRight,32);
    delay(300);
*/
    irsend.sendNEC(exp_ok,32);
    delay(3000);

    irsend.sendNEC(exp_homeBtn,32);
    delay(test_delay);

    irsend.sendNEC(exp_homeBtn,32);
    delay(test_delay);

}

void step_1_init_config(void){

  irsend.sendNEC(exp_ok, 32);
  delay(test_delay);

}


void step_2_init_config(void){

  irsend.sendNEC(exp_arrowDown, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(1500);

  for(int i = 0; i < 10 ; i++){
    irsend.sendNEC(exp_arrowDown,32);
    delay(test_delay);
  }

  irsend.sendNEC(exp_ok, 32);
  delay(test_delay);

}

void step_3_init_config(void){

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowRight, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

}
  

void step_4_init_config(void){
  irsend.sendNEC(exp_arrowDown, 32);
  delay(delay_init);

  irsend.sendNEC(exp_arrowDown, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);

  irsend.sendNEC(exp_ok, 32);
  delay(delay_init);
}

void pa_1(void){
  irsend.sendNEC(H_HDMI, 32);
  delay(2000);
  irsend.sendNEC(H_HDMI, 32);
  delay(1500);
  irsend.sendNEC(H_HDMI, 32);
  delay(1500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(500);
  irsend.sendNEC(H_SCREEN, 32);
  delay(600);
  irsend.sendNEC(H_SCREEN, 32);
  delay(600);
  irsend.sendNEC(H_F7,32);
  delay(700);
  irsend.sendNEC(H_F7,32);
  delay(700);  
  irsend.sendNEC(H_MENU,32);
  delay(600);
  irsend.sendNEC(H_MENU,32);
  delay(600);
  irsend.sendNEC(H_3D,32);
  delay(600);  
  irsend.sendNEC(H_3D,32);
  delay(600);  
  irsend.sendNEC(H_3D,32);
  delay(600);  
}

void pa_2(void){
  irsend.sendNEC(H_DMP, 32);
  delay(300);
  irsend.sendNEC(H_ENTER, 32);
  delay(2700);
  irsend.sendNEC(H_AV, 32);
  delay(600);
  irsend.sendNEC(H_MENU,32);
  delay(600);
  irsend.sendNEC(H_ARROW_DOWN,32);
  delay(600);
  irsend.sendNEC(H_ARROW_DOWN,32);
  delay(600);
  irsend.sendNEC(H_ENTER,32);
  delay(2000);
  irsend.sendNEC(H_TV,32);
  delay(600);
}

void h_factory(void){
    irsend.sendNEC(NH_MENU,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_UP,32);
    delay(200);
    irsend.sendNEC(NH_OK,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_RIGHT,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_RIGHT,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_ARROW_DOWN,32);
    delay(200);
    irsend.sendNEC(NH_KEY_1,32);
    delay(200);
    irsend.sendNEC(NH_KEY_9,32);
    delay(200);
    irsend.sendNEC(NH_KEY_6,32);
    delay(200);
    irsend.sendNEC(NH_KEY_9,32);
    delay(1000);
}

void h_tunning(void){
  irsend.sendNEC(NH_MENU,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_UP,32);
  delay(200);
  irsend.sendNEC(NH_OK,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_DOWN,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_DOWN,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_DOWN,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_RIGHT,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_RIGHT,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_UP,32);
  delay(200);
  irsend.sendNEC(NH_OK,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_LEFT,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_DOWN,32);
  delay(200);
  irsend.sendNEC(NH_ARROW_RIGHT,32);
  delay(200);
  irsend.sendNEC(NH_OK,32);
  delay(1000);
}
