#include <iostream>
#include <vector>

class KJN_graph_lib
{
public:
    // print vec in cmd
    void print_vec(std::vector<int> tab);
    // print matrix in cmd
    void print_matrix(std::vector<std::vector<int>> matrix);
    // init matrix of given size
    std::vector<std::vector<int>> init_matrix(int row, int col);
    // insert 1 to given matrix to given position
    std::vector<std::vector<int>> insert_to_matrix(std::vector<std::vector<int>> matrix,
                                              int row, int col);
    // algorytm Roya-Warshalla
    std::vector<std::vector<int>> roya_warshalla(std::vector<std::vector<int>> matrix);
    // way finding
    std::vector<int> find_way(std::vector<std::vector<int>> matrix, int x, int y);
};

