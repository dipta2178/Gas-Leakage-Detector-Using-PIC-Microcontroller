sbit LCD_RS at RB2_bit;
sbit LCD_EN at RB3_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISB2_bit;
sbit LCD_EN_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;

int value;

void main() {

    ADC_Init();
    lcd_init();
    lcd_cmd(_LCD_CURSOR_OFF);
    lcd_cmd(_lcd_clear);
    TRISB0_BIT=0;
 
 while(1){
 
  value=ADC_read(0);

    if(value>300){
    
    PORTB.B0=1;
    lcd_out(1,1,"   GAS DETECTED");
    
    }
    else{
    
    PORTB.B0=0;
    lcd_out(1,1,"NO GAS DETECTED");

   }
}
}