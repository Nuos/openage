#ifndef _ENGINE_COORD_DECL_H_
#define _ENGINE_COORD_DECL_H_

#include <stdint.h>

/*
 * forward declarations of all coordinate structs,
 * scalar type name aliases, and scaling factors
 *
 * in accordance to doc/implementation/coordinate-systems
 */

namespace openage {
namespace engine {
namespace coord {

/* physics-based vector types */
using phys_t = int64_t;

struct phys2;
struct phys2_delta;
struct phys3;
struct phys3_delta;

constexpr unsigned phys_t_radix_pos = 16;
constexpr phys_t phys_t_scaling_factor = (1 << phys_t_radix_pos);
constexpr phys_t phys_per_tile = phys_t_scaling_factor;
using tile_t = int64_t;

struct tile;
struct tile_delta;
struct tile3;
struct tile3_delta;

constexpr unsigned tiles_per_chunk_bits = 4; //yeah, this needs a better name.
constexpr tile_t tiles_per_chunk = (1 << tiles_per_chunk_bits);
using chunk_t = int64_t;

struct chunk;
struct chunk_delta;

/* pixel-based vector types */
using pixel_t = int16_t;

struct window;
struct window_delta;
struct camgame;
struct camgame_delta;
struct camhud;
struct camhud_delta;

/* general-purpose vector types */
struct vec2;
struct vec2_delta;
struct vec3;
struct vec3_delta;

} //namespace coord
} //namespace engine
} //namespace openage

#endif //_ENGINE_COORD_DECL_H_
