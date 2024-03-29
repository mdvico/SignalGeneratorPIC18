#include <18F4550.h>
#device adc=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES WDT128                	//Watch Dog Timer uses 1:128 Postscale
#FUSES PLL4                  	//Divide By 4(16MHz oscillator input)
#FUSES CPUDIV1               	//No System Clock Postscaler
#FUSES HSPLL                 	//High Speed Crystal/Resonator with PLL enabled
#FUSES NOIESO                	//Internal External Switch Over mode disabled
#FUSES PUT                   	//Power Up Timer
#FUSES BORV45                	//Brownout reset at 4.5V
#FUSES NOPBADEN              	//PORTB pins are configured as digital I/O on RESET
#FUSES NOLPT1OSC             	//Timer1 configured for higher power operation
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOXINST               	//Extended set extension and Indexed Addressing mode disabled (Legacy mode)

#use delay(clock=48000000)


