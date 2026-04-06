#pragma once
#include <iostream>

#define MAX_DEGREE 80  // 다항식의 처리 가능한 최대 차수 + 1

class Polynomial {
private:
    int degree;                 // 다항식의 최고 차수
    float coef[MAX_DEGREE];     // 각 항의 계수 배열

public:
    // 생성자: 최고차수 0, 계수 배열 전체 0으로 초기화
    Polynomial() {
        degree = 0;
        for (int i = 0; i < MAX_DEGREE; i++) {
            coef[i] = 0.0f;
        }
    }

    // 다항식 입력 함수
    void read() {
        std::cout << "다항식의 최고 차수를 입력하시오: ";
        std::cin >> degree;

        std::cout << "각 항의 계수를 입력하시오 (총 " << degree + 1 << "개): ";
        for (int i = 0; i <= degree; i++) {
            std::cin >> coef[i];
        }
    }

    // 다항식 출력 함수
    void display(const char* str = "Poly = ") const {
        std::cout << "\t" << str;

        for (int i = 0; i < degree; i++) {
            std::cout << coef[i] << "x^" << degree - i << " + ";
        }
        std::cout << coef[degree] << std::endl;
    }

    // 두 다항식 a, b를 더해서 현재 객체에 저장
    void add(const Polynomial& a, const Polynomial& b) {
        // 계수 배열 초기화
        for (int i = 0; i < MAX_DEGREE; i++) {
            coef[i] = 0.0f;
        }

        // 차수가 더 큰 다항식을 기준으로 복사 후 더하기
        if (a.degree >= b.degree) {
            degree = a.degree;

            for (int i = 0; i <= a.degree; i++) {
                coef[i] = a.coef[i];
            }

            for (int i = 0; i <= b.degree; i++) {
                coef[i + (degree - b.degree)] += b.coef[i];
            }
        }
        else {
            degree = b.degree;

            for (int i = 0; i <= b.degree; i++) {
                coef[i] = b.coef[i];
            }

            for (int i = 0; i <= a.degree; i++) {
                coef[i + (degree - a.degree)] += a.coef[i];
            }
        }
    }

    // 영다항식 여부 확인
    bool isZero() const {
        if (degree != 0) return false;
        return coef[0] == 0.0f;
    }

    // 모든 계수 부호 반전
    void negate() {
        for (int i = 0; i <= degree; i++) {
            coef[i] = -coef[i];
        }
    }
};