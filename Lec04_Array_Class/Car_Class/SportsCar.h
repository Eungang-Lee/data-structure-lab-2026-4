#pragma once
#include "Car.h"

// ================= 자식 클래스 =================
// 스포츠카 클래스
class SportsCar : public Car {
public:
    bool bTurbo;   // 터보 ON/OFF 상태

    // 생성자
    SportsCar(int s, const char* n, int g)
        : Car(s, n, g) {
        bTurbo = false;   // 기본값은 터보 OFF
    }

    // 터보 설정 함수
    void setTurbo(bool bTur) {
        bTurbo = bTur;
    }

    // 속도 증가 함수
    void speedUp() {
        if (bTurbo)
            speed += 20;     // 터보 ON이면 +20
        else
            Car::speedUp();  // 터보 OFF면 부모 함수 호출
    }
};