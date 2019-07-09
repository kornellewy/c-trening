#include <iostream>
#include <vector>
#include <random>


class KJN_algorytm_lib
{
public:
    // print vec in cmd
    void print_vec(std::vector<int> tab);
    // return a vector in know len wyth random int
    std::vector<int> rand_vec(int vec_len);
    // return a vector of int, after bubble sort
    std::vector<int> int_bubble_sort(std::vector <int> tab);
    // return a vector of int, after insert sort
    std::vector<int> int_insert_sort(std::vector <int> tab);
    // return a vector of int, after quick sort
    std::vector<int> int_quick_sort(std::vector <int> tab,int left,int right);
    // linear search  of int in vector of ints
    int int_linear_search(std::vector <int> tab, int searched_int);
    // binary search  of int in vector of ints
    int int_binary_search(std::vector <int> tab, int searched_int);
};
