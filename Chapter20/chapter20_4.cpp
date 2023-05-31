#include <iostream>
#include <thread>
#include <string>
#include <chrono>
#include <vector>
#include <mutex>
using namespace std;

int mainttt()
{
    const int num_pro = std::thread::hardware_concurrency();
    std::vector<std::thread> my_threads;
    my_threads.resize(num_pro);

    
    
    std::cout << std::this_thread::get_id() << endl;

    std::thread t1 = std::thread([]() {
        std::cout << std::this_thread::get_id() << endl;
    });
    
    

    t1.join();

    auto work_func = [](const string& name)
    {
        for (int i = 0; i < 5; i++)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            std::cout << name << " " << std::this_thread::get_id() << " is working " << i << endl;
        }
    };
    
    work_func("jackjack");
    work_func("dash");
    

    return 0;
}