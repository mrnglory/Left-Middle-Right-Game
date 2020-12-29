#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
   int computer, user; 
   int i; 
   int v = 0, l = 0; 
   srand((unsigned int)time(NULL)); 
   for (i = 0; i < 10; i++) { // 10판 
      computer = rand() % 3; 
      printf("좌(0) 중(1) 우(2): "); 
      scanf("%d", &user); 
      if (computer == user) { // 유저와 컴퓨터가 같은 방향이면 
         printf("승리!!!!\n"); // 승리 
         v++; // 승리 횟수 카운팅 
      } 
      else { // 다르면 패배 
         printf("패배\n"); 
         l++; // 패배 횟수 카운팅 
      } 
      printf("%d판 승리 : %d판 패배\n", v, l); // 현재 스코어 출력 
   } 
   return 0; 
}
