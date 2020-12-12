/*************************************************************************
	> File Name: log.cc
	> Author: bryce
	> Mail: bryce@mail.ustc.edu.cn
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>

using namespace std;

int log_flag = 0;
// 关闭log日志，打印宏
// #define LOG(frm, args...) do { \
//     if (log_flag == 0) break; \
//     printf("\033[0;33m[%s : %s : %d] \033[0m", __FILE__, __func__, __LINE__); \
//     printf(frm, ##args);\
//     printf("\n"); \
// } while(0);


// 2. 宏定义的覆盖
// #define LOG(frm, args...) { \
//     printf("\033[0;33m[%s : %s : %d] \033[0m", __FILE__, __func__, __LINE__); \
//     printf(frm, ##args);\
//     printf("\n"); \
// };

// #undef LOG
// #define LOG(frm, args...)

// #define DEBUG

#ifdef DEBUG

#define LOG(frm, args...) { \
    printf("\033[0;33m[%s : %s : %d] \033[0m", __FILE__, __func__, __LINE__); \
    printf(frm, ##args);\
    printf("\n"); \
};

#else
#define LOG(frm, args...)

#endif

void test() {
    LOG("hello, world\n");
}

int main() {
    LOG("hello, world\n");
    test();
    return 0;
}
