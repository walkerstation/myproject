#define Base_address	0x13830000
#define GPL2CON         (*(volatile unsigned long *) 0x11000100)
#define GPL2DAT         (*(volatile unsigned long *) 0x11000104)

#define GPK1CON 	(*(volatile unsigned long *) 0x11000060)
#define GPK1DAT		(*(volatile unsigned long *) 0x11000064)
#define GPA1CON		(*(volatile unsigned long *)0x11400020)
#define GPA1DAT		(*(volatile unsigned long *)0x11400024)
#define GPA0CON		(*(volatile unsigned long *)0x11400000)
#define ULCON		(*(volatile unsigned long *)(Base_address + 0x0000))
#define UCON		(*(volatile unsigned long *)(Base_address + 0x0004))
#define UFCON		(*(volatile unsigned long *)(Base_address + 0x0008))
#define UMCON		(*(volatile unsigned long *)(Base_address + 0x000C))
#define UTRSTAT		(*(volatile unsigned long *)(Base_address + 0x0010))
#define UERSTAT		(*(volatile unsigned long *)(Base_address + 0x0014))
#define UFSTAT		(*(volatile unsigned long *)(Base_address + 0x0018))
#define UMSTAT		(*(volatile unsigned long *)(Base_address + 0x001C))
#define UTXH		(*(volatile unsigned long *)(Base_address + 0x0020))
#define URXH		(*(volatile unsigned long *)(Base_address + 0x0024))
#define UBRDIV		(*(volatile unsigned long *)(Base_address + 0x0028))
#define UFRACVAL	(*(volatile unsigned long *)(Base_address + 0x002C))
#define UINTP		(*(volatile unsigned long *)(Base_address + 0x0030))
#define UINTSP		(*(volatile unsigned long *)(Base_address + 0x0034))
#define UINTM		(*(volatile unsigned long *)(Base_address + 0x0038))

/* source clock */
#define CLK_SRC_LEFTBUS			(*(volatile unsigned long *)0x10034200)
#define CLK_MUX_STAT_LEFTBUS	(*(volatile unsigned long *)0x10034400)
#define CLK_DIV_LEFTBUS			(*(volatile unsigned long *)0x10034500)
#define CLK_DIV_STAT_LEFTBUS	(*(volatile unsigned long *)0x10034600)
#define CLK_DIV_PERIL0			(*(volatile unsigned long *)0x1003C550)
#define CLK_GATE_IP_LEFTBUS		(*(volatile unsigned long *)0x10034800)
#define CLK_GATE_IP_IMAGE		(*(volatile unsigned long *)0x10034930)
#define CLKOUT_CMU_LEFTBUS		(*(volatile unsigned long *)0x10034A00)
#define CLKOUT_CMU_LEFTBUS_DIV_STAT (*(volatile unsigned long *)0x10034A04)
#define CLK_SRC_RIGHTBUS		(*(volatile unsigned long *)0x10038200)
#define CLK_MUX_STAT_RIGHTBUS	(*(volatile unsigned long *)0x10038400)
#define CLK_DIV_RIGHTBUS		(*(volatile unsigned long *)0x10038500)
#define CLK_DIV_STAT_RIGHTBUS	(*(volatile unsigned long *)0x10038600)
#define CLK_GATE_IP_RIGHTBUS	(*(volatile unsigned long *)0x10038800)
#define CLK_GATE_IP_PERIR		(*(volatile unsigned long *)0x10038960)
#define CLKOUT_CMU_RIGHTBUS	(*(volatile unsigned long *)0x10038A00)
#define CLKOUT_CMU_RIGHTBUS_DIV_STAT (*(volatile unsigned long *)0x10038A04)
#define EPLL_LOCK				(*(volatile unsigned long *)0x1003C010)
#define VPLL_LOCK				(*(volatile unsigned long *)0x1003C020)
#define EPLL_CON0				(*(volatile unsigned long *)0x1003C110)
#define EPLL_CON1				(*(volatile unsigned long *)0x1003C114)
#define EPLL_CON2				(*(volatile unsigned long *)0x1003C118)
#define VPLL_CON0				(*(volatile unsigned long *)0x1003C120)
#define VPLL_CON1				(*(volatile unsigned long *)0x1003C124)
#define VPLL_CON2				(*(volatile unsigned long *)0x1003C128)
#define CLK_SRC_TOP0				(*(volatile unsigned long *)0x1003C210)
#define CLK_SRC_TOP1				(*(volatile unsigned long *)0x1003C214)
#define CLK_SRC_CAM0			(*(volatile unsigned long *)0x1003C220)
#define CLK_SRC_TV				(*(volatile unsigned long *)0x1003C224)
#define CLK_SRC_DMC				(*(volatile unsigned long *)0x10040200)
#define CLK_SRC_MFC				(*(volatile unsigned long *)0x1003C228)
#define CLK_SRC_G3D				(*(volatile unsigned long *)0x1003C22C)
#define CLK_SRC_LCD0				(*(volatile unsigned long *)0x1003C234)
#define CLK_SRC_ISP				(*(volatile unsigned long *)0x1003C238)
#define CLK_SRC_MAUDIO			(*(volatile unsigned long *)0x1003C23C)
#define CLK_SRC_FSYS				(*(volatile unsigned long *)0x1003C240)
#define CLK_SRC_PERIL0			(*(volatile unsigned long *)0x1003C250)
#define CLK_SRC_PERIL1			(*(volatile unsigned long *)0x1003C254)
#define APLL_CON0				(*(volatile unsigned long *)0x10044100)
#define APLL_CON1				(*(volatile unsigned long *)0x10044104)
#define MPLL_CON0				(*(volatile unsigned long *)0x10040108)
#define MPLL_CON1				(*(volatile unsigned long *)0x1004010C)


