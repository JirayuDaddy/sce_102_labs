#include <stdio.h>      // เรียกใช้ไลบรารีสำหรับ printf() และ scanf()
#include <stdlib.h>     // เรียกใช้ rand() และ srand() สำหรับการสุ่มตัวเลข
#include <time.h>       // เรียกใช้ time() เพื่อสร้างค่าเริ่มต้นในการสุ่ม


// ฟังก์ชัน printBoard ใช้สำหรับแสดงกระดาน
// board = address ของ array board
// player = address ของตัวแปร player
void printBoard(int *board, int *player)
{
    int i;  // สร้างตัวแปร i สำหรับใช้เป็นตัวนับรอบของ for

    printf("Board :: ");  // แสดงข้อความ Board ::

    // วนลูปตั้งแต่ i = 0 จนถึง i = 24
    // เพราะ Board มีทั้งหมด 25 ช่อง
    for (i = 0; i < 25; i++)
    {
        // *(board + i) หมายถึงค่าของ board ที่ตำแหน่ง i
        // ตรวจสอบว่าช่องบน Board ตรงกับตำแหน่งของ Player หรือไม่
        if (*(board + i) == *player)
        {
            // ถ้าตรงกับตำแหน่ง Player
            // จะแสดงตัวเลขไว้ในวงเล็บ เช่น (5)
            printf("(%d) ", *(board + i));
        }

        // ตรวจสอบว่าช่องนั้นเป็นช่อง Snake หรือไม่
        // Snake อยู่ที่ช่อง 4, 14 และ 24
        else if (*(board + i) == 4 ||
                 *(board + i) == 14 ||
                 *(board + i) == 24)
        {
            // ถ้าเป็นช่อง Snake
            // จะแสดงตัวเลขแบบ _4_ หรือ _14_ หรือ _24_
            printf("_%d_ ", *(board + i));
        }

        else
        {
            // ถ้าไม่ใช่ตำแหน่ง Player และไม่ใช่ช่อง Snake
            // แสดงตัวเลขปกติ
            printf("%d ", *(board + i));
        }
    }

    printf("\n");  // ขึ้นบรรทัดใหม่หลังจากแสดง Board เสร็จ
}


int main()
{
    int board[25];  // สร้าง Array ชื่อ board จำนวน 25 ช่อง
    int player = 1; // กำหนดตำแหน่งเริ่มต้นของ Player เป็นช่องที่ 1
    int dice;       // สร้างตัวแปร dice สำหรับเก็บผลการทอยลูกเต๋า
    char choice;    // สร้างตัวแปร choice สำหรับรับ y หรือ Y
    int i;          // สร้างตัวแปร i สำหรับใช้ใน for loop


    // กำหนดค่าเริ่มต้นให้ระบบสุ่ม
    // time(NULL) จะใช้เวลาปัจจุบันเป็นค่าเริ่มต้น
    // ทำให้การสุ่มแต่ละครั้งมีโอกาสได้เลขต่างกัน
    srand(time(NULL));


    /* สร้าง Board 1 - 25 */

    // วนลูป 25 รอบ
    // i จะมีค่าตั้งแต่ 0 ถึง 24
    for (i = 0; i < 25; i++)
    {
        // board[0] = 1
        // board[1] = 2
        // board[2] = 3
        // ...
        // board[24] = 25
        board[i] = i + 1;
    }


    printf("Snake and Ladder\n");
    // แสดงชื่อเกม


    // while จะทำงานตราบใดที่ player ยังอยู่ก่อนช่องที่ 25
    // ถ้า player = 25 เงื่อนไขจะเป็นเท็จและออกจาก loop
    while (player < 25)
    {
        // เรียกฟังก์ชัน printBoard
        // ส่ง board และ address ของ player เข้าไป
        printBoard(board, &player);


        printf("Roll dice?(y): ");
        // ถามผู้เล่นว่าต้องการทอยลูกเต๋าหรือไม่


        scanf(" %c", &choice);
        // รับตัวอักษรจากผู้ใช้
        // %c = รับข้อมูลชนิด char
        // &choice = ส่ง address ของ choice ให้ scanf


        // ตรวจสอบว่าผู้ใช้พิมพ์ y หรือ Y หรือไม่
        // != หมายถึง "ไม่เท่ากับ"
        // && หมายถึง "และ"
        if (choice != 'y' && choice != 'Y')
        {
            // ถ้าไม่ได้พิมพ์ y หรือ Y
            // แสดงข้อความ Error
            printf("Error input\n");

            // continue = ข้ามคำสั่งที่เหลือในรอบนี้
            // แล้วกลับไปเริ่ม while รอบใหม่ทันที
            continue;
        }


        /* สุ่มลูกเต๋า 1 - 6 */

        // rand() สุ่มตัวเลข
        // % 6 ทำให้ผลลัพธ์เหลือ 0 - 5
        // + 1 ทำให้กลายเป็น 1 - 6
        // ดังนั้น dice จะมีค่า 1, 2, 3, 4, 5 หรือ 6
        dice = rand() % 6 + 1;


        printf("You got %d\n", dice);
        // แสดงผลว่าทอยลูกเต๋าได้เลขอะไร


        /* เดิน */

        // เอาค่าที่ทอยได้ไปเพิ่มตำแหน่ง Player
        // เช่น player อยู่ช่อง 5 และ dice = 3
        // player จะกลายเป็น 8
        player += dice;


        /* ถ้าถึงหรือเกิน 25 ให้จบที่ 25 */

        // ตรวจสอบว่า Player เดินถึงหรือเกินช่อง 25 หรือไม่
        if (player >= 25)
        {
            // ถ้าเกิน 25 ให้กำหนดตำแหน่งเป็น 25
            // เช่น player = 27 ก็จะกลายเป็น 25
            player = 25;


            // แสดง Board โดยให้เห็น Player อยู่ช่อง 25
            printBoard(board, &player);


            // break = ออกจาก while loop ทันที
            break;
        }


        /* Snake: ช่อง 4, 14, 24 ถอยหลัง 3 ช่อง */

        // ตรวจสอบว่า Player ไปตกช่อง Snake หรือไม่
        // Snake อยู่ที่ช่อง 4, 14 และ 24
        if (player == 4 || player == 14 || player == 24)
        {
            // ถ้าอยู่ช่อง Snake ให้ถอยหลัง 3 ช่อง
            // เช่น 14 -> 11
            // เช่น 24 -> 21
            player -= 3;
        }


        // แสดง Board หลังจาก Player เดินเสร็จ
        // และถอยหลังถ้าเจอ Snake
        printBoard(board, &player);


        printf("\n");
        // เว้นบรรทัดเพื่อให้อ่านง่าย
    }


    // เมื่อ Player ถึงช่อง 25
    // แสดงข้อความ FINISH!
    printf("FINISH!\n");


    // ส่งค่า 0 กลับไป
    // หมายถึงโปรแกรมทำงานเสร็จสมบูรณ์
    return 0;
}