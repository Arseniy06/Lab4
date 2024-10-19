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


int argmax (const vector<float>&vec){
    if (vec.size()>0) {
        int maxindex = 51;
        float maximum = -101;
        for (int i = 0; i < vec.size(); ++i) {
            if (vec[i] > maximum) {
                maximum = vec[i];
                maxindex = i;
            }
        }
        return maxindex;
    } else {
        return -1;
    }
}



/*int main() {
    std::vector<float> vec1 = generate_random_vector<float>(10, -100, 50);
    cout<<argmax(vec1)<<endl;
    return 0;
}*/
