#define F_CPU 16000000UL // Clock Speed

#include <avr/io.h>
#include <util/delay.h>

#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

void USART_Init(unsigned int);
void USART_Transmit(unsigned char);
unsigned char USART_Receive();
void USART_Transmit_String(char*);


char Welcome[]="  WelCome to USART Practice !!! \n\r\n";

int main(void)
{
	USART_Init (MYUBRR);
	// Display a Welcome Message
	USART_Transmit_String(Welcome);
	_delay_ms(10000);
	while(1)
	{
		USART_Transmit('B');
		_delay_ms(10);
	}
	return 0;
}

void USART_Init(unsigned int ubrr)
{
	/* Set baud rate */
	UBRRH = (unsigned char)(ubrr>>8);
	UBRRL = (unsigned char)ubrr;
	/* Enable receiver and transmitter */
	UCSRB = (1<<RXEN)|(1<<TXEN);
	/* Set frame format: 8data, 1stop bit */
	UCSRC = (1<<URSEL)|(3<<UCSZ0);
}

void USART_Transmit(unsigned char data)
{
	/* Wait for empty transmit buffer */
	while (!(UCSRA & (1<<UDRE)));
	/* Put data into buffer, sends the data */
	UDR = data;
}

unsigned char USART_Receive( void )
{
	/* Wait for data to be received */
	while (!(UCSRA & (1<<RXC)));
	/* Get and return received data from buffer */
	return UDR;
}

void USART_Transmit_String(char* sendString)
{
	/* Send string */
	while(*sendString != 0x00)
	{
		USART_Transmit(*sendString);
		sendString++;
	}
}