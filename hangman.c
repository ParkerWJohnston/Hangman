/* This files provides address values that exist in the system */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BOARD                 "DE1-SoC"

/* Memory */
#define DDR_BASE              0x00000000
#define DDR_END               0x3FFFFFFF
#define A9_ONCHIP_BASE        0xFFFF0000
#define A9_ONCHIP_END         0xFFFFFFFF
#define SDRAM_BASE            0xC0000000
#define SDRAM_END             0xC3FFFFFF
#define FPGA_ONCHIP_BASE      0xC8000000
#define FPGA_ONCHIP_END       0xC803FFFF
#define FPGA_CHAR_BASE        0xC9000000
#define FPGA_CHAR_END         0xC9001FFF

/* Cyclone V FPGA devices */
#define LEDR_BASE             0xFF200000
#define HEX3_HEX0_BASE        0xFF200020
#define HEX5_HEX4_BASE        0xFF200030
#define SW_BASE               0xFF200040
#define KEY_BASE              0xFF200050
#define JP1_BASE              0xFF200060
#define JP2_BASE              0xFF200070
#define PS2_BASE              0xFF200100
#define PS2_DUAL_BASE         0xFF200108
#define JTAG_UART_BASE        0xFF201000
#define JTAG_UART_2_BASE      0xFF201008
#define IrDA_BASE             0xFF201020
#define TIMER_BASE            0xFF202000
#define AV_CONFIG_BASE        0xFF203000
#define PIXEL_BUF_CTRL_BASE   0xFF203020
#define CHAR_BUF_CTRL_BASE    0xFF203030
#define AUDIO_BASE            0xFF203040
#define VIDEO_IN_BASE         0xFF203060
#define ADC_BASE              0xFF204000

/* Cyclone V HPS devices */
#define HPS_GPIO1_BASE        0xFF709000
#define HPS_TIMER0_BASE       0xFFC08000
#define HPS_TIMER1_BASE       0xFFC09000
#define HPS_TIMER2_BASE       0xFFD00000
#define HPS_TIMER3_BASE       0xFFD01000
#define FPGA_BRIDGE           0xFFD0501C

/* ARM A9 MPCORE devices */
#define   PERIPH_BASE         0xFFFEC000    // base address of peripheral devices
#define   MPCORE_PRIV_TIMER   0xFFFEC600    // PERIPH_BASE + 0x0600

/* Interrupt controller (GIC) CPU interface(s) */
#define MPCORE_GIC_CPUIF      0xFFFEC100    // PERIPH_BASE + 0x100
#define ICCICR                0x00          // offset to CPU interface control reg
#define ICCPMR                0x04          // offset to interrupt priority mask reg
#define ICCIAR                0x0C          // offset to interrupt acknowledge reg
#define ICCEOIR               0x10          // offset to end of interrupt reg
/* Interrupt controller (GIC) distributor interface(s) */
#define MPCORE_GIC_DIST       0xFFFED000    // PERIPH_BASE + 0x1000
#define ICDDCR                0x00          // offset to distributor control reg
#define ICDISER               0x100         // offset to interrupt set-enable regs
#define ICDICER               0x180         // offset to interrupt clear-enable regs
#define ICDIPTR               0x800         // offset to interrupt processor targets regs
#define ICDICFR               0xC00         // offset to interrupt configuration regs

short int circle_array[15][30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x62, 0x10, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x62, 0x10, 0x00, 0x00, 
  0x41, 0x08, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x41, 0x08, 
  0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xdf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x82, 0x10, 
  0x00, 0x00, 0x62, 0x10, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x62, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x62, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
short int a_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int b_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000};
short int c_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000};
short int d_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000};
short int e_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff};
short int f_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000};
short int g_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000};
short int h_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int i_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff};
short int j_arr[5][5] = { 
	0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000};
short int k_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int l_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff};
short int n_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int m_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int o_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000};
short int p_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000};
short int q_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 
  	0x0000, 0xffff, 0xffff, 0x0000, 0xffff};
short int r_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int s_arr[5][5] = { 
	0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0x0000};
short int t_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000};
short int u_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000};
short int v_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000};
short int w_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 
  	0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int x_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
  	0xffff, 0x0000, 0x0000, 0x0000, 0xffff};
short int y_arr[5][5] = { 
	0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 
  	0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000};
