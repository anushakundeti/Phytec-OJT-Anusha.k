#include "lcd.h"
#include "delay.h"
#include "stdio.h"
extern void SysClockConfig(void);

uint8_t rfid_id[4];
int main()
		{
		//SysClockConfig();
		systick_init_ms(16000000);
		lcd_init();
		setCursor(0,0);
		lcd_send_string("RFID RC522 with");
		setCursor(4,1);
		lcd_send_string("ANUSHA_KUNDETI");
		delay(2000);
		lcd_clear();
		while(1)
		{
			{

				lcd_clear();
				char data[20];
				setCursor(0,0);
				lcd_send_string("RFID code is");
				setCursor(0,1);
				lcd_send_string(data);
				delay(1000);
			}
		delay(100);
		}
		return 0;

	}
