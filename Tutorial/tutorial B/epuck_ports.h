/****************************************************************
* 			Defintition of all port of e-puck			 		*
*			Version 1.0 november 2005							*
*			Michael Bonani, Francesco Mondada, Davis Dadie		*
*																*
****************************************************************/

#define _EPUCK_PORTS

/*********************GENERAL SETUP************************/

#define FOSC   7.3728e6     // 7.3728Mhz crystal in XTL mode 
#define PLL    8.0       	// 8x PLL
 

#define MILLISEC  (FCY/1.0e3)		// 1mSec delay constant
#define MICROSEC  (FCY/1.0e6)		// 1uSec delay constant
#define NANOSEC   (FCY/1.0e9)		// 1nSec delay constant

#define	INTERRUPT_DELAY	(10*TCY_PIC)//delay to start an interrupt in [ns] (observe with p30f6014) 

#define FALSE	0

#define OUTPUT_PIN 0 
/*LEDS*/
/*First in front of robot than turning clokwise*/
#define LED0 _LATA6
#define LED1 _LATA7
#define LED2 _LATA9
#define LED3 _LATA12
#define LED4 _LATA10
#define LED5 _LATA13
#define LED6 _LATA14
#define LED7 _LATA15

#define LED1_dir _TRISA7
#define LED2_dir _TRISA9
#define LED3_dir _TRISA12
#define LED4_dir _TRISA10
#define LED5_dir _TRISA13
#define LED6_dir _TRISA14
#define LED7_dir _TRISA15

#define front_LED_dir _TRISC1

#define body_LED_dir _TRISC2

#define pulse_IR0 _LATF7		// pulse IR 0 and 4
#define pulse_IR1 _LATF8		// pulse IR 1 and 5
#define pulse_IR2 _LATG0		// pulse IR 2 and 6
#define pulse_IR3 _LATG1		// pulse IR 3 and 7

#define pulse_IR1_dir _TRISF8
#define pulse_IR2_dir _TRISG0
#define pulse_IR3_dir _TRISG1

#define IR0 8  // ir proximity sensor 0 on AD channel 8
#define IR1 9  // ir proximity sensor 1 on AD channel 9
#define IR2 10  // ir proximity sensor 2 on AD channel 10
#define IR3 11  // ir proximity sensor 3 on AD channel 11
#define IR4 12  // ir proximity sensor 4 on AD channel 12
#define IR5 13  // ir proximity sensor 5 on AD channel 13
#define IR6 14  // ir proximity sensor 6 on AD channel 14
#define IR7 15  // ir proximity sensor 7 on AD channel 15

#define MIC1 2  // microphone 1 on AD channel 2
#define MIC2 3  // microphone 2 on AD channel 3
#define MIC3 4  // microphone 3 on AD channel 4

#define ACCY 6  // Y Axis of accelerometer on AD channel 6
#define ACCZ 7  // Z Axis of accelerometer on AD channel 7

#define audio_on _LATF0
#define audio_on_dir _TRISF0

#define motor1_pha _LATD0
#define motor1_phb _LATD1
#define motor1_phc _LATD2
#define motor1_phd _LATD3
#define motor2_pha _LATD4
#define motor2_phb _LATD5
#define motor2_phc _LATD6
#define motor2_phd _LATD7

#define motor1_phb_dir _TRISD1
#define motor1_phc_dir _TRISD2
#define motor1_phd_dir _TRISD3
#define motor2_pha_dir _TRISD4