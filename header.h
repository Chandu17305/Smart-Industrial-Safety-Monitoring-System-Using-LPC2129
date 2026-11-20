//------ DELAY -------
extern void delay_sec(unsigned int );
extern void delay_ms(unsigned int );

//-------- LCD ----------
extern void lcd_data(unsigned char );
extern void lcd_cmd(unsigned char );
extern void lcd_init(void);
extern void lcd_str(char *);
extern int lcd_len(char *p);
extern void lcd_int(int num);
extern void lcd_float(float );

//---------UART---------------
extern void uart_tx(unsigned char );
extern void uart_init(unsigned int );
extern void uart_str(char *);
extern unsigned char uart_rx(void);
extern void uart_tx_int(int );
extern void uart_tx_float(float);

//-----------ADC-----------------
extern unsigned int adc_read(unsigned int);
extern void adc_init(void);
