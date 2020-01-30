#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, *arr, destination, location, i, j;
  bool canReach;
  scanf("%i", &T);
  for(i = 0; i < T; i++) {
    scanf("%i", &N);
    arr = (int*)malloc(N*sizeof(int));
    for(j = 0; j < N; j++) {
      scanf("%i", &arr[j]);
      arr[j]--;
    }
    scanf("%i %i", &location, &destination);
    destination--;
    location--;
    canReach = false;
    for(j = 0; j < N; j++) {
      if(location == destination) {
        canReach = true;
        break;
      }
      location = arr[location];
    }
    if(canReach)
      printf("Yes\n");
    else
      printf("No\n");

    free(arr);
  }
  return 0;
}