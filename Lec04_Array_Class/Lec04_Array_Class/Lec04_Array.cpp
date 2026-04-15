#include <iostream>   // 출력 사용 (cout)
using namespace std;

// 이미지 크기 정의 (8x8 배열)
#define HEIGHT 8
#define WIDTH 8

// ================= 최대값 찾는 함수 =================
// 2차원 배열을 받아서 가장 큰 값을 반환하는 함수
int findMax(int image[HEIGHT][WIDTH]) {

    // 초기값: 배열의 첫 번째 요소로 설정
    int maxVal = image[0][0];

    // 전체 배열을 탐색 (이중 반복문 사용)
    for (int i = 0; i < HEIGHT; i++) {       // 행 반복
        for (int j = 0; j < WIDTH; j++) {    // 열 반복

            // 현재 값이 최대값보다 크면 갱신
            if (image[i][j] > maxVal) {
                maxVal = image[i][j];
            }
        }
    }

    // 최종 최대값 반환
    return maxVal;
}

// ================= 메인 함수 =================
int main() {

    // 2차원 이미지 배열 (밝기 값)
    int image[HEIGHT][WIDTH] = {
        {10, 30, 55, 80, 120, 160, 200, 230},
        {20, 45, 70, 100, 140, 180, 220, 210},
        {35, 60, 90, 130, 170, 210, 240, 190},
        {50, 80, 115, 150, 190, 230, 255, 170},
        {40, 65, 100, 140, 175, 215, 235, 150},
        {25, 50, 80, 115, 155, 195, 210, 130},
        {15, 35, 60, 90, 130, 165, 185, 110},
        {5, 20, 40, 70, 105, 140, 160, 90}
    };

    // 최대 밝기 값 계산
    int maxBrightness = findMax(image);

    // 결과 출력
    cout << "최대 밝기 값: " << maxBrightness << endl;

    return 0;
}