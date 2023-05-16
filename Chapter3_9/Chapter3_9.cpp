#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	// event!
	item1_flag = true;

	// die!
	item2_flag = false;

	if (item3_flag == true)
	{
		//event
	}
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
	

	unsigned char items_flag = 0;
	cout << bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;

	cout << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << bitset<8>(items_flag) << endl;
	
	// item3 lost
	items_flag &= ~opt3;
	cout << bitset<8>(items_flag) << endl;

	// has item1 
	if (items_flag & opt1) 
	{
		cout << "has item1 " << endl;
	}
	else if (items_flag & opt0) 
	{
		cout << "has item0" << endl;
	}

	// optain item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2, 3 obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}
	
	cout << bitset<8>(items_flag) << endl;

	cout << endl;
	cout << endl;

	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//  Bit Mask
	
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	
	cout << std::bitset<32>(pixel_color) << endl;
	//
	unsigned char red, green, blue;
	
	blue = pixel_color & blue_mask;
	red = (pixel_color & red_mask) >> 16;
	green = (pixel_color & green_mask) >> 8;

	cout << "Blue: " << std::bitset<16>(blue) << endl;
	cout << "Blue: " << int(blue) << endl;

	cout << "Red: " << std::bitset<16>(red) << endl;
	cout << "Red: " << int(red) << endl;

	cout << "green: " << std::bitset<16>(green) << endl;
	cout << "green: " << int(green) << endl;
	

	return 0;
}