#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
   int computer, user; 
   int i; 
   int v = 0, l = 0; 
   srand((unsigned int)time(NULL)); 
   for (i = 0; i < 10; i++) { // 10�� 
      computer = rand() % 3; 
      printf("��(0) ��(1) ��(2): "); 
      scanf("%d", &user); 
      if (computer == user) { // ������ ��ǻ�Ͱ� ���� �����̸� 
         printf("�¸�!!!!\n"); // �¸� 
         v++; // �¸� Ƚ�� ī���� 
      } 
      else { // �ٸ��� �й� 
         printf("�й�\n"); 
         l++; // �й� Ƚ�� ī���� 
      } 
      printf("%d�� �¸� : %d�� �й�\n", v, l); // ���� ���ھ� ��� 
   } 
   return 0; 
}
