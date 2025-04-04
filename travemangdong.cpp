#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* s1, const char* s2)
{
    int l1=strlen(s1), l2=strlen(s2);
    char* res=new char[l1+l2-1];
    strcpy(res,s1);
    strcat(res,s2);
    return res;
}
int main()
{
    const char* s1="Hello";
    const char* s2="World";
    cout<<concat(s1,s2);
    return 0;
}
