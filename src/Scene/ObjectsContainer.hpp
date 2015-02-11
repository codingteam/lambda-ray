#pragma once

#include <map>

#include "../Scene/SceneObject.hpp"

class ObjectsContainer {
private:
	std::map<std::string, SceneObject> objects;
};