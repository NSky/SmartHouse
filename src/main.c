#include "global.h"
#include "uart.h"

#define LED_BIT PB1
#define LED_HIGH PORTB |= _BV(LED_BIT)
#define LED_LOW PORTB &= ~(_BV(LED_BIT))

void main(void) {
	uint8_t led_state = 1;

	uart_start();

	DDRB |= (1 << LED_BIT);
  
	sei();

	while (1) {
		if (led_state) {
			//uart_sendstr("LED goes on\r\n");
			//uart_sendint('1');
			LED_HIGH;
		}
		else {
			//uart_sendstr("LED goes off\r\n");
			//uart_sendint('0');
			LED_LOW;
		}

//		uart_get();

		if(data_received > 0)
		{
			uart_sendstr("Received\r");
			data_received = 0;
		}


		led_state = !led_state;
		_delay_ms(1000);
	}
}

