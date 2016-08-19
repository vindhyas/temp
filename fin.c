//we include the following 2 header files one for -avr library and other-for delay.
# include <avr/io.h>
//This header file includes the apropriate IO definitions for the device
# include <util/delay.h>
//this header file includes functions (such as _delay_us, _delay_ms etc) for time delay in the execultion of the program.

int main(void)      //the main function starts:

{
  DDRB = 0b00100000;    // DDRx is a means to set the direction of each port pin(each pin in x).
  
  while(1)      //we enter the infinite while loop.
  {
    PORTB = PORTB | 0b00100000; // or PORTB= 0x01
    //here we are accessing the Port and set it to high, the onboard LED lights up
    
    _delay_ms(1000);
    //we give the delay so that LED lights up for 1 second(1000ms).
    
    PORTB = PORTB & 0b00000000; // or PORTB=0x00
    //here we are accessing the Port and set the pin low, the onboard LED lights down
    
    _delay_ms(1000);
    //we give the delay so that LED lights down for 1 second(1000ms).
  }
  return 0;
}
