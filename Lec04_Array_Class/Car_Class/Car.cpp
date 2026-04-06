#include "SportsCar.h"

// ================= 메인 함수 =================
int main() {
    Car c(0, "마티즈", 1);             // 일반 자동차 객체 생성
    SportsCar s(0, "라페라리", 1);     // 스포츠카 객체 생성

    c.speedUp();       // 일반차 속도 +5
    s.setTurbo(true);  // 스포츠카 터보 ON
    s.speedUp();       // 스포츠카 속도 +20

    c.display();       // 일반차 정보 출력
    s.display();       // 스포츠카 정보 출력

    return 0;
}