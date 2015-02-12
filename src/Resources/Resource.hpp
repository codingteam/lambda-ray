#pragma once

#include <string>

#include <CL/cl.h>

class Resource {
public:
	Resource(const std::string&);
	virtual ~Resource();

	virtual void load(cl_context) final;
	virtual void unload() final;

protected:
	virtual bool doLoad(cl_context) = 0;
	virtual bool doUnload() = 0;

private:
	const std::string resourceId;
	bool loaded;

};