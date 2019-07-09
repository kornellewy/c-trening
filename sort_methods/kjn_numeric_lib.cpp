#include <iostream>
#include <vector>
#include "kjn_numeric_lib.h"
#include <math.h>

void KJN_numeric_lib::print_vec(std::vector<int> tab)
{
    std::cout<<std::endl;
    for (int i=0; i<tab.size(); i++)
    {
        std::cout<<tab[i]<<",";
    }
    std::cout<<std::endl;
}

void KJN_numeric_lib::print_matrix(std::vector<std::vector<int>> matrix)
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

double KJN_numeric_lib::zero_finder(double x0, double(*f)(double), double(*fp)(double), double epsilon)
{
    if (fabs(f(x0)) < epsilon)
    {
        return x0;
    }
    else
    {
        return zero_finder(x0-f(x0)/fp(x0), f, fp, epsilon);
    }
}
// interpolation method
double KJN_numeric_lib::lagrange_method(int n, double z,
                                         std::vector<double> x, std::vector<double> y)
{
    int s = x.size();
    double wnz=0.0, om=1.0, w;
    for (int i=0; i<=s; i++)
    {
        om = om * (z-x[i]);
        w = 1.0;
        for (int j=0; j<=s; j++)
        {
            if (i!=j)
            {
                w = w * (x[i] - x[j]);
                if (w*(z-x[i]) != 0)
                {
                    wnz = (wnz + y[i])/(w * (z-x[i]));
                }
                else
                {
                    std::cout<< "dzielenie przez 0" <<std::endl;
                    return 0;
                }
            }
        }
    }
    return wnz = wnz * om;
}

// simpson method
double KJN_numeric_lib::simpson_method(double(*f)(double), double a, double b, int N)
{
    double s=0.0;
    double h=(b-a)/(double)N;
    for(int i =1;i<=N;i++)
    {
        s+=h*(f(a+(i-1)*h)+4*f(a-h/2.0+i*h)+f(a+i*h))/6.0;
    }
    return s;
}
// gauss method
double KJN_numeric_lib::gauss_method(double a[][], double x[], int n)
{
    int max;
    double temp;
    for(int j=i+1; j<n; j++)
    {
        max =i;
        for (int j=i+1; j<N; j++)
        {
            if (std::fabs(a[j][i]) > std::fabs(a[max][i]))
            {
                max=j;
            }
        }
        // zmiana wierszy wartoscami
        for (intk=i; k<N+1; k++)
        {
            temp = a[i][k];
            a[i][k] = a[max][k];
            a[max][k] = temp;
        }
        if(a[i][i]==0)
        {
            return 0.0;
        }
        for(int j=i+1; j<n; j++)
        {
            // mnożenie wierszy j przez wspóczynnik zerujacy
            for(int k =n; k>=i; k--)
            {
                a[j][k] = a[j][k] - a[i][k] * a[j][i] / a[i][i];
            }
        }
    }
    // redukcja wsteczna
    for (int j=n-1; j>=0; j--)
    {
        temp=0;
        for (int k=j+1; k<=n; k++)
        {
            temp = temp + a[j][k]*x[k];
        }
        x[j] = (a[j][n]-temp)/a[j][j];
    }
    return 1.0;
}
