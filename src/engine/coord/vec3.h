#ifndef _ENGINE_COORD_VEC3_H_
#define _ENGINE_COORD_VEC3_H_

#include "decl.h"

#define MEMBERS x, y, z
#define SCALAR_TYPE int64_t
#define ABSOLUTE_TYPE vec3
#define RELATIVE_TYPE vec3_delta

namespace openage {
namespace engine {
namespace coord {

struct vec3 {
	int64_t x, y, z;

	#include "ops/abs.h"
};

struct vec3_delta {
	int64_t x, y, z;

	#include "ops/rel.h"
};

#include "ops/free.h"

#ifdef GEN_IMPL
#undef GEN_IMPL
#include "ops/impl.h"
#endif //GEN_IMPL

} //namespace coord
} //namespace engine
} //namespace openage

#undef MEMBERS
#undef RELATIVE_TYPE
#undef ABSOLUTE_TYPE
#undef SCALAR_TYPE

#endif //_ENGINE_COORD_VEC3_H_
