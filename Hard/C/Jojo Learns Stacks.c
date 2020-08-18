#include <stdio.h>

typedef struct stack {
	char operands[50];
	int size;
} stack;

int main() {
	int i, j, out_size = 0;
	char string[101], output[101];
	stack opstack;
	opstack.size = 0;
	scanf(" %[^\n]", string);
	for(i = 0; i < 101; i++) {
		if(string[i] == 0)
			break;
		else
			switch(string[i]) {
				case 40:
					opstack.operands[opstack.size++] = string[i++];
					break;
				case 41:
					i++;
					while(opstack.operands[--opstack.size] != '(') {
						output[out_size++] = opstack.operands[opstack.size];
						output[out_size++] = ' ';
					}
					break;
				case 42:
				case 47:
					if(opstack.size > 0) {
						while((opstack.operands[--opstack.size] == '/') || (opstack.operands[opstack.size] == '*')) {
							output[out_size++] = opstack.operands[opstack.size];
							output[out_size++] = ' ';
						}
						opstack.size++;
					}
					opstack.operands[opstack.size++] = string[i++];
					break;
				case 43:
				case 45:
					if(opstack.size > 0) {
						while((opstack.operands[--opstack.size] == '/') || (opstack.operands[opstack.size] == '*') || (opstack.operands[opstack.size] == '+') || (opstack.operands[opstack.size] == '-')) {
							output[out_size++] = opstack.operands[opstack.size];
							output[out_size++] = ' ';
						}
						opstack.size++;
					}
					opstack.operands[opstack.size++] = string[i++];
					break;
				default:
					output[out_size++] = string[i];
					break;
			}

		if(string[i] == 0)
			break;

	}
	if(output[out_size - 1] == ' ')
		out_size--;

	while(opstack.size > 0) {
		output[out_size++] = ' ';
		output[out_size++] = opstack.operands[--opstack.size];
	}
	for(i = 0; i < out_size; i++)
		printf("%c", output[i]);

	return 0;
}