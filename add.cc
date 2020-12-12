/*************************************************************************
	> File Name: add.cc
	> Author: bryce
	> Mail: bryce@mail.ustc.edu.cn
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

// 面向过程编程
int add1 (int a, int b) {
    return a + b;
};

// 面向对象编程
class ADD {
    public:
        int operator()(int a, int b) {
            return a + b;
        }
};

// 泛型编程
template <typename T, typename U>
// 位置返回允许我们在参数列表之后返回类型
auto add3(T a, U b) -> decltype(a + b) {
    return a + b;
};

// 函数编程 lamda表达式

auto add4 = [](int a, int b) -> int {
    return a + b;
};

int add (int a, int b) {
    return a + b;
};

// int main() {
//     ADD add2;
//     cout << "hello world" << endl;
//     cout << add1(3, 4) << endl;
//     cout << add2(3, 4) << endl;
//     cout << add3(3, 4) << endl;
//     cout << add4(3, 4) << endl;
//     return 0;
// }