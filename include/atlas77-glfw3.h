#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    typedef void (*glfw_glproc)(void);
    typedef void (*glfw_vkproc)(void);
    typedef struct glfw_monitor glfw_monitor;
    typedef struct glfw_window glfw_window;
    typedef struct glfw_cursor glfw_cursor;
    typedef void *(*glfw_allocatefun)(size_t size, void *user);
    typedef void *(*glfw_reallocatefun)(void *block, size_t size, void *user);
    typedef void (*glfw_deallocatefun)(void *block, void *user);
    typedef void (*glfw_errorfun)(int error_code, const char *description);
    typedef void (*glfw_windowposfun)(glfw_window *window, int xpos, int ypos);
    typedef void (*glfw_windowsizefun)(glfw_window *window, int width, int height);
    typedef void (*glfw_windowclosefun)(glfw_window *window);
    typedef void (*glfw_windowrefreshfun)(glfw_window *window);
    typedef void (*glfw_windowfocusfun)(glfw_window *window, int focused);
    typedef void (*glfw_windowiconifyfun)(glfw_window *window, int iconified);
    typedef void (*glfw_windowmaximizefun)(glfw_window *window, int maximized);
    typedef void (*glfw_framebuffersizefun)(glfw_window *window, int width, int height);
    typedef void (*glfw_windowcontentscalefun)(glfw_window *window, float xscale, float yscale);
    typedef void (*glfw_mousebuttonfun)(glfw_window *window, int button, int action, int mods);
    typedef void (*glfw_cursorposfun)(glfw_window *window, double xpos, double ypos);
    typedef void (*glfw_cursorenterfun)(glfw_window *window, int entered);
    typedef void (*glfw_scrollfun)(glfw_window *window, double xoffset, double yoffset);
    typedef void (*glfw_keyfun)(glfw_window *window, int key, int scancode, int action, int mods);
    typedef void (*glfw_charfun)(glfw_window *window, unsigned int codepoint);
    typedef void (*glfw_charmodsfun)(glfw_window *window, unsigned int codepoint, int mods);
    typedef void (*glfw_dropfun)(glfw_window *window, int path_count, const char *paths[]);
    typedef void (*glfw_monitorfun)(glfw_monitor *monitor, int event);
    typedef void (*glfw_joystickfun)(int jid, int event);
    typedef struct glfw_vidmode
    {
        int width;
        int height;
        int redBits;
        int greenBits;
        int blueBits;
        int refreshRate;
    } glfw_vidmode;

    typedef struct glfw_gammaramp
    {
        unsigned short *red;
        unsigned short *green;
        unsigned short *blue;
        unsigned int size;
    } glfw_gammaramp;

    typedef struct glfw_image
    {
        int width;
        int height;
        unsigned char *pixels;
    } glfw_image;

    typedef struct glfw_gamepadstate
    {
        unsigned char buttons[15];
        float axes[6];
    } glfw_gamepadstate;

    typedef struct glfw_allocator
    {
        glfw_allocatefun allocate;
        glfw_reallocatefun reallocate;
        glfw_deallocatefun deallocate;
        void *user;
    } glfw_allocator;

    int glfw_Init(void);
    void glfw_Terminate(void);
    void glfw_InitHint(int hint, int value);
    void glfw_InitAllocator(const glfw_allocator *allocator);
    void glfw_GetVersion(int *major, int *minor, int *rev);
    const char *glfw_GetVersionString(void);
    int glfw_GetError(const char **description);
    glfw_errorfun glfw_SetErrorCallback(glfw_errorfun callback);
    int glfw_GetPlatform(void);
    int glfw_PlatformSupported(int platform);
    glfw_monitor **glfw_GetMonitors(int *count);
    glfw_monitor *glfw_GetPrimaryMonitor(void);
    void glfw_GetMonitorPos(glfw_monitor *monitor, int *xpos, int *ypos);
    void glfw_GetMonitorWorkarea(glfw_monitor *monitor, int *xpos, int *ypos, int *width, int *height);
    void glfw_GetMonitorPhysicalSize(glfw_monitor *monitor, int *widthMM, int *heightMM);
    void glfw_GetMonitorContentScale(glfw_monitor *monitor, float *xscale, float *yscale);
    const char *glfw_GetMonitorName(glfw_monitor *monitor);
    void glfw_SetMonitorUserPointer(glfw_monitor *monitor, void *pointer);
    void *glfw_GetMonitorUserPointer(glfw_monitor *monitor);
    glfw_monitorfun glfw_SetMonitorCallback(glfw_monitorfun callback);
    const glfw_vidmode *glfw_GetVideoModes(glfw_monitor *monitor, int *count);
    const glfw_vidmode *glfw_GetVideoMode(glfw_monitor *monitor);
    void glfw_SetGamma(glfw_monitor *monitor, float gamma);
    const glfw_gammaramp *glfw_GetGammaRamp(glfw_monitor *monitor);
    void glfw_SetGammaRamp(glfw_monitor *monitor, const glfw_gammaramp *ramp);
    void glfw_DefaultWindowHints(void);
    void glfw_WindowHint(int hint, int value);
    void glfw_WindowHintString(int hint, const char *value);
    glfw_window *glfw_CreateWindow(int width, int height, const char *title, glfw_monitor *monitor, glfw_window *share);
    void glfw_DestroyWindow(glfw_window *window);
    int glfw_WindowShouldClose(glfw_window *window);
    void glfw_SetWindowShouldClose(glfw_window *window, int value);
    const char *glfw_GetWindowTitle(glfw_window *window);
    void glfw_SetWindowTitle(glfw_window *window, const char *title);
    void glfw_SetWindowIcon(glfw_window *window, int count, const glfw_image *images);
    void glfw_GetWindowPos(glfw_window *window, int *xpos, int *ypos);
    void glfw_SetWindowPos(glfw_window *window, int xpos, int ypos);
    void glfw_GetWindowSize(glfw_window *window, int *width, int *height);
    void glfw_SetWindowSizeLimits(glfw_window *window, int minwidth, int minheight, int maxwidth, int maxheight);
    void glfw_SetWindowAspectRatio(glfw_window *window, int numer, int denom);
    void glfw_SetWindowSize(glfw_window *window, int width, int height);
    void glfw_GetFramebufferSize(glfw_window *window, int *width, int *height);
    void glfw_GetWindowFrameSize(glfw_window *window, int *left, int *top, int *right, int *bottom);
    void glfw_GetWindowContentScale(glfw_window *window, float *xscale, float *yscale);
    float glfw_GetWindowOpacity(glfw_window *window);
    void glfw_SetWindowOpacity(glfw_window *window, float opacity);
    void glfw_IconifyWindow(glfw_window *window);
    void glfw_RestoreWindow(glfw_window *window);
    void glfw_MaximizeWindow(glfw_window *window);
    void glfw_ShowWindow(glfw_window *window);
    void glfw_HideWindow(glfw_window *window);
    void glfw_FocusWindow(glfw_window *window);
    void glfw_RequestWindowAttention(glfw_window *window);
    glfw_monitor *glfw_GetWindowMonitor(glfw_window *window);
    void glfw_SetWindowMonitor(glfw_window *window, glfw_monitor *monitor, int xpos, int ypos, int width, int height, int refreshRate);
    int glfw_GetWindowAttrib(glfw_window *window, int attrib);
    void glfw_SetWindowAttrib(glfw_window *window, int attrib, int value);
    void glfw_SetWindowUserPointer(glfw_window *window, void *pointer);
    void *glfw_GetWindowUserPointer(glfw_window *window);
    glfw_windowposfun glfw_SetWindowPosCallback(glfw_window *window, glfw_windowposfun callback);
    glfw_windowsizefun glfw_SetWindowSizeCallback(glfw_window *window, glfw_windowsizefun callback);
    glfw_windowclosefun glfw_SetWindowCloseCallback(glfw_window *window, glfw_windowclosefun callback);
    glfw_windowrefreshfun glfw_SetWindowRefreshCallback(glfw_window *window, glfw_windowrefreshfun callback);
    glfw_windowfocusfun glfw_SetWindowFocusCallback(glfw_window *window, glfw_windowfocusfun callback);
    glfw_windowiconifyfun glfw_SetWindowIconifyCallback(glfw_window *window, glfw_windowiconifyfun callback);
    glfw_windowmaximizefun glfw_SetWindowMaximizeCallback(glfw_window *window, glfw_windowmaximizefun callback);
    glfw_framebuffersizefun glfw_SetFramebufferSizeCallback(glfw_window *window, glfw_framebuffersizefun callback);
    glfw_windowcontentscalefun glfw_SetWindowContentScaleCallback(glfw_window *window, glfw_windowcontentscalefun callback);
    void glfw_PollEvents(void);
    void glfw_WaitEvents(void);
    void glfw_WaitEventsTimeout(double timeout);
    void glfw_PostEmptyEvent(void);
    int glfw_GetInputMode(glfw_window *window, int mode);
    void glfw_SetInputMode(glfw_window *window, int mode, int value);
    int glfw_RawMouseMotionSupported(void);
    const char *glfw_GetKeyName(int key, int scancode);
    int glfw_GetKeyScancode(int key);
    int glfw_GetKey(glfw_window *window, int key);
    int glfw_GetMouseButton(glfw_window *window, int button);
    void glfw_GetCursorPos(glfw_window *window, double *xpos, double *ypos);
    void glfw_SetCursorPos(glfw_window *window, double xpos, double ypos);
    glfw_cursor *glfw_CreateCursor(const glfw_image *image, int xhot, int yhot);
    glfw_cursor *glfw_CreateStandardCursor(int shape);
    void glfw_DestroyCursor(glfw_cursor *cursor);
    void glfw_SetCursor(glfw_window *window, glfw_cursor *cursor);
    glfw_keyfun glfw_SetKeyCallback(glfw_window *window, glfw_keyfun callback);
    glfw_charfun glfw_SetCharCallback(glfw_window *window, glfw_charfun callback);
    glfw_charmodsfun glfw_SetCharModsCallback(glfw_window *window, glfw_charmodsfun callback);
    glfw_mousebuttonfun glfw_SetMouseButtonCallback(glfw_window *window, glfw_mousebuttonfun callback);
    glfw_cursorposfun glfw_SetCursorPosCallback(glfw_window *window, glfw_cursorposfun callback);
    glfw_cursorenterfun glfw_SetCursorEnterCallback(glfw_window *window, glfw_cursorenterfun callback);
    glfw_scrollfun glfw_SetScrollCallback(glfw_window *window, glfw_scrollfun callback);
    glfw_dropfun glfw_SetDropCallback(glfw_window *window, glfw_dropfun callback);
    int glfw_JoystickPresent(int jid);
    const float *glfw_GetJoystickAxes(int jid, int *count);
    const unsigned char *glfw_GetJoystickButtons(int jid, int *count);
    const unsigned char *glfw_GetJoystickHats(int jid, int *count);
    const char *glfw_GetJoystickName(int jid);
    const char *glfw_GetJoystickGUID(int jid);
    void glfw_SetJoystickUserPointer(int jid, void *pointer);
    void *glfw_GetJoystickUserPointer(int jid);
    int glfw_JoystickIsGamepad(int jid);
    glfw_joystickfun glfw_SetJoystickCallback(glfw_joystickfun callback);
    int glfw_UpdateGamepadMappings(const char *string);
    const char *glfw_GetGamepadName(int jid);
    int glfw_GetGamepadState(int jid, glfw_gamepadstate *state);
    void glfw_SetClipboardString(glfw_window *window, const char *string);
    const char *glfw_GetClipboardString(glfw_window *window);
    double glfw_GetTime(void);
    void glfw_SetTime(double time);
    uint64_t glfw_GetTimerValue(void);
    uint64_t glfw_GetTimerFrequency(void);
    void glfw_MakeContextCurrent(glfw_window *window);
    glfw_window *glfw_GetCurrentContext(void);
    void glfw_SwapBuffers(glfw_window *window);
    void glfw_SwapInterval(int interval);
    int glfw_ExtensionSupported(const char *extension);
    glfw_glproc glfw_GetProcAddress(const char *procname);
    int glfw_VulkanSupported(void);
    const char **glfw_GetRequiredInstanceExtensions(uint32_t *count);

#ifdef __cplusplus
}
#endif
