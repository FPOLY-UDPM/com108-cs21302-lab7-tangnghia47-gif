/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int nguyenAm = 0;
    int phuAm = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]); // chuyển về chữ thường

        if(isalpha(c)) {  // kiểm tra có phải chữ cái không
            if(c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u' || c == 'y') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("So nguyen am: %d\n", nguyenAm);
    printf("So phu am: %d\n", phuAm);

    return 0;
}