#define F_CPU 8000000UL

#include<avr/io.h>
#include<util/delay.h>

int main()
{

  
DDRB=0x20;
while(1)
{
 PORTB=0x20;
 _delay_ms(1000);
 PORTB=0x00;
 _delay_ms(1000);
} 
}
