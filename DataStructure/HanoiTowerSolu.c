// 하노이 타워 문제의 해결
#include <stdio.h>
/*
* 원반 num의 수에 해당하는 원반을 from에서 to로
이동을 시키되 그 과정에서 by를 활용한다.
*/
void HanoiTowerMove(int num, char from, char by, char to) { // 0. 큰 원반 n개를 A에서 C로 이동

	if (num == 1) // 이동할 원반의 수가 1개라면
		printf("원반1을 %c에서 %c로 이동\n", from, to);
	else {
		HanoiTowerMove(num - 1, from, to, by); // 1. 작은 원반 n-1개를 A에서 B로 이동
		printf("원반%d를 %c에서 %c로 이동\n", num, from, to); // 2. 큰 원반 1개를 A에서 C로 이동
		HanoiTowerMove(num - 1, by, from, to); // 3. 작은 원반 n-1개를 B에서 C로 이동
	}
}

int main() {
	// 막대 A의 원반 4개를 막대 B를 경유하여 막대 C로 옮기기
	HanoiTowerMove(4, 'A', 'B', 'C');
	/*
	원반1을 A에서 B로 이동
	원반2를 A에서 C로 이동
	원반1을 B에서 C로 이동
	원반3를 A에서 B로 이동
	원반1을 C에서 A로 이동
	원반2를 C에서 B로 이동
	원반1을 A에서 B로 이동
	원반4를 A에서 C로 이동
	원반1을 B에서 C로 이동
	원반2를 B에서 A로 이동
	원반1을 C에서 A로 이동
	원반3를 B에서 C로 이동
	원반1을 A에서 B로 이동
	원반2를 A에서 C로 이동
	원반1을 B에서 C로 이동
	*/
	return 0;
}