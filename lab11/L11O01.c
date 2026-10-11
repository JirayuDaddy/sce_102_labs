#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// สร้าง struct ชื่อ card มีตัวแปร point เป็น int และ symbol เป็น char
struct card {
    int point;
    char symbol;
};

int main() {
    struct card handCards[5]; // ตัวแปร array จาก struct card เก็บข้อมูลได้ 5 ใบ
    char choice;

    // ตั้งค่า seed สำหรับการสุ่มเลข
    srand(time(NULL));

    while (1) {
        printf("Draw 5 cards? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printf("\nYou got ");
            for (int i = 0; i < 5; i++) {
                int card_value = rand() % 52; // สุ่มค่าไพ่ 0 - 51
                
                // คำนวณค่าแต้มและสัญลักษณ์ตามโจทย์กำหนด
                handCards[i].point = card_value % 13 + 1;
                handCards[i].symbol = (char)(card_value / 13 + 65);

                printf("%d%c ", handCards[i].point, handCards[i].symbol);
            }
            printf("\n\n");
        } 
        else if (choice == 'n' || choice == 'N') {
            break; // จบการทำงาน
        }
        // ถ้าผู้ใช้ป้อนตัวอักษรอื่นที่ไม่ใช่ y/n โปรแกรมจะวนถามใหม่โดยอัตโนมัติ
    }

    return 0;
}