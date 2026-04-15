#pragma once
#include <cstdio>
#include <cstring>

// ================= 부모 클래스 =================
// 자동차 클래스 정의
class Car {
protected:
    int speed;        // 속도
    char name[40];    // 자동차 이름

public:
    int gear;         // 기어

    // 생성자: 속도, 이름, 기어 초기화
    Car(int s, const char* n, int g) {
        speed = s;
        gear = g;
        strcpy_s(name, sizeof(name), n);   // 안전한 문자열 복사
    }

    // 기어 변경 함수
    void changeGear(int g = 4) {
        gear = g;
    }

    // 일반 자동차 속도 증가
    void speedUp() {
        speed += 5;
    }

    // 자동차 정보 출력
    void display() {
        printf("[%s] : 기어=%d단 속도=%dkmph\n", name, gear, speed);
    }
};