short int z_arr[5][5] = { 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
  	0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 
  	0xffff, 0xffff, 0xffff, 0xffff, 0xffff};
short int semicolon[5][5] = {
	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0x0000, 0x0000, 0x0000};
short int dash[5][5] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
  	0x0000, 0x0000, 0x0000, 0x0000, 0x0000};

int hex_codes[10] = {0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110, 
					 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01100111};


volatile int pixel_buffer_start; // global variable
volatile int * pixel_ctrl_ptr;
short int WHITE = 0xFFFF;
volatile int * PS2_ptr;
volatile int * hex_display_ptr = (int *) 0xFF200020;
volatile int count;


void wait_for_vsync();
void clear_screen();
void draw_board();
void draw_head();
void draw_body();
void draw_right_arm();
void draw_left_arm();
void draw_right_leg();
void draw_left_leg();
void print_letter(char letter, int x, int y, short int text_colour);
void print_string(char str[], int start_x, int start_y, int width, short int text_colour);
void draw_spaces(char str[]);
void display_wrong_guess(char letter, int num_guesses);
bool display_right_guess(char letter, char str[]);
void display_hex(int value);
char index_to_letter(int i);
char ps2Converter(char name);
char getInput();
bool hasBeenGuessed(char letter, bool guesses[]);
bool checkGameOver(bool guesses[], char word[]);
void get_word_from_user(char arr[]);
void pushbutton_ISR(void);
void intervaltimer_ISR(void);
void config_interrupt(int, int);


void disable_A9_interrupts(void);
void set_A9_IRQ_stack(void);
void config_GIC(void);
void config_KEYs(void);
void config_TIMER(void);
void enable_A9_interrupts(void);



void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void plot_pixel(int x, int y, short int line_color)
{
    *(short int *)(pixel_buffer_start + (y << 10) + (x << 1)) = line_color;
}

void draw_line(int x0, int y0, int x1, int y1, short int line_colour){
	bool is_steep = abs(y1 - y0) > abs(x1 - x0);
	if (is_steep){
 		swap(&x0, &y0);
 		swap(&x1, &y1);
	}
 	if (x0 > x1) {
		swap(&x0, &x1);
	 	swap(&y0, &y1);
	}

	int deltax = x1 - x0;
	int deltay = abs(y1 - y0);
	int error = -(deltax / 2);
	int y = y0;
	int y_step;
	if (y0 < y1) {
		y_step = 1;
	} else {
		y_step = -1;
	}
	int x;
	for(x=x0; x<=x1;x++){
		if (is_steep) {
			plot_pixel(y, x, line_colour);
		}
		else{
			plot_pixel(x, y,line_colour);
		}
		error = error + deltay;
		if (error >= 0){
			y = y + y_step;
			error = error - deltax;
		}
	}
}

void clear_screen(){
	int x,y;
	int black = 0;
	for (x=0;x<320;x++){
		for(y=0; y<240; y++){
			plot_pixel(x,y,black);
		}
	}
}

