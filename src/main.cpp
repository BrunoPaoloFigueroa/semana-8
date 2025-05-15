#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL
#include <util/delay.h>
/*
int main(void){
    DDRD|=0xFC;
    DDRB|=0X0F;
    while(1){
PORTD|=0xFC;
PORTB|=0X0F;
_delay_ms(1000);
PORTD&=~0xFC;
PORTB&=~0X0F;
_delay_ms(1000);
    }
}


int main(void){

    ADMUX|=(1<<REFS0)|(1<<MUX1)|(1<<ADLAR);
    ADCSRA|=(1<<ADEN)|(1<<ADPS2);
    DDRD|=0xFC;
    DDRB|=0X0F;
    char alow;
    char ahigh;

    while(1){

        ADCSRA|=(1<<ADSC);
        while(!(ADCSRA&(1<<ADIF)));
        alow=ADCL;
        ahigh=ADCH;
        ADCSRA|=(1<<ADIF);
        PORTD&=~(0xFC);
        PORTB&=~(0x0F);
        PORTD|=((ahigh<<4)&0xF0)|((alow>>4)&0x0C); 
        PORTB|=(ahigh>>4)&0x0F; 
    //  PORTD|=(alow<<2);
      //  PORTB|=((ahigh&0x03)<<2)|((alow>>6)&0x03);
    }
    return 0;
}
*/
int main(void){

    DDRD|=0xF0;
    char a=0x00;

    while(1){

        PORTD = (PORTD & 0x0F) | ((a << 4) & 0xF0);;
        _delay_ms(500);
        
        a++;
        if(a==10){
            a=0;
        }

    }

    return 0;
}

