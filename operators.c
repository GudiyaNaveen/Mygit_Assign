#include<stdio.h>

void arithmetic_op(int ,int );
void relational_op(int ,int );
void logical_op(int ,int, int);
void assignment_op(int );
void bitwise_op(int ,int);
int main()
{
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("/*.........Arithmetic operator........*/\n");
	arithmetic_op(a,b);
	printf("/*........Relational operator........*/\n");
	relational_op(a,b);
	printf("/*........Logical operator........*/\n");
	logical_op(a,b,c);
	printf("/*........Assignment operator.........*/\n");
	assignment_op(a);
	printf("/*.......Bitwise operator........*/\n");
	bitwise_op(a,b);
	return 0;
}

void arithmetic_op(int x,int y)
{
	printf("1.Addition of two numbers: %d\n2.substraction of two numbers: %d\n",x+y,x-y);
	printf("3.Multiplication of two numbers: %d\n4.Division of two numbers: %d\n5.Modulus of two numbers: %d\n",x*y,x/y,x%y);
	printf("6.Increment: %d\n7.Decrement: %d\n",++x,--y);
}

void relational_op(int a,int b)
{
	printf("%d == %d : The output is: %d \n", a, b, a == b);
	printf("%d != %d : The output is: %d \n", a, b, a != b);
	printf("%d > %d : The output is: %d \n", a, b, a > b);
	printf("%d < %d : The output is: %d \n", a, b, a < b);
	printf("%d >= %d : The output is: %d \n", a, b, a >= b);
	printf("%d <= %d : The output is: %d \n", a, b, a <= b); 
}

void logical_op(int a,int b,int c)
{
	int result;
	result = (a == b) && (c > b);
	printf("(%d == %d) && (%d != %d), the output is: %d \n",a,b,b,c,result);
	result = (a == b) && (c < b) && (c>0);
	printf("(%d == %d) && (%d <= %d), the output is: %d \n",a,b,b,c,result);
	result = (a == b) || (b > c);
	printf("(%d == %d) || (%d < %d), the output is: %d \n",a,b,c,b,result);
	result = (a != b) || (a <= b) || (a>c);
	printf("(%d != %d) || (%d < %d), the output is: %d \n",a,b,c,b,result);
	result = !(a == b);
	printf("!(%d == %d), the output is: %d \n",a,b,result);
	result = !(a != b);
	printf("!(%d == %d), the output is: %d \n",a,b,result); 
}

void assignment_op(int a)
{
	int result,number=a;
	result = number;
	result += number;//result = result + a
	printf("Addition: %d \n", result);
	result -= number; //result = result - a
	printf("Substraction: %d \n", result);
	result *= number; //result = result * a
	printf("Multiplication: %d \n", result);
	result /= number; //result = result / a
	printf("Division: %d \n", result);
	result %= number; //result = result % a
	printf("Modulus: %d\n", result);
}

void bitwise_op(int a,int b)
{
	printf(" Bitwise AND operation %d & %d : %d\n",a,b,a&b);
	printf(" Bitwise OR operation %d | %d : %d\n",a,b,a|b);
	printf(" Bitwise XOR operation %d ^ %d : %d\n",a,b,a^b);
}
