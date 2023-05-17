#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int main9()
{

	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(5, 8) << "\t";

		if (count % 5 == 0) cout << endl;
	}

	cout << endl;
	cout << endl;
	
	std::random_device rd;
	std::mt19937_64 mesenne(rd());
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}
	
	

	
	


	return 0;
}