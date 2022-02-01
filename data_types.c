#include<stdio.h>

int main()
{
	int x;
	short int y;
	long int z;
	char ch;
	float f;
	double d;
	long double g;
	printf("Size of all data types:\n");
	printf("1.Integer size: %ld bytes\n2.Short Integer size: %ld bytes\n3.Long Interger Size: %ld bytes\n4.Character size: %ld bytes\n5.Float size: %ld bytes\n6.Double size: %ld bytes\n7.Long Double size: %ld bytes\n",sizeof(x),sizeof(y),sizeof(z),sizeof(ch),sizeof(f),sizeof(d),sizeof(g));
	signed int a;
	unsigned int b;
	signed char s1;
	unsigned char s2;
	printf("8.Signed Integer: %ld bytes\n9.Unsigned Integer: %ld bytes\n10.Signed Character: %ld bytes\n11.Unsigned Character: %ld bytes\n",sizeof(a),sizeof(b),sizeof(s1),sizeof(s2));
	printf("12.size of(x+ch): %ld bytes\n13.size of(f+d): %ld\n",sizeof(x+ch),sizeof(f+g));
	return 0;
}
