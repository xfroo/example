#include "Device.h"

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	_id = id;
	_type = type;
	_os = os;
}

unsigned int Device::getID()
{
	return _id;
}

DeviceType  Device::getType()
{
	return _type;
}

std::string Device::getOS() const
{
	return _os;
}

bool Device::isActive()
{
	if (check == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Device::activate()
{
	check = true;
}

void Device::deactivate()
{
	check = false;
}