/*LCD address*/
#define GPF0CON		(*(volatile unsigned long *)0x11400180)
#define GPF0DAT 		(*(volatile unsigned long *)0x11400184)
#define GPF1CON		(*(volatile unsigned long *)0x114001A0)
#define GPF1DAT		(*(volatile unsigned long *)0x114001A4)
#define GPF2CON		(*(volatile unsigned long *)0x114001C0)
#define GPF2DAT		(*(volatile unsigned long *)0x114001C4)
#define GPF3CON		(*(volatile unsigned long *)0x114001E0)
#define GPF3DAT		(*(volatile unsigned long *)0x114001E4)
#define GPD0CON		(*(volatile unsigned long *)0x114000A0)
#define GPD0DAT		(*(volatile unsigned long *)0x114000A4)
#define GPL1CON		(*(volatile unsigned long *)0x110000E0)	/*LCD_PWDN*/
#define GPL0CON		(*(volatile unsigned long *)0x110000C0)
#define GPL0DAT		(*(volatile unsigned long *)0x110000C4)

/*Display Control register*/
#define VIDCON0 		(*(volatile unsigned long *)0x11c00000)
#define VIDCON1			(*(volatile unsigned long *)0x11c00004)
#define VIDCON2			(*(volatile unsigned long *)0x11c00008)
#define VIDCON3			(*(volatile unsigned long *)0x11c0000C)
#define VIDTCON0		(*(volatile unsigned long *)0x11c00010)
#define VIDTCON1		(*(volatile unsigned long *)0x11c00014)
#define VIDTCON2		(*(volatile unsigned long *)0x11c00018)
#define VIDTCON3		(*(volatile unsigned long *)0x11c0001C)
#define WINCON0			(*(volatile unsigned long *)0x11c00020)
#define WINCON1			(*(volatile unsigned long *)0x11c00024)
#define WINCON2			(*(volatile unsigned long *)0x11c00028)
#define WINCON3			(*(volatile unsigned long *)0x11c0002C)
#define WINCON4			(*(volatile unsigned long *)0x11c00030)
#define SHADOWCON		(*(volatile unsigned long *)0x11c00034)
#define WINCHMAP2		(*(volatile unsigned long *)0x11c0003C)
#define VIDOSD0A		(*(volatile unsigned long *)0x11c00040)
#define VIDOSD0B		(*(volatile unsigned long *)0x11c00044)
#define VIDOSD0C		(*(volatile unsigned long *)0x11c00048)
#define VIDOSD0D		(*(volatile unsigned long *)0x11c00050)
#define VIDOSD1B		(*(volatile unsigned long *)0x11c00054)
#define VIDOSD1C		(*(volatile unsigned long *)0x11c00058)
#define VIDOSD1D		(*(volatile unsigned long *)0x11c0005C)
#define VIDOSD2A		(*(volatile unsigned long *)0x11c00060)
#define VIDOSD2B		(*(volatile unsigned long *)0x11c00064)
#define VIDOSD2C		(*(volatile unsigned long *)0x11c00068)
#define VIDOSD2D		(*(volatile unsigned long *)0x11c0006C)
#define VIDOSD3A		(*(volatile unsigned long *)0x11c00070)
#define VIDOSD3B		(*(volatile unsigned long *)0x11c00074)
#define VIDOSD3C		(*(volatile unsigned long *)0x11c00078)
#define VIDOSD4A		(*(volatile unsigned long *)0x11c00080)
#define VIDOSD4B		(*(volatile unsigned long *)0x11c00084)
#define VIDOSD4C		(*(volatile unsigned long *)0x11c00088)
#define VIDW_START		(*(volatile unsigned long *)0x11c00000)
#define VIDINTCON0		(*(volatile unsigned long *)0x11c00130)
#define VIDINTCON1		(*(volatile unsigned long *)0x11c00134)
#define W1KEYCON0		(*(volatile unsigned long *)0x11c00140)
#define W1KEYCON1		(*(volatile unsigned long *)0x11c00144)
#define W2KEYCON0		(*(volatile unsigned long *)0x11c00148)
#define W2KEYCON1		(*(volatile unsigned long *)0x11c0014C)
#define W3KEYCON0		(*(volatile unsigned long *)0x11c00150)
#define W3KEYCON1		(*(volatile unsigned long *)0x11c00154)
#define W4KEYCON0		(*(volatile unsigned long *)0x11c00158)
#define W4KEYCON1		(*(volatile unsigned long *)0x11c0015C)
#define W1KEYALPHA		(*(volatile unsigned long *)0x11c00160)
#define W2KEYALPHA		(*(volatile unsigned long *)0x11c00164)
#define W3KEYALPHA		(*(volatile unsigned long *)0x11c00168)
#define W4KEYALPHA		(*(volatile unsigned long *)0x11c0016C)
#define DITHMODE		(*(volatile unsigned long *)0x11c00170)
#define WIN0MAP			(*(volatile unsigned long *)0x11c00180)
#define WIN1MAP			(*(volatile unsigned long *)0x11c00184)
#define WIN2MAP			(*(volatile unsigned long *)0x11c00188)
#define WIN3MAP			(*(volatile unsigned long *)0x11c0018C)
#define WIN4MAP			(*(volatile unsigned long *)0x11c00190)
#define WPALOCN_H		(*(volatile unsigned long *)0x11c0019C)
#define WPALCON_L		(*(volatile unsigned long *)0x11c001A0)
#define TRIGCON			(*(volatile unsigned long *)0x11c001A4)
#define COLORGAINCON		(*(volatile unsigned long *)0x11c001c0)
#define LDI_CMDCON0		(*(volatile unsigned long *)0x11c001D0)
#define LDI_CMDCON1		(*(volatile unsigned long *)0x11c001D4)
#define SIFCCON0		(*(volatile unsigned long *)0x11c001E0)
#define SIFCCON1		(*(volatile unsigned long *)0x11c001E4)
#define SIFCCON2		(*(volatile unsigned long *)0x11c001E8)
#define HUEOFFSET		(*(volatile unsigned long *)0x11c0020C)
#define VIDW0ALPHA0		(*(volatile unsigned long *)0x11c0021C)
#define VIDW0ALPHA1		(*(volatile unsigned long *)0x11c00220)
#define VIDW1ALPHA0		(*(volatile unsigned long *)0x11c00224)
#define VIDW1ALPHA1		(*(volatile unsigned long *)0x11c00228)
#define VIDW2ALPHA0		(*(volatile unsigned long *)0x11c0022C)
#define VIDW2ALPHA1		(*(volatile unsigned long *)0x11c00230)
#define VIDW3ALPHA0		(*(volatile unsigned long *)0x11c00234)
#define VIDW3ALPHA1		(*(volatile unsigned long *)0x11c00238)
#define VIDW4ALPHA0		(*(volatile unsigned long *)0x11c0023C)
#define VIDW4ALPHA1		(*(volatile unsigned long *)0x11c00240)
#define BLENDEQ1		(*(volatile unsigned long *)0x11c00244)
#define BLENDEQ2		(*(volatile unsigned long *)0x11c00248)
#define BLENDEQ3		(*(volatile unsigned long *)0x11c0024C)
#define BLENDEQ4		(*(volatile unsigned long *)0x11c00250)

