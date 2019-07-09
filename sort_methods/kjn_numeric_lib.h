#include <iostream>
#include <vector>

class KJN_numeric_lib
{
public:
    // print vec in cmd
    void print_vec(std::vector<int> tab);
    // print matrix in cmd
    void print_matrix(std::vector<std::vector<int>> matrix);
    // newton algoritm, input: pointers to function and
    // to derivative of the function
    double zero_finder(double x0, double(*f)(double),
                        double(*fp)(double), double epsilon);
    // interpolation method
    double lagrange_method(int n, double z,
                                         std::vector<double> x, std::vector<double> y);
    // simpson method
    double simpson_method(double(*f)(double), double a, double b, int N);
    // gauss method
    double  gauss_method(double a[][], double x[], int n);
};
