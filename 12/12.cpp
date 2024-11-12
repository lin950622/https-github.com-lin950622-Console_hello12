#include <iostream>
using namespace std;

int main() {
    int month;

    // 輸入月份
    cout << "請輸入月份 (1-12): ";
    cin >> month;

    // 判斷並輸出季節
    if (month >= 3 && month <= 5) {
        cout << "該月份屬於春季。" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << "該月份屬於夏季。" << endl;
    }
    else if (month >= 9 && month <= 11) {
        cout << "該月份屬於秋季。" << endl;
    }
    else if (month == 12 || month == 1 || month == 2) {
        cout << "該月份屬於冬季。" << endl;
    }
    else {
        cout << "輸入錯誤，請輸入 1 到 12 之間的數字。" << endl;
    }

    return 0;
}
