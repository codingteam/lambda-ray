#include "Resource.hpp"

Resource::Resource(const std::string& id) : resourceId(id), loaded(false) {
}

Resource::~Resource() {
	if (loaded) {
		/* TODO log warning here */
		unload();
	}
}

void Resource::load(cl_context clContext) {
	/* TODO log resourceId here */
	if (loaded) {
		/* TODO log error here */
		return;
	}

	if (doLoad(clContext)) {
		loaded = true;
	}
	else {
		/* TODO log error here */
	}
}

void Resource::unload() {
	/* TODO log resourceId here */
	if (!loaded) {
		/* TODO log error here */
		return;
	}

	if (doUnload()) {
		loaded = false;
	}
	else {
		/* TODO log error here */
	}
}