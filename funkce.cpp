#include <stdio.h>

void tecka(int kolik) {
	for (int i = 0; i < kolik; i++) {
		printf(".");
	}
	printf("\n");
	
}

void soucet(int x, int y) {
	printf("%d + %d = %d", x, y, x + y);
	printf("\n");
}

long mocnina(int x) {
	return x * x;
}

long long faktorial(int x) {
	long long hodnota = 1;
	for (int i = x; i > 1; i--) {
		hodnota *= i;
	}
	return hodnota;
}

int abs(int x) {
	if (x < 0) return x *= -1;
	else return x;
}

int cif_soucet(int x) {
	int m, vysledek = 0;
	while (x > 0) {
		m = x % 10;
		vysledek = vysledek + m;
		x = x / 10;
	}
	return vysledek;
}

int main() {
	tecka(1);
	soucet(4, 8);
	printf("Mocnina 9 je %d", mocnina(9));
	printf("\n");
	long long vysledek = faktorial(8);
	printf("Faktorial 8 je %lld\n", vysledek);
	printf("Abs je %d", abs(-4));
	printf("\n");
	printf("cif soucet je %d", cif_soucet(23));
}