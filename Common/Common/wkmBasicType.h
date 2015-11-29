/* basic type definitions */
#ifndef __WKM_BASIC_TYPES_H__
#define __WKM_BASIC_TYPES_H__

#include <inttypes.h>
#include <vector>
#include <tuple>
namespace wkm
{
	namespace system{
		enum class HW_ACCEL :uint8_t {OCL=1, CUDA=2, QSV=4, CPU=8};
	}
	namespace video{
		
		enum class CHANNELTYPE :uint32_t { A = 1, B = 2, G = 4, R = 8, Y = 16, U = 32, V = 64, H = 128, S = 256, L = 512, A = 1024, B = 2048 };
		enum class CHANNELSTRUCTURE :bool { Packed = 1, Planar = 0 };
		enum class MEMORYTYPE :uint8_t { SYS = 1, OCL = 2, CUDA = 4 };
		enum class COLORSPACE :uint32_t { BT601, BT709, BT2020, RGB, sRGB, Adobe, HSV, LAB };
		enum class FRAMEFORMAT :uint8_t { PROGRESSIVE, INTERLACED, SBS_3D, VERT_3D};
		enum class FIELDORDER :bool { BFF = 0, TFF = 1 };
		enum class FRAMETYPE :uint8_t { I, P, B, X }; /* X: undetermined */

		using channel_layout = std::vector<CHANNELTYPE>;
		using channel_bitdepth = std::vector<uint8_t>;
		using channel_range = std::pair<float, float>; /* [0]: lower bound [1]: upper bound */
	}

	namespace audio{
		/* TODO */
	}
}

#endif