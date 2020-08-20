#include <stdio.h>
#include <stdbool.h>

int main() {
	int T, i, j, letters[26];
	char S1[100001], S2[100001];
	bool match;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%s %s", S1, S2);
		j = 0;
		while(S1[j] != 0)
			letters[S1[j++] - 'a']++;

		j = 0;
		while(S2[j] != 0)
			letters[S2[j++] - 'a']--;

		match = true;
		for(j = 0; j < 26; j++)
			if(letters[j] != 0) {
				match = false;
				break;
			}

		if(match)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}