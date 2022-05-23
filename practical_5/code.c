#include <stdio.h>
#include <conio.h>
#include <math.h>
int gcd(int a, int b)
{
	int i, c;
	for (i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
		}
	}
	return c;
}
void main()
{
	int p, q, n, f, e, d, s, msg;
	long enc, dec;
	clrscr();
	printf("Enter 1st prime number ==> ");
	scanf("%d", &p);
	printf("Enter 2nd prime number ==> ");
	scanf("%d", &q);
	n = p * q;
	f = (p - 1) * (q - 1);
	printf("\nn ==> %d", n);
	printf("\nf ==> %d", f);
	printf("\n\nEnter public key e ==> ");
	scanf("%d", &e);
	while (e < f)
	{
		if (gcd(e, f) == 1)
		{
			break;
		}
		else
		{
			e++;
		}
	}
	d = 1;
	do
	{
		s = (d * e) % f;
		d++;
	} while (s != 1);
	d = d - 1;
	printf("\nPublic Key is {%d,%d}", e, n);
	printf("\nPrivate Key is {%d,%d}", d, n);
	printf("\n\nEnter your Messege ==> ");
	scanf("%d", &msg);
	enc = pow(msg, e);
	enc = fmod(enc, n);
	dec = pow(enc, d);
	dec = fmod(dec, n);
	printf("\nEncryption ==> %ld", enc);
	printf("\nDecryption ==> %ld", dec);
	getch();
}