#define CLKOUT_CMU_TOP		(*(volatile unsigned long *)0x1003CA00)
#define CLK_GATE_BLOCK		(*(volatile unsigned long *)0x1003C970)
#define CLK_DIV_LCD		(*(volatile unsigned long *)0x1003C534)
#define CLK_SRC_LCD0		(*(volatile unsigned long *)0x1003C234)
#define LCDBLK_CFG		(*(volatile unsigned long *)0x10010210)
#define LCDBLK_CFG2		(*(volatile unsigned long *)0x10010214)
#define CLKVAL		3
#define VIDW00ADD0B0		(*(volatile unsigned long *)0x11C000A0)
#define VIDW00ADD1B0		(*(volatile unsigned long *)0x11C000D0)
#define VIDW00ADD2		(*(volatile unsigned long *)0x11C00100)
#define GPD0PUD			(*(volatile unsigned long *)0x114000A8)
#define GPC1CON			(*(volatile unsigned long *)0x11400080)
#define GPC1DAT			(*(volatile unsigned long *)0x11400084)
#define GPL1CON			(*(volatile unsigned long *)0x110000E0)
#define GPL1DAT			(*(volatile unsigned long *)0x110000E4)
#define GPF0PUD			(*(volatile unsigned long *)0x11400188)
#define GPF1PUD			(*(volatile unsigned long *)0x114001A8)
#define GPF2PUD			(*(volatile unsigned long *)0x114001C8)
#define GPF3PUD			(*(volatile unsigned long *)0x114001E8)
#define GPC0CON			(*(volatile unsigned long *)0x11400060)
#define GPC0DAT			(*(volatile unsigned long *)0x11400064)
#define GPC1PUD			(*(volatile unsigned long *)0x11400088)


