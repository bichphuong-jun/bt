#include <iostream>

using namespace std;

int main()
{
   int* p=new int;
   int* p2=p;
   *p=10;
   delete p;
   *p2=100;
   cout<<*p2;
   delete p2;
}
//dòng lệnh delete p; giải phóng con trỏ p. Nhưng con trỏ p2 vẫn giữ giá trị cũ, là địa chỉ mà trước đó p trỏ đến. Sau khi giải phóng bộ nhớ, truy cập cào p2 sẽ dẫn đến lỗi dangling pointer.
//Sau khi giải phóng bộ nhớ, bộ nhớ mà p2 trỏ đến không còn hợp lệ nữa. Do đó, truy cập p2 ở dòng lệnh *p2=100 sẽ dẫn đến lỗi undefined behavior.
//p2 trỏ tới vùng bộ nhớ mà p đã trỏ tới và đã bị giải phóng trước đó. Việc gọi lệnh delete trên con trỏ p2 sẽ dẫn đến việc giải phóng lại bộ nhớ đã giải phóng trước đó, dẫn đến lỗi double free.
