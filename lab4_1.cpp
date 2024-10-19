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


float mean (const vector<float>& vec){
    float sum = 0;
    int len = vec.size();
    for (int i = 0; i<len;++i){
        sum+=vec[i];
    }
    return sum/len;
}



/*int main() {
    std::vector<float> vec1 = generate_random_vector<float>(10, -100, 50);
    cout<<mean(vec1)<<endl;
    return 0;
}*/