int main(void)
{
	

	count = 120;
    pixel_ctrl_ptr = (int *)0xFF203020;
	PS2_ptr = (int *) 0xFF200100;
	//enabling interrupts
	*(PS2_ptr+1) = 0b01;
	
	disable_A9_interrupts(); // disable interrupts in the A9 processor
	set_A9_IRQ_stack(); // initialize the stack pointer for IRQ mode
	config_GIC(); // configure the general interrupt controller
	config_TIMER(); // configure timer to generate interrupts
	
	
	
	

	/* set front pixel buffer to start of FPGA On-chip memory */
	*(pixel_ctrl_ptr + 1) = 0xC8000000; // first store the address in the
	// back buffer
	/* now, swap the front/back buffers, to set the front buffer location */
	wait_for_vsync();
	/* initialize a pointer to the pixel buffer, used by drawing functions */
	pixel_buffer_start = *pixel_ctrl_ptr;
	clear_screen(); // pixel_buffer_start points to the pixel buffer
	/* set back pixel buffer to start of SDRAM memory */
	*(pixel_ctrl_ptr + 1) = 0xC0000000;
	pixel_buffer_start = *(pixel_ctrl_ptr + 1); // we draw on the back buffer
	
	
	//int length = strlen(test_word);
	
	clear_screen();
	print_string("welcome to hangman", 110,80, 100, 0xF81F);
	print_string("press any push button", 100,100, 120, 0xF81F);
	print_string("to start a new", 120,120, 100, 0xF81F);
	print_string("game", 150,140, 100, 0xF81F);
	wait_for_vsync();
	pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	
	bool start = false;
	while(!start){
		//wait for input
		volatile int * key_edge_capture = (int *)0xFF20005C;
		int poll = *key_edge_capture;
		while (poll==0){
			poll = *key_edge_capture;
		}
		*key_edge_capture = 0xFFFF;
		start=true;
	}
	wait_for_vsync();
	pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	//clearing writing
	print_string("welcome to hangman", 110,80, 100, 0x0000);
	print_string("press any push button", 100,100, 120, 0x0000);
	print_string("to start a new", 120,120, 100, 0x0000);
	print_string("game", 150,140, 100, 0x0000);
	wait_for_vsync();
	pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	
	while(1){
		//infinite loop
		
		print_string("player one", 130,80, 100, 0x4F7C);
		print_string("type your word", 120,100, 100, 0x4F7C);
		print_string("and press enter:", 115,120, 100, 0x4F7C);
		//print_string("game", 146,140, 100, 0xF81F);
		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
		
		clear_screen();
		char test_word[100];
		get_word_from_user(test_word);
		
		//wait for input
		volatile int * key_edge_capture = (int *)0xFF20005C;
		int poll = *key_edge_capture;


		//set up timer
		count = 120;
		display_hex(count);
		enable_A9_interrupts(); // enable interrupts in the A9 processor
		
		draw_board();
		draw_spaces(test_word);

		//number of wrong guesses, player loses if they reach 6
		int num_guesses = 0;

		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
		
		
		print_string("player one", 130,80, 100, 0x0000);
		print_string("type your word", 120,100, 100, 0x0000);
		print_string("and press enter:", 115,120, 100, 0x0000);

		draw_board();
		draw_spaces(test_word);
		bool guesses[26] = {false, false, false, false, false, 
							false, false, false, false, false, 
							false, false, false, false, false, 
							false, false, false, false, false, 
							false, false, false, false, false, 
							false};
		bool game_over = false;
		bool winner = false;
		int wrong_guesses = 0;
		while(!game_over){
			
			//drawing body parts based on number of wrong guesses made
			if(wrong_guesses==6) draw_left_leg();
			else if(wrong_guesses==5) draw_right_leg();
			else if(wrong_guesses==4) draw_left_arm();
			else if(wrong_guesses==3) draw_right_arm();
			else if(wrong_guesses==2) draw_body();
			else if(wrong_guesses==1) draw_head();

			//send to screen
			wait_for_vsync();
			pixel_buffer_start = *(pixel_ctrl_ptr + 1);

			//also draw on other buffer
			if(wrong_guesses==6) draw_left_leg();
			else if(wrong_guesses==5) draw_right_leg();
			else if(wrong_guesses==4) draw_left_arm();
			else if(wrong_guesses==3) draw_right_arm();
			else if(wrong_guesses==2) draw_body();
			else if(wrong_guesses==1) draw_head();
			//wait for input

			char input = getInput();
			
			if(input=='\27'||count<=0){
				game_over = true;
			}else{
				num_guesses++;
				if(!hasBeenGuessed(input, guesses)) {
				//if letter hasn't been guessed yet
					guesses[input - 97] = true;
					if(display_right_guess(input, test_word)){
						wait_for_vsync();
						pixel_buffer_start = *(pixel_ctrl_ptr + 1);

						display_right_guess(input, test_word);

					} else {
						wrong_guesses++;
						display_wrong_guess(input, wrong_guesses);
						wait_for_vsync();
						pixel_buffer_start = *(pixel_ctrl_ptr + 1);
						display_wrong_guess(input, wrong_guesses);
					}
				}
				if(wrong_guesses == 7) {
					game_over = true;
				} else {
					game_over = checkGameOver(guesses, test_word);
					if(game_over) winner = true;
				}
			}
		}
			

		disable_A9_interrupts(); // disable interrupts in the A9 processor
		count = 120;
		clear_screen();

		if(!winner){
			print_string("game over", 130,80, 100, 0xF81F);
		} else {
			print_string("you win", 135,80, 100, 0xF81F);
		}

		print_string("press any key", 120,100, 100, 0xF81F);
		print_string("to start a new", 115,120, 100, 0xF81F);
		print_string("game", 146,140, 100, 0xF81F);
		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	
		//volatile int * key_edge_capture = (int *)0xFF20005C;
		poll = *key_edge_capture;
		while (poll==0){
			poll = *key_edge_capture;
		}
		*key_edge_capture = 0xFFFF;
		clear_screen();
		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
		
		//clearing writing
		if(!winner){
			print_string("game over", 130,80, 100, 0x0000);
		} else {
			print_string("you win", 135,80, 100, 0x0000);
		}
		print_string("press any key", 120,100, 100, 0x0000);
		print_string("to start a new", 115,120, 100, 0x0000);
		print_string("game", 146,140, 100, 0x0000);
		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	
	}
		
    
}


