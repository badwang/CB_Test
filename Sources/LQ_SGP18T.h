/********************************************************
��ƽ    ̨�������������ܿƼ��Ա���
����    д������Ƽ�����ԭ������
��Designed��by Chiu Sir
��E-mail  ��chiusir@yahoo.cn
������汾��V1.0
�������¡�2012��9��9��
��dev.env.��KEIL UV3.0
��Target  ��STC/AT89C52/STC12C5A60S2/STC12LE5A60S2
��Crystal ��11.0592M/22.1184Mhz

3.3V����˵����
1.���ر����򵽵�Ƭ��
2.����(ע�ⵥƬ�����⼸���ܽŲ�Ҫ����Χ��·)��
    GND	��
	VCC 3.3V(����������3.3V����)
	RESET=  P1^0; 
	A0   =  P1^1;
	SDI  =  P1^2;
	SCK  =  P1^3;	 
	CS   =  P1^4;
��5V�ĵ�Ƭ����Ҫ���ź����ϴ���1K���裬��Դ���뱣֤3.3V��
********************************************************/

#ifndef __SGP18T_ILI9163B_BASE_H__
#define __SGP18T_ILI9163B_BASE_H__	 

#include "PE_KSDK_Types.h"

#define		RED			0xf800
#define		GREEN		0x07e0
#define		BLUE		0x001f
#define		PURPLE		0xf81f
#define		YELLOW		0xffe0
#define		CYAN		0x07ff 		//����ɫ
#define		ORANGE		0xfc08
#define		BLACK		0x0000
#define		WHITE		0xffff

/*****************˽�к�������*********************************/

void ILI9163B_init(void);									//LCD��ʼ��

void ILI9163B_write_command(uint8 cmd);						//���Ϳ�����

void ILI9163B_write_para8(uint8 dat);						//�������ݲ���

void ILI9163B_write_para16(uint16 dat);						//����������ʾ����

void ILI9163B_address_rst(void);							//DDRAM��ַ����

void ILI9163B_SetPos(uint8 xs,uint8 ys,uint8 xe,uint8 ye);	//��λ��ʾ����λ��

void ILI9163B_display_full(uint16 color);					//ȫ����ʾĳ����ɫ


void ILI9163B_draw_part(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);
															//��������������ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ

void ILI9163B_draw_line(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);
															//���ߣ�����ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ

void ILI9163B_draw_rectangle(uint8 xs,uint8 ys,uint8 xe,uint8 ye,uint16 color_dat);
															//�����α߿�����ʼ����ֹ���꣬����ʼ����ֹ���꣬��ɫ

void ILI9163B_draw_circle(uint8 x,uint8 y,uint8 r,uint16 color_dat);
															//��Բ�α߿�Բ�ĺ����ꡢ�����꣬�뾶����ɫ

void ILI9163B_draw_dot(uint8 x,uint8 y,uint16 color_dat);	//���㣬�����꣬�����꣬��ɫ



void LCD_printc16(uint8 x, uint8 y, uint8 c_dat,uint16 word_color,uint16 back_color);

void LCD_prints16(uint8 x, uint8 y, uint8 *s_dat,uint16 word_color,uint16 back_color);

void LCD_printc6(uint8 x, uint8 y, uint8 c_dat,uint16 word_color,uint16 back_color);

void LCD_prints6(uint8 x, uint8 y, uint8 *s_dat,uint16 word_color,uint16 back_color);

void LCD_printn6(uint8 x, uint8 y, uint16 num, uint8 num_bit,uint16 word_color,uint16 back_color);

void LCD_printc(uint8 x, uint8 y, uint8 c_dat,uint16 word_color,uint16 back_color);

void LCD_prints(uint8 x, uint8 y, uint8 *s_dat,uint16 word_color,uint16 back_color);

void LCD_printn(uint8 x, uint8 y, uint16 num, uint8 num_bit,uint16 word_color,uint16 back_color);

#endif /*SGP18T_ILI9163B.h*/
