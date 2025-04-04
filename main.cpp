#include <iostream>
using namespace std;
void test()
{
    int x=10;
    int* p=new int;//cấp phát bộ nhớ động cho con trỏ p, khi đó p sẽ trỏ tới một vùng bộ nhớ trong heap.
    p=&x;//dòng lệnh này làm p trỏ tới biến địa phương x, nhưng x không được lưu trữ trong heap
    delete p;//dòng lệnh này giải phóng bộ nhớ mà p trỏ đến nhưng bộ nhớ mà p trỏ đến không phải bộ nhớ động mà là bộ nhớ do biến x quản lý. Việc này sẽ gây ra lỗi undefined behavior.
    cout<<*p;
}
int main()
{
    test();
    return 0;
}