#define RGB888(r, g, b)  (((r) << 16) | ((g) << 8) | (b) )
void clean_screen(unsigned long *fb, int w, int h)
{
	// green
	int i, j;
	for (i = 0; i < h; i ++) {
		for (j = 0; j < 240; j ++) {
			//fb[i * w + j] = RGB888(0, 255, 0);
			*(fb + i*w + j) = RGB888(0,255,0);
		}		
	}
	// blue
	for (i = 0; i < h; i ++) {
		for (j = 240; j < w; j ++) {
			//fb[i * w + j] = RGB888(0, 0, 255);
			*(fb + i*w + j) = RGB888(0, 0, 255);
		}		
	}

}

/*the uart write read func*/
void uart_write(char c)
{
	while(!(UTRSTAT & 0x4));
	
		UTXH = c;
		
}

char uart_read()
{
	char s;
	while(!(UTRSTAT & 0x1));
	
	s = URXH;
	return s;
}

void delay(int r0)
{
    volatile int count = r0;
    while (count--)
        ;
}

void LCD_init(unsigned long fb)
{
	GPF0CON		= 0x22222222;
	GPF1CON		= 0x22222222;
	GPF2CON		= 0x22222222;
	GPF3CON		= 0x2222;
	
	GPL0CON	 = (0x1 << 16);
	GPL0DAT	 |= (1 << 4);
/*	
	GPL1CON	 = (1 << 0);
	GPL1DAT	 |= 1;
*/

	GPD0CON  &= ~(0xf<<4);
	GPD0CON  |=  (0x2<<4);

	GPD0PUD  &= ~(0x3<<0);
	GPD0PUD  |=  (0x2<<0);

	GPD0DAT  &= ~(0x1<<1);
	GPD0DAT  |=  (0x1<<1);

	GPC1CON	 = (1 << 8);
	GPC1PUD  &= ~(0x3<<4);
	GPC1PUD  |=  (0x2<<4);
	GPC1DAT  = (1 <<2);
	
	

	CLK_SRC_LCD0	= (6 << 12)|(6 << 8)|(6 << 4)|(6);
	CLK_DIV_LCD		&= ~0xf;
	LCDBLK_CFG		= (1 << 1);

   /*
     *<Exyons 4412 datasheet pg1869>
     *VIDCON0:
     *     [13:6]: CLKVAL_F     //设置lcd时钟分频系数
     *
     *  VCLK == 9 Mhz        
     *  VCLK = FIMD * SCLK/(CLKVAL+1)
     *  VCLK =  800000000 / (CLKVAL + 1)   
     *  9000000 = 800000000 /(CLKVAL + 1)
     *  CLKVAL + 1 = 88.8 
     *  CLKVAL = 87
     * */
	
	VIDCON0 = (87 << 6);

   /*
     *<Exyons 4412 datasheet pg1870 pg1848(时序)> <S700-AT070TN92 pg13(时序)>
     *VIDTCON1:
     *      [5]:IVSYNC  ===> 1 : Inverted(反转)
     *      [6]:IHSYNC  ===> 1 : Inverted(反转)
     *      [7]:IVCLK   ===> 1 : Fetches video data at VCLK rising edge (下降沿触发)
     *      [10:9]:FIXVCLK  ====> 01 : VCLK running 
     * */
	VIDCON1 =  (1 << 5) | (1 << 6);// (1 << 7) |(1 << 9) |
	VIDCON1 &= ~(1 << 7);

   /*
     *<Exyons 4412 datasheet pg1874 pg1848(时序)> <S700-AT070TN92 pg13(时序)>
     *VIDTCON0: 
     *       [23:16]:  VBPD + 1 <------> tvpw (1 - 20)  13
     *       [15:8]: VFPD + 1 <------> tvfp 22
     *       [7:0]: VSPW  + 1 <------> tvb - tvpw = 23 - 13 = 10
     * */
	VIDTCON0 = (2 << 16) | (2 << 8) | (10);

   /*<Exyons 4412 datasheet pg1874 pg1848(时序)> <S700-AT070TN92 pg13(时序)>
     *VIDTCON1: 
     *       [23:16]:  HBPD + 1 <------> thpw (1 - 40)  36 
     *       [15:8]:   HFPD + 1 <------> thfp 210 
     *       [7:0]:    HSPW  + 1 <------> thb - thpw = 46 - 36 = 10
     */
	VIDTCON1 = (2 << 16) | (2 << 8) | (41);

    /*
     *<Exyons 4412 datasheet pg1875>
     * 
     *HOZVAL = (Horizontal display size) – 1 and LINEVAL = (Vertical display size) – 1.
     * Horizontal(水平) display size : 800 
     *Vertical(垂直) display size : 480
     * */
	VIDTCON2 = (271 << 11) | 479;

	WINCON0 = (11 << 2) | 1;
	
    /*
     *<Exyons 4412 datasheet  pg1895>
     *VIDOSD0A: LCD左上角坐标
     *VIDOSD0B: LCD右下角坐标
     */

	VIDOSD0A = 0;
	VIDOSD0B = (479 << 11) | 271;

   /*
     *<Exyons 4412 datasheet pg1895>
     *VIDOSD0C:Specifies the Window Size (窗口尺寸 单位为word)
     *          
     *
     * */
	VIDOSD0C = 480 * 272;

   //SHADOWCON &= ~(1 << 5); Don't use




    /*
     *<Exyons 4412 datasheet  pg1894 pg1801>
     *[18:16] Selects Channel 0's channel. ===> 001 = Window 0
     *[2:0] Selects Window 0's channel.  ===> 001 = Channel 0 
     * 
     *
     * */
	WINCHMAP2 &= ~(7 << 16);
	WINCHMAP2 |= 1 << 16;
	WINCHMAP2 &= ~7;
	WINCHMAP2 |= 1;

	uart_write('a');

    /*
     *<Exyons 4412 datasheet  pg1902>
     * VIDW00ADD0B0 : window0 frame buffer 起始地址 
     *  VIDW00ADD1B0 : window0 frame buffer 结束地址
     * */
     
	VIDW00ADD0B0 = 0x53000000;//fb;
	uart_write('B');
	VIDW00ADD1B0 = (0x53000000 + 480 * 272 * 4);
	uart_write('C');
        VIDW00ADD2  = 480;
	uart_write('D');

    /*
     *<Exyons 4412 datasheet pg1891 pg1801>
     *[0]: Enables Channel 0. 1 = Enables
     * */
    SHADOWCON |= 1;

    /*
     * <Exyons 4412 datasheet pg1869>
     * Display On: ENVID and ENVID_F are set to "1".
     *  [0]:ENVID ===> 1 = Enables
     *  [1]:ENVID_F ===> 1 = Enables 
     * */
	VIDTCON3 |= (1 << 31);
	VIDCON0 |= 3;

}

void uart_init()
{
	GPA1CON &= ~0xFFFFFF;
	GPA1CON = 0x222222;
	GPA0CON	= 0x22222222;
	ULCON	= 0x3;
	UCON	= 0x5;
	UFCON	= 0x111;
	//UMCON	= 0xf9;

	/*pll*/
	MPLL_CON0		= (1 << 31)|(100 << 16)|(3 << 8)|(0 << 0);
	CLK_SRC_TOP1	|=(1 << 12);
	CLK_SRC_DMC		|=(1 << 12);
	CLK_SRC_PERIL0	= (6 << 16)|(6 << 12)|(6 << 8)|(6 << 4)|(6);
	CLK_DIV_PERIL0	= (7 << 16)|(7 << 12)|(7 << 8)|(7 << 4)|(7);
	
	UBRDIV			= 53;
	UFRACVAL		= 4;
}


void main()
{
	char tmp;
	int i;
	unsigned long fb = 0x53000000;

	uart_init();
	
	clean_screen((unsigned long *)fb, 480, 272);
	delay(0x80000);

	LCD_init(fb);

	while(1)
	{
		
		
		tmp = uart_read();
		uart_write(tmp);
	}
	
}
