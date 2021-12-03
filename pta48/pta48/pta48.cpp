#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char s[32] = "";
	int i;
	gets_s(s);
	for (i = 0; s[i] != '#'; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			s[i] = s[i] - 32;
		}
		else if ('A' <= s[i] && s[i] <= 'Z') {
			s[i] = s[i] + 32;
		}
	}
	for (i = 0; s[i] != '#'; i++) {
		printf("%c", s[i]);
	}
	return 0;
}