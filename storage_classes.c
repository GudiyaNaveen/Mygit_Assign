#include<stdio.h>

static int y;// It prints the Zero and data segement

int main()
{
	extern int z;// It prints the Zero and stores in data segement
	auto int a;// It prints garbagge value and stores in stack segement
	auto int b=451;// It prints 451 and stores in stack segement
	register char ch='z';// It stores in the CPU register
	register int s;// It prints garbagge value and stores in CPU register
	static int w=1283;//It stores in data segement
	printf("a: %d\nAddress of a:%p\nb: %d\nAdress of b: %p\nch: %d\nAddress of ch: %p\ns: %d\nAdress of s: %p\ny: %d\nAddress of y: %p\nw: %d\nAddress of w: %p\n",a,a,b,b,ch,ch,s,s,y,y,w,w);
	return 0;
}
