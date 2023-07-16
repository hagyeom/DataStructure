// Àç±Í ÇÔ¼ö
#include <stdio.h>

void RecurSiveFunc(int num) {
	if (num <= 0)
		return;
	printf("Recursive call! %d\n", num);
	RecurSiveFunc(num - 1);
}

int main() {
	RecurSiveFunc(3);

	return 0;
}