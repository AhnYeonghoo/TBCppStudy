#include <iostream>
#include <future>
#include <thread>
using namespace std;

int main()
{
	// multi-threading
	{
		int result;
		std::thread t([&] { result = 1 + 2; });
		t.join();
		cout << result << endl;
	}

	// task-based parallelism
	{
		auto fut = std::async([] { return 1 + 2; });
		cout << fut.get() << endl;
	}

	// future and promise
	{
		std::promise<int> prom;
		auto fut = prom.get_future();
		
		auto t = std::thread([](std::promise<int>&& prom)
		{
			prom.set_value(1 + 2);
		}, std::move(prom));
		
		cout << fut.get() << endl;
		t.join();
	}
	return 0;
}