void wait_for_vsync(){
	*(pixel_ctrl_ptr) = 1;
	int status = *(pixel_ctrl_ptr+3);
	while((status&0x01)!=0){
		status = *(pixel_ctrl_ptr+3);
	}
}


//draws main board
void draw_board(){
	
	draw_line(50, 150, 100, 150, WHITE);
	draw_line(75, 150, 75, 50, WHITE);
	draw_line(75, 50, 125, 50, WHITE);
	draw_line(125, 50, 125, 70, WHITE);
	draw_line(75, 65, 90, 50, WHITE);
	
	short int yellow = 0xFF00;
	
	//box
	print_string("guesses", 200, 50, 75, yellow);
	draw_line(175, 65, 275, 65, WHITE);
	draw_line(175, 65, 175, 130, WHITE);
	draw_line(175, 130, 275, 130, WHITE);
	draw_line(275, 65, 275, 130, WHITE);
	
	
	print_string("word:", 30, 175, 100, yellow);
}


void draw_head(){
	int x = 118;
	int y = 70;
	for(int i = 0; i<15; i++){
		int y0 = y+i;
		for(int j = 0; j<30; j+=2){
			int x0 = x+(j/2);
			int colour = (circle_array[i][j]<<8)+ circle_array[i][j+1];
			plot_pixel(x0, y0, colour);
		}
	}	
}

void draw_body(){
	int x = 125;
	int y0 = 85;
	int y1 = 110;
	draw_line(x, y0, x, y1, WHITE);
}

void draw_left_arm(){
	int x0 = 125;
	int x1 = 110;
	int y0 = 85;
	int y1 = 100;
	draw_line(x0, y0, x1, y1, WHITE);
}

void draw_right_arm(){
	int x0 = 125;
	int x1 = 140;
	int y0 = 85;
	int y1 = 100;
	draw_line(x0, y0, x1, y1, WHITE);
}

void draw_left_leg(){
	int x0 = 125;
	int x1 = 115;
	int y0 = 110;
	int y1 = 130;
	draw_line(x0, y0, x1, y1, WHITE);
}

void draw_right_leg(){
	int x0 = 125;
	int x1 = 135;
	int y0 = 110;
	int y1 = 130;
	draw_line(x0, y0, x1, y1, WHITE);
}

void print_letter(char letter, int x, int y, short int text_colour){
	for(int i=0; i<5; i++){
		for(int j = 0; j<5; j++){
			int x0 = x+j;
			int y0 = y+i;
			short int colour;
			if(letter=='a'||letter=='A') colour = a_arr[i][j];
			else if(letter=='b'||letter=='B') colour = b_arr[i][j];
			else if(letter=='c'||letter=='C') colour = c_arr[i][j];
			else if(letter=='d') colour = d_arr[i][j];
			else if(letter=='e') colour = e_arr[i][j];
			else if(letter=='f') colour = f_arr[i][j];
			else if(letter=='g') colour = g_arr[i][j];
			else if(letter=='h') colour = h_arr[i][j];
			else if(letter=='i') colour = i_arr[i][j];
			else if(letter=='j') colour = j_arr[i][j];
			else if(letter=='k') colour = k_arr[i][j];
			else if(letter=='l') colour = l_arr[i][j];
			else if(letter=='m') colour = m_arr[i][j];
			else if(letter=='n') colour = n_arr[i][j];
			else if(letter=='o') colour = o_arr[i][j];
			else if(letter=='p') colour = p_arr[i][j];
			else if(letter=='q') colour = q_arr[i][j];
			else if(letter=='r') colour = r_arr[i][j];
			else if(letter=='s') colour = s_arr[i][j];
			else if(letter=='t') colour = t_arr[i][j];
			else if(letter=='u') colour = u_arr[i][j];
			else if(letter=='v') colour = v_arr[i][j];
			else if(letter=='w') colour = w_arr[i][j];
			else if(letter=='x') colour = x_arr[i][j];
			else if(letter=='y') colour = y_arr[i][j];
			else if(letter=='z') colour = z_arr[i][j];
			else if(letter==':') colour = semicolon[i][j];
			else if(letter=='-') colour = dash[i][j];
			else colour = 0x0000;
			
			if(colour!=0)	plot_pixel(x0, y0, text_colour);
			else plot_pixel(x0, y0, colour);
			
		}
	}
}

