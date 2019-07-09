#include <iostream>
#include <vector>
#include <random>
#include "kjn_algorytm_lib.h"
#include "kjn_graph_lib.h"
#include "kjn_numeric_lib.h"

#define LOG(x) std::cout << x << std::endl;

double f(double x)
{
    return 3*x*x-2;
}
double fp(double x)
{
    return 6*x;
}

double fun(double x)
{
    return x*x-3*x1;
}

int main()
{
    // init algorytm part
    std::vector <int> tab;
    KJN_algorytm_lib kjn_lib;
    tab = kjn_lib.rand_vec(10);
    kjn_lib.print_vec(tab);
    // bubble search
    tab = kjn_lib.int_bubble_sort(tab);
    kjn_lib.print_vec(tab);
    // insert sort
    tab = kjn_lib.rand_vec(10);
    kjn_lib.int_insert_sort(tab);
    kjn_lib.print_vec(tab);
    // liner search test
    kjn_lib.int_linear_search(tab, 61);
    // binary search test
    kjn_lib.int_binary_search(tab, 84);

    // init graph part
    KJN_graph_lib kjn_graph;
    std::vector<std::vector<int>> matrix;
    // test matrix init and printing
    matrix = kjn_graph.init_matrix(3,3);
    kjn_graph.print_matrix(matrix);
    // test inserting 1 to matrix
    matrix = kjn_graph.insert_to_matrix(matrix, 1, 1);
    kjn_graph.print_matrix(matrix);
    // test inserting 1 to matrix (better)
    matrix[1][1] = 0;
    kjn_graph.print_matrix(matrix);
    //test algorytmu Roya-Warshalla
    matrix = kjn_graph.init_matrix(5,5);
    matrix[0][1] = 1; matrix[0][3] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[3][2] = 1;
    matrix[4][1] = 1;
    kjn_graph.print_matrix(matrix);
    matrix = kjn_graph.roya_warshalla(matrix);
    kjn_graph.print_matrix(matrix);
    // test way finder
    matrix = kjn_graph.init_matrix(5,5);
    matrix[0][1] = 1; matrix[0][3] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[3][2] = 1;
    matrix[4][1] = 1;
    std::vector <int> way;
    way = kjn_graph.find_way(matrix, 0, 2);
    kjn_graph.print_vec(way);

    // init numeric part
    KJN_numeric_lib kjn_numeric;
    LOG(kjn_numeric.zero_finder(1, f, fp, 0.0001));
    std::vector <double> x = {3.0, 5.0, 6.0, 7.0};
    std::vector <double> y = {1.732, 2.236, 2.449, 2.646};
    LOG(kjn_numeric.lagrange_method(4, 4.5, x, y));
    LOG(kjn_numeric.simpson_method(fun, -5, 3, 10));
    int n = 3;
    a[3][4] = {
        {5, 0, 1, 9},
        {1, 1, -1, 6},
        {2, -1, 1, 0},
    };
    int x[n];
    kjn_numeric.gauss_method(a, x, n);


    return 0;
}
























