
#pragma once


#include <glbinding/nogl.h>

#include <glbinding/gl/enum.h>


namespace gl42core
{


// import enums to namespace


// AlphaFunction

using gl::GL_NEVER;
using gl::GL_LESS;
using gl::GL_EQUAL;
using gl::GL_LEQUAL;
using gl::GL_GREATER;
using gl::GL_NOTEQUAL;
using gl::GL_GEQUAL;
using gl::GL_ALWAYS;

// AtomicCounterBufferPName

using gl::GL_ATOMIC_COUNTER_BUFFER_BINDING;
using gl::GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE;
using gl::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS;
using gl::GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES;
using gl::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER;
using gl::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER;
using gl::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER;
using gl::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER;
using gl::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER;

// AttributeType

using gl::GL_FLOAT_VEC2;
using gl::GL_FLOAT_VEC3;
using gl::GL_FLOAT_VEC4;
using gl::GL_INT_VEC2;
using gl::GL_INT_VEC3;
using gl::GL_INT_VEC4;
using gl::GL_BOOL;
using gl::GL_BOOL_VEC2;
using gl::GL_BOOL_VEC3;
using gl::GL_BOOL_VEC4;
using gl::GL_FLOAT_MAT2;
using gl::GL_FLOAT_MAT3;
using gl::GL_FLOAT_MAT4;
using gl::GL_FLOAT_MAT2x3;
using gl::GL_FLOAT_MAT2x4;
using gl::GL_FLOAT_MAT3x2;
using gl::GL_FLOAT_MAT3x4;
using gl::GL_FLOAT_MAT4x2;
using gl::GL_FLOAT_MAT4x3;

// BindTransformFeedbackTarget

using gl::GL_TRANSFORM_FEEDBACK;

// BlendEquationModeEXT

using gl::GL_FUNC_ADD;
using gl::GL_MIN;
using gl::GL_MAX;
using gl::GL_FUNC_SUBTRACT;
using gl::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

using gl::GL_ZERO;
using gl::GL_SRC_COLOR;
using gl::GL_ONE_MINUS_SRC_COLOR;
using gl::GL_SRC_ALPHA;
using gl::GL_ONE_MINUS_SRC_ALPHA;
using gl::GL_DST_ALPHA;
using gl::GL_ONE_MINUS_DST_ALPHA;
using gl::GL_DST_COLOR;
using gl::GL_ONE_MINUS_DST_COLOR;
using gl::GL_SRC_ALPHA_SATURATE;
using gl::GL_CONSTANT_COLOR;
using gl::GL_ONE_MINUS_CONSTANT_COLOR;
using gl::GL_CONSTANT_ALPHA;
using gl::GL_ONE_MINUS_CONSTANT_ALPHA;
using gl::GL_SRC1_ALPHA;
using gl::GL_SRC1_COLOR;
using gl::GL_ONE_MINUS_SRC1_COLOR;
using gl::GL_ONE_MINUS_SRC1_ALPHA;
using gl::GL_ONE;

// BlitFramebufferFilter

using gl::GL_NEAREST;
using gl::GL_LINEAR;

// Buffer

using gl::GL_COLOR;
using gl::GL_DEPTH;
using gl::GL_STENCIL;

// BufferAccessARB

using gl::GL_READ_ONLY;
using gl::GL_WRITE_ONLY;
using gl::GL_READ_WRITE;

// BufferPNameARB

using gl::GL_BUFFER_SIZE;
using gl::GL_BUFFER_USAGE;
using gl::GL_BUFFER_ACCESS;
using gl::GL_BUFFER_MAPPED;
using gl::GL_BUFFER_ACCESS_FLAGS;
using gl::GL_BUFFER_MAP_LENGTH;
using gl::GL_BUFFER_MAP_OFFSET;

// BufferPointerNameARB

using gl::GL_BUFFER_MAP_POINTER;

// BufferStorageTarget

using gl::GL_ARRAY_BUFFER;
using gl::GL_ELEMENT_ARRAY_BUFFER;
using gl::GL_PIXEL_PACK_BUFFER;
using gl::GL_PIXEL_UNPACK_BUFFER;
using gl::GL_UNIFORM_BUFFER;
using gl::GL_TEXTURE_BUFFER;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER;
using gl::GL_COPY_READ_BUFFER;
using gl::GL_COPY_WRITE_BUFFER;
using gl::GL_DRAW_INDIRECT_BUFFER;
using gl::GL_ATOMIC_COUNTER_BUFFER;

// BufferTargetARB

// using gl::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gl::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gl::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gl::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gl::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gl::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gl::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gl::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

using gl::GL_STREAM_DRAW;
using gl::GL_STREAM_READ;
using gl::GL_STREAM_COPY;
using gl::GL_STATIC_DRAW;
using gl::GL_STATIC_READ;
using gl::GL_STATIC_COPY;
using gl::GL_DYNAMIC_DRAW;
using gl::GL_DYNAMIC_READ;
using gl::GL_DYNAMIC_COPY;

// CheckFramebufferStatusTarget

using gl::GL_READ_FRAMEBUFFER;
using gl::GL_DRAW_FRAMEBUFFER;
using gl::GL_FRAMEBUFFER;

// ClampColorModeARB

using gl::GL_FIXED_ONLY;

// ClampColorTargetARB

using gl::GL_CLAMP_READ_COLOR;

// ClipControlOrigin

using gl::GL_LOWER_LEFT;
using gl::GL_UPPER_LEFT;

// ClipPlaneName

using gl::GL_CLIP_DISTANCE0;
using gl::GL_CLIP_DISTANCE1;
using gl::GL_CLIP_DISTANCE2;
using gl::GL_CLIP_DISTANCE3;
using gl::GL_CLIP_DISTANCE4;
using gl::GL_CLIP_DISTANCE5;
using gl::GL_CLIP_DISTANCE6;
using gl::GL_CLIP_DISTANCE7;

// ColorBuffer

using gl::GL_NONE;
using gl::GL_FRONT_LEFT;
using gl::GL_FRONT_RIGHT;
using gl::GL_BACK_LEFT;
using gl::GL_BACK_RIGHT;
using gl::GL_FRONT;
using gl::GL_BACK;
using gl::GL_LEFT;
using gl::GL_RIGHT;
using gl::GL_FRONT_AND_BACK;
using gl::GL_COLOR_ATTACHMENT0;
using gl::GL_COLOR_ATTACHMENT1;
using gl::GL_COLOR_ATTACHMENT2;
using gl::GL_COLOR_ATTACHMENT3;
using gl::GL_COLOR_ATTACHMENT4;
using gl::GL_COLOR_ATTACHMENT5;
using gl::GL_COLOR_ATTACHMENT6;
using gl::GL_COLOR_ATTACHMENT7;
using gl::GL_COLOR_ATTACHMENT8;
using gl::GL_COLOR_ATTACHMENT9;
using gl::GL_COLOR_ATTACHMENT10;
using gl::GL_COLOR_ATTACHMENT11;
using gl::GL_COLOR_ATTACHMENT12;
using gl::GL_COLOR_ATTACHMENT13;
using gl::GL_COLOR_ATTACHMENT14;
using gl::GL_COLOR_ATTACHMENT15;
using gl::GL_COLOR_ATTACHMENT16;
using gl::GL_COLOR_ATTACHMENT17;
using gl::GL_COLOR_ATTACHMENT18;
using gl::GL_COLOR_ATTACHMENT19;
using gl::GL_COLOR_ATTACHMENT20;
using gl::GL_COLOR_ATTACHMENT21;
using gl::GL_COLOR_ATTACHMENT22;
using gl::GL_COLOR_ATTACHMENT23;
using gl::GL_COLOR_ATTACHMENT24;
using gl::GL_COLOR_ATTACHMENT25;
using gl::GL_COLOR_ATTACHMENT26;
using gl::GL_COLOR_ATTACHMENT27;
using gl::GL_COLOR_ATTACHMENT28;
using gl::GL_COLOR_ATTACHMENT29;
using gl::GL_COLOR_ATTACHMENT30;
using gl::GL_COLOR_ATTACHMENT31;

// ColorMaterialFace

// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_FRONT_AND_BACK; // reuse ColorBuffer

// ColorPointerType

using gl::GL_BYTE;
using gl::GL_UNSIGNED_BYTE;
using gl::GL_SHORT;
using gl::GL_UNSIGNED_SHORT;
using gl::GL_INT;
using gl::GL_UNSIGNED_INT;
using gl::GL_FLOAT;
using gl::GL_DOUBLE;

// CombinerBiasNV

// using gl::GL_NONE; // reuse ColorBuffer

// CombinerScaleNV

// using gl::GL_NONE; // reuse ColorBuffer

// ConditionalRenderMode

using gl::GL_QUERY_WAIT;
using gl::GL_QUERY_NO_WAIT;
using gl::GL_QUERY_BY_REGION_WAIT;
using gl::GL_QUERY_BY_REGION_NO_WAIT;

// CopyBufferSubDataTarget

// using gl::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gl::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// using gl::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gl::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gl::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gl::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gl::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gl::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gl::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// CullFaceMode

// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_FRONT_AND_BACK; // reuse ColorBuffer

// DebugSeverity

using gl::GL_DONT_CARE;

// DebugSource

// using gl::GL_DONT_CARE; // reuse DebugSeverity

// DebugType

// using gl::GL_DONT_CARE; // reuse DebugSeverity

// DepthFunction

// using gl::GL_NEVER; // reuse AlphaFunction
// using gl::GL_LESS; // reuse AlphaFunction
// using gl::GL_EQUAL; // reuse AlphaFunction
// using gl::GL_LEQUAL; // reuse AlphaFunction
// using gl::GL_GREATER; // reuse AlphaFunction
// using gl::GL_NOTEQUAL; // reuse AlphaFunction
// using gl::GL_GEQUAL; // reuse AlphaFunction
// using gl::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// using gl::GL_NONE; // reuse ColorBuffer
// using gl::GL_FRONT_LEFT; // reuse ColorBuffer
// using gl::GL_FRONT_RIGHT; // reuse ColorBuffer
// using gl::GL_BACK_LEFT; // reuse ColorBuffer
// using gl::GL_BACK_RIGHT; // reuse ColorBuffer
// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_LEFT; // reuse ColorBuffer
// using gl::GL_RIGHT; // reuse ColorBuffer
// using gl::GL_FRONT_AND_BACK; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer

// DrawElementsType

// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

using gl::GL_LINE_SMOOTH;
using gl::GL_POLYGON_SMOOTH;
using gl::GL_CULL_FACE;
using gl::GL_DEPTH_TEST;
using gl::GL_STENCIL_TEST;
using gl::GL_DITHER;
using gl::GL_BLEND;
using gl::GL_COLOR_LOGIC_OP;
using gl::GL_SCISSOR_TEST;
using gl::GL_TEXTURE_1D;
using gl::GL_TEXTURE_2D;
using gl::GL_POLYGON_OFFSET_POINT;
using gl::GL_POLYGON_OFFSET_LINE;
// using gl::GL_CLIP_DISTANCE0; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE1; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE2; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE3; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE4; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE5; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE6; // reuse ClipPlaneName
// using gl::GL_CLIP_DISTANCE7; // reuse ClipPlaneName
using gl::GL_POLYGON_OFFSET_FILL;
using gl::GL_MULTISAMPLE;
using gl::GL_SAMPLE_ALPHA_TO_COVERAGE;
using gl::GL_SAMPLE_ALPHA_TO_ONE;
using gl::GL_SAMPLE_COVERAGE;
using gl::GL_PROGRAM_POINT_SIZE;
using gl::GL_DEPTH_CLAMP;
using gl::GL_TEXTURE_CUBE_MAP_SEAMLESS;
using gl::GL_SAMPLE_SHADING;
using gl::GL_RASTERIZER_DISCARD;
using gl::GL_FRAMEBUFFER_SRGB;
using gl::GL_SAMPLE_MASK;
using gl::GL_PRIMITIVE_RESTART;

// ErrorCode

using gl::GL_NO_ERROR;
using gl::GL_INVALID_ENUM;
using gl::GL_INVALID_VALUE;
using gl::GL_INVALID_OPERATION;
using gl::GL_OUT_OF_MEMORY;
using gl::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// FogMode

// using gl::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// FogPointerTypeIBM

// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// FramebufferAttachment

using gl::GL_DEPTH_STENCIL_ATTACHMENT;
using gl::GL_MAX_COLOR_ATTACHMENTS;
// using gl::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer
using gl::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

using gl::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
using gl::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using gl::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using gl::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
using gl::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
using gl::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;

// FramebufferStatus

using gl::GL_FRAMEBUFFER_UNDEFINED;
using gl::GL_FRAMEBUFFER_COMPLETE;
using gl::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using gl::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using gl::GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER;
using gl::GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER;
using gl::GL_FRAMEBUFFER_UNSUPPORTED;
using gl::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
using gl::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;

// FramebufferTarget

// using gl::GL_READ_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// using gl::GL_DRAW_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// using gl::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// FrontFaceDirection

using gl::GL_CW;
using gl::GL_CCW;

// GetFramebufferParameter

using gl::GL_DOUBLEBUFFER;
using gl::GL_STEREO;
using gl::GL_SAMPLE_BUFFERS;
using gl::GL_SAMPLES;
using gl::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using gl::GL_IMPLEMENTATION_COLOR_READ_FORMAT;

// GetMultisamplePNameNV

using gl::GL_SAMPLE_LOCATION_ARB;
using gl::GL_SAMPLE_POSITION;

// GetPName

using gl::GL_POINT_SIZE;
using gl::GL_POINT_SIZE_RANGE;
using gl::GL_SMOOTH_POINT_SIZE_RANGE;
using gl::GL_POINT_SIZE_GRANULARITY;
using gl::GL_SMOOTH_POINT_SIZE_GRANULARITY;
// using gl::GL_LINE_SMOOTH; // reuse EnableCap
using gl::GL_LINE_WIDTH;
using gl::GL_LINE_WIDTH_RANGE;
using gl::GL_SMOOTH_LINE_WIDTH_RANGE;
using gl::GL_LINE_WIDTH_GRANULARITY;
using gl::GL_SMOOTH_LINE_WIDTH_GRANULARITY;
using gl::GL_POLYGON_MODE;
// using gl::GL_POLYGON_SMOOTH; // reuse EnableCap
// using gl::GL_CULL_FACE; // reuse EnableCap
using gl::GL_CULL_FACE_MODE;
using gl::GL_FRONT_FACE;
using gl::GL_DEPTH_RANGE;
// using gl::GL_DEPTH_TEST; // reuse EnableCap
using gl::GL_DEPTH_WRITEMASK;
using gl::GL_DEPTH_CLEAR_VALUE;
using gl::GL_DEPTH_FUNC;
// using gl::GL_STENCIL_TEST; // reuse EnableCap
using gl::GL_STENCIL_CLEAR_VALUE;
using gl::GL_STENCIL_FUNC;
using gl::GL_STENCIL_VALUE_MASK;
using gl::GL_STENCIL_FAIL;
using gl::GL_STENCIL_PASS_DEPTH_FAIL;
using gl::GL_STENCIL_PASS_DEPTH_PASS;
using gl::GL_STENCIL_REF;
using gl::GL_STENCIL_WRITEMASK;
using gl::GL_VIEWPORT;
// using gl::GL_DITHER; // reuse EnableCap
using gl::GL_BLEND_DST;
using gl::GL_BLEND_SRC;
// using gl::GL_BLEND; // reuse EnableCap
using gl::GL_LOGIC_OP_MODE;
// using gl::GL_COLOR_LOGIC_OP; // reuse EnableCap
using gl::GL_DRAW_BUFFER;
using gl::GL_READ_BUFFER;
using gl::GL_SCISSOR_BOX;
// using gl::GL_SCISSOR_TEST; // reuse EnableCap
using gl::GL_COLOR_CLEAR_VALUE;
using gl::GL_COLOR_WRITEMASK;
// using gl::GL_DOUBLEBUFFER; // reuse GetFramebufferParameter
// using gl::GL_STEREO; // reuse GetFramebufferParameter
using gl::GL_LINE_SMOOTH_HINT;
using gl::GL_POLYGON_SMOOTH_HINT;
using gl::GL_UNPACK_SWAP_BYTES;
using gl::GL_UNPACK_LSB_FIRST;
using gl::GL_UNPACK_ROW_LENGTH;
using gl::GL_UNPACK_SKIP_ROWS;
using gl::GL_UNPACK_SKIP_PIXELS;
using gl::GL_UNPACK_ALIGNMENT;
using gl::GL_PACK_SWAP_BYTES;
using gl::GL_PACK_LSB_FIRST;
using gl::GL_PACK_ROW_LENGTH;
using gl::GL_PACK_SKIP_ROWS;
using gl::GL_PACK_SKIP_PIXELS;
using gl::GL_PACK_ALIGNMENT;
using gl::GL_MAX_CLIP_DISTANCES;
using gl::GL_MAX_TEXTURE_SIZE;
using gl::GL_MAX_VIEWPORT_DIMS;
using gl::GL_SUBPIXEL_BITS;
// using gl::GL_TEXTURE_1D; // reuse EnableCap
// using gl::GL_TEXTURE_2D; // reuse EnableCap
using gl::GL_POLYGON_OFFSET_UNITS;
// using gl::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// using gl::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
using gl::GL_BLEND_COLOR;
using gl::GL_BLEND_EQUATION_RGB;
// using gl::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
using gl::GL_POLYGON_OFFSET_FACTOR;
using gl::GL_TEXTURE_BINDING_1D;
using gl::GL_TEXTURE_BINDING_2D;
using gl::GL_TEXTURE_BINDING_3D;
using gl::GL_PACK_SKIP_IMAGES;
using gl::GL_PACK_IMAGE_HEIGHT;
using gl::GL_UNPACK_SKIP_IMAGES;
using gl::GL_UNPACK_IMAGE_HEIGHT;
using gl::GL_MAX_3D_TEXTURE_SIZE;
// using gl::GL_SAMPLE_BUFFERS; // reuse GetFramebufferParameter
// using gl::GL_SAMPLES; // reuse GetFramebufferParameter
using gl::GL_SAMPLE_COVERAGE_VALUE;
using gl::GL_SAMPLE_COVERAGE_INVERT;
using gl::GL_BLEND_DST_RGB;
using gl::GL_BLEND_SRC_RGB;
using gl::GL_BLEND_DST_ALPHA;
using gl::GL_BLEND_SRC_ALPHA;
using gl::GL_MAX_ELEMENTS_VERTICES;
using gl::GL_MAX_ELEMENTS_INDICES;
using gl::GL_POINT_FADE_THRESHOLD_SIZE;
using gl::GL_MAJOR_VERSION;
using gl::GL_MINOR_VERSION;
using gl::GL_NUM_EXTENSIONS;
using gl::GL_CONTEXT_FLAGS;
using gl::GL_PROGRAM_PIPELINE_BINDING;
using gl::GL_MAX_VIEWPORTS;
using gl::GL_VIEWPORT_SUBPIXEL_BITS;
using gl::GL_VIEWPORT_BOUNDS_RANGE;
using gl::GL_LAYER_PROVOKING_VERTEX;
using gl::GL_VIEWPORT_INDEX_PROVOKING_VERTEX;
using gl::GL_ALIASED_LINE_WIDTH_RANGE;
using gl::GL_ACTIVE_TEXTURE;
using gl::GL_MAX_RENDERBUFFER_SIZE;
using gl::GL_TEXTURE_COMPRESSION_HINT;
using gl::GL_TEXTURE_BINDING_RECTANGLE;
using gl::GL_MAX_RECTANGLE_TEXTURE_SIZE;
using gl::GL_MAX_TEXTURE_LOD_BIAS;
using gl::GL_TEXTURE_BINDING_CUBE_MAP;
using gl::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
using gl::GL_VERTEX_ARRAY_BINDING;
// using gl::GL_PROGRAM_POINT_SIZE; // reuse EnableCap
using gl::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using gl::GL_COMPRESSED_TEXTURE_FORMATS;
using gl::GL_NUM_PROGRAM_BINARY_FORMATS;
using gl::GL_PROGRAM_BINARY_FORMATS;
using gl::GL_STENCIL_BACK_FUNC;
using gl::GL_STENCIL_BACK_FAIL;
using gl::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using gl::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using gl::GL_MAX_DRAW_BUFFERS;
using gl::GL_BLEND_EQUATION_ALPHA;
using gl::GL_MAX_VERTEX_ATTRIBS;
using gl::GL_MAX_TEXTURE_IMAGE_UNITS;
using gl::GL_ARRAY_BUFFER_BINDING;
using gl::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using gl::GL_PIXEL_PACK_BUFFER_BINDING;
using gl::GL_PIXEL_UNPACK_BUFFER_BINDING;
using gl::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS;
using gl::GL_MAX_ARRAY_TEXTURE_LAYERS;
using gl::GL_MIN_PROGRAM_TEXEL_OFFSET;
using gl::GL_MAX_PROGRAM_TEXEL_OFFSET;
using gl::GL_SAMPLER_BINDING;
using gl::GL_UNIFORM_BUFFER_BINDING;
using gl::GL_UNIFORM_BUFFER_START;
using gl::GL_UNIFORM_BUFFER_SIZE;
using gl::GL_MAX_VERTEX_UNIFORM_BLOCKS;
using gl::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
using gl::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
using gl::GL_MAX_COMBINED_UNIFORM_BLOCKS;
using gl::GL_MAX_UNIFORM_BUFFER_BINDINGS;
using gl::GL_MAX_UNIFORM_BLOCK_SIZE;
using gl::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
using gl::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
using gl::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
using gl::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
using gl::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
using gl::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
using gl::GL_MAX_VARYING_COMPONENTS;
using gl::GL_MAX_VARYING_FLOATS;
using gl::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using gl::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using gl::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
using gl::GL_CURRENT_PROGRAM;
// using gl::GL_IMPLEMENTATION_COLOR_READ_TYPE; // reuse GetFramebufferParameter
// using gl::GL_IMPLEMENTATION_COLOR_READ_FORMAT; // reuse GetFramebufferParameter
using gl::GL_TEXTURE_BINDING_1D_ARRAY;
using gl::GL_TEXTURE_BINDING_2D_ARRAY;
using gl::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
using gl::GL_MAX_TEXTURE_BUFFER_SIZE;
using gl::GL_TEXTURE_BINDING_BUFFER;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_START;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
using gl::GL_STENCIL_BACK_REF;
using gl::GL_STENCIL_BACK_VALUE_MASK;
using gl::GL_STENCIL_BACK_WRITEMASK;
using gl::GL_DRAW_FRAMEBUFFER_BINDING;
using gl::GL_RENDERBUFFER_BINDING;
using gl::GL_READ_FRAMEBUFFER_BINDING;
using gl::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
using gl::GL_NUM_SHADER_BINARY_FORMATS;
using gl::GL_SHADER_COMPILER;
using gl::GL_MAX_VERTEX_UNIFORM_VECTORS;
using gl::GL_MAX_VARYING_VECTORS;
using gl::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
using gl::GL_TIMESTAMP;
using gl::GL_PROVOKING_VERTEX;
using gl::GL_MAX_SAMPLE_MASK_WORDS;
using gl::GL_PRIMITIVE_RESTART_INDEX;
using gl::GL_MIN_MAP_BUFFER_ALIGNMENT;
using gl::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
using gl::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
using gl::GL_MAX_COLOR_TEXTURE_SAMPLES;
using gl::GL_MAX_DEPTH_TEXTURE_SAMPLES;
using gl::GL_MAX_INTEGER_SAMPLES;
using gl::GL_MAX_SERVER_WAIT_TIMEOUT;
using gl::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
using gl::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
using gl::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
using gl::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
using gl::GL_MAX_VERTEX_ATOMIC_COUNTERS;
using gl::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
using gl::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
using gl::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
using gl::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
using gl::GL_MAX_COMBINED_ATOMIC_COUNTERS;

// GetTextureParameter

using gl::GL_TEXTURE_WIDTH;
using gl::GL_TEXTURE_HEIGHT;
using gl::GL_TEXTURE_INTERNAL_FORMAT;
using gl::GL_TEXTURE_BORDER_COLOR;
using gl::GL_TEXTURE_MAG_FILTER;
using gl::GL_TEXTURE_MIN_FILTER;
using gl::GL_TEXTURE_WRAP_S;
using gl::GL_TEXTURE_WRAP_T;
using gl::GL_TEXTURE_RED_SIZE;
using gl::GL_TEXTURE_GREEN_SIZE;
using gl::GL_TEXTURE_BLUE_SIZE;
using gl::GL_TEXTURE_ALPHA_SIZE;

// GlslTypeToken

// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType
// using gl::GL_FLOAT_VEC2; // reuse AttributeType
// using gl::GL_FLOAT_VEC3; // reuse AttributeType
// using gl::GL_FLOAT_VEC4; // reuse AttributeType
// using gl::GL_INT_VEC2; // reuse AttributeType
// using gl::GL_INT_VEC3; // reuse AttributeType
// using gl::GL_INT_VEC4; // reuse AttributeType
// using gl::GL_BOOL; // reuse AttributeType
// using gl::GL_BOOL_VEC2; // reuse AttributeType
// using gl::GL_BOOL_VEC3; // reuse AttributeType
// using gl::GL_BOOL_VEC4; // reuse AttributeType
// using gl::GL_FLOAT_MAT2; // reuse AttributeType
// using gl::GL_FLOAT_MAT3; // reuse AttributeType
// using gl::GL_FLOAT_MAT4; // reuse AttributeType
using gl::GL_SAMPLER_1D;
using gl::GL_SAMPLER_2D;
using gl::GL_SAMPLER_3D;
using gl::GL_SAMPLER_CUBE;
using gl::GL_SAMPLER_1D_SHADOW;
using gl::GL_SAMPLER_2D_SHADOW;
using gl::GL_SAMPLER_2D_RECT;
using gl::GL_SAMPLER_2D_RECT_SHADOW;
// using gl::GL_FLOAT_MAT2x3; // reuse AttributeType
// using gl::GL_FLOAT_MAT2x4; // reuse AttributeType
// using gl::GL_FLOAT_MAT3x2; // reuse AttributeType
// using gl::GL_FLOAT_MAT3x4; // reuse AttributeType
// using gl::GL_FLOAT_MAT4x2; // reuse AttributeType
// using gl::GL_FLOAT_MAT4x3; // reuse AttributeType
using gl::GL_SAMPLER_1D_ARRAY;
using gl::GL_SAMPLER_2D_ARRAY;
using gl::GL_SAMPLER_BUFFER;
using gl::GL_SAMPLER_1D_ARRAY_SHADOW;
using gl::GL_SAMPLER_2D_ARRAY_SHADOW;
using gl::GL_SAMPLER_CUBE_SHADOW;
using gl::GL_UNSIGNED_INT_VEC2;
using gl::GL_UNSIGNED_INT_VEC3;
using gl::GL_UNSIGNED_INT_VEC4;
using gl::GL_INT_SAMPLER_1D;
using gl::GL_INT_SAMPLER_2D;
using gl::GL_INT_SAMPLER_3D;
using gl::GL_INT_SAMPLER_CUBE;
using gl::GL_INT_SAMPLER_2D_RECT;
using gl::GL_INT_SAMPLER_1D_ARRAY;
using gl::GL_INT_SAMPLER_2D_ARRAY;
using gl::GL_INT_SAMPLER_BUFFER;
using gl::GL_UNSIGNED_INT_SAMPLER_1D;
using gl::GL_UNSIGNED_INT_SAMPLER_2D;
using gl::GL_UNSIGNED_INT_SAMPLER_3D;
using gl::GL_UNSIGNED_INT_SAMPLER_CUBE;
using gl::GL_UNSIGNED_INT_SAMPLER_2D_RECT;
using gl::GL_UNSIGNED_INT_SAMPLER_1D_ARRAY;
using gl::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
using gl::GL_UNSIGNED_INT_SAMPLER_BUFFER;
using gl::GL_DOUBLE_MAT2;
using gl::GL_DOUBLE_MAT3;
using gl::GL_DOUBLE_MAT4;
using gl::GL_DOUBLE_VEC2;
using gl::GL_DOUBLE_VEC3;
using gl::GL_DOUBLE_VEC4;
using gl::GL_SAMPLER_CUBE_MAP_ARRAY;
using gl::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
using gl::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
using gl::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
using gl::GL_IMAGE_1D;
using gl::GL_IMAGE_2D;
using gl::GL_IMAGE_3D;
using gl::GL_IMAGE_2D_RECT;
using gl::GL_IMAGE_CUBE;
using gl::GL_IMAGE_BUFFER;
using gl::GL_IMAGE_1D_ARRAY;
using gl::GL_IMAGE_2D_ARRAY;
using gl::GL_IMAGE_CUBE_MAP_ARRAY;
using gl::GL_IMAGE_2D_MULTISAMPLE;
using gl::GL_IMAGE_2D_MULTISAMPLE_ARRAY;
using gl::GL_INT_IMAGE_1D;
using gl::GL_INT_IMAGE_2D;
using gl::GL_INT_IMAGE_3D;
using gl::GL_INT_IMAGE_2D_RECT;
using gl::GL_INT_IMAGE_CUBE;
using gl::GL_INT_IMAGE_BUFFER;
using gl::GL_INT_IMAGE_1D_ARRAY;
using gl::GL_INT_IMAGE_2D_ARRAY;
using gl::GL_INT_IMAGE_CUBE_MAP_ARRAY;
using gl::GL_INT_IMAGE_2D_MULTISAMPLE;
using gl::GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
using gl::GL_UNSIGNED_INT_IMAGE_1D;
using gl::GL_UNSIGNED_INT_IMAGE_2D;
using gl::GL_UNSIGNED_INT_IMAGE_3D;
using gl::GL_UNSIGNED_INT_IMAGE_2D_RECT;
using gl::GL_UNSIGNED_INT_IMAGE_CUBE;
using gl::GL_UNSIGNED_INT_IMAGE_BUFFER;
using gl::GL_UNSIGNED_INT_IMAGE_1D_ARRAY;
using gl::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
using gl::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
using gl::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE;
using gl::GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
using gl::GL_SAMPLER_2D_MULTISAMPLE;
using gl::GL_INT_SAMPLER_2D_MULTISAMPLE;
using gl::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
using gl::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gl::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gl::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gl::GL_UNSIGNED_INT_ATOMIC_COUNTER;

// GraphicsResetStatus

// using gl::GL_NO_ERROR; // reuse ErrorCode

// HintMode

// using gl::GL_DONT_CARE; // reuse DebugSeverity
using gl::GL_FASTEST;
using gl::GL_NICEST;

// HintTarget

// using gl::GL_LINE_SMOOTH_HINT; // reuse GetPName
// using gl::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
using gl::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
// using gl::GL_TEXTURE_COMPRESSION_HINT; // reuse GetPName
// using gl::GL_FRAGMENT_SHADER_DERIVATIVE_HINT; // reuse GetPName

// IndexPointerType

// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// InternalFormat

using gl::GL_DEPTH_COMPONENT;
using gl::GL_RED;
using gl::GL_RGB;
using gl::GL_RGBA;
using gl::GL_R3_G3_B2;
using gl::GL_RGB4;
using gl::GL_RGB5;
using gl::GL_RGB8;
using gl::GL_RGB10;
using gl::GL_RGB12;
using gl::GL_RGB16;
using gl::GL_RGBA4;
using gl::GL_RGB5_A1;
using gl::GL_RGBA8;
using gl::GL_RGB10_A2;
using gl::GL_RGBA12;
using gl::GL_RGBA16;
using gl::GL_DEPTH_COMPONENT16;
using gl::GL_COMPRESSED_RED;
using gl::GL_COMPRESSED_RG;
using gl::GL_RG;
using gl::GL_R8;
using gl::GL_R16;
using gl::GL_RG8;
using gl::GL_RG16;
using gl::GL_R16F;
using gl::GL_R32F;
using gl::GL_RG16F;
using gl::GL_RG32F;
using gl::GL_R8I;
using gl::GL_R8UI;
using gl::GL_R16I;
using gl::GL_R16UI;
using gl::GL_R32I;
using gl::GL_R32UI;
using gl::GL_RG8I;
using gl::GL_RG8UI;
using gl::GL_RG16I;
using gl::GL_RG16UI;
using gl::GL_RG32I;
using gl::GL_RG32UI;
using gl::GL_COMPRESSED_RGB;
using gl::GL_COMPRESSED_RGBA;
using gl::GL_DEPTH_STENCIL;
using gl::GL_RGBA32F;
using gl::GL_RGBA16F;
using gl::GL_RGB16F;
using gl::GL_DEPTH24_STENCIL8;
using gl::GL_R11F_G11F_B10F;
using gl::GL_RGB9_E5;
using gl::GL_SRGB;
using gl::GL_SRGB8;
using gl::GL_SRGB_ALPHA;
using gl::GL_SRGB8_ALPHA8;
using gl::GL_COMPRESSED_SRGB;
using gl::GL_COMPRESSED_SRGB_ALPHA;
using gl::GL_DEPTH_COMPONENT32F;
using gl::GL_DEPTH32F_STENCIL8;
using gl::GL_RGBA32UI;
using gl::GL_RGB32UI;
using gl::GL_RGBA16UI;
using gl::GL_RGB16UI;
using gl::GL_RGBA8UI;
using gl::GL_RGB8UI;
using gl::GL_RGBA32I;
using gl::GL_RGB32I;
using gl::GL_RGBA16I;
using gl::GL_RGB16I;
using gl::GL_RGBA8I;
using gl::GL_RGB8I;
using gl::GL_COMPRESSED_RED_RGTC1;
using gl::GL_COMPRESSED_SIGNED_RED_RGTC1;
using gl::GL_COMPRESSED_RG_RGTC2;
using gl::GL_COMPRESSED_SIGNED_RG_RGTC2;
using gl::GL_COMPRESSED_RGBA_BPTC_UNORM;
using gl::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM;
using gl::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT;
using gl::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT;
using gl::GL_R8_SNORM;
using gl::GL_RG8_SNORM;
using gl::GL_RGB8_SNORM;
using gl::GL_RGBA8_SNORM;
using gl::GL_R16_SNORM;
using gl::GL_RG16_SNORM;
using gl::GL_RGB16_SNORM;
using gl::GL_RGB10_A2UI;

// InternalFormatPName

// using gl::GL_SAMPLES; // reuse GetFramebufferParameter
using gl::GL_TEXTURE_COMPRESSED;
using gl::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
using gl::GL_NUM_SAMPLE_COUNTS;

// LightEnvModeSGIX

using gl::GL_REPLACE;

// ListNameType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType

// LogicOp

using gl::GL_CLEAR;
using gl::GL_AND;
using gl::GL_AND_REVERSE;
using gl::GL_COPY;
using gl::GL_AND_INVERTED;
using gl::GL_NOOP;
using gl::GL_XOR;
using gl::GL_OR;
using gl::GL_NOR;
using gl::GL_EQUIV;
using gl::GL_INVERT;
using gl::GL_OR_REVERSE;
using gl::GL_COPY_INVERTED;
using gl::GL_OR_INVERTED;
using gl::GL_NAND;
using gl::GL_SET;

// MaterialFace

// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_FRONT_AND_BACK; // reuse ColorBuffer

// MatrixMode

using gl::GL_TEXTURE;

// MeshMode1

using gl::GL_POINT;
using gl::GL_LINE;

// MeshMode2

// using gl::GL_POINT; // reuse MeshMode1
// using gl::GL_LINE; // reuse MeshMode1
using gl::GL_FILL;

// NormalPointerType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// ObjectIdentifier

// using gl::GL_TEXTURE; // reuse MatrixMode
// using gl::GL_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
using gl::GL_RENDERBUFFER;
// using gl::GL_TRANSFORM_FEEDBACK; // reuse BindTransformFeedbackTarget

// PatchParameterName

using gl::GL_PATCH_VERTICES;
using gl::GL_PATCH_DEFAULT_INNER_LEVEL;
using gl::GL_PATCH_DEFAULT_OUTER_LEVEL;

// PathFillMode

// using gl::GL_INVERT; // reuse LogicOp

// PathFontStyle

// using gl::GL_NONE; // reuse ColorBuffer

// PathGenMode

// using gl::GL_NONE; // reuse ColorBuffer

// PathTransformType

// using gl::GL_NONE; // reuse ColorBuffer

// PipelineParameterName

using gl::GL_ACTIVE_PROGRAM;
using gl::GL_FRAGMENT_SHADER;
using gl::GL_VERTEX_SHADER;
using gl::GL_INFO_LOG_LENGTH;
using gl::GL_GEOMETRY_SHADER;
using gl::GL_TESS_EVALUATION_SHADER;
using gl::GL_TESS_CONTROL_SHADER;

// PixelCopyType

// using gl::GL_COLOR; // reuse Buffer
// using gl::GL_DEPTH; // reuse Buffer
// using gl::GL_STENCIL; // reuse Buffer

// PixelFormat

// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
using gl::GL_STENCIL_INDEX;
// using gl::GL_DEPTH_COMPONENT; // reuse InternalFormat
// using gl::GL_RED; // reuse InternalFormat
using gl::GL_GREEN;
using gl::GL_BLUE;
using gl::GL_ALPHA;
// using gl::GL_RGB; // reuse InternalFormat
// using gl::GL_RGBA; // reuse InternalFormat
using gl::GL_BGR;
using gl::GL_BGRA;
// using gl::GL_RG; // reuse InternalFormat
using gl::GL_RG_INTEGER;
// using gl::GL_DEPTH_STENCIL; // reuse InternalFormat
using gl::GL_RED_INTEGER;
using gl::GL_GREEN_INTEGER;
using gl::GL_BLUE_INTEGER;
using gl::GL_RGB_INTEGER;
using gl::GL_RGBA_INTEGER;
using gl::GL_BGR_INTEGER;
using gl::GL_BGRA_INTEGER;

// PixelStoreParameter

// using gl::GL_UNPACK_SWAP_BYTES; // reuse GetPName
// using gl::GL_UNPACK_LSB_FIRST; // reuse GetPName
// using gl::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// using gl::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// using gl::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// using gl::GL_UNPACK_ALIGNMENT; // reuse GetPName
// using gl::GL_PACK_SWAP_BYTES; // reuse GetPName
// using gl::GL_PACK_LSB_FIRST; // reuse GetPName
// using gl::GL_PACK_ROW_LENGTH; // reuse GetPName
// using gl::GL_PACK_SKIP_ROWS; // reuse GetPName
// using gl::GL_PACK_SKIP_PIXELS; // reuse GetPName
// using gl::GL_PACK_ALIGNMENT; // reuse GetPName
// using gl::GL_PACK_SKIP_IMAGES; // reuse GetPName
// using gl::GL_PACK_IMAGE_HEIGHT; // reuse GetPName
// using gl::GL_UNPACK_SKIP_IMAGES; // reuse GetPName
// using gl::GL_UNPACK_IMAGE_HEIGHT; // reuse GetPName

// PixelTexGenMode

// using gl::GL_NONE; // reuse ColorBuffer
// using gl::GL_RGB; // reuse InternalFormat
// using gl::GL_RGBA; // reuse InternalFormat

// PixelType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
using gl::GL_UNSIGNED_BYTE_3_3_2;
using gl::GL_UNSIGNED_SHORT_4_4_4_4;
using gl::GL_UNSIGNED_SHORT_5_5_5_1;
using gl::GL_UNSIGNED_INT_8_8_8_8;
using gl::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameARB

// using gl::GL_POINT_FADE_THRESHOLD_SIZE; // reuse GetPName

// PointParameterNameSGIS

// using gl::GL_POINT_FADE_THRESHOLD_SIZE; // reuse GetPName

// PolygonMode

// using gl::GL_POINT; // reuse MeshMode1
// using gl::GL_LINE; // reuse MeshMode1
// using gl::GL_FILL; // reuse MeshMode2

// PrecisionType

using gl::GL_LOW_FLOAT;
using gl::GL_MEDIUM_FLOAT;
using gl::GL_HIGH_FLOAT;
using gl::GL_LOW_INT;
using gl::GL_MEDIUM_INT;
using gl::GL_HIGH_INT;

// PrimitiveType

using gl::GL_POINTS;
using gl::GL_LINES;
using gl::GL_LINE_LOOP;
using gl::GL_LINE_STRIP;
using gl::GL_TRIANGLES;
using gl::GL_TRIANGLE_STRIP;
using gl::GL_TRIANGLE_FAN;
using gl::GL_QUADS;
using gl::GL_LINES_ADJACENCY;
using gl::GL_LINE_STRIP_ADJACENCY;
using gl::GL_TRIANGLES_ADJACENCY;
using gl::GL_TRIANGLE_STRIP_ADJACENCY;
using gl::GL_PATCHES;

// ProgramInterface

// using gl::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget

// ProgramParameterPName

// using gl::GL_PROGRAM_BINARY_RETRIEVABLE_HINT; // reuse HintTarget
using gl::GL_PROGRAM_SEPARABLE;

// ProgramPropertyARB

using gl::GL_PROGRAM_BINARY_LENGTH;
using gl::GL_GEOMETRY_VERTICES_OUT;
using gl::GL_GEOMETRY_INPUT_TYPE;
using gl::GL_GEOMETRY_OUTPUT_TYPE;
using gl::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
using gl::GL_ACTIVE_UNIFORM_BLOCKS;
using gl::GL_DELETE_STATUS;
using gl::GL_LINK_STATUS;
using gl::GL_VALIDATE_STATUS;
// using gl::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
using gl::GL_ATTACHED_SHADERS;
using gl::GL_ACTIVE_UNIFORMS;
using gl::GL_ACTIVE_UNIFORM_MAX_LENGTH;
using gl::GL_ACTIVE_ATTRIBUTES;
using gl::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
using gl::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
using gl::GL_TRANSFORM_FEEDBACK_VARYINGS;
using gl::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;

// ProgramResourceProperty

using gl::GL_NUM_COMPATIBLE_SUBROUTINES;
using gl::GL_COMPATIBLE_SUBROUTINES;

// ProgramStagePName

using gl::GL_ACTIVE_SUBROUTINES;
using gl::GL_ACTIVE_SUBROUTINE_UNIFORMS;
using gl::GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS;
using gl::GL_ACTIVE_SUBROUTINE_MAX_LENGTH;
using gl::GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH;

// QueryCounterTarget

// using gl::GL_TIMESTAMP; // reuse GetPName

// QueryObjectParameterName

using gl::GL_QUERY_RESULT;
using gl::GL_QUERY_RESULT_AVAILABLE;

// QueryParameterName

using gl::GL_QUERY_COUNTER_BITS;
using gl::GL_CURRENT_QUERY;

// QueryTarget

using gl::GL_TIME_ELAPSED;
using gl::GL_SAMPLES_PASSED;
using gl::GL_ANY_SAMPLES_PASSED;
using gl::GL_PRIMITIVES_GENERATED;
using gl::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;

// ReadBufferMode

// using gl::GL_FRONT_LEFT; // reuse ColorBuffer
// using gl::GL_FRONT_RIGHT; // reuse ColorBuffer
// using gl::GL_BACK_LEFT; // reuse ColorBuffer
// using gl::GL_BACK_RIGHT; // reuse ColorBuffer
// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_LEFT; // reuse ColorBuffer
// using gl::GL_RIGHT; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// using gl::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer

// RenderbufferParameterName

using gl::GL_RENDERBUFFER_SAMPLES;
using gl::GL_RENDERBUFFER_WIDTH;
using gl::GL_RENDERBUFFER_HEIGHT;
using gl::GL_RENDERBUFFER_INTERNAL_FORMAT;
using gl::GL_RENDERBUFFER_RED_SIZE;
using gl::GL_RENDERBUFFER_GREEN_SIZE;
using gl::GL_RENDERBUFFER_BLUE_SIZE;
using gl::GL_RENDERBUFFER_ALPHA_SIZE;
using gl::GL_RENDERBUFFER_DEPTH_SIZE;
using gl::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

// using gl::GL_RENDERBUFFER; // reuse ObjectIdentifier

// SamplerParameterF

// using gl::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
using gl::GL_TEXTURE_MIN_LOD;
using gl::GL_TEXTURE_MAX_LOD;

// SamplerParameterI

// using gl::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using gl::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using gl::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using gl::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
using gl::GL_TEXTURE_WRAP_R;
using gl::GL_TEXTURE_COMPARE_MODE;
using gl::GL_TEXTURE_COMPARE_FUNC;

// ShaderParameterName

using gl::GL_SHADER_TYPE;
// using gl::GL_DELETE_STATUS; // reuse ProgramPropertyARB
using gl::GL_COMPILE_STATUS;
// using gl::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
using gl::GL_SHADER_SOURCE_LENGTH;

// ShaderType

// using gl::GL_FRAGMENT_SHADER; // reuse PipelineParameterName
// using gl::GL_VERTEX_SHADER; // reuse PipelineParameterName
// using gl::GL_GEOMETRY_SHADER; // reuse PipelineParameterName
// using gl::GL_TESS_EVALUATION_SHADER; // reuse PipelineParameterName
// using gl::GL_TESS_CONTROL_SHADER; // reuse PipelineParameterName

// StencilFaceDirection

// using gl::GL_FRONT; // reuse ColorBuffer
// using gl::GL_BACK; // reuse ColorBuffer
// using gl::GL_FRONT_AND_BACK; // reuse ColorBuffer

// StencilFunction

// using gl::GL_NEVER; // reuse AlphaFunction
// using gl::GL_LESS; // reuse AlphaFunction
// using gl::GL_EQUAL; // reuse AlphaFunction
// using gl::GL_LEQUAL; // reuse AlphaFunction
// using gl::GL_GREATER; // reuse AlphaFunction
// using gl::GL_NOTEQUAL; // reuse AlphaFunction
// using gl::GL_GEQUAL; // reuse AlphaFunction
// using gl::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// using gl::GL_ZERO; // reuse BlendingFactor
// using gl::GL_INVERT; // reuse LogicOp
using gl::GL_KEEP;
// using gl::GL_REPLACE; // reuse LightEnvModeSGIX
using gl::GL_INCR;
using gl::GL_DECR;
using gl::GL_INCR_WRAP;
using gl::GL_DECR_WRAP;

// StringName

using gl::GL_VENDOR;
using gl::GL_RENDERER;
using gl::GL_VERSION;
using gl::GL_EXTENSIONS;
using gl::GL_SHADING_LANGUAGE_VERSION;

// SubroutineParameterName

using gl::GL_UNIFORM_SIZE;
using gl::GL_UNIFORM_NAME_LENGTH;
// using gl::GL_NUM_COMPATIBLE_SUBROUTINES; // reuse ProgramResourceProperty
// using gl::GL_COMPATIBLE_SUBROUTINES; // reuse ProgramResourceProperty

// SyncCondition

using gl::GL_SYNC_GPU_COMMANDS_COMPLETE;

// SyncParameterName

using gl::GL_OBJECT_TYPE;
using gl::GL_SYNC_CONDITION;
using gl::GL_SYNC_STATUS;
using gl::GL_SYNC_FLAGS;

// SyncStatus

using gl::GL_ALREADY_SIGNALED;
using gl::GL_TIMEOUT_EXPIRED;
using gl::GL_CONDITION_SATISFIED;
using gl::GL_WAIT_FAILED;

// TexCoordPointerType

// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// TextureCompareMode

// using gl::GL_NONE; // reuse ColorBuffer
using gl::GL_COMPARE_REF_TO_TEXTURE;

// TextureEnvMode

// using gl::GL_BLEND; // reuse EnableCap

// TextureMagFilter

// using gl::GL_NEAREST; // reuse BlitFramebufferFilter
// using gl::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// using gl::GL_NEAREST; // reuse BlitFramebufferFilter
// using gl::GL_LINEAR; // reuse BlitFramebufferFilter
using gl::GL_NEAREST_MIPMAP_NEAREST;
using gl::GL_LINEAR_MIPMAP_NEAREST;
using gl::GL_NEAREST_MIPMAP_LINEAR;
using gl::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// using gl::GL_TEXTURE_WIDTH; // reuse GetTextureParameter
// using gl::GL_TEXTURE_HEIGHT; // reuse GetTextureParameter
// using gl::GL_TEXTURE_INTERNAL_FORMAT; // reuse GetTextureParameter
// using gl::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// using gl::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// using gl::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// using gl::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// using gl::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
// using gl::GL_TEXTURE_RED_SIZE; // reuse GetTextureParameter
// using gl::GL_TEXTURE_GREEN_SIZE; // reuse GetTextureParameter
// using gl::GL_TEXTURE_BLUE_SIZE; // reuse GetTextureParameter
// using gl::GL_TEXTURE_ALPHA_SIZE; // reuse GetTextureParameter
// using gl::GL_TEXTURE_WRAP_R; // reuse SamplerParameterI
// using gl::GL_TEXTURE_MIN_LOD; // reuse SamplerParameterF
// using gl::GL_TEXTURE_MAX_LOD; // reuse SamplerParameterF
using gl::GL_TEXTURE_BASE_LEVEL;
using gl::GL_TEXTURE_MAX_LEVEL;
using gl::GL_TEXTURE_LOD_BIAS;
// using gl::GL_TEXTURE_COMPARE_MODE; // reuse SamplerParameterI
// using gl::GL_TEXTURE_COMPARE_FUNC; // reuse SamplerParameterI
using gl::GL_TEXTURE_SWIZZLE_R;
using gl::GL_TEXTURE_SWIZZLE_G;
using gl::GL_TEXTURE_SWIZZLE_B;
using gl::GL_TEXTURE_SWIZZLE_A;
using gl::GL_TEXTURE_SWIZZLE_RGBA;

// TextureSwizzle

// using gl::GL_ZERO; // reuse BlendingFactor
// using gl::GL_RED; // reuse InternalFormat
// using gl::GL_GREEN; // reuse PixelFormat
// using gl::GL_BLUE; // reuse PixelFormat
// using gl::GL_ALPHA; // reuse PixelFormat
// using gl::GL_ONE; // reuse BlendingFactor

// TextureTarget

// using gl::GL_TEXTURE_1D; // reuse EnableCap
// using gl::GL_TEXTURE_2D; // reuse EnableCap
using gl::GL_PROXY_TEXTURE_1D;
using gl::GL_PROXY_TEXTURE_2D;
using gl::GL_TEXTURE_3D;
using gl::GL_PROXY_TEXTURE_3D;
using gl::GL_TEXTURE_RECTANGLE;
using gl::GL_PROXY_TEXTURE_RECTANGLE;
using gl::GL_TEXTURE_CUBE_MAP;
using gl::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
using gl::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
using gl::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
using gl::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
using gl::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
using gl::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
using gl::GL_PROXY_TEXTURE_CUBE_MAP;
using gl::GL_TEXTURE_1D_ARRAY;
using gl::GL_PROXY_TEXTURE_1D_ARRAY;
using gl::GL_TEXTURE_2D_ARRAY;
using gl::GL_PROXY_TEXTURE_2D_ARRAY;
using gl::GL_TEXTURE_CUBE_MAP_ARRAY;
using gl::GL_PROXY_TEXTURE_CUBE_MAP_ARRAY;
using gl::GL_TEXTURE_2D_MULTISAMPLE;
using gl::GL_PROXY_TEXTURE_2D_MULTISAMPLE;
using gl::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
using gl::GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY;

// TextureUnit

using gl::GL_TEXTURE0;
using gl::GL_TEXTURE1;
using gl::GL_TEXTURE2;
using gl::GL_TEXTURE3;
using gl::GL_TEXTURE4;
using gl::GL_TEXTURE5;
using gl::GL_TEXTURE6;
using gl::GL_TEXTURE7;
using gl::GL_TEXTURE8;
using gl::GL_TEXTURE9;
using gl::GL_TEXTURE10;
using gl::GL_TEXTURE11;
using gl::GL_TEXTURE12;
using gl::GL_TEXTURE13;
using gl::GL_TEXTURE14;
using gl::GL_TEXTURE15;
using gl::GL_TEXTURE16;
using gl::GL_TEXTURE17;
using gl::GL_TEXTURE18;
using gl::GL_TEXTURE19;
using gl::GL_TEXTURE20;
using gl::GL_TEXTURE21;
using gl::GL_TEXTURE22;
using gl::GL_TEXTURE23;
using gl::GL_TEXTURE24;
using gl::GL_TEXTURE25;
using gl::GL_TEXTURE26;
using gl::GL_TEXTURE27;
using gl::GL_TEXTURE28;
using gl::GL_TEXTURE29;
using gl::GL_TEXTURE30;
using gl::GL_TEXTURE31;

// TextureWrapMode

// using gl::GL_LINEAR_MIPMAP_LINEAR; // reuse TextureMinFilter
using gl::GL_REPEAT;
using gl::GL_CLAMP_TO_BORDER;
using gl::GL_CLAMP_TO_EDGE;
using gl::GL_MIRRORED_REPEAT;

// TransformFeedbackBufferMode

using gl::GL_INTERLEAVED_ATTRIBS;
using gl::GL_SEPARATE_ATTRIBS;

// TransformFeedbackPName

// using gl::GL_TRANSFORM_FEEDBACK_BUFFER_START; // reuse GetPName
// using gl::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE; // reuse GetPName
// using gl::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING; // reuse GetPName
using gl::GL_TRANSFORM_FEEDBACK_PAUSED;
using gl::GL_TRANSFORM_FEEDBACK_ACTIVE;

// UniformBlockPName

using gl::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER;
using gl::GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER;
using gl::GL_UNIFORM_BLOCK_BINDING;
using gl::GL_UNIFORM_BLOCK_DATA_SIZE;
using gl::GL_UNIFORM_BLOCK_NAME_LENGTH;
using gl::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
using gl::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
using gl::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
using gl::GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER;
using gl::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

// UniformPName

using gl::GL_UNIFORM_TYPE;
// using gl::GL_UNIFORM_SIZE; // reuse SubroutineParameterName
// using gl::GL_UNIFORM_NAME_LENGTH; // reuse SubroutineParameterName
using gl::GL_UNIFORM_BLOCK_INDEX;
using gl::GL_UNIFORM_OFFSET;
using gl::GL_UNIFORM_ARRAY_STRIDE;
using gl::GL_UNIFORM_MATRIX_STRIDE;
using gl::GL_UNIFORM_IS_ROW_MAJOR;
using gl::GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX;

// UniformType

// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType
// using gl::GL_FLOAT_VEC2; // reuse AttributeType
// using gl::GL_FLOAT_VEC3; // reuse AttributeType
// using gl::GL_FLOAT_VEC4; // reuse AttributeType
// using gl::GL_INT_VEC2; // reuse AttributeType
// using gl::GL_INT_VEC3; // reuse AttributeType
// using gl::GL_INT_VEC4; // reuse AttributeType
// using gl::GL_BOOL; // reuse AttributeType
// using gl::GL_BOOL_VEC2; // reuse AttributeType
// using gl::GL_BOOL_VEC3; // reuse AttributeType
// using gl::GL_BOOL_VEC4; // reuse AttributeType
// using gl::GL_FLOAT_MAT2; // reuse AttributeType
// using gl::GL_FLOAT_MAT3; // reuse AttributeType
// using gl::GL_FLOAT_MAT4; // reuse AttributeType
// using gl::GL_SAMPLER_1D; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D; // reuse GlslTypeToken
// using gl::GL_SAMPLER_3D; // reuse GlslTypeToken
// using gl::GL_SAMPLER_CUBE; // reuse GlslTypeToken
// using gl::GL_SAMPLER_1D_SHADOW; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_SHADOW; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_RECT; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_RECT_SHADOW; // reuse GlslTypeToken
// using gl::GL_SAMPLER_1D_ARRAY; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_ARRAY; // reuse GlslTypeToken
// using gl::GL_SAMPLER_BUFFER; // reuse GlslTypeToken
// using gl::GL_SAMPLER_1D_ARRAY_SHADOW; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_ARRAY_SHADOW; // reuse GlslTypeToken
// using gl::GL_SAMPLER_CUBE_SHADOW; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_VEC2; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_VEC3; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_VEC4; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_1D; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_2D; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_3D; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_CUBE; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_2D_RECT; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_1D_ARRAY; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_2D_ARRAY; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_BUFFER; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_1D; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_2D; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_3D; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_CUBE; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_2D_RECT; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_1D_ARRAY; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_BUFFER; // reuse GlslTypeToken
// using gl::GL_DOUBLE_VEC2; // reuse GlslTypeToken
// using gl::GL_DOUBLE_VEC3; // reuse GlslTypeToken
// using gl::GL_DOUBLE_VEC4; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_MULTISAMPLE; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_2D_MULTISAMPLE; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE; // reuse GlslTypeToken
// using gl::GL_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse GlslTypeToken
// using gl::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse GlslTypeToken
// using gl::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse GlslTypeToken

// VertexArrayPName

using gl::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using gl::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using gl::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using gl::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using gl::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using gl::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
using gl::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;

// VertexAttribEnum

// using gl::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
using gl::GL_CURRENT_VERTEX_ATTRIB;
// using gl::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
using gl::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
// using gl::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribIType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType

// VertexAttribLType

// using gl::GL_DOUBLE; // reuse ColorPointerType

// VertexAttribPointerPropertyARB

using gl::GL_VERTEX_ATTRIB_ARRAY_POINTER;

// VertexAttribPointerType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType
using gl::GL_HALF_FLOAT;
using gl::GL_FIXED;
using gl::GL_UNSIGNED_INT_2_10_10_10_REV;
using gl::GL_UNSIGNED_INT_10F_11F_11F_REV;
using gl::GL_INT_2_10_10_10_REV;

// VertexAttribPropertyARB

// using gl::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
// using gl::GL_CURRENT_VERTEX_ATTRIB; // reuse VertexAttribEnum
// using gl::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; // reuse VertexAttribEnum
// using gl::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// using gl::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribType

// using gl::GL_BYTE; // reuse ColorPointerType
// using gl::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_UNSIGNED_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType
// using gl::GL_HALF_FLOAT; // reuse VertexAttribPointerType
// using gl::GL_FIXED; // reuse VertexAttribPointerType
// using gl::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse VertexAttribPointerType
// using gl::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse VertexAttribPointerType
// using gl::GL_INT_2_10_10_10_REV; // reuse VertexAttribPointerType

// VertexBufferObjectParameter

// using gl::GL_BUFFER_SIZE; // reuse BufferPNameARB
// using gl::GL_BUFFER_USAGE; // reuse BufferPNameARB
// using gl::GL_BUFFER_ACCESS; // reuse BufferPNameARB
// using gl::GL_BUFFER_MAPPED; // reuse BufferPNameARB
// using gl::GL_BUFFER_ACCESS_FLAGS; // reuse BufferPNameARB
// using gl::GL_BUFFER_MAP_LENGTH; // reuse BufferPNameARB
// using gl::GL_BUFFER_MAP_OFFSET; // reuse BufferPNameARB

// VertexBufferObjectUsage

// using gl::GL_STREAM_DRAW; // reuse BufferUsageARB
// using gl::GL_STREAM_READ; // reuse BufferUsageARB
// using gl::GL_STREAM_COPY; // reuse BufferUsageARB
// using gl::GL_STATIC_DRAW; // reuse BufferUsageARB
// using gl::GL_STATIC_READ; // reuse BufferUsageARB
// using gl::GL_STATIC_COPY; // reuse BufferUsageARB
// using gl::GL_DYNAMIC_DRAW; // reuse BufferUsageARB
// using gl::GL_DYNAMIC_READ; // reuse BufferUsageARB
// using gl::GL_DYNAMIC_COPY; // reuse BufferUsageARB

// VertexPointerType

// using gl::GL_SHORT; // reuse ColorPointerType
// using gl::GL_INT; // reuse ColorPointerType
// using gl::GL_FLOAT; // reuse ColorPointerType
// using gl::GL_DOUBLE; // reuse ColorPointerType

// VertexProvokingMode

using gl::GL_FIRST_VERTEX_CONVENTION;
using gl::GL_LAST_VERTEX_CONVENTION;

// __UNGROUPED__

using gl::GL_BLEND_EQUATION;
using gl::GL_RGBA2;
using gl::GL_TEXTURE_DEPTH;
using gl::GL_DEPTH_COMPONENT24;
using gl::GL_DEPTH_COMPONENT32;
using gl::GL_FRAMEBUFFER_DEFAULT;
using gl::GL_UNDEFINED_VERTEX;
using gl::GL_UNSIGNED_BYTE_2_3_3_REV;
using gl::GL_UNSIGNED_SHORT_5_6_5;
using gl::GL_UNSIGNED_SHORT_5_6_5_REV;
using gl::GL_UNSIGNED_SHORT_4_4_4_4_REV;
using gl::GL_UNSIGNED_SHORT_1_5_5_5_REV;
using gl::GL_UNSIGNED_INT_8_8_8_8_REV;
using gl::GL_UNSIGNED_INT_24_8;
using gl::GL_VERTEX_PROGRAM_POINT_SIZE;
using gl::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
using gl::GL_RGB32F;
using gl::GL_DRAW_BUFFER0;
using gl::GL_DRAW_BUFFER1;
using gl::GL_DRAW_BUFFER2;
using gl::GL_DRAW_BUFFER3;
using gl::GL_DRAW_BUFFER4;
using gl::GL_DRAW_BUFFER5;
using gl::GL_DRAW_BUFFER6;
using gl::GL_DRAW_BUFFER7;
using gl::GL_DRAW_BUFFER8;
using gl::GL_DRAW_BUFFER9;
using gl::GL_DRAW_BUFFER10;
using gl::GL_DRAW_BUFFER11;
using gl::GL_DRAW_BUFFER12;
using gl::GL_DRAW_BUFFER13;
using gl::GL_DRAW_BUFFER14;
using gl::GL_DRAW_BUFFER15;
using gl::GL_TEXTURE_DEPTH_SIZE;
using gl::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
using gl::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
using gl::GL_GEOMETRY_SHADER_INVOCATIONS;
using gl::GL_TEXTURE_STENCIL_SIZE;
using gl::GL_ACTIVE_PROGRAM_EXT;
using gl::GL_TEXTURE_RED_TYPE;
using gl::GL_TEXTURE_GREEN_TYPE;
using gl::GL_TEXTURE_BLUE_TYPE;
using gl::GL_TEXTURE_ALPHA_TYPE;
using gl::GL_TEXTURE_DEPTH_TYPE;
using gl::GL_UNSIGNED_NORMALIZED;
using gl::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
using gl::GL_MIN_SAMPLE_SHADING_VALUE;
using gl::GL_UNSIGNED_INT_5_9_9_9_REV;
using gl::GL_TEXTURE_SHARED_SIZE;
using gl::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
using gl::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
using gl::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
using gl::GL_POINT_SPRITE_COORD_ORIGIN;
using gl::GL_FRAMEBUFFER_BINDING;
using gl::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using gl::GL_STENCIL_ATTACHMENT;
using gl::GL_STENCIL_INDEX1;
using gl::GL_STENCIL_INDEX4;
using gl::GL_STENCIL_INDEX8;
using gl::GL_STENCIL_INDEX16;
using gl::GL_MAX_SAMPLES;
using gl::GL_RGB565;
using gl::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
using gl::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
using gl::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
using gl::GL_MAX_SUBROUTINES;
using gl::GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS;
using gl::GL_SHADER_BINARY_FORMATS;
using gl::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
using gl::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED;
using gl::GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE;
using gl::GL_TRANSFORM_FEEDBACK_BINDING;
using gl::GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
using gl::GL_SAMPLE_MASK_VALUE;
using gl::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
using gl::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
using gl::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
using gl::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
using gl::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
using gl::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
using gl::GL_MAX_TRANSFORM_FEEDBACK_BUFFERS;
using gl::GL_MAX_VERTEX_STREAMS;
using gl::GL_TESS_CONTROL_OUTPUT_VERTICES;
using gl::GL_TESS_GEN_MODE;
using gl::GL_TESS_GEN_SPACING;
using gl::GL_TESS_GEN_VERTEX_ORDER;
using gl::GL_TESS_GEN_POINT_MODE;
using gl::GL_ISOLINES;
using gl::GL_FRACTIONAL_ODD;
using gl::GL_FRACTIONAL_EVEN;
using gl::GL_MAX_PATCH_VERTICES;
using gl::GL_MAX_TESS_GEN_LEVEL;
using gl::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
using gl::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gl::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
using gl::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
using gl::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
using gl::GL_MAX_TESS_PATCH_COMPONENTS;
using gl::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
using gl::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
using gl::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
using gl::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
using gl::GL_COPY_READ_BUFFER_BINDING;
using gl::GL_COPY_WRITE_BUFFER_BINDING;
using gl::GL_MAX_IMAGE_UNITS;
using gl::GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS;
using gl::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
using gl::GL_IMAGE_BINDING_NAME;
using gl::GL_IMAGE_BINDING_LEVEL;
using gl::GL_IMAGE_BINDING_LAYERED;
using gl::GL_IMAGE_BINDING_LAYER;
using gl::GL_IMAGE_BINDING_ACCESS;
using gl::GL_DRAW_INDIRECT_BUFFER_BINDING;
using gl::GL_DOUBLE_MAT2x3;
using gl::GL_DOUBLE_MAT2x4;
using gl::GL_DOUBLE_MAT3x2;
using gl::GL_DOUBLE_MAT3x4;
using gl::GL_DOUBLE_MAT4x2;
using gl::GL_DOUBLE_MAT4x3;
using gl::GL_RGBA16_SNORM;
using gl::GL_SIGNED_NORMALIZED;
using gl::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
using gl::GL_MAX_IMAGE_SAMPLES;
using gl::GL_IMAGE_BINDING_FORMAT;
using gl::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
using gl::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
using gl::GL_MAX_VERTEX_IMAGE_UNIFORMS;
using gl::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
using gl::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
using gl::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
using gl::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
using gl::GL_MAX_COMBINED_IMAGE_UNIFORMS;
using gl::GL_TEXTURE_SAMPLES;
using gl::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
using gl::GL_SYNC_FENCE;
using gl::GL_UNSIGNALED;
using gl::GL_SIGNALED;
using gl::GL_CONTEXT_PROFILE_MASK;
using gl::GL_UNPACK_COMPRESSED_BLOCK_WIDTH;
using gl::GL_UNPACK_COMPRESSED_BLOCK_HEIGHT;
using gl::GL_UNPACK_COMPRESSED_BLOCK_DEPTH;
using gl::GL_UNPACK_COMPRESSED_BLOCK_SIZE;
using gl::GL_PACK_COMPRESSED_BLOCK_WIDTH;
using gl::GL_PACK_COMPRESSED_BLOCK_HEIGHT;
using gl::GL_PACK_COMPRESSED_BLOCK_DEPTH;
using gl::GL_PACK_COMPRESSED_BLOCK_SIZE;
using gl::GL_TEXTURE_IMMUTABLE_FORMAT;
using gl::GL_ATOMIC_COUNTER_BUFFER_START;
using gl::GL_ATOMIC_COUNTER_BUFFER_SIZE;
using gl::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
using gl::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
using gl::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;



} // namespace gl42core