void print_string(char str[], int start_x, int start_y, int width, short int text_colour){
	int i=0;
	int x=0;
	int y=0;
	while(str[i]!='\0'){
		print_letter(str[i], start_x+x, start_y+y, text_colour);
		if(x<width){
			x+=6;
		}else{
			x = 0;
			y+=6;
		}
		i++;
	}
}

void draw_spaces(char str[]){
	int i=0;
	int x=30;
	int y=200;
	while(str[i]!='\0'){
		if(str[i]!=' '){
			int x0 = x+6;
			draw_line(x, y, x0, y, WHITE);
		}
		x+=8;
		if(x>=280){
			if(str[i+1]!='\0'&&str[i+1]!=' ') print_letter('-', x, y-6, WHITE);
			x=30;
			y+=12;
		}
		
		i++;
	}
}
void display_wrong_guess(char letter, int num_guesses){
	int x,y;
	if(num_guesses==1){
		x=190;
		y=80;
	}else if(num_guesses==2){
		x=210;
		y=80;
	}else if(num_guesses==3){
		x=230;
		y=80;
	}else if(num_guesses==4){
		x=250;
		y=80;
	}else if(num_guesses==5){
		x=190;
		y=100;
	}else if(num_guesses==6){
		x=210;
		y=100;
	}
	print_letter(letter, x,y, 0xF800);
}

bool display_right_guess(char letter, char str[]){
	int i=0;
	int x=31;
	int y=194;
	bool hit = false;
	while(str[i]!='\0'){
		if(str[i]== letter){
			print_letter(letter, x, y, WHITE);
			hit =true;
		}
		x+=8;
		if(x>=280){
			x=31;
			y+=12;
		}
		i++;
	}
	return hit;
}

void display_hex(int value){
	int hundreds, tens, ones;
	if(value<0){
		hundreds = 0;
		tens = 0;
		ones = 0;
	} else {
		hundreds = value / 100;
		value = value - hundreds*100;
		tens = value / 10;
		ones = value - tens*10;
	}
	*hex_display_ptr = (hex_codes[hundreds]<<16)|(hex_codes[tens]<<8)|(hex_codes[ones]);
}

char index_to_letter(int i){
	if(i==0) return 'a';
	else if(i==1) return 'b';
	else if(i==2) return 'c';
	else if(i==3) return 'd';
	else if(i==4) return 'e';
	else if(i==5) return 'f';
	else if(i==6) return 'g';
	else if(i==7) return 'h';
	else if(i==8) return 'i';
	else if(i==9) return 'j';
	else if(i==10) return 'k';
	else if(i==11) return 'l';
	else if(i==12) return 'm';
	else if(i==13) return 'n';
	else if(i==14) return 'o';
	else if(i==15) return 'p';
	else if(i==16) return 'q';
	else if(i==17) return 'r';
	else if(i==18) return 's';
	else if(i==19) return 't';
	else if(i==20) return 'u';
	else if(i==21) return 'v';
	else if(i==22) return 'w';
	else if(i==23) return 'x';
	else if(i==24) return 'y';
	else if(i==25) return 'z';
	else return ' ';
}

