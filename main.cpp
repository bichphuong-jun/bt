#include <iostream>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
//c là con trỏ trỏ đến phần tử thứ 4 của mảng
//do đó dòng lệnh delete c có thể hoạt động một cách ngẫu nhiên hoặc không thể giải phóng bộ nhớ chính xác
