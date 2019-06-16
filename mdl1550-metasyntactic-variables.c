#include <stdio.h>

int main(int argc, char **argv) {
/*
	char mistyfoo = '0';
	short chuckbaz = 0;
	int foobarbarossa = 0;
	long rufiqux = 0;
	long long raphquz = 0;
	float sourcecorge = 0.0f;
	double fingrault = 0.0;
	long double idagarply= 0.0;
*/

	char mistyfoo[] = {"a"};
	short chuckbaz[10];
	chuckbaz[0] = 0;
	int foobarbarossa[10] = {0};

	printf(
		"<<<\n"
		"%-15cmistyfoo\n"
		"%-15dchuckbaz\n"
		"%-15dfoobarbarossa\n"
		">>>\n\n"
		"<<<\n"
		"%-15cmistyfoo\n"
		"%-15dchuckbaz\n"
		"%-15dfoobarbarossa\n"
		">>>\n",
		mistyfoo[0],
		chuckbaz[0],
		foobarbarossa[0],
		mistyfoo[0],
		chuckbaz[0],
		foobarbarossa[0]
	);

	return 0;
}
