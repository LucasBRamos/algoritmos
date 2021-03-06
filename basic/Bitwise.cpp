#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N = 31;// Número 31(base 10) = 11111(base 2)
	
	/*
		0001 1111 (31 base 2)
		       << (move 1 bit)
    	---------
		0011 1110 (62 base 2)
	*/
	printf("%d\n", N << 1);
	
	
	/*
		0001 1111 (31 base 2)
		       >> (remove 1 bit)
		---------
		0000 1111 (15 base 2)
	*/
	printf("%d\n", N >> 1);
	
	/*
		0001 1111 (31 base 2)
		        & (operador "E" [and])
		0000 0001 (1 base 2)
		---------
		0000 0001 (1 base 2)
	*/
	printf("%d\n", N & 1);
	
	/*
		0001 1111 (31 base 2)
		        | (operador "OU" [or])
		0000 0001 (1 base 2)
		---------
		0001 1111 (31 base 2)
	*/
	printf("%d\n", N | 1);
	
	/*
		0001 1111 (31 base 2)
			    ^ (operador "OU exclusivo" [xor])
		0000 0001 (1 base 2)
		---------
		0001 1110 (30 base 2)
	*/
	printf("%d\n", N ^ 1);

	/*
		
		~0001 1111 (31 base 2)
		---------
		-0010 0000 (-32 base 2)
	*/
	printf("%d\n", ~N);
	
	return 0;
}