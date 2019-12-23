#include <stdio.h>

//Compiler version gcc  6.3.0

int winner(char board[3][3]) {
  int i, j;
  for(i = 0; i < 3; i++) {
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      return board[i][0];

    if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      return board[0][i];

  }
  if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    return board[0][0];

  if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return board[0][2];

  return 'D';
}

int main() {
  char board[3][3];
  scanf("%c %c %c\n%c %c %c\n%c %c %c", &board[0][0], &board[0][1], &board[0][2], &board[1][0], &board[1][1], &board[1][2], &board[2][0], &board[2][1], &board[2][2]);
  switch(winner(board)) {
    case 'X':
      printf("Player 1");
      break;
    case 'O':
      printf("Player 2");
      break;
    default:
      printf("Draw");
      break;
  }
  return 0;
}