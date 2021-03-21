#include <stdio.h>
int main(int argc, const char *argv[])
{
	unsigned int a = 0xff3c2011;

	a = (((a&0x55555555)<<1) | ((a&0xaaaaaaaa)>>1));
	//交换相邻的一位
	a = (((a&0xcccccccc)>>2) | ((a&0x33333333)<<2));
	//交换相邻的两位
	a = (((a&0xf0f0f0f0)>>4) | ((a&0x0f0f0f0f)<<4));
	//交换相邻的四位
	a = (((a&0xff00ff00)>>8) | ((a&0x00ff00ff)<<8));
	//交换相邻的八位
	a = a>>16 | a<<16;
	//a = (((a&0xffff0000)>>16) | ((a&0x0000ffff)<<16));
	//交换相邻的十六位
	printf("a = %#x\n",a);
	


	return 0;
}
