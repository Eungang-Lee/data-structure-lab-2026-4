#include <stdio.h>

int main(void)
{
	int list[10] = { 10,20,30,40,50,60,70 }; //오름차순 정렬
	int i, move, size = 6;
	printf("\n삽입 전 선형 리스트: ");
	for (i = 0;i < size;i++) printf("%3d ", list[i]);
	printf("\n원소의 갯수: %d\n", size);
	
	move = insertElement(list, size, 30);
	
	printf("삽입 후 선형 리스트: ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]); //원소 하나 더 넣었기 때문에 <=
	printf("\n원소의 갯수: %d ", ++size);
	printf("\n자리 이동 횟수: %d\n", move);

	move = deleteElement(list, size, 30);
	printf("\n삭제 후 선형 리스트: ");
	for (i = 0; i < size - 1; i++) printf("%3d ", list[i]); //요소 하나 삭제했기 때문에 -1
	printf("\n자리 이동 횟수: %d\n", move);

	getchar();
	return 0;
}