#include <stdio.h>
#include <stdbool.h>

int main() {
	unsigned char count = 0;
	char S[101];
	bool letters[26];
	for(unsigned char i = 0; i < 26; i++)
		letters[i] = true;

	scanf(" %s", S);
	unsigned char i = 0;
	while(S[i] != 0) {
		S[i] += 32 * (S[i] >= 'A' && S[i] <= 'Z');
		count += letters[S[i] - 'a'];
		letters[S[i++] - 'a'] = false;
	}
	if(count == 26)
		printf("YES");
	else
		printf("NO");

	return 0;
}