char ps2Converter(char name) {
    switch(name) {
        case ((char) 0x1C):
            return 'a';
            break;
        case ((char) 0x32):
            return 'b';
            break;
        case ((char) 0x21):
            return 'c';
            break;
        case ((char) 0x23):
            return 'd';
            break;
        case ((char) 0x24):
            return 'e';
            break;
        case ((char) 0x2B):
            return 'f';
            break;
        case ((char) 0x34):
            return 'g';
            break;
        case ((char) 0x33):
            return 'h';
            break;
        case ((char) 0x43):
            return 'i';
            break;
        case ((char) 0x3B):
            return 'j';
            break;
        case ((char) 0x42):
            return 'k';
            break;
        case ((char) 0x4B):
            return 'l';
            break;
        case ((char) 0x3A):
            return 'm';
            break;
        case ((char) 0x31):
            return 'n';
            break;
        case ((char) 0x44):
            return 'o';
            break;
        case ((char) 0x4D):
            return 'p';
            break;
        case ((char) 0x15):
            return 'q';
            break;
        case ((char) 0x2D):
            return 'r';
            break;
        case ((char) 0x1B):
            return 's';
            break;
        case ((char) 0x2C):
            return 't';
            break;
        case ((char) 0x3C):
            return 'u';
            break;
        case ((char) 0x2A):
            return 'v';
            break;
        case ((char) 0x1D):
            return 'w';
            break;
        case ((char) 0x22):
            return 'x';
            break;
        case ((char) 0x35):
            return 'y';
            break;
        case ((char) 0x1A):
            return 'z';
            break;
		case((char) 0x5A):
			return '\n';
			break;
		case((char) 0x29):
			return ' ';
			break;
		case((char) 0x76): //escape key
			return '\27';
			break;
        default:
            return 0;
    }
}

char getInput()  {
	//checking for interrupt
	int poll = *(PS2_ptr+1)&0x100;
	while(poll==0&&count>0){
		
		poll = *(PS2_ptr+1)&0x100;
	}
	if(count<=0){
		return '\27';
	}

	//int RAVAIL = (PS2_data & 0xE000);
	bool break_code = false;
	int PS2_data = *(PS2_ptr);
	int typed = PS2_data & 0xFF;
	//char letter = ps2Converter(typed);
	while(!break_code){
			// read the Data register in the PS/2 port
		int PS2_data = *(PS2_ptr);
		int typed = PS2_data & 0xFF;
		
		int RVALID = (PS2_data & 0x8000);	// extract the RVALID field
		
		if(RVALID&&typed == 0xF0){
			break_code=true;
		}
	}
	while(1){
	PS2_data = *(PS2_ptr);
	int RVALID = (PS2_data & 0x8000);
	typed = PS2_data & 0xFF;
		if(RVALID){
			char letter = ps2Converter(typed);
			return letter;
		}
	}
	
	
}

bool hasBeenGuessed(char letter, bool guesses[]) {
	if(letter-97<0||letter-97>25) return true;
	return guesses[letter - 97];
}

bool checkGameOver(bool guesses[], char word[]) {
	
	for(int i = 0; i < strlen(word); i++) {
		if((word[i]-97)>=0&&((word[i]-97)<25)){
			if(!guesses[word[i] - 97]) {
				return false;
			}
		}
	}
	return true;
}

void get_word_from_user(char arr[]){
	for(int i = 0; i<100; i++){
		char letter = getInput(); 
		if(letter == '\n'){
			arr[i] = '\0';
			return;
		} else {
			arr[i] = letter;
		}
	}
	return;
}

/* setup the timer interrupts in the FPGA */
void config_TIMER() {
	volatile int * TIMER_ptr = (int *) 0xFFFEC600;
	*TIMER_ptr = 200000000;
	*(TIMER_ptr + 2) = 0b111; //enable interrupts
}

// Define the IRQ exception handler
void __attribute__((interrupt)) __cs3_isr_irq(void) {
	// Read the ICCIAR from the CPU Interface in the GIC
	int interrupt_ID = *((int *)0xFFFEC10C);
	if (interrupt_ID == 29) // check if interrupt is from the timer
		intervaltimer_ISR();
	
	//else if (interrupt_ID == 73) // check if interrupt is from the timer
		//pushbutton_ISR();
		
	else
		while (1); // if unexpected, then stay here
	
	// Write to the End of Interrupt Register (ICCEOIR)
	*((int *)0xFFFEC110) = interrupt_ID;
}


