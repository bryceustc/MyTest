/*************************************************************************
	> File Name: mytest.h
	> Author: bryce
	> Mail: bryce@mail.ustc.edu.cn
 ************************************************************************/

#ifndef _MYTEST_H
#define _MYTEST_H

#define COLOR(msg, code) "\033[0;1;" #code "m" msg "\033[0m"
#define RED(msg)    COLOR(msg, 31) 
#define GREEN(msg)  COLOR(msg, 32) 
#define YELLOW(msg) COLOR(msg, 33)  
#define BLUE(msg)   COLOR(msg, 34) 

#define EXPECT(a, comp, b) { \
    __typeof(a) __a = (a), __b = (b); \
    if (!((__a) comp (__b))) { \
        printf(YELLOW("  %s:%d: Failure\n"), __FILE__, __LINE__); \
        printf(YELLOW("    Expected: (%s) %s (%s), actual: %d vs %d\n"), \
        #a, #comp, #b, __a, __b); \
    } \
}
#define EXPECT_EQ(a, b) EXPECT(a, ==, b)
#define EXPECT_NE(a, b) EXPECT(a, !=, b)
#define EXPECT_LT(a, b) EXPECT(a, <, b)
#define EXPECT_LE(a, b) EXPECT(a, <=, b)
#define EXPECT_GT(a, b) EXPECT(a, >, b)
#define EXPECT_GE(a, b) EXPECT(a, >=, b)

#define TEST(a, b)  \
void my_##a##_##b(); \
__attribute__((constructor)) \
void reg_##a##_##b() { \
    add_test_func(my_##a##_##b, #a "." #b); \
} \
void my_##a##_##b()

struct {
    void (*func)();
    const char *func_name;
} func_arr[100];
int func_cnt = 0;

void add_test_func(void (*func)(), const char *str) {
    func_arr[func_cnt].func = func; // 传入函数地址
    func_arr[func_cnt].func_name = str; // 传入函数名
    func_cnt++;
    return ;
}

int RUN_ALL_TESTS() {
    // 遍历所有的测试用例
    // run every test case
    for (int i = 0; i < func_cnt; i++) {
        printf(GREEN("[  RUN    ]") " %s\n", func_arr[i].func_name);
        func_arr[i].func();
    }
    return 0;
}

#endif

