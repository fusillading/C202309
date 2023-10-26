#include <stdio.h>
// 최대 할 일의 개수
#define MAX_TASKS 10
// 최대 할 일의 길이
#define CHAR_NUM 100
#include <string.h>

int main() {
	// 할 일을 저장할 배열
	char tasks[MAX_TASKS][CHAR_NUM] = {""};
	// 할 일의 개수 변수
	int taskCount = 0;
	printf("TODO 리스트 시작! \n");

	while (1) {
		// 사용자의 선택을 저장할 변수
		int choice = -1; 

		// 메뉴 출력
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		// 사용자의 선택을 입력받음
		scanf_s("%d", &choice);

		// 종료를 위한 상태 변수
		int terminate = 0;
		// 삭제할 할 일의 인덱스 변수
		int delIndex = -1;
		// 수정할 할 일의 인덱스 변수
		int changeIndex = -1;
		// 수정할 내용을 입력받기 전 버퍼를 비우기 위한 변수
		char ch;


		switch (choice) 
		{
		// 할 일 추가
		case 1:
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			// 할 일을 tasks 배열에 저장
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			// 할 일의 개수를 1 증가
			taskCount++;
			break;
		// 할 일 삭제
		case 2:
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			// 삭제할 할 일의 인덱스를 입력받음
			scanf_s("%d", &delIndex);
			// 삭제할 할 일의 인덱스가 유효한지 확인
			if (delIndex > taskCount || delIndex <= 0 ) 
			{
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else 
			{
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 지울 할 일 인덱스부터 뒤의 할 일을 한 칸씩 앞으로 당김
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				// 할 일의 개수를 1 감소
				taskCount -= 1;
			}
			break;
		// 할 일 목록 보기
		case 3:
			printf("할 일 목록\n");
			// 할 일의 개수만큼 반복하며 할 일을 출력
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		// 종료
		case 4:
			// 종료 상태 변수를 1로 변경
			terminate = 1;
			break;
		// 할 일 수정
		case 5:
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):");
			// 수정할 할 일의 인덱스를 입력받음
			scanf_s("%d", &changeIndex);
			// 수정할 할 일의 인덱스가 유효한지 확인
			if (changeIndex > taskCount || changeIndex <= 0)
			{
				printf("수정 범위가 벗어났습니다..\n");
				break;
			}
			printf("수정할 내용을 입력해주세요 : ");
			// 내용 입력 전에 버퍼를 비움
			scanf_s("%c", &ch, 1);
			// 할 일을 tasks 배열에 저장
			scanf_s("%[^\n]s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
			break;
		// 잘못된 선택
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}
		
		// 종료 상태 변수가 1로 변경되면 반복문 종료
		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
	}
}