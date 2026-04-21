#include <stdarg.h>

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct raylib_Vector2
    {
        float x;
        float y;
    } raylib_Vector2;
    typedef struct raylib_Vector3
    {
        float x;
        float y;
        float z;
    } raylib_Vector3;
    typedef struct raylib_Vector4
    {
        float x;
        float y;
        float z;
        float w;
    } raylib_Vector4;
    typedef raylib_Vector4 raylib_Quaternion;
    typedef struct raylib_Matrix
    {
        float m0, m4, m8, m12;
        float m1, m5, m9, m13;
        float m2, m6, m10, m14;
        float m3, m7, m11, m15;
    } raylib_Matrix;
    typedef struct raylib_Color
    {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    } raylib_Color;
    typedef struct raylib_Rectangle
    {
        float x;
        float y;
        float width;
        float height;
    } raylib_Rectangle;
    typedef struct raylib_Image
    {
        void *data;
        int width;
        int height;
        int mipmaps;
        int format;
    } raylib_Image;
    typedef struct raylib_Texture
    {
        unsigned int id;
        int width;
        int height;
        int mipmaps;
        int format;
    } raylib_Texture;
    typedef raylib_Texture raylib_Texture2D;
    typedef raylib_Texture raylib_TextureCubemap;
    typedef struct raylib_RenderTexture
    {
        unsigned int id;
        raylib_Texture texture;
        raylib_Texture depth;
    } raylib_RenderTexture;
    typedef raylib_RenderTexture raylib_RenderTexture2D;
    typedef struct raylib_NPatchInfo
    {
        raylib_Rectangle source;
        int left;
        int top;
        int right;
        int bottom;
        int layout;
    } raylib_NPatchInfo;
    typedef struct raylib_GlyphInfo
    {
        int value;
        int offsetX;
        int offsetY;
        int advanceX;
        raylib_Image image;
    } raylib_GlyphInfo;
    typedef struct raylib_Font
    {
        int baseSize;
        int glyphCount;
        int glyphPadding;
        raylib_Texture2D texture;
        raylib_Rectangle *recs;
        raylib_GlyphInfo *glyphs;
    } raylib_Font;
    typedef struct raylib_Camera3D
    {
        raylib_Vector3 position;
        raylib_Vector3 target;
        raylib_Vector3 up;
        float fovy;
        int projection;
    } raylib_Camera3D;
    typedef raylib_Camera3D raylib_Camera;
    typedef struct raylib_Camera2D
    {
        raylib_Vector2 offset;
        raylib_Vector2 target;
        float rotation;
        float zoom;
    } raylib_Camera2D;
    typedef struct raylib_Mesh
    {
        int vertexCount;
        int triangleCount;

        float *vertices;
        float *texcoords;
        float *texcoords2;
        float *normals;
        float *tangents;
        unsigned char *colors;
        unsigned short *indices;

        float *animVertices;
        float *animNormals;
        unsigned char *boneIds;
        float *boneWeights;
        raylib_Matrix *boneMatrices;
        int boneCount;

        unsigned int vaoId;
        unsigned int *vboId;
    } raylib_Mesh;
    typedef struct raylib_Shader
    {
        unsigned int id;
        int *locs;
    } raylib_Shader;
    typedef struct raylib_MaterialMap
    {
        raylib_Texture2D texture;
        raylib_Color color;
        float value;
    } raylib_MaterialMap;
    typedef struct raylib_Material
    {
        raylib_Shader shader;
        raylib_MaterialMap *maps;
        float params[4];
    } raylib_Material;
    typedef struct raylib_Transform
    {
        raylib_Vector3 translation;
        raylib_Quaternion rotation;
        raylib_Vector3 scale;
    } raylib_Transform;
    typedef struct raylib_BoneInfo
    {
        char name[32];
        int parent;
    } raylib_BoneInfo;
    typedef struct raylib_Model
    {
        raylib_Matrix transform;

        int meshCount;
        int materialCount;
        raylib_Mesh *meshes;
        raylib_Material *materials;
        int *meshMaterial;

        int boneCount;
        raylib_BoneInfo *bones;
        raylib_Transform *bindPose;
    } raylib_Model;
    typedef struct raylib_ModelAnimation
    {
        int boneCount;
        int frameCount;
        raylib_BoneInfo *bones;
        raylib_Transform **framePoses;
        char name[32];
    } raylib_ModelAnimation;
    typedef struct raylib_Ray
    {
        raylib_Vector3 position;
        raylib_Vector3 direction;
    } raylib_Ray;
    typedef struct raylib_RayCollision
    {
        _Bool hit;
        float distance;
        raylib_Vector3 point;
        raylib_Vector3 normal;
    } raylib_RayCollision;
    typedef struct raylib_BoundingBox
    {
        raylib_Vector3 min;
        raylib_Vector3 max;
    } raylib_BoundingBox;
    typedef struct raylib_Wave
    {
        unsigned int frameCount;
        unsigned int sampleRate;
        unsigned int sampleSize;
        unsigned int channels;
        void *data;
    } raylib_Wave;
    typedef struct raylib_rAudioBuffer raylib_rAudioBuffer;
    typedef struct raylib_rAudioProcessor raylib_rAudioProcessor;
    typedef struct raylib_AudioStream
    {
        raylib_rAudioBuffer *buffer;
        raylib_rAudioProcessor *processor;

        unsigned int sampleRate;
        unsigned int sampleSize;
        unsigned int channels;
    } raylib_AudioStream;
    typedef struct raylib_Sound
    {
        raylib_AudioStream stream;
        unsigned int frameCount;
    } raylib_Sound;
    typedef struct raylib_Music
    {
        raylib_AudioStream stream;
        unsigned int frameCount;
        _Bool looping;

        int ctxType;
        void *ctxData;
    } raylib_Music;
    typedef struct raylib_VrDeviceInfo
    {
        int hResolution;
        int vResolution;
        float hScreenSize;
        float vScreenSize;
        float eyeToScreenDistance;
        float lensSeparationDistance;
        float interpupillaryDistance;
        float lensDistortionValues[4];
        float chromaAbCorrection[4];
    } raylib_VrDeviceInfo;
    typedef struct raylib_VrStereoConfig
    {
        raylib_Matrix projection[2];
        raylib_Matrix viewOffset[2];
        float leftLensCenter[2];
        float rightLensCenter[2];
        float leftScreenCenter[2];
        float rightScreenCenter[2];
        float scale[2];
        float scaleIn[2];
    } raylib_VrStereoConfig;
    typedef struct raylib_FilePathList
    {
        unsigned int capacity;
        unsigned int count;
        char **paths;
    } raylib_FilePathList;
    typedef struct raylib_AutomationEvent
    {
        unsigned int frame;
        unsigned int type;
        int params[4];
    } raylib_AutomationEvent;
    typedef struct raylib_AutomationEventList
    {
        unsigned int capacity;
        unsigned int count;
        raylib_AutomationEvent *events;
    } raylib_AutomationEventList;
    typedef enum
    {
        raylib_FLAG_VSYNC_HINT = 0x00000040,
        raylib_FLAG_FULLSCREEN_MODE = 0x00000002,
        raylib_FLAG_WINDOW_RESIZABLE = 0x00000004,
        raylib_FLAG_WINDOW_UNDECORATED = 0x00000008,
        raylib_FLAG_WINDOW_HIDDEN = 0x00000080,
        raylib_FLAG_WINDOW_MINIMIZED = 0x00000200,
        raylib_FLAG_WINDOW_MAXIMIZED = 0x00000400,
        raylib_FLAG_WINDOW_UNFOCUSED = 0x00000800,
        raylib_FLAG_WINDOW_TOPMOST = 0x00001000,
        raylib_FLAG_WINDOW_ALWAYS_RUN = 0x00000100,
        raylib_FLAG_WINDOW_TRANSPARENT = 0x00000010,
        raylib_FLAG_WINDOW_HIGHDPI = 0x00002000,
        raylib_FLAG_WINDOW_MOUSE_PASSTHROUGH = 0x00004000,
        raylib_FLAG_BORDERLESS_WINDOWED_MODE = 0x00008000,
        raylib_FLAG_MSAA_4X_HINT = 0x00000020,
        raylib_FLAG_INTERLACED_HINT = 0x00010000
    } raylib_ConfigFlags;
    typedef enum
    {
        raylib_LOG_ALL = 0,
        raylib_LOG_TRACE,
        raylib_LOG_DEBUG,
        raylib_LOG_INFO,
        raylib_LOG_WARNING,
        raylib_LOG_ERROR,
        raylib_LOG_FATAL,
        raylib_LOG_NONE
    } raylib_TraceLogLevel;
    typedef enum
    {
        raylib_KEY_NULL = 0,

        raylib_KEY_APOSTROPHE = 39,
        raylib_KEY_COMMA = 44,
        raylib_KEY_MINUS = 45,
        raylib_KEY_PERIOD = 46,
        raylib_KEY_SLASH = 47,
        raylib_KEY_ZERO = 48,
        raylib_KEY_ONE = 49,
        raylib_KEY_TWO = 50,
        raylib_KEY_THREE = 51,
        raylib_KEY_FOUR = 52,
        raylib_KEY_FIVE = 53,
        raylib_KEY_SIX = 54,
        raylib_KEY_SEVEN = 55,
        raylib_KEY_EIGHT = 56,
        raylib_KEY_NINE = 57,
        raylib_KEY_SEMICOLON = 59,
        raylib_KEY_EQUAL = 61,
        raylib_KEY_A = 65,
        raylib_KEY_B = 66,
        raylib_KEY_C = 67,
        raylib_KEY_D = 68,
        raylib_KEY_E = 69,
        raylib_KEY_F = 70,
        raylib_KEY_G = 71,
        raylib_KEY_H = 72,
        raylib_KEY_I = 73,
        raylib_KEY_J = 74,
        raylib_KEY_K = 75,
        raylib_KEY_L = 76,
        raylib_KEY_M = 77,
        raylib_KEY_N = 78,
        raylib_KEY_O = 79,
        raylib_KEY_P = 80,
        raylib_KEY_Q = 81,
        raylib_KEY_R = 82,
        raylib_KEY_S = 83,
        raylib_KEY_T = 84,
        raylib_KEY_U = 85,
        raylib_KEY_V = 86,
        raylib_KEY_W = 87,
        raylib_KEY_X = 88,
        raylib_KEY_Y = 89,
        raylib_KEY_Z = 90,
        raylib_KEY_LEFT_BRACKET = 91,
        raylib_KEY_BACKSLASH = 92,
        raylib_KEY_RIGHT_BRACKET = 93,
        raylib_KEY_GRAVE = 96,

        raylib_KEY_SPACE = 32,
        raylib_KEY_ESCAPE = 256,
        raylib_KEY_ENTER = 257,
        raylib_KEY_TAB = 258,
        raylib_KEY_BACKSPACE = 259,
        raylib_KEY_INSERT = 260,
        raylib_KEY_DELETE = 261,
        raylib_KEY_RIGHT = 262,
        raylib_KEY_LEFT = 263,
        raylib_KEY_DOWN = 264,
        raylib_KEY_UP = 265,
        raylib_KEY_PAGE_UP = 266,
        raylib_KEY_PAGE_DOWN = 267,
        raylib_KEY_HOME = 268,
        raylib_KEY_END = 269,
        raylib_KEY_CAPS_LOCK = 280,
        raylib_KEY_SCROLL_LOCK = 281,
        raylib_KEY_NUM_LOCK = 282,
        raylib_KEY_PRINT_SCREEN = 283,
        raylib_KEY_PAUSE = 284,
        raylib_KEY_F1 = 290,
        raylib_KEY_F2 = 291,
        raylib_KEY_F3 = 292,
        raylib_KEY_F4 = 293,
        raylib_KEY_F5 = 294,
        raylib_KEY_F6 = 295,
        raylib_KEY_F7 = 296,
        raylib_KEY_F8 = 297,
        raylib_KEY_F9 = 298,
        raylib_KEY_F10 = 299,
        raylib_KEY_F11 = 300,
        raylib_KEY_F12 = 301,
        raylib_KEY_LEFT_SHIFT = 340,
        raylib_KEY_LEFT_CONTROL = 341,
        raylib_KEY_LEFT_ALT = 342,
        raylib_KEY_LEFT_SUPER = 343,
        raylib_KEY_RIGHT_SHIFT = 344,
        raylib_KEY_RIGHT_CONTROL = 345,
        raylib_KEY_RIGHT_ALT = 346,
        raylib_KEY_RIGHT_SUPER = 347,
        raylib_KEY_KB_MENU = 348,

        raylib_KEY_KP_0 = 320,
        raylib_KEY_KP_1 = 321,
        raylib_KEY_KP_2 = 322,
        raylib_KEY_KP_3 = 323,
        raylib_KEY_KP_4 = 324,
        raylib_KEY_KP_5 = 325,
        raylib_KEY_KP_6 = 326,
        raylib_KEY_KP_7 = 327,
        raylib_KEY_KP_8 = 328,
        raylib_KEY_KP_9 = 329,
        raylib_KEY_KP_DECIMAL = 330,
        raylib_KEY_KP_DIVIDE = 331,
        raylib_KEY_KP_MULTIPLY = 332,
        raylib_KEY_KP_SUBTRACT = 333,
        raylib_KEY_KP_ADD = 334,
        raylib_KEY_KP_ENTER = 335,
        raylib_KEY_KP_EQUAL = 336,

        raylib_KEY_BACK = 4,
        raylib_KEY_MENU = 5,
        raylib_KEY_VOLUME_UP = 24,
        raylib_KEY_VOLUME_DOWN = 25
    } raylib_KeyboardKey;
    typedef enum
    {
        raylib_MOUSE_BUTTON_LEFT = 0,
        raylib_MOUSE_BUTTON_RIGHT = 1,
        raylib_MOUSE_BUTTON_MIDDLE = 2,
        raylib_MOUSE_BUTTON_SIDE = 3,
        raylib_MOUSE_BUTTON_EXTRA = 4,
        raylib_MOUSE_BUTTON_FORWARD = 5,
        raylib_MOUSE_BUTTON_BACK = 6,
    } raylib_MouseButton;
    typedef enum
    {
        raylib_MOUSE_CURSOR_DEFAULT = 0,
        raylib_MOUSE_CURSOR_ARROW = 1,
        raylib_MOUSE_CURSOR_IBEAM = 2,
        raylib_MOUSE_CURSOR_CROSSHAIR = 3,
        raylib_MOUSE_CURSOR_POINTING_HAND = 4,
        raylib_MOUSE_CURSOR_RESIZE_EW = 5,
        raylib_MOUSE_CURSOR_RESIZE_NS = 6,
        raylib_MOUSE_CURSOR_RESIZE_NWSE = 7,
        raylib_MOUSE_CURSOR_RESIZE_NESW = 8,
        raylib_MOUSE_CURSOR_RESIZE_ALL = 9,
        raylib_MOUSE_CURSOR_NOT_ALLOWED = 10
    } raylib_MouseCursor;
    typedef enum
    {
        raylib_GAMEPAD_BUTTON_UNKNOWN = 0,
        raylib_GAMEPAD_BUTTON_LEFT_FACE_UP,
        raylib_GAMEPAD_BUTTON_LEFT_FACE_RIGHT,
        raylib_GAMEPAD_BUTTON_LEFT_FACE_DOWN,
        raylib_GAMEPAD_BUTTON_LEFT_FACE_LEFT,
        raylib_GAMEPAD_BUTTON_RIGHT_FACE_UP,
        raylib_GAMEPAD_BUTTON_RIGHT_FACE_RIGHT,
        raylib_GAMEPAD_BUTTON_RIGHT_FACE_DOWN,
        raylib_GAMEPAD_BUTTON_RIGHT_FACE_LEFT,
        raylib_GAMEPAD_BUTTON_LEFT_TRIGGER_1,
        raylib_GAMEPAD_BUTTON_LEFT_TRIGGER_2,
        raylib_GAMEPAD_BUTTON_RIGHT_TRIGGER_1,
        raylib_GAMEPAD_BUTTON_RIGHT_TRIGGER_2,
        raylib_GAMEPAD_BUTTON_MIDDLE_LEFT,
        raylib_GAMEPAD_BUTTON_MIDDLE,
        raylib_GAMEPAD_BUTTON_MIDDLE_RIGHT,
        raylib_GAMEPAD_BUTTON_LEFT_THUMB,
        raylib_GAMEPAD_BUTTON_RIGHT_THUMB
    } raylib_GamepadButton;
    typedef enum
    {
        raylib_GAMEPAD_AXIS_LEFT_X = 0,
        raylib_GAMEPAD_AXIS_LEFT_Y = 1,
        raylib_GAMEPAD_AXIS_RIGHT_X = 2,
        raylib_GAMEPAD_AXIS_RIGHT_Y = 3,
        raylib_GAMEPAD_AXIS_LEFT_TRIGGER = 4,
        raylib_GAMEPAD_AXIS_RIGHT_TRIGGER = 5
    } raylib_GamepadAxis;
    typedef enum
    {
        raylib_MATERIAL_MAP_ALBEDO = 0,
        raylib_MATERIAL_MAP_METALNESS,
        raylib_MATERIAL_MAP_NORMAL,
        raylib_MATERIAL_MAP_ROUGHNESS,
        raylib_MATERIAL_MAP_OCCLUSION,
        raylib_MATERIAL_MAP_EMISSION,
        raylib_MATERIAL_MAP_HEIGHT,
        raylib_MATERIAL_MAP_CUBEMAP,
        raylib_MATERIAL_MAP_IRRADIANCE,
        raylib_MATERIAL_MAP_PREFILTER,
        raylib_MATERIAL_MAP_BRDF
    } raylib_MaterialMapIndex;
    typedef enum
    {
        raylib_SHADER_LOC_VERTEX_POSITION = 0,
        raylib_SHADER_LOC_VERTEX_TEXCOORD01,
        raylib_SHADER_LOC_VERTEX_TEXCOORD02,
        raylib_SHADER_LOC_VERTEX_NORMAL,
        raylib_SHADER_LOC_VERTEX_TANGENT,
        raylib_SHADER_LOC_VERTEX_COLOR,
        raylib_SHADER_LOC_MATRIX_MVP,
        raylib_SHADER_LOC_MATRIX_VIEW,
        raylib_SHADER_LOC_MATRIX_PROJECTION,
        raylib_SHADER_LOC_MATRIX_MODEL,
        raylib_SHADER_LOC_MATRIX_NORMAL,
        raylib_SHADER_LOC_VECTOR_VIEW,
        raylib_SHADER_LOC_COLOR_DIFFUSE,
        raylib_SHADER_LOC_COLOR_SPECULAR,
        raylib_SHADER_LOC_COLOR_AMBIENT,
        raylib_SHADER_LOC_MAP_ALBEDO,
        raylib_SHADER_LOC_MAP_METALNESS,
        raylib_SHADER_LOC_MAP_NORMAL,
        raylib_SHADER_LOC_MAP_ROUGHNESS,
        raylib_SHADER_LOC_MAP_OCCLUSION,
        raylib_SHADER_LOC_MAP_EMISSION,
        raylib_SHADER_LOC_MAP_HEIGHT,
        raylib_SHADER_LOC_MAP_CUBEMAP,
        raylib_SHADER_LOC_MAP_IRRADIANCE,
        raylib_SHADER_LOC_MAP_PREFILTER,
        raylib_SHADER_LOC_MAP_BRDF,
        raylib_SHADER_LOC_VERTEX_BONEIDS,
        raylib_SHADER_LOC_VERTEX_BONEWEIGHTS,
        raylib_SHADER_LOC_BONE_MATRICES
    } raylib_ShaderLocationIndex;
    typedef enum
    {
        raylib_SHADER_UNIFORM_FLOAT = 0,
        raylib_SHADER_UNIFORM_VEC2,
        raylib_SHADER_UNIFORM_VEC3,
        raylib_SHADER_UNIFORM_VEC4,
        raylib_SHADER_UNIFORM_INT,
        raylib_SHADER_UNIFORM_IVEC2,
        raylib_SHADER_UNIFORM_IVEC3,
        raylib_SHADER_UNIFORM_IVEC4,
        raylib_SHADER_UNIFORM_SAMPLER2D
    } raylib_ShaderUniformDataType;
    typedef enum
    {
        raylib_SHADER_ATTRIB_FLOAT = 0,
        raylib_SHADER_ATTRIB_VEC2,
        raylib_SHADER_ATTRIB_VEC3,
        raylib_SHADER_ATTRIB_VEC4
    } raylib_ShaderAttributeDataType;
    typedef enum
    {
        raylib_PIXELFORMAT_UNCOMPRESSED_GRAYSCALE = 1,
        raylib_PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA,
        raylib_PIXELFORMAT_UNCOMPRESSED_R5G6B5,
        raylib_PIXELFORMAT_UNCOMPRESSED_R8G8B8,
        raylib_PIXELFORMAT_UNCOMPRESSED_R5G5B5A1,
        raylib_PIXELFORMAT_UNCOMPRESSED_R4G4B4A4,
        raylib_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8,
        raylib_PIXELFORMAT_UNCOMPRESSED_R32,
        raylib_PIXELFORMAT_UNCOMPRESSED_R32G32B32,
        raylib_PIXELFORMAT_UNCOMPRESSED_R32G32B32A32,
        raylib_PIXELFORMAT_UNCOMPRESSED_R16,
        raylib_PIXELFORMAT_UNCOMPRESSED_R16G16B16,
        raylib_PIXELFORMAT_UNCOMPRESSED_R16G16B16A16,
        raylib_PIXELFORMAT_COMPRESSED_DXT1_RGB,
        raylib_PIXELFORMAT_COMPRESSED_DXT1_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_DXT3_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_DXT5_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_ETC1_RGB,
        raylib_PIXELFORMAT_COMPRESSED_ETC2_RGB,
        raylib_PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_PVRT_RGB,
        raylib_PIXELFORMAT_COMPRESSED_PVRT_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA,
        raylib_PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA
    } raylib_PixelFormat;
    typedef enum
    {
        raylib_TEXTURE_FILTER_POINT = 0,
        raylib_TEXTURE_FILTER_BILINEAR,
        raylib_TEXTURE_FILTER_TRILINEAR,
        raylib_TEXTURE_FILTER_ANISOTROPIC_4X,
        raylib_TEXTURE_FILTER_ANISOTROPIC_8X,
        raylib_TEXTURE_FILTER_ANISOTROPIC_16X,
    } raylib_TextureFilter;
    typedef enum
    {
        raylib_TEXTURE_WRAP_REPEAT = 0,
        raylib_TEXTURE_WRAP_CLAMP,
        raylib_TEXTURE_WRAP_MIRROR_REPEAT,
        raylib_TEXTURE_WRAP_MIRROR_CLAMP
    } raylib_TextureWrap;
    typedef enum
    {
        raylib_CUBEMAP_LAYOUT_AUTO_DETECT = 0,
        raylib_CUBEMAP_LAYOUT_LINE_VERTICAL,
        raylib_CUBEMAP_LAYOUT_LINE_HORIZONTAL,
        raylib_CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR,
        raylib_CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE
    } raylib_CubemapLayout;
    typedef enum
    {
        raylib_FONT_DEFAULT = 0,
        raylib_FONT_BITMAP,
        raylib_FONT_SDF
    } raylib_FontType;
    typedef enum
    {
        raylib_BLEND_ALPHA = 0,
        raylib_BLEND_ADDITIVE,
        raylib_BLEND_MULTIPLIED,
        raylib_BLEND_ADD_COLORS,
        raylib_BLEND_SUBTRACT_COLORS,
        raylib_BLEND_ALPHA_PREMULTIPLY,
        raylib_BLEND_CUSTOM,
        raylib_BLEND_CUSTOM_SEPARATE
    } raylib_BlendMode;
    typedef enum
    {
        raylib_GESTURE_NONE = 0,
        raylib_GESTURE_TAP = 1,
        raylib_GESTURE_DOUBLETAP = 2,
        raylib_GESTURE_HOLD = 4,
        raylib_GESTURE_DRAG = 8,
        raylib_GESTURE_SWIPE_RIGHT = 16,
        raylib_GESTURE_SWIPE_LEFT = 32,
        raylib_GESTURE_SWIPE_UP = 64,
        raylib_GESTURE_SWIPE_DOWN = 128,
        raylib_GESTURE_PINCH_IN = 256,
        raylib_GESTURE_PINCH_OUT = 512
    } raylib_Gesture;
    typedef enum
    {
        raylib_CAMERA_CUSTOM = 0,
        raylib_CAMERA_FREE,
        raylib_CAMERA_ORBITAL,
        raylib_CAMERA_FIRST_PERSON,
        raylib_CAMERA_THIRD_PERSON
    } raylib_CameraMode;
    typedef enum
    {
        raylib_CAMERA_PERSPECTIVE = 0,
        raylib_CAMERA_ORTHOGRAPHIC
    } raylib_CameraProjection;
    typedef enum
    {
        raylib_NPATCH_NINE_PATCH = 0,
        raylib_NPATCH_THREE_PATCH_VERTICAL,
        raylib_NPATCH_THREE_PATCH_HORIZONTAL
    } raylib_NPatchLayout;
    typedef void (*raylib_TraceLogCallback)(int logLevel, const char *text, va_list args);
    typedef unsigned char *(*raylib_LoadFileDataCallback)(const char *fileName, int *dataSize);
    typedef _Bool (*raylib_SaveFileDataCallback)(const char *fileName, void *data, int dataSize);
    typedef char *(*raylib_LoadFileTextCallback)(const char *fileName);
    typedef _Bool (*raylib_SaveFileTextCallback)(const char *fileName, char *text);
    typedef void (*raylib_AudioCallback)(void *bufferData, unsigned int frames);

    void raylib_InitWindow(int width, int height, const char *title);
    void raylib_CloseWindow(void);
    _Bool raylib_WindowShouldClose(void);
    _Bool raylib_IsWindowReady(void);
    _Bool raylib_IsWindowFullscreen(void);
    _Bool raylib_IsWindowHidden(void);
    _Bool raylib_IsWindowMinimized(void);
    _Bool raylib_IsWindowMaximized(void);
    _Bool raylib_IsWindowFocused(void);
    _Bool raylib_IsWindowResized(void);
    _Bool raylib_IsWindowState(unsigned int flag);
    void raylib_SetWindowState(unsigned int flags);
    void raylib_ClearWindowState(unsigned int flags);
    void raylib_ToggleFullscreen(void);
    void raylib_ToggleBorderlessWindowed(void);
    void raylib_MaximizeWindow(void);
    void raylib_MinimizeWindow(void);
    void raylib_RestoreWindow(void);
    void raylib_SetWindowIcon(raylib_Image image);
    void raylib_SetWindowIcons(raylib_Image *images, int count);
    void raylib_SetWindowTitle(const char *title);
    void raylib_SetWindowPosition(int x, int y);
    void raylib_SetWindowMonitor(int monitor);
    void raylib_SetWindowMinSize(int width, int height);
    void raylib_SetWindowMaxSize(int width, int height);
    void raylib_SetWindowSize(int width, int height);
    void raylib_SetWindowOpacity(float opacity);
    void raylib_SetWindowFocused(void);
    void *raylib_GetWindowHandle(void);
    int raylib_GetScreenWidth(void);
    int raylib_GetScreenHeight(void);
    int raylib_GetRenderWidth(void);
    int raylib_GetRenderHeight(void);
    int raylib_GetMonitorCount(void);
    int raylib_GetCurrentMonitor(void);
    raylib_Vector2 raylib_GetMonitorPosition(int monitor);
    int raylib_GetMonitorWidth(int monitor);
    int raylib_GetMonitorHeight(int monitor);
    int raylib_GetMonitorPhysicalWidth(int monitor);
    int raylib_GetMonitorPhysicalHeight(int monitor);
    int raylib_GetMonitorRefreshRate(int monitor);
    raylib_Vector2 raylib_GetWindowPosition(void);
    raylib_Vector2 raylib_GetWindowScaleDPI(void);
    const char *raylib_GetMonitorName(int monitor);
    void raylib_SetClipboardText(const char *text);
    const char *raylib_GetClipboardText(void);
    raylib_Image raylib_GetClipboardImage(void);
    void raylib_EnableEventWaiting(void);
    void raylib_DisableEventWaiting(void);
    void raylib_ShowCursor(void);
    void raylib_HideCursor(void);
    _Bool raylib_IsCursorHidden(void);
    void raylib_EnableCursor(void);
    void raylib_DisableCursor(void);
    _Bool raylib_IsCursorOnScreen(void);
    void raylib_ClearBackground(raylib_Color color);
    void raylib_BeginDrawing(void);
    void raylib_EndDrawing(void);
    void raylib_BeginMode2D(raylib_Camera2D camera);
    void raylib_EndMode2D(void);
    void raylib_BeginMode3D(raylib_Camera3D camera);
    void raylib_EndMode3D(void);
    void raylib_BeginTextureMode(raylib_RenderTexture2D target);
    void raylib_EndTextureMode(void);
    void raylib_BeginShaderMode(raylib_Shader shader);
    void raylib_EndShaderMode(void);
    void raylib_BeginBlendMode(int mode);
    void raylib_EndBlendMode(void);
    void raylib_BeginScissorMode(int x, int y, int width, int height);
    void raylib_EndScissorMode(void);
    void raylib_BeginVrStereoMode(raylib_VrStereoConfig config);
    void raylib_EndVrStereoMode(void);
    raylib_VrStereoConfig raylib_LoadVrStereoConfig(raylib_VrDeviceInfo device);
    void raylib_UnloadVrStereoConfig(raylib_VrStereoConfig config);
    raylib_Shader raylib_LoadShader(const char *vsFileName, const char *fsFileName);
    raylib_Shader raylib_LoadShaderFromMemory(const char *vsCode, const char *fsCode);
    _Bool raylib_IsShaderValid(raylib_Shader shader);
    int raylib_GetShaderLocation(raylib_Shader shader, const char *uniformName);
    int raylib_GetShaderLocationAttrib(raylib_Shader shader, const char *attribName);
    void raylib_SetShaderValue(raylib_Shader shader, int locIndex, const void *value, int uniformType);
    void raylib_SetShaderValueV(raylib_Shader shader, int locIndex, const void *value, int uniformType, int count);
    void raylib_SetShaderValueMatrix(raylib_Shader shader, int locIndex, raylib_Matrix mat);
    void raylib_SetShaderValueTexture(raylib_Shader shader, int locIndex, raylib_Texture2D texture);
    void raylib_UnloadShader(raylib_Shader shader);
    raylib_Ray raylib_GetScreenToWorldRay(raylib_Vector2 position, raylib_Camera camera);
    raylib_Ray raylib_GetScreenToWorldRayEx(raylib_Vector2 position, raylib_Camera camera, int width, int height);
    raylib_Vector2 raylib_GetWorldToScreen(raylib_Vector3 position, raylib_Camera camera);
    raylib_Vector2 raylib_GetWorldToScreenEx(raylib_Vector3 position, raylib_Camera camera, int width, int height);
    raylib_Vector2 raylib_GetWorldToScreen2D(raylib_Vector2 position, raylib_Camera2D camera);
    raylib_Vector2 raylib_GetScreenToWorld2D(raylib_Vector2 position, raylib_Camera2D camera);
    raylib_Matrix raylib_GetCameraMatrix(raylib_Camera camera);
    raylib_Matrix raylib_GetCameraMatrix2D(raylib_Camera2D camera);
    void raylib_SetTargetFPS(int fps);
    float raylib_GetFrameTime(void);
    double raylib_GetTime(void);
    int raylib_GetFPS(void);
    void raylib_SwapScreenBuffer(void);
    void raylib_PollInputEvents(void);
    void raylib_WaitTime(double seconds);
    void raylib_SetRandomSeed(unsigned int seed);
    int raylib_GetRandomValue(int min, int max);
    int *raylib_LoadRandomSequence(unsigned int count, int min, int max);
    void raylib_UnloadRandomSequence(int *sequence);
    void raylib_TakeScreenshot(const char *fileName);
    void raylib_SetConfigFlags(unsigned int flags);
    void raylib_OpenURL(const char *url);
    void raylib_SetTraceLogLevel(int logLevel);
    void *raylib_MemAlloc(unsigned int size);
    void *raylib_MemRealloc(void *ptr, unsigned int size);
    void raylib_MemFree(void *ptr);
    void raylib_SetTraceLogCallback(raylib_TraceLogCallback callback);
    void raylib_SetLoadFileDataCallback(raylib_LoadFileDataCallback callback);
    void raylib_SetSaveFileDataCallback(raylib_SaveFileDataCallback callback);
    void raylib_SetLoadFileTextCallback(raylib_LoadFileTextCallback callback);
    void raylib_SetSaveFileTextCallback(raylib_SaveFileTextCallback callback);
    unsigned char *raylib_LoadFileData(const char *fileName, int *dataSize);
    void raylib_UnloadFileData(unsigned char *data);
    _Bool raylib_SaveFileData(const char *fileName, void *data, int dataSize);
    _Bool raylib_ExportDataAsCode(const unsigned char *data, int dataSize, const char *fileName);
    char *raylib_LoadFileText(const char *fileName);
    void raylib_UnloadFileText(char *text);
    _Bool raylib_SaveFileText(const char *fileName, char *text);
    _Bool raylib_FileExists(const char *fileName);
    _Bool raylib_DirectoryExists(const char *dirPath);
    _Bool raylib_IsFileExtension(const char *fileName, const char *ext);
    int raylib_GetFileLength(const char *fileName);
    const char *raylib_GetFileExtension(const char *fileName);
    const char *raylib_GetFileName(const char *filePath);
    const char *raylib_GetFileNameWithoutExt(const char *filePath);
    const char *raylib_GetDirectoryPath(const char *filePath);
    const char *raylib_GetPrevDirectoryPath(const char *dirPath);
    const char *raylib_GetWorkingDirectory(void);
    const char *raylib_GetApplicationDirectory(void);
    int raylib_MakeDirectory(const char *dirPath);
    _Bool raylib_ChangeDirectory(const char *dir);
    _Bool raylib_IsPathFile(const char *path);
    _Bool raylib_IsFileNameValid(const char *fileName);
    raylib_FilePathList raylib_LoadDirectoryFiles(const char *dirPath);
    raylib_FilePathList raylib_LoadDirectoryFilesEx(const char *basePath, const char *filter, _Bool scanSubdirs);
    void raylib_UnloadDirectoryFiles(raylib_FilePathList files);
    _Bool raylib_IsFileDropped(void);
    raylib_FilePathList raylib_LoadDroppedFiles(void);
    void raylib_UnloadDroppedFiles(raylib_FilePathList files);
    long raylib_GetFileModTime(const char *fileName);
    unsigned char *raylib_CompressData(const unsigned char *data, int dataSize, int *compDataSize);
    unsigned char *raylib_DecompressData(const unsigned char *compData, int compDataSize, int *dataSize);
    char *raylib_EncodeDataBase64(const unsigned char *data, int dataSize, int *outputSize);
    unsigned char *raylib_DecodeDataBase64(const unsigned char *data, int *outputSize);
    unsigned int raylib_ComputeCRC32(unsigned char *data, int dataSize);
    unsigned int *raylib_ComputeMD5(unsigned char *data, int dataSize);
    unsigned int *raylib_ComputeSHA1(unsigned char *data, int dataSize);
    raylib_AutomationEventList raylib_LoadAutomationEventList(const char *fileName);
    void raylib_UnloadAutomationEventList(raylib_AutomationEventList list);
    _Bool raylib_ExportAutomationEventList(raylib_AutomationEventList list, const char *fileName);
    void raylib_SetAutomationEventList(raylib_AutomationEventList *list);
    void raylib_SetAutomationEventBaseFrame(int frame);
    void raylib_StartAutomationEventRecording(void);
    void raylib_StopAutomationEventRecording(void);
    void raylib_PlayAutomationEvent(raylib_AutomationEvent event);
    _Bool raylib_IsKeyPressed(int key);
    _Bool raylib_IsKeyPressedRepeat(int key);
    _Bool raylib_IsKeyDown(int key);
    _Bool raylib_IsKeyReleased(int key);
    _Bool raylib_IsKeyUp(int key);
    int raylib_GetKeyPressed(void);
    int raylib_GetCharPressed(void);
    void raylib_SetExitKey(int key);
    _Bool raylib_IsGamepadAvailable(int gamepad);
    const char *raylib_GetGamepadName(int gamepad);
    _Bool raylib_IsGamepadButtonPressed(int gamepad, int button);
    _Bool raylib_IsGamepadButtonDown(int gamepad, int button);
    _Bool raylib_IsGamepadButtonReleased(int gamepad, int button);
    _Bool raylib_IsGamepadButtonUp(int gamepad, int button);
    int raylib_GetGamepadButtonPressed(void);
    int raylib_GetGamepadAxisCount(int gamepad);
    float raylib_GetGamepadAxisMovement(int gamepad, int axis);
    int raylib_SetGamepadMappings(const char *mappings);
    void raylib_SetGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration);
    _Bool raylib_IsMouseButtonPressed(int button);
    _Bool raylib_IsMouseButtonDown(int button);
    _Bool raylib_IsMouseButtonReleased(int button);
    _Bool raylib_IsMouseButtonUp(int button);
    int raylib_GetMouseX(void);
    int raylib_GetMouseY(void);
    raylib_Vector2 raylib_GetMousePosition(void);
    raylib_Vector2 raylib_GetMouseDelta(void);
    void raylib_SetMousePosition(int x, int y);
    void raylib_SetMouseOffset(int offsetX, int offsetY);
    void raylib_SetMouseScale(float scaleX, float scaleY);
    float raylib_GetMouseWheelMove(void);
    raylib_Vector2 raylib_GetMouseWheelMoveV(void);
    void raylib_SetMouseCursor(int cursor);
    int raylib_GetTouchX(void);
    int raylib_GetTouchY(void);
    raylib_Vector2 raylib_GetTouchPosition(int index);
    int raylib_GetTouchPointId(int index);
    int raylib_GetTouchPointCount(void);
    void raylib_SetGesturesEnabled(unsigned int flags);
    _Bool raylib_IsGestureDetected(unsigned int gesture);
    int raylib_GetGestureDetected(void);
    float raylib_GetGestureHoldDuration(void);
    raylib_Vector2 raylib_GetGestureDragVector(void);
    float raylib_GetGestureDragAngle(void);
    raylib_Vector2 raylib_GetGesturePinchVector(void);
    float raylib_GetGesturePinchAngle(void);
    void raylib_UpdateCamera(raylib_Camera *camera, int mode);
    void raylib_UpdateCameraPro(raylib_Camera *camera, raylib_Vector3 movement, raylib_Vector3 rotation, float zoom);
    void raylib_SetShapesTexture(raylib_Texture2D texture, raylib_Rectangle source);
    raylib_Texture2D raylib_GetShapesTexture(void);
    raylib_Rectangle raylib_GetShapesTextureRectangle(void);
    void raylib_DrawPixel(int posX, int posY, raylib_Color color);
    void raylib_DrawPixelV(raylib_Vector2 position, raylib_Color color);
    void raylib_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, raylib_Color color);
    void raylib_DrawLineV(raylib_Vector2 startPos, raylib_Vector2 endPos, raylib_Color color);
    void raylib_DrawLineEx(raylib_Vector2 startPos, raylib_Vector2 endPos, float thick, raylib_Color color);
    void raylib_DrawLineStrip(const raylib_Vector2 *points, int pointCount, raylib_Color color);
    void raylib_DrawLineBezier(raylib_Vector2 startPos, raylib_Vector2 endPos, float thick, raylib_Color color);
    void raylib_DrawCircle(int centerX, int centerY, float radius, raylib_Color color);
    void raylib_DrawCircleSector(raylib_Vector2 center, float radius, float startAngle, float endAngle, int segments, raylib_Color color);
    void raylib_DrawCircleSectorLines(raylib_Vector2 center, float radius, float startAngle, float endAngle, int segments, raylib_Color color);
    void raylib_DrawCircleGradient(int centerX, int centerY, float radius, raylib_Color inner, raylib_Color outer);
    void raylib_DrawCircleV(raylib_Vector2 center, float radius, raylib_Color color);
    void raylib_DrawCircleLines(int centerX, int centerY, float radius, raylib_Color color);
    void raylib_DrawCircleLinesV(raylib_Vector2 center, float radius, raylib_Color color);
    void raylib_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, raylib_Color color);
    void raylib_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, raylib_Color color);
    void raylib_DrawRing(raylib_Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, raylib_Color color);
    void raylib_DrawRingLines(raylib_Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, raylib_Color color);
    void raylib_DrawRectangle(int posX, int posY, int width, int height, raylib_Color color);
    void raylib_DrawRectangleV(raylib_Vector2 position, raylib_Vector2 size, raylib_Color color);
    void raylib_DrawRectangleRec(raylib_Rectangle rec, raylib_Color color);
    void raylib_DrawRectanglePro(raylib_Rectangle rec, raylib_Vector2 origin, float rotation, raylib_Color color);
    void raylib_DrawRectangleGradientV(int posX, int posY, int width, int height, raylib_Color top, raylib_Color bottom);
    void raylib_DrawRectangleGradientH(int posX, int posY, int width, int height, raylib_Color left, raylib_Color right);
    void raylib_DrawRectangleGradientEx(raylib_Rectangle rec, raylib_Color topLeft, raylib_Color bottomLeft, raylib_Color topRight, raylib_Color bottomRight);
    void raylib_DrawRectangleLines(int posX, int posY, int width, int height, raylib_Color color);
    void raylib_DrawRectangleLinesEx(raylib_Rectangle rec, float lineThick, raylib_Color color);
    void raylib_DrawRectangleRounded(raylib_Rectangle rec, float roundness, int segments, raylib_Color color);
    void raylib_DrawRectangleRoundedLines(raylib_Rectangle rec, float roundness, int segments, raylib_Color color);
    void raylib_DrawRectangleRoundedLinesEx(raylib_Rectangle rec, float roundness, int segments, float lineThick, raylib_Color color);
    void raylib_DrawTriangle(raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color);
    void raylib_DrawTriangleLines(raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color);
    void raylib_DrawTriangleFan(const raylib_Vector2 *points, int pointCount, raylib_Color color);
    void raylib_DrawTriangleStrip(const raylib_Vector2 *points, int pointCount, raylib_Color color);
    void raylib_DrawPoly(raylib_Vector2 center, int sides, float radius, float rotation, raylib_Color color);
    void raylib_DrawPolyLines(raylib_Vector2 center, int sides, float radius, float rotation, raylib_Color color);
    void raylib_DrawPolyLinesEx(raylib_Vector2 center, int sides, float radius, float rotation, float lineThick, raylib_Color color);
    void raylib_DrawSplineLinear(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color);
    void raylib_DrawSplineBasis(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color);
    void raylib_DrawSplineCatmullRom(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color);
    void raylib_DrawSplineBezierQuadratic(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color);
    void raylib_DrawSplineBezierCubic(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color);
    void raylib_DrawSplineSegmentLinear(raylib_Vector2 p1, raylib_Vector2 p2, float thick, raylib_Color color);
    void raylib_DrawSplineSegmentBasis(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float thick, raylib_Color color);
    void raylib_DrawSplineSegmentCatmullRom(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float thick, raylib_Color color);
    void raylib_DrawSplineSegmentBezierQuadratic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 p3, float thick, raylib_Color color);
    void raylib_DrawSplineSegmentBezierCubic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 c3, raylib_Vector2 p4, float thick, raylib_Color color);
    raylib_Vector2 raylib_GetSplinePointLinear(raylib_Vector2 startPos, raylib_Vector2 endPos, float t);
    raylib_Vector2 raylib_GetSplinePointBasis(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float t);
    raylib_Vector2 raylib_GetSplinePointCatmullRom(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float t);
    raylib_Vector2 raylib_GetSplinePointBezierQuad(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 p3, float t);
    raylib_Vector2 raylib_GetSplinePointBezierCubic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 c3, raylib_Vector2 p4, float t);
    _Bool raylib_CheckCollisionRecs(raylib_Rectangle rec1, raylib_Rectangle rec2);
    _Bool raylib_CheckCollisionCircles(raylib_Vector2 center1, float radius1, raylib_Vector2 center2, float radius2);
    _Bool raylib_CheckCollisionCircleRec(raylib_Vector2 center, float radius, raylib_Rectangle rec);
    _Bool raylib_CheckCollisionCircleLine(raylib_Vector2 center, float radius, raylib_Vector2 p1, raylib_Vector2 p2);
    _Bool raylib_CheckCollisionPointRec(raylib_Vector2 point, raylib_Rectangle rec);
    _Bool raylib_CheckCollisionPointCircle(raylib_Vector2 point, raylib_Vector2 center, float radius);
    _Bool raylib_CheckCollisionPointTriangle(raylib_Vector2 point, raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3);
    _Bool raylib_CheckCollisionPointLine(raylib_Vector2 point, raylib_Vector2 p1, raylib_Vector2 p2, int threshold);
    _Bool raylib_CheckCollisionPointPoly(raylib_Vector2 point, const raylib_Vector2 *points, int pointCount);
    _Bool raylib_CheckCollisionLines(raylib_Vector2 startPos1, raylib_Vector2 endPos1, raylib_Vector2 startPos2, raylib_Vector2 endPos2, raylib_Vector2 *collisionPoint);
    raylib_Rectangle raylib_GetCollisionRec(raylib_Rectangle rec1, raylib_Rectangle rec2);
    raylib_Image raylib_LoadImage(const char *fileName);
    raylib_Image raylib_LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize);
    raylib_Image raylib_LoadImageAnim(const char *fileName, int *frames);
    raylib_Image raylib_LoadImageAnimFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int *frames);
    raylib_Image raylib_LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize);
    raylib_Image raylib_LoadImageFromTexture(raylib_Texture2D texture);
    raylib_Image raylib_LoadImageFromScreen(void);
    _Bool raylib_IsImageValid(raylib_Image image);
    void raylib_UnloadImage(raylib_Image image);
    _Bool raylib_ExportImage(raylib_Image image, const char *fileName);
    unsigned char *raylib_ExportImageToMemory(raylib_Image image, const char *fileType, int *fileSize);
    _Bool raylib_ExportImageAsCode(raylib_Image image, const char *fileName);
    raylib_Image raylib_GenImageColor(int width, int height, raylib_Color color);
    raylib_Image raylib_GenImageGradientLinear(int width, int height, int direction, raylib_Color start, raylib_Color end);
    raylib_Image raylib_GenImageGradientRadial(int width, int height, float density, raylib_Color inner, raylib_Color outer);
    raylib_Image raylib_GenImageGradientSquare(int width, int height, float density, raylib_Color inner, raylib_Color outer);
    raylib_Image raylib_GenImageChecked(int width, int height, int checksX, int checksY, raylib_Color col1, raylib_Color col2);
    raylib_Image raylib_GenImageWhiteNoise(int width, int height, float factor);
    raylib_Image raylib_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale);
    raylib_Image raylib_GenImageCellular(int width, int height, int tileSize);
    raylib_Image raylib_GenImageText(int width, int height, const char *text);
    raylib_Image raylib_ImageCopy(raylib_Image image);
    raylib_Image raylib_ImageFromImage(raylib_Image image, raylib_Rectangle rec);
    raylib_Image raylib_ImageFromChannel(raylib_Image image, int selectedChannel);
    raylib_Image raylib_ImageText(const char *text, int fontSize, raylib_Color color);
    raylib_Image raylib_ImageTextEx(raylib_Font font, const char *text, float fontSize, float spacing, raylib_Color tint);
    void raylib_ImageFormat(raylib_Image *image, int newFormat);
    void raylib_ImageToPOT(raylib_Image *image, raylib_Color fill);
    void raylib_ImageCrop(raylib_Image *image, raylib_Rectangle crop);
    void raylib_ImageAlphaCrop(raylib_Image *image, float threshold);
    void raylib_ImageAlphaClear(raylib_Image *image, raylib_Color color, float threshold);
    void raylib_ImageAlphaMask(raylib_Image *image, raylib_Image alphaMask);
    void raylib_ImageAlphaPremultiply(raylib_Image *image);
    void raylib_ImageBlurGaussian(raylib_Image *image, int blurSize);
    void raylib_ImageKernelConvolution(raylib_Image *image, const float *kernel, int kernelSize);
    void raylib_ImageResize(raylib_Image *image, int newWidth, int newHeight);
    void raylib_ImageResizeNN(raylib_Image *image, int newWidth, int newHeight);
    void raylib_ImageResizeCanvas(raylib_Image *image, int newWidth, int newHeight, int offsetX, int offsetY, raylib_Color fill);
    void raylib_ImageMipmaps(raylib_Image *image);
    void raylib_ImageDither(raylib_Image *image, int rBpp, int gBpp, int bBpp, int aBpp);
    void raylib_ImageFlipVertical(raylib_Image *image);
    void raylib_ImageFlipHorizontal(raylib_Image *image);
    void raylib_ImageRotate(raylib_Image *image, int degrees);
    void raylib_ImageRotateCW(raylib_Image *image);
    void raylib_ImageRotateCCW(raylib_Image *image);
    void raylib_ImageColorTint(raylib_Image *image, raylib_Color color);
    void raylib_ImageColorInvert(raylib_Image *image);
    void raylib_ImageColorGrayscale(raylib_Image *image);
    void raylib_ImageColorContrast(raylib_Image *image, float contrast);
    void raylib_ImageColorBrightness(raylib_Image *image, int brightness);
    void raylib_ImageColorReplace(raylib_Image *image, raylib_Color color, raylib_Color replace);
    raylib_Color *raylib_LoadImageColors(raylib_Image image);
    raylib_Color *raylib_LoadImagePalette(raylib_Image image, int maxPaletteSize, int *colorCount);
    void raylib_UnloadImageColors(raylib_Color *colors);
    void raylib_UnloadImagePalette(raylib_Color *colors);
    raylib_Rectangle raylib_GetImageAlphaBorder(raylib_Image image, float threshold);
    raylib_Color raylib_GetImageColor(raylib_Image image, int x, int y);
    void raylib_ImageClearBackground(raylib_Image *dst, raylib_Color color);
    void raylib_ImageDrawPixel(raylib_Image *dst, int posX, int posY, raylib_Color color);
    void raylib_ImageDrawPixelV(raylib_Image *dst, raylib_Vector2 position, raylib_Color color);
    void raylib_ImageDrawLine(raylib_Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, raylib_Color color);
    void raylib_ImageDrawLineV(raylib_Image *dst, raylib_Vector2 start, raylib_Vector2 end, raylib_Color color);
    void raylib_ImageDrawLineEx(raylib_Image *dst, raylib_Vector2 start, raylib_Vector2 end, int thick, raylib_Color color);
    void raylib_ImageDrawCircle(raylib_Image *dst, int centerX, int centerY, int radius, raylib_Color color);
    void raylib_ImageDrawCircleV(raylib_Image *dst, raylib_Vector2 center, int radius, raylib_Color color);
    void raylib_ImageDrawCircleLines(raylib_Image *dst, int centerX, int centerY, int radius, raylib_Color color);
    void raylib_ImageDrawCircleLinesV(raylib_Image *dst, raylib_Vector2 center, int radius, raylib_Color color);
    void raylib_ImageDrawRectangle(raylib_Image *dst, int posX, int posY, int width, int height, raylib_Color color);
    void raylib_ImageDrawRectangleV(raylib_Image *dst, raylib_Vector2 position, raylib_Vector2 size, raylib_Color color);
    void raylib_ImageDrawRectangleRec(raylib_Image *dst, raylib_Rectangle rec, raylib_Color color);
    void raylib_ImageDrawRectangleLines(raylib_Image *dst, raylib_Rectangle rec, int thick, raylib_Color color);
    void raylib_ImageDrawTriangle(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color);
    void raylib_ImageDrawTriangleEx(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color c1, raylib_Color c2, raylib_Color c3);
    void raylib_ImageDrawTriangleLines(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color);
    void raylib_ImageDrawTriangleFan(raylib_Image *dst, raylib_Vector2 *points, int pointCount, raylib_Color color);
    void raylib_ImageDrawTriangleStrip(raylib_Image *dst, raylib_Vector2 *points, int pointCount, raylib_Color color);
    void raylib_ImageDraw(raylib_Image *dst, raylib_Image src, raylib_Rectangle srcRec, raylib_Rectangle dstRec, raylib_Color tint);
    void raylib_ImageDrawText(raylib_Image *dst, const char *text, int posX, int posY, int fontSize, raylib_Color color);
    void raylib_ImageDrawTextEx(raylib_Image *dst, raylib_Font font, const char *text, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint);
    raylib_Texture2D raylib_LoadTexture(const char *fileName);
    raylib_Texture2D raylib_LoadTextureFromImage(raylib_Image image);
    raylib_TextureCubemap raylib_LoadTextureCubemap(raylib_Image image, int layout);
    raylib_RenderTexture2D raylib_LoadRenderTexture(int width, int height);
    _Bool raylib_IsTextureValid(raylib_Texture2D texture);
    void raylib_UnloadTexture(raylib_Texture2D texture);
    _Bool raylib_IsRenderTextureValid(raylib_RenderTexture2D target);
    void raylib_UnloadRenderTexture(raylib_RenderTexture2D target);
    void raylib_UpdateTexture(raylib_Texture2D texture, const void *pixels);
    void raylib_UpdateTextureRec(raylib_Texture2D texture, raylib_Rectangle rec, const void *pixels);
    void raylib_GenTextureMipmaps(raylib_Texture2D *texture);
    void raylib_SetTextureFilter(raylib_Texture2D texture, int filter);
    void raylib_SetTextureWrap(raylib_Texture2D texture, int wrap);
    void raylib_DrawTexture(raylib_Texture2D texture, int posX, int posY, raylib_Color tint);
    void raylib_DrawTextureV(raylib_Texture2D texture, raylib_Vector2 position, raylib_Color tint);
    void raylib_DrawTextureEx(raylib_Texture2D texture, raylib_Vector2 position, float rotation, float scale, raylib_Color tint);
    void raylib_DrawTextureRec(raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector2 position, raylib_Color tint);
    void raylib_DrawTexturePro(raylib_Texture2D texture, raylib_Rectangle source, raylib_Rectangle dest, raylib_Vector2 origin, float rotation, raylib_Color tint);
    void raylib_DrawTextureNPatch(raylib_Texture2D texture, raylib_NPatchInfo nPatchInfo, raylib_Rectangle dest, raylib_Vector2 origin, float rotation, raylib_Color tint);
    _Bool raylib_ColorIsEqual(raylib_Color col1, raylib_Color col2);
    raylib_Color raylib_Fade(raylib_Color color, float alpha);
    int raylib_ColorToInt(raylib_Color color);
    raylib_Vector4 raylib_ColorNormalize(raylib_Color color);
    raylib_Color raylib_ColorFromNormalized(raylib_Vector4 normalized);
    raylib_Vector3 raylib_ColorToHSV(raylib_Color color);
    raylib_Color raylib_ColorFromHSV(float hue, float saturation, float value);
    raylib_Color raylib_ColorTint(raylib_Color color, raylib_Color tint);
    raylib_Color raylib_ColorBrightness(raylib_Color color, float factor);
    raylib_Color raylib_ColorContrast(raylib_Color color, float contrast);
    raylib_Color raylib_ColorAlpha(raylib_Color color, float alpha);
    raylib_Color raylib_ColorAlphaBlend(raylib_Color dst, raylib_Color src, raylib_Color tint);
    raylib_Color raylib_ColorLerp(raylib_Color color1, raylib_Color color2, float factor);
    raylib_Color raylib_GetColor(unsigned int hexValue);
    raylib_Color raylib_GetPixelColor(void *srcPtr, int format);
    void raylib_SetPixelColor(void *dstPtr, raylib_Color color, int format);
    int raylib_GetPixelDataSize(int width, int height, int format);
    raylib_Font raylib_GetFontDefault(void);
    raylib_Font raylib_LoadFont(const char *fileName);
    raylib_Font raylib_LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount);
    raylib_Font raylib_LoadFontFromImage(raylib_Image image, raylib_Color key, int firstChar);
    raylib_Font raylib_LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount);
    _Bool raylib_IsFontValid(raylib_Font font);
    raylib_GlyphInfo *raylib_LoadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount, int type);
    raylib_Image raylib_GenImageFontAtlas(const raylib_GlyphInfo *glyphs, raylib_Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod);
    void raylib_UnloadFontData(raylib_GlyphInfo *glyphs, int glyphCount);
    void raylib_UnloadFont(raylib_Font font);
    _Bool raylib_ExportFontAsCode(raylib_Font font, const char *fileName);
    void raylib_DrawFPS(int posX, int posY);
    void raylib_DrawText(const char *text, int posX, int posY, int fontSize, raylib_Color color);
    void raylib_DrawTextEx(raylib_Font font, const char *text, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint);
    void raylib_DrawTextPro(raylib_Font font, const char *text, raylib_Vector2 position, raylib_Vector2 origin, float rotation, float fontSize, float spacing, raylib_Color tint);
    void raylib_DrawTextCodepoint(raylib_Font font, int codepoint, raylib_Vector2 position, float fontSize, raylib_Color tint);
    void raylib_DrawTextCodepoints(raylib_Font font, const int *codepoints, int codepointCount, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint);
    void raylib_SetTextLineSpacing(int spacing);
    int raylib_MeasureText(const char *text, int fontSize);
    raylib_Vector2 raylib_MeasureTextEx(raylib_Font font, const char *text, float fontSize, float spacing);
    int raylib_GetGlyphIndex(raylib_Font font, int codepoint);
    raylib_GlyphInfo raylib_GetGlyphInfo(raylib_Font font, int codepoint);
    raylib_Rectangle raylib_GetGlyphAtlasRec(raylib_Font font, int codepoint);
    char *raylib_LoadUTF8(const int *codepoints, int length);
    void raylib_UnloadUTF8(char *text);
    int *raylib_LoadCodepoints(const char *text, int *count);
    void raylib_UnloadCodepoints(int *codepoints);
    int raylib_GetCodepointCount(const char *text);
    int raylib_GetCodepoint(const char *text, int *codepointSize);
    int raylib_GetCodepointNext(const char *text, int *codepointSize);
    int raylib_GetCodepointPrevious(const char *text, int *codepointSize);
    const char *raylib_CodepointToUTF8(int codepoint, int *utf8Size);
    int raylib_TextCopy(char *dst, const char *src);
    _Bool raylib_TextIsEqual(const char *text1, const char *text2);
    unsigned int raylib_TextLength(const char *text);
    const char *raylib_TextSubtext(const char *text, int position, int length);
    char *raylib_TextReplace(const char *text, const char *replace, const char *by);
    char *raylib_TextInsert(const char *text, const char *insert, int position);
    const char *raylib_TextJoin(const char **textList, int count, const char *delimiter);
    const char **raylib_TextSplit(const char *text, char delimiter, int *count);
    void raylib_TextAppend(char *text, const char *append, int *position);
    int raylib_TextFindIndex(const char *text, const char *find);
    const char *raylib_TextToUpper(const char *text);
    const char *raylib_TextToLower(const char *text);
    const char *raylib_TextToPascal(const char *text);
    const char *raylib_TextToSnake(const char *text);
    const char *raylib_TextToCamel(const char *text);
    int raylib_TextToInteger(const char *text);
    float raylib_TextToFloat(const char *text);
    void raylib_DrawLine3D(raylib_Vector3 startPos, raylib_Vector3 endPos, raylib_Color color);
    void raylib_DrawPoint3D(raylib_Vector3 position, raylib_Color color);
    void raylib_DrawCircle3D(raylib_Vector3 center, float radius, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Color color);
    void raylib_DrawTriangle3D(raylib_Vector3 v1, raylib_Vector3 v2, raylib_Vector3 v3, raylib_Color color);
    void raylib_DrawTriangleStrip3D(const raylib_Vector3 *points, int pointCount, raylib_Color color);
    void raylib_DrawCube(raylib_Vector3 position, float width, float height, float length, raylib_Color color);
    void raylib_DrawCubeV(raylib_Vector3 position, raylib_Vector3 size, raylib_Color color);
    void raylib_DrawCubeWires(raylib_Vector3 position, float width, float height, float length, raylib_Color color);
    void raylib_DrawCubeWiresV(raylib_Vector3 position, raylib_Vector3 size, raylib_Color color);
    void raylib_DrawSphere(raylib_Vector3 centerPos, float radius, raylib_Color color);
    void raylib_DrawSphereEx(raylib_Vector3 centerPos, float radius, int rings, int slices, raylib_Color color);
    void raylib_DrawSphereWires(raylib_Vector3 centerPos, float radius, int rings, int slices, raylib_Color color);
    void raylib_DrawCylinder(raylib_Vector3 position, float radiusTop, float radiusBottom, float height, int slices, raylib_Color color);
    void raylib_DrawCylinderEx(raylib_Vector3 startPos, raylib_Vector3 endPos, float startRadius, float endRadius, int sides, raylib_Color color);
    void raylib_DrawCylinderWires(raylib_Vector3 position, float radiusTop, float radiusBottom, float height, int slices, raylib_Color color);
    void raylib_DrawCylinderWiresEx(raylib_Vector3 startPos, raylib_Vector3 endPos, float startRadius, float endRadius, int sides, raylib_Color color);
    void raylib_DrawCapsule(raylib_Vector3 startPos, raylib_Vector3 endPos, float radius, int slices, int rings, raylib_Color color);
    void raylib_DrawCapsuleWires(raylib_Vector3 startPos, raylib_Vector3 endPos, float radius, int slices, int rings, raylib_Color color);
    void raylib_DrawPlane(raylib_Vector3 centerPos, raylib_Vector2 size, raylib_Color color);
    void raylib_DrawRay(raylib_Ray ray, raylib_Color color);
    void raylib_DrawGrid(int slices, float spacing);
    raylib_Model raylib_LoadModel(const char *fileName);
    raylib_Model raylib_LoadModelFromMesh(raylib_Mesh mesh);
    _Bool raylib_IsModelValid(raylib_Model model);
    void raylib_UnloadModel(raylib_Model model);
    raylib_BoundingBox raylib_GetModelBoundingBox(raylib_Model model);
    void raylib_DrawModel(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint);
    void raylib_DrawModelEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint);
    void raylib_DrawModelWires(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint);
    void raylib_DrawModelWiresEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint);
    void raylib_DrawModelPoints(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint);
    void raylib_DrawModelPointsEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint);
    void raylib_DrawBoundingBox(raylib_BoundingBox box, raylib_Color color);
    void raylib_DrawBillboard(raylib_Camera camera, raylib_Texture2D texture, raylib_Vector3 position, float scale, raylib_Color tint);
    void raylib_DrawBillboardRec(raylib_Camera camera, raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector3 position, raylib_Vector2 size, raylib_Color tint);
    void raylib_DrawBillboardPro(raylib_Camera camera, raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector3 position, raylib_Vector3 up, raylib_Vector2 size, raylib_Vector2 origin, float rotation, raylib_Color tint);
    void raylib_UploadMesh(raylib_Mesh *mesh, _Bool dynamic);
    void raylib_UpdateMeshBuffer(raylib_Mesh mesh, int index, const void *data, int dataSize, int offset);
    void raylib_UnloadMesh(raylib_Mesh mesh);
    void raylib_DrawMesh(raylib_Mesh mesh, raylib_Material material, raylib_Matrix transform);
    void raylib_DrawMeshInstanced(raylib_Mesh mesh, raylib_Material material, const raylib_Matrix *transforms, int instances);
    raylib_BoundingBox raylib_GetMeshBoundingBox(raylib_Mesh mesh);
    void raylib_GenMeshTangents(raylib_Mesh *mesh);
    _Bool raylib_ExportMesh(raylib_Mesh mesh, const char *fileName);
    _Bool raylib_ExportMeshAsCode(raylib_Mesh mesh, const char *fileName);
    raylib_Mesh raylib_GenMeshPoly(int sides, float radius);
    raylib_Mesh raylib_GenMeshPlane(float width, float length, int resX, int resZ);
    raylib_Mesh raylib_GenMeshCube(float width, float height, float length);
    raylib_Mesh raylib_GenMeshSphere(float radius, int rings, int slices);
    raylib_Mesh raylib_GenMeshHemiSphere(float radius, int rings, int slices);
    raylib_Mesh raylib_GenMeshCylinder(float radius, float height, int slices);
    raylib_Mesh raylib_GenMeshCone(float radius, float height, int slices);
    raylib_Mesh raylib_GenMeshTorus(float radius, float size, int radSeg, int sides);
    raylib_Mesh raylib_GenMeshKnot(float radius, float size, int radSeg, int sides);
    raylib_Mesh raylib_GenMeshHeightmap(raylib_Image heightmap, raylib_Vector3 size);
    raylib_Mesh raylib_GenMeshCubicmap(raylib_Image cubicmap, raylib_Vector3 cubeSize);
    raylib_Material *raylib_LoadMaterials(const char *fileName, int *materialCount);
    raylib_Material raylib_LoadMaterialDefault(void);
    _Bool raylib_IsMaterialValid(raylib_Material material);
    void raylib_UnloadMaterial(raylib_Material material);
    void raylib_SetMaterialTexture(raylib_Material *material, int mapType, raylib_Texture2D texture);
    void raylib_SetModelMeshMaterial(raylib_Model *model, int meshId, int materialId);
    raylib_ModelAnimation *raylib_LoadModelAnimations(const char *fileName, int *animCount);
    void raylib_UpdateModelAnimation(raylib_Model model, raylib_ModelAnimation anim, int frame);
    void raylib_UpdateModelAnimationBones(raylib_Model model, raylib_ModelAnimation anim, int frame);
    void raylib_UnloadModelAnimation(raylib_ModelAnimation anim);
    void raylib_UnloadModelAnimations(raylib_ModelAnimation *animations, int animCount);
    _Bool raylib_IsModelAnimationValid(raylib_Model model, raylib_ModelAnimation anim);
    _Bool raylib_CheckCollisionSpheres(raylib_Vector3 center1, float radius1, raylib_Vector3 center2, float radius2);
    _Bool raylib_CheckCollisionBoxes(raylib_BoundingBox box1, raylib_BoundingBox box2);
    _Bool raylib_CheckCollisionBoxSphere(raylib_BoundingBox box, raylib_Vector3 center, float radius);
    raylib_RayCollision raylib_GetRayCollisionSphere(raylib_Ray ray, raylib_Vector3 center, float radius);
    raylib_RayCollision raylib_GetRayCollisionBox(raylib_Ray ray, raylib_BoundingBox box);
    raylib_RayCollision raylib_GetRayCollisionMesh(raylib_Ray ray, raylib_Mesh mesh, raylib_Matrix transform);
    raylib_RayCollision raylib_GetRayCollisionTriangle(raylib_Ray ray, raylib_Vector3 p1, raylib_Vector3 p2, raylib_Vector3 p3);
    raylib_RayCollision raylib_GetRayCollisionQuad(raylib_Ray ray, raylib_Vector3 p1, raylib_Vector3 p2, raylib_Vector3 p3, raylib_Vector3 p4);
    void raylib_InitAudioDevice(void);
    void raylib_CloseAudioDevice(void);
    _Bool raylib_IsAudioDeviceReady(void);
    void raylib_SetMasterVolume(float volume);
    float raylib_GetMasterVolume(void);
    raylib_Wave raylib_LoadWave(const char *fileName);
    raylib_Wave raylib_LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize);
    _Bool raylib_IsWaveValid(raylib_Wave wave);
    raylib_Sound raylib_LoadSound(const char *fileName);
    raylib_Sound raylib_LoadSoundFromWave(raylib_Wave wave);
    raylib_Sound raylib_LoadSoundAlias(raylib_Sound source);
    _Bool raylib_IsSoundValid(raylib_Sound sound);
    void raylib_UpdateSound(raylib_Sound sound, const void *data, int sampleCount);
    void raylib_UnloadWave(raylib_Wave wave);
    void raylib_UnloadSound(raylib_Sound sound);
    void raylib_UnloadSoundAlias(raylib_Sound alias);
    _Bool raylib_ExportWave(raylib_Wave wave, const char *fileName);
    _Bool raylib_ExportWaveAsCode(raylib_Wave wave, const char *fileName);
    void raylib_PlaySound(raylib_Sound sound);
    void raylib_StopSound(raylib_Sound sound);
    void raylib_PauseSound(raylib_Sound sound);
    void raylib_ResumeSound(raylib_Sound sound);
    _Bool raylib_IsSoundPlaying(raylib_Sound sound);
    void raylib_SetSoundVolume(raylib_Sound sound, float volume);
    void raylib_SetSoundPitch(raylib_Sound sound, float pitch);
    void raylib_SetSoundPan(raylib_Sound sound, float pan);
    raylib_Wave raylib_WaveCopy(raylib_Wave wave);
    void raylib_WaveCrop(raylib_Wave *wave, int initFrame, int finalFrame);
    void raylib_WaveFormat(raylib_Wave *wave, int sampleRate, int sampleSize, int channels);
    float *raylib_LoadWaveSamples(raylib_Wave wave);
    void raylib_UnloadWaveSamples(float *samples);
    raylib_Music raylib_LoadMusicStream(const char *fileName);
    raylib_Music raylib_LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize);
    _Bool raylib_IsMusicValid(raylib_Music music);
    void raylib_UnloadMusicStream(raylib_Music music);
    void raylib_PlayMusicStream(raylib_Music music);
    _Bool raylib_IsMusicStreamPlaying(raylib_Music music);
    void raylib_UpdateMusicStream(raylib_Music music);
    void raylib_StopMusicStream(raylib_Music music);
    void raylib_PauseMusicStream(raylib_Music music);
    void raylib_ResumeMusicStream(raylib_Music music);
    void raylib_SeekMusicStream(raylib_Music music, float position);
    void raylib_SetMusicVolume(raylib_Music music, float volume);
    void raylib_SetMusicPitch(raylib_Music music, float pitch);
    void raylib_SetMusicPan(raylib_Music music, float pan);
    float raylib_GetMusicTimeLength(raylib_Music music);
    float raylib_GetMusicTimePlayed(raylib_Music music);
    raylib_AudioStream raylib_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels);
    _Bool raylib_IsAudioStreamValid(raylib_AudioStream stream);
    void raylib_UnloadAudioStream(raylib_AudioStream stream);
    void raylib_UpdateAudioStream(raylib_AudioStream stream, const void *data, int frameCount);
    _Bool raylib_IsAudioStreamProcessed(raylib_AudioStream stream);
    void raylib_PlayAudioStream(raylib_AudioStream stream);
    void raylib_PauseAudioStream(raylib_AudioStream stream);
    void raylib_ResumeAudioStream(raylib_AudioStream stream);
    _Bool raylib_IsAudioStreamPlaying(raylib_AudioStream stream);
    void raylib_StopAudioStream(raylib_AudioStream stream);
    void raylib_SetAudioStreamVolume(raylib_AudioStream stream, float volume);
    void raylib_SetAudioStreamPitch(raylib_AudioStream stream, float pitch);
    void raylib_SetAudioStreamPan(raylib_AudioStream stream, float pan);
    void raylib_SetAudioStreamBufferSizeDefault(int size);
    void raylib_SetAudioStreamCallback(raylib_AudioStream stream, raylib_AudioCallback callback);
    void raylib_AttachAudioStreamProcessor(raylib_AudioStream stream, raylib_AudioCallback processor);
    void raylib_DetachAudioStreamProcessor(raylib_AudioStream stream, raylib_AudioCallback processor);
    void raylib_AttachAudioMixedProcessor(raylib_AudioCallback processor);
    void raylib_DetachAudioMixedProcessor(raylib_AudioCallback processor);

#ifdef __cplusplus
}
#endif
