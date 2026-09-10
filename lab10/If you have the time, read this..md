# Lab 10 — Strings & Authentication in C

โปรเจกต์นี้เป็นแบบฝึกหัดภาษา C ที่รวมการจัดการ string เข้ากับระบบล็อกอินแบบง่าย 

ระบบมีทั้งตัวอย่างการใช้ string พื้นฐาน (L1001–L1004) และ use case สำหรับล็อกอิน/เปลี่ยนรหัสผ่าน (L1005 และ L10O01)

## Features

- ระบบล็อกอินสำหรับ `admin`, `user1` และ `user2`
- Admin สามารถเปลี่ยนรหัสผ่านของผู้ใช้ได้
- ใช้ compiler warnings และการตรวจสอบขอบเขต buffer เพื่อช่วยลดข้อผิดพลาดทั่วไปในภาษา C

## Requirements

- GCC หรือ compiler ที่รองรับ C11 
- https://gcc.gnu.org/projects/c-status.html#c11
- GNU Make
- Linux หรือ environment ที่มี POSIX-compatible C library 
- `ส่วนตัวผมใช้ linux`

## Build

เข้าไปยังโฟลเดอร์ของ Lab 10 ก่อน: ถ้าไม่เข้า make จะไม่ติด

```bash
cd lab10
```

คำสั่งที่ใช้บ่อย:
```bash
# Build application และ test binaries
make all

# Build แล้วเปิดระบบล็อกอิน
make run

# Build แล้วเปิดตัวอย่าง string L1001–L1004
make run-strings

# ลบไฟล์ build ที่สร้างขึ้น
make clean
```

ไฟล์ executable จะถูกสร้างไว้ใน `lab10/build/`:
 เพื่อลดไฟล์รกหน้าจอ
- `build/lab10` — โปรแกรมหลัก
- `build/unit_tests` — unit test binary
- `build/integration_tests` — integration test binary

## Running the application

### Authentication mode

รันโดยไม่ใส่ argument หรือระบุ `auth` ได้ทั้งสองแบบ:

```bash
./build/lab10
# หรือ
./build/lab10 auth
```

บัญชีเริ่มต้น:

| Username | Password | Role | Welcome message |
| --- | --- | --- | --- |
| `admin` | `admin` | Admin | `Welcome my lovely admin!` |
| `user1` | `1234` | User | `Welcome!` |
| `user2` | `5678` | User | `Welcome!` |

เมื่อเข้าสู่ระบบด้วย `admin` โปรแกรมจะแสดงเมนูสำหรับเปลี่ยนรหัสผ่านให้ `admin`, `user1` หรือ `user2` หลังจากเปลี่ยนรหัสผ่านสำเร็จ โปรแกรมจะกลับไปยังหน้าล็อกอินอีกครั้ง

> ข้อมูลผู้ใช้ถูก seed ใหม่ทุกครั้งที่เปิดโปรแกรม และเก็บอยู่ในหน่วยความจำเท่านั้น การเปลี่ยนรหัสผ่านจึงไม่มีผลหลังจากปิดโปรแกรม

### String demonstrations

```bash
./build/lab10 strings
```

โหมดนี้จะรันตัวอย่างต่อเนื่องดังนี้:

- **L1001** — สร้าง string สองรูปแบบและแสดงผลด้วย `%s`
- **L1002** — อ่าน string สองค่าและแสดงผลด้วย `puts`
- **L1003** — แสดงค่าก่อนและหลังการเขียนค่า `No Data` ทับ `s2`
- **L1004** — ต่อ `s2` ท้าย `s1` และรายงานจำนวนตัวอักษร

## Testing

รัน unit tests และ integration tests ได้ด้วย:

```bash
make test
make integration
```

หรือ build ทุก target ก่อนแล้วรัน binary โดยตรง:

```bash
make all
./build/unit_tests
./build/integration_tests
```

Unit tests ครอบคลุม `StringBuffer`, การล็อกอิน, การตรวจสอบรหัสผ่าน, การเปลี่ยนรหัสผ่าน และ repository ส่วน integration tests ตรวจสอบ flow การล็อกอินของ admin และการเปลี่ยนรหัสผ่านตั้งแต่ต้นจนจบ

## Project structureของProject10

```text
lab10/
├── Makefile
├── src/
│   ├── main.c                         # Composition root และ entrypoint
│   ├── config/config.h                # ค่าคงที่และข้อจำกัดของระบบ
│   ├── features/auth/                 # Domain, service, controller, repository
│   ├── features/strings_demo/         # StringBuffer และ L1001–L1004
│   └── shared/                        # Input, logger และ error handling
└── tests/
    ├── strings_tests.c                # Unit tests ของ string feature
    ├── auth_tests.c                   # Unit tests ของ auth feature
    └── integration/                   # Integration tests
```


## Design and safety notes

- จำกัด username และ password ไว้ไม่เกิน 32 ตัวอักษร
- จำกัด string ทั่วไปไว้ไม่เกิน 100 ตัวอักษร
- input helper จะตัด newline และตรวจจับข้อมูลที่ยาวเกิน buffer
- login failure ใช้ข้อความเดียวกันทั้งกรณี username ไม่ถูกต้องและ password ไม่ถูกต้อง เพื่อลดการเปิดเผยข้อมูลผู้ใช้

โปรเจกต์นี้เป็น educational demo หรัสผ่านถูกเก็บเป็น plaintext 

และข้อมูลไม่ได้ persist ลงฐานข้อมูล

## Resources

- [Link to demo / live site]   มันเป็นCli
 จึงไม่มีเว็บไซต์สาธิตออนไลน์ ให้ทำตามส่วน [Build](#build) และ [Running the application](#running-the-application) เพื่อทดลองใช้งานในเครื่อง

แหล่งข้อมูลที่ผมใช้ศึกษา:

- [C string handling — cppreference]
(https://en.cppreference.com/w/c/string/byte) — อ้างอิงฟังก์ชัน string ในภาษา C
- [Authentication Cheat Sheet — OWASP]
(https://cheatsheetseries.owasp.org/cheatsheets/Authentication_Cheat_Sheet.html)
 — แนวทางออกแบบระบบ authentication ให้ปลอดภัยยิ่งขึ้น
