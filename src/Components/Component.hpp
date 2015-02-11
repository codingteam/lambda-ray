#pragma once

#include <map>

#include "../Resources/Resource.hpp"

class Component {
private:
	std::map<std::string, Resource> resources;
};