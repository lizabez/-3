#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>





void dectobin(long long d, char* b) {
	if (d == 0) {
		b[0] = '0';
		b[1] = '\0';
	}
	else {
		int i = 0;
		long long temp = d;
		for (i = 0; temp > 0; temp = temp >> 1, i++);
		b[i] = '\0';
		while (d > 0) {
			i -= 1;
			b[i] = '0' + (d & 1);
			d = d >> 1;
		}
	}
}

// Перевод из двоичной системы в четверичную систему
void binaryToQuaternary(long long d, char* b) {
	if (d == 0) {
		b[0] = '0';
		b[1] = '\0';
	}
	else {
		int i = 0;
		long long temp = d;
		for (i = 0; temp > 0; temp = temp >> 2, i++);
		b[i] = '\0';
		while (d > 0) {
			i -= 1;
			b[i] = '0' + (d & 3);
			d = d >> 2;
		}
	}
}


// Перевод из двоичной системы в восьмеричную систему
void binaryToOctal(long long d, char* b) {
	if (d == 0) {
		b[0] = '0';
		b[1] = '\0';
	}
	else {
		int i = 0;
		long long temp = d;
		for (i = 0; temp > 0; temp = temp >> 3, i++);
		b[i] = '\0';
		while (d > 0) {
			i -= 1;
			b[i] = '0' + (d & 7);
			d = d >> 3;
		}
	}
}


// Перевод из двоичной системы в шестнадцатеричную систему
void binaryToHexadecimal(long long d, char* b) {
	if (d == 0) {
		b[0] = '0';
		b[1] = '\0';
	}
	else {
		int i = 0;
		long long temp = d;
		for (i = 0; temp > 0; temp = temp >> 4, i++);
		b[i] = '\0';
		while (d > 0) {
			i -= 1;
			b[i] = '0' + (d & 15);
			d = d >> 4;
		}
	}
}



//Перевод из двоичной системы в тридцатидвухричную систему
void binaryToTrigintadecimal(long long d, char* b) {
	if (d == 0) {
		b[0] = '0';
		b[1] = '\0';
	}
	else {
		int i = 0;
		long long temp = d;
		for (i = 0; temp > 0; temp = temp >> 5, i++);
		b[i] = '\0';
		while (d > 0) {
			i -= 1;
			b[i] = '0' + (d & 31);
			d = d >> 5;
		}
	}
}





int main() {

	int r;
	long d;
	char b[255];

	printf("enter the degree of the number system with base two from 1 to 5: ");
	scanf("%d", &r);




	if (0 < r < 6) {
		scanf("%ld", &d);



		if (r == 1) {
			dectobin(d, b);
			printf("%s\n", b);
		}

		if (r == 2) {
			dectobin(d, b);
			binaryToQuaternary(d, b);
			printf("%s\n", b);
		}

		if (r == 3) {
			dectobin(d, b);
			binaryToOctal(d, b);
			printf("%s\n", b);
		}

		if (r == 4) {
			dectobin(d, b);
			binaryToHexadecimal(d, b);
			printf("%s\n", b);
		}

		if (r == 5) {
			dectobin(d, b);
			binaryToTrigintadecimal(d, b);
			printf("%s\n", b);
		}
	}

	else {

		printf("a number is entered outside the range from 1 to 5");
	}

	return 0;

}