/*************************************************************************
	> File Name: attribute.cc
	> Author: bryce
	> Mail: bryce@mail.ustc.edu.cn
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

// attribute的作用将test属性设置为构造函数，会在main函数前运行test函数

__attribute__((constructor))
void test() {
    printf("test : hello world\n");
    return ;
}

int main() {
    printf("main : hello world\n");
    return 0;
}
