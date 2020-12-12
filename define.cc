/*************************************************************************
	> File Name: define.cc
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

#define PI 3.1415926
#define S(a,b) a * b

int main() {
    printf("%lf\n", PI * 2);
    printf("S(3, 4) = %d\n", S(3, 4));
    printf("S(5 + 6, 4) = %d\n", S(5 + 6, 4));
    int n;
    S(int , p) = &n;
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__func__ = %s\n", __func__);
    printf("__PRETTY_FUNCTION__ = %s\n", __PRETTY_FUNCTION__);
    return 0;
}
