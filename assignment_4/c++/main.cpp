#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::Matrix<float, 3, 2> A;
    A << 1, 2,
         3, 4,
         5, 6;

    Eigen::Matrix<float, 2, 3> B;
    B << 7, 8, 9,
         10, 11, 12;

    Eigen::Matrix<float, 3, 3> C = A * B;

    std::cout << "A * B =\n" << C << std::endl;

    return 0;
}
