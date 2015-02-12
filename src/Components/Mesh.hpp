#pragma once

#include <memory>

#include "Component.hpp"
#include "../Resources/MeshResource.hpp"

class Mesh : public Component {
public:
	Mesh(const std::shared_ptr<MeshResource>&);
	virtual ~Mesh();
private:
	const std::shared_ptr<MeshResource> mesh;
};