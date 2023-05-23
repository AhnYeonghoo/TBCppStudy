#include <iostream>
using namespace std;

class USBDevice
{
private:
	long id_;
	
public:
	USBDevice(long id) : id_(id) {}
	long getId() { return this->id_; }
	void plugAndPlay() {}
};

class NetworkDevice
{
private:
	long id_;

public:
	NetworkDevice(long id) : id_(id) {}
	long getId() { return this->id_; }
	void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id) {}
};

int main()
{
	USBNetworkDevice my_device(3.14, 6.022);

	my_device.networking();
	my_device.plugAndPlay();
	cout << my_device.USBDevice::getId() << endl;
	cout << my_device.NetworkDevice::getId() << endl;

}