#include <stdio.h>

// 3次元ベクトルを定義
typedef struct Vector3D {
    double x;
    double y;
    double z;
} Vector3D;

// 2つのベクトルを引数にとり、その和を返す関数
Vector3D add_vector(Vector3D a, Vector3D b) {
    Vector3D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;

    return result;
}

int main() {
    // ベクトルaとbを定義
    Vector3D a = {1, -2, 3};
    Vector3D b = {-3,4,5};

    // ベクトルの和を計算
    Vector3D sum = add_vector(a, b);

    // 結果を表示
    printf("Vector Sum: (%f, %f, %f)\n", sum.x, sum.y, sum.z);

    return 0;
}
