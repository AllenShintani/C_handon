#include <stdbool.h>  

bool find_zero(int *a, int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            return true;  // 配列の要素に0が見つかった場合、trueを返す
        }
    }
    return false;  // ループが終了するまでに0が見つからなかった場合、falseを返す
}
