#include <stdio.h>  // เรียกใช้ไลบรารี stdio.h เพื่อใช้ printf() และ scanf()

// ฟังก์ชัน swap ใช้สำหรับสลับค่าของตัวแปร 2 ตัว
void swap(int *a, int *b)
{
    int temp;  // สร้างตัวแปร temp ไว้เก็บค่าชั่วคราว

    temp = *a;  // เก็บค่าที่ a ชี้อยู่ไว้ใน temp
    *a = *b;    // เอาค่าที่ b ชี้อยู่ ไปใส่ในตัวแปรที่ a ชี้อยู่
    *b = temp;  // เอาค่าเดิมของ a ที่เก็บไว้ใน temp ไปใส่ใน b
}

int main()
{
    int playerATK = 1100;  // สร้างตัวแปร ATK ของผู้เล่น และกำหนดค่าเริ่มต้นเป็น 1100
    int playerDEF = 2500;  // สร้างตัวแปร DEF ของผู้เล่น และกำหนดค่าเริ่มต้นเป็น 2500

    int opponentATK = 800;   // สร้างตัวแปร ATK ของคู่ต่อสู้ และกำหนดค่าเป็น 800
    int opponentDEF = 1700;  // สร้างตัวแปร DEF ของคู่ต่อสู้ และกำหนดค่าเป็น 1700

    char choice;  // สร้างตัวแปรชนิด char เพื่อเก็บตัวอักษรที่ผู้ใช้ป้อน

    printf("Card Battle!\n\n");  // แสดงชื่อเกม และขึ้นบรรทัดใหม่ 2 ครั้ง

    printf("Player\n");  // แสดงคำว่า Player
    printf("------\n");  // แสดงเส้น ------ ใต้คำว่า Player
    printf("ATK :: %d    DEF :: %d\n\n", playerATK, playerDEF);
    // %d ใช้แสดงค่าของ int
    // %d ตัวแรก = playerATK
    // %d ตัวที่สอง = playerDEF

    printf("Opponent\n");  // แสดงคำว่า Opponent
    printf("--------\n");  // แสดงเส้น -------- ใต้คำว่า Opponent
    printf("ATK :: %d    DEF :: %d\n\n", opponentATK, opponentDEF);
    // แสดงค่า ATK และ DEF ของคู่ต่อสู้

    printf("Switch player's ATK and DEF? (y/n): ");
    // ถามผู้ใช้ว่าต้องการสลับ ATK กับ DEF หรือไม่

    scanf(" %c", &choice);
    // รับตัวอักษรจากผู้ใช้
    // %c = รับข้อมูลชนิด char
    // &choice = ส่ง address ของ choice ให้ scanf นำค่าที่รับมาไปเก็บ

    if (choice == 'y' || choice == 'Y')
    // ถ้า choice เป็น y หรือ Y
    // == ใช้เปรียบเทียบ
    // || หมายถึง หรือ
    {
        swap(&playerATK, &playerDEF);
        // ส่ง address ของ playerATK และ playerDEF ไปให้ฟังก์ชัน swap
        // เพื่อสลับค่าของ ATK กับ DEF
    }

    printf("\nPlayer\n");  // ขึ้นบรรทัดใหม่แล้วแสดง Player
    printf("------\n");  // แสดงเส้น ------

    printf("ATK :: %d    DEF :: %d\n\n", playerATK, playerDEF);
    // แสดงค่า ATK และ DEF ของ Player หลังจากสลับหรือไม่สลับ

    printf("Attack calculating ATK vs ATK\n");
    // แสดงข้อความว่ากำลังเปรียบเทียบ ATK ของทั้งสองฝ่าย

    if (playerATK > opponentATK)
    // ถ้า ATK ของ Player มากกว่า ATK ของ Opponent
    {
        printf("Opponent destroyed!\n");
        // แสดงว่า Opponent ถูกทำลาย
    }

    else if (playerATK < opponentATK)
    // ถ้า ATK ของ Player น้อยกว่า ATK ของ Opponent
    {
        printf("Player destroyed!\n");
        // แสดงว่า Player ถูกทำลาย
    }

    else
    // ถ้าเงื่อนไขด้านบนไม่เป็นจริง
    // แปลว่า ATK ของทั้งสองฝ่ายเท่ากัน
    {
        printf("Draw!\n");
        // แสดงผลว่าเสมอ
    }

    return 0;  // จบการทำงานของโปรแกรมและส่งค่า 0 กลับไป
}