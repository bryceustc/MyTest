/*************************************************************************
	> File Name: mytest.cc
	> Author: bryce
	> Mail: bryce@mail.ustc.edu.cn
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "zdy/mytest.h"

using namespace std;

int add (int a, int b) {
    return a + b;
};

TEST(test, add1) {
    EXPECT_EQ(add(3, 4), 7); // ==
    EXPECT_NE(add(3, 4), 9); // !=
    EXPECT_LT(add(3, 4), 8); // <
    EXPECT_LE(add(3, 4), 7); // <=
    EXPECT_GT(add(3, 4), 6); // >
    EXPECT_GE(add(3, 4), 7); // >=
}

TEST(test, add2) {
    EXPECT_EQ(add(3, 4), 7); // ==
    EXPECT_NE(add(3, 4), 9); // !=
    EXPECT_LT(add(3, 4), 8); // <
    EXPECT_LE(add(3, 4), 7); // <=
    EXPECT_GT(add(3, 4), 9); // error >
    EXPECT_GE(add(3, 4), 7); // >=
}

int main() {
    printf("\033[0;1;33;mhello world\n\033[m");
    printf("\033[0;32madd(3, 4) = %d\n\033[m", add(3, 4));
    return RUN_ALL_TESTS();
}