#ifndef _tests_h_
#define _tests_h_

#include <IRremote.h>
#include "values.h"


/* PROTÓTIPO LINHA DE PA EXPLCK UTILIZANDO TL042 */

void init_config(void);
void step_1_init_config(void);
void step_2_init_config(void);
void step_3_init_config(void);
void step_4_init_config(void);
void tunnig(void);
void tunning_tl046(void);
void input_test(void);
void wifi_aging(void);
void usb_test(void);
void test_lan(void);
void test_lamb_hdmi_tunner(void); //TESTE REDUZIDO


/* TESTES LINHA DE PRODUTO ACABADO */

void pa_1(void); // HDMI, CORES E VOLUME
void pa_2(void); //USB E RESET
void h_factory(void);
void h_tunning(void);


#endif