#include <iostream>
#include <vector>
#include "kjn_graph_lib.h"


void KJN_graph_lib::print_vec(std::vector<int> tab)
{
    std::cout<<std::endl;
    for (int i=0; i<tab.size(); i++)
    {
        std::cout<<tab[i]<<",";
    }
    std::cout<<std::endl;
}

void KJN_graph_lib::print_matrix(std::vector<std::vector<int>> matrix)
{
    std::cout<<std::endl;
    for (int row=0; row<matrix.size(); row++)
    {
            for (int col=0; col<matrix[row].size(); col++)
            {
                std::cout<<matrix[row][col]<<" ";
            }
            std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

std::vector<std::vector<int>> KJN_graph_lib::init_matrix(int row, int col)
{
    std::cout<<std::endl;
    std::vector<std::vector<int>> matrix;
    for (int i=0; i<row; i++)
    {
        std::vector<int> vect(col, 0);
        matrix.push_back(vect);
    }
    return matrix;
}

std::vector<std::vector<int>> KJN_graph_lib::insert_to_matrix(std::vector<std::vector<int>> matrix,
                                              int row, int col)
{
    matrix[row][col] = 1;
    return matrix;
}

std::vector<std::vector<int>> KJN_graph_lib::roya_warshalla(std::vector<std::vector<int>> matrix)
{
    for(int i=0; i<matrix.size(); i++)
    {
        for(int ii=0; ii<matrix[i].size(); ii++)
        {
            for(int z=0; z<matrix.size(); z++)
            {
                if (matrix[ii][z] == 0)
                {
                    matrix[ii][z] = matrix[ii][i] * matrix[i][z];
                }
            }
        }
    }
    return matrix;
}

std::vector<int> KJN_graph_lib::find_way(std::vector<std::vector<int>> matrix, int x, int y)
{
    // way holder
    std::vector <int> way;
    // modify matrix
    for(int i=0; i<matrix.size(); i++)
    {
        for(int ii=0; ii<matrix[i].size(); ii++)
        {
            if (matrix[i][ii] == 1)
            {
                matrix[i][ii] = ii;
            }
        }
    }
    int k;
    // no way
    if (matrix[x][y] == 0)
    {
        std::cout<<std::endl;
        std::cout<< "nie znaleziono drogi" <<std::endl;
        return way;
    }
    // way
    else
    {
        std::cout<<std::endl;
        std::cout<< "way: " << x << " ";
        k = x;
        while(k!=y)
        {
            k = matrix[k][y];
            std::cout << k << " ";
            way.push_back(k);
        }
    }
    return way;
}
