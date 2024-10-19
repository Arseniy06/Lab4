#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include "lab05.hpp"
using namespace std;

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}


void sort(vector<float>&vec){
    vector<float> vectmp (vec.size());
    for (int i = 0; i<vec.size();++i){
        int argm = argmax(vec);
        vectmp[i] = vec[argm];
        vec[argm] = -101;
    }
    for (int i = 0; i<vec.size();++i){
        vec[i] = vectmp[i];
    }
}



/*int main() {
    std::vector<float> vec1 = generate_random_vector<float>(10, -100, 50);
    sort(vec1);
    for (int i = 0; i<vec1.size();++i){
        cout<<vec1[i]<<" ";
    }
    return 0;
}*/
