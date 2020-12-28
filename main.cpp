#include <iostream>
#include <random>
#include <chrono>
#include <functional>

using namespace std;

int main()
{
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(1, 999);
    auto dice = bind(distribution, generator);

    for (int i=0; i<10; i++) {
        int num = dice();
        cout << num << endl;
    }

    return 0;
}
