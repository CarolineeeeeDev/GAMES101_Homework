#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main()
{
    Eigen::Vector3f v(2.0f,1.0f,1.0f);
    Eigen::Matrix3f m1, m2;
    m1 << 
    std::cos(45.0/180.0*acos(-1)), -std::sin(45.0/180.0*acos(-1)), 0.0, 
    std::sin(45.0/180.0*acos(-1)), std::cos(45.0/180.0*acos(-1)), 0.0, 
    0.0, 0.0, 1.0;
    v = m1 * v;
    m2 << 
    1.0, 0.0, 1.0, 
    0.0, 1.0, 2.0, 
    0.0, 0.0, 1.0;
    v = m2 * v;
    std::cout<<v<<std::endl;
}