// Define the remaining exception handlers
void __attribute__((interrupt)) __cs3_reset(void) {
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_undef(void) {
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_swi(void) {
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_pabort(void) {
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_dabort(void) {
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_fiq(void) {
	while (1);
}


/*
* Turn off interrupts in the ARM processor
*/
void disable_A9_interrupts(void) {
	int status = 0b11010011;
	asm("msr cpsr, %[ps]" : : [ps] "r"(status));
}


/*
* Initialize the banked stack pointer register for IRQ mode
*/
void set_A9_IRQ_stack(void) {
	int stack, mode;
	stack = 0xFFFFFFFF - 7; // top of A9 onchip memory, aligned to 8 bytes
	/* change processor to IRQ mode with interrupts disabled */
	mode = 0b11010010;
	asm("msr cpsr, %[ps]" : : [ps] "r"(mode));
	/* set banked stack pointer */
	asm("mov sp, %[ps]" : : [ps] "r"(stack));
	/* go back to SVC mode before executing subroutine return! */
	mode = 0b11010011;
	asm("msr cpsr, %[ps]" : : [ps] "r"(mode));
}


/*
* Turn on interrupts in the ARM processor
*/
void enable_A9_interrupts(void) {
	int status = 0b01010011;
	asm("msr cpsr, %[ps]" : : [ps] "r"(status));
}


/*
* Configure the Generic Interrupt Controller (GIC)
*/
void config_GIC(void) {
	config_interrupt (29, 1); // configure the FPGA private timer interrpt (29)
	// Set Interrupt Priority Mask Register (ICCPMR). Enable interrupts of all
	// priorities
	*((int *) 0xFFFEC104) = 0xFFFF;
	// Set CPU Interface Control Register (ICCICR). Enable signaling of
	// interrupts
	*((int *) 0xFFFEC100) = 1;
	// Configure the Distributor Control Register (ICDDCR) to send pending
	// interrupts to CPUs
	*((int *) 0xFFFED000) = 1;
}


/*
* Configure Set Enable Registers (ICDISERn) and Interrupt Processor Target
* Registers (ICDIPTRn). The default (reset) values are used for other registers
* in the GIC.
*/
void config_interrupt(int N, int CPU_target) {
	int reg_offset, index, value, address;
	/* Configure the Interrupt Set-Enable Registers (ICDISERn).
	* reg_offset = (integer_div(N / 32) * 4
	* value = 1 << (N mod 32) */
	reg_offset = (N >> 3) & 0xFFFFFFFC;
	index = N & 0x1F;
	value = 0x1 << index;
	address = 0xFFFED100 + reg_offset;
	/* Now that we know the register address and value, set the appropriate bit */
	*(int *)address |= value;
	
	/* Configure the Interrupt Processor Targets Register (ICDIPTRn)
	* reg_offset = integer_div(N / 4) * 4
	* index = N mod 4 */
	reg_offset = (N & 0xFFFFFFFC);
	index = N & 0x3;
	address = 0xFFFED800 + reg_offset + index;
	/* Now that we know the register address and value, write to (only) the
	* appropriate byte */
	*(char *)address = (char)CPU_target;
}



/********************************************************************
* Pushbutton - Interrupt Service Routine
*
* This routine checks which KEY has been pressed. It writes to HEX0
*******************************************************************/
void pushbutton_ISR(void) {
	/* KEY base address */
	volatile int * KEY_ptr = (int *) 0xFF200050;
	/* HEX display base address */
	volatile int * HEX3_HEX0_ptr = (int *) 0xFF200020;
	
	int press, HEX_bits;
	press = *(KEY_ptr + 3); // read the pushbutton interrupt register
	*(KEY_ptr + 3) = press; // Clear the interrupt
	if (press & 0x1) // KEY0
		HEX_bits = 0b00111111;
	else if (press & 0x2) // KEY1
		HEX_bits = 0b00000110;
	else if (press & 0x4) // KEY2
		HEX_bits = 0b01011011;
	else // press & 0x8, which is KEY3
		HEX_bits = 0b01001111;
	*HEX3_HEX0_ptr = HEX_bits;
	return;
}

void intervaltimer_ISR(void){
	volatile int * TIMER_ptr = (int *) 0xFFFEC600;
	*(TIMER_ptr+3) = 1; //clear the intterupt
	
	count--;
	display_hex(count);
	
}
	
	
