#pragma once

#include <map>

#include "../Components/Component.hpp"

class SceneObject: public ObjectsContainer {
private:
	std::map<std::string, Component> components;
};