#pragma once

#include <CL/cl.h>

#include "Resource.hpp"

class MeshResource : public Resource {
public:
	MeshResource(const std::string&, void*);
	~MeshResource();

protected:
	bool doLoad(cl_context);
	bool doUnload();
	
private:
	cl_mem vertices;
	cl_mem indices;

	void* meshLoader; //Substitute this for a real mesh loader later;

	bool loaded;
};