#include <iostream>
#include <vector>
#include <random>
#include "kjn_algorytm_lib.h"


void KJN_algorytm_lib::print_vec(std::vector<int> tab)
{
    std::cout<<std::endl;
    for (int i=0; i<tab.size(); i++)
    {
        std::cout<<tab[i]<<",";
    }
    std::cout<<std::endl;
}

std::vector<int> KJN_algorytm_lib::rand_vec(int vec_len)
    {
        std::random_device rd;
        std::mt19937 rng(rd());
        std::uniform_int_distribution<int> uni(1,100);
        std::vector <int> tab(vec_len);
        for (int i =0; i<vec_len; i++)
        {
            tab[i] = rand() % 100;
        }
        print_vec(tab);
        return tab;
    }

std::vector<int> KJN_algorytm_lib::int_bubble_sort(std::vector <int> tab)
{
    for (int i =1; i<tab.size(); i++)
    {
        for (int j=tab.size()-1; j>=i; j--)
        {
            if (tab[j] < tab[j-1])
            {
                int temp = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = temp;
            }
        }
    }
   return tab;
}

std::vector<int> KJN_algorytm_lib::int_insert_sort(std::vector <int> tab)
{
    for (int i=1; i<tab.size(); i++)
    {
        int j = i;
        int insert_ele = tab[j];
        while( (j>0) && (tab[j-1]>insert_ele) )
        {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = insert_ele;
    }
    return tab;
}

std::vector<int> KJN_algorytm_lib::int_quick_sort(std::vector <int> tab,int left,int right)
{
    if (left < right)
    {
        int m = left;
        for (int i = left+1; i<=right; i++)
        {
            if (tab[i] < tab[left])
            {
                std::swap(tab[m], tab[i]);
                m = m+1;
            }
        }
        std::swap(tab[left], tab[m]);
        int_quick_sort(tab, left, m-1);
        int_quick_sort(tab, m+1, right);
    }
    if (left == right)
    {
        return tab;
    }
}

int KJN_algorytm_lib::int_linear_search(std::vector <int> tab, int searched_int)
{
    int i;
    for (i=0; i<tab.size(); i++)
    {
        if(tab[i] == searched_int)
        {
            std::cout << "znaleziono " << searched_int << "na pozycji: " << i <<std::endl;
            return i;
        }
    }
    std::cout << "nie znaleziono " << searched_int <<std::endl;
    return -1;
}

int KJN_algorytm_lib::int_binary_search(std::vector <int> tab, int searched_int)
{
    bool finded = false;
    int left = 0, right = tab.size()-1, mid;
    while( (left<=right) && (finded == false) )
    {
        mid = (left + right)/2;
        if (tab[mid] == searched_int)
        {
            finded =true;
        }
        else
        {
            if (tab[mid] < searched_int)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
    }
    if (finded = true)
    {
        std::cout << "znaleziono " << searched_int << "na pozycji: " << mid <<std::endl;
        return mid;
    }
    else
    {
        std::cout << "nie znaleziono " << searched_int <<std::endl;
        return -1;
    }
}


/*
void insert_sort(std::vector <int> tab)
{
    for (int i=1; i<tab.size(); i++)
    {
        int j = i;
        int insert_ele = tab[j];
        while( (j>0) && (tab[j-1]>insert_ele) )
        {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = insert_ele;
    }
    return tab;
}

std::vector <int> build_heap(std::vector <int> tab, int k, int n)
{
    int i,j;
    i = tab[k-1];
    while(k <= n/2)
    {
        j = 2*k;
        if(( j< n ) && ( tab[j-1]<tab[j] ))
        {
            j++;
        }
        if(i >= tab[j-1])
        {
            break;
        }
        tab[k-1] = tab[j-1];
        k = j;
    }
    tab[k-1] = i;
    return tab;
}

void heap_sort(std::vector <int> tab)
{
    int n = tab.size();
    int k, swapp;
    // 1.uluz dane w kopiec
    for (k=n/2; k>0; k--)
    {
        tab =  build_heap(tab, k, n);
    }
    // 2.usun wierzcholek z kopca poprzez zmianê go
    // z ostatnim lisciem drzewa
    do
    {
        swapp = tab[0];
        tab[0] = tab[n-1];
        tab[n-1] = swapp;
        n--;
        // 3.przywróc wlasnoœæ kopca dla reszty
        tab =  build_heap(tab, 1, n);
        print_vec(tab);
    }while(n>1);
}

void quick_sort(std::vector <int> tab, int left, int right)
{
    if (left < right)
    {
        int m = left;
        for (int i = left+1; i<=right; i++)
        {
            if (tab[i] <tab[left])
            {
                std::swap(tab[++m], tab[i]);
            }
        }
        std::swap(tab[left], tab[m]);
        quick_sort(tab, left, m-1);
        quick_sort(tab, m+1, right);
    }
}

void mmerge(std::vector <int> tab, int pocz, int sr, int kon)
{
    int i, j, q;
    for (i=pocz; i<=kon; i++)
    {
        i = pocz;
        j = sr+1;
        q = pocz;
    }
    while(i <= sr && j<=kon)
    {
        if (tab[i]<tab[j])
        {
            tab[q++] = tab[i++];
        }
        else
        {
            tab[q++] = tab[j++];
        }
    }
    while (i<=sr)
    {
        tab[q++] = tab[i++];
    }
}

void merge_sort(std::vector <int> tab, int pocz, int kon)
{
    int sr;
    if (pocz < kon)
    {
        sr = (pocz + kon)/2;
        merge_sort(tab,pocz, sr);
        merge_sort(tab,sr+1, kon);
        mmerge(tab,pocz, sr, kon);
    }
    else
    {
        print_vec(tab);
    }
}
*/
