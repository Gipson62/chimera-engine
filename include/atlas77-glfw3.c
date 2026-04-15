#include "glfw3.h"
#include "atlas77-glfw3.h"

int glfw_Init(void)
{
    return glfwInit();
}

void glfw_Terminate(void)
{
    glfwTerminate();
}

void glfw_InitHint(int hint, int value)
{
    glfwInitHint(hint, value);
}

void glfw_InitAllocator(const glfw_allocator *allocator)
{
    glfwInitAllocator((GLFWallocator *)allocator);
}

void glfw_GetVersion(int *major, int *minor, int *rev)
{
    glfwGetVersion(major, minor, rev);
}

const char *glfw_GetVersionString(void)
{
    return glfwGetVersionString();
}

int glfw_GetError(const char **description)
{
    return glfwGetError(description);
}

glfw_errorfun glfw_SetErrorCallback(glfw_errorfun callback)
{
    return ((union { glfw_errorfun ns; GLFWerrorfun vd; }){.vd = glfwSetErrorCallback(((union { glfw_errorfun ns; GLFWerrorfun vd; }){.ns = callback}).vd)}).ns;
}

int glfw_GetPlatform(void)
{
    return glfwGetPlatform();
}

int glfw_PlatformSupported(int platform)
{
    return glfwPlatformSupported(platform);
}

glfw_monitor **glfw_GetMonitors(int *count)
{
    return (glfw_monitor **)(glfwGetMonitors(count));
}

glfw_monitor *glfw_GetPrimaryMonitor(void)
{
    return (glfw_monitor *)(glfwGetPrimaryMonitor());
}

void glfw_GetMonitorPos(glfw_monitor *monitor, int *xpos, int *ypos)
{
    glfwGetMonitorPos((GLFWmonitor *)monitor, xpos, ypos);
}

void glfw_GetMonitorWorkarea(glfw_monitor *monitor, int *xpos, int *ypos, int *width, int *height)
{
    glfwGetMonitorWorkarea((GLFWmonitor *)monitor, xpos, ypos, width, height);
}

void glfw_GetMonitorPhysicalSize(glfw_monitor *monitor, int *widthMM, int *heightMM)
{
    glfwGetMonitorPhysicalSize((GLFWmonitor *)monitor, widthMM, heightMM);
}

void glfw_GetMonitorContentScale(glfw_monitor *monitor, float *xscale, float *yscale)
{
    glfwGetMonitorContentScale((GLFWmonitor *)monitor, xscale, yscale);
}

const char *glfw_GetMonitorName(glfw_monitor *monitor)
{
    return glfwGetMonitorName((GLFWmonitor *)monitor);
}

void glfw_SetMonitorUserPointer(glfw_monitor *monitor, void *pointer)
{
    glfwSetMonitorUserPointer((GLFWmonitor *)monitor, pointer);
}

void *glfw_GetMonitorUserPointer(glfw_monitor *monitor)
{
    return glfwGetMonitorUserPointer((GLFWmonitor *)monitor);
}

glfw_monitorfun glfw_SetMonitorCallback(glfw_monitorfun callback)
{
    return ((union { glfw_monitorfun ns; GLFWmonitorfun vd; }){.vd = glfwSetMonitorCallback(((union { glfw_monitorfun ns; GLFWmonitorfun vd; }){.ns = callback}).vd)}).ns;
}

const glfw_vidmode *glfw_GetVideoModes(glfw_monitor *monitor, int *count)
{
    return (glfw_vidmode *)(glfwGetVideoModes((GLFWmonitor *)monitor, count));
}

const glfw_vidmode *glfw_GetVideoMode(glfw_monitor *monitor)
{
    return (glfw_vidmode *)(glfwGetVideoMode((GLFWmonitor *)monitor));
}

void glfw_SetGamma(glfw_monitor *monitor, float gamma)
{
    glfwSetGamma((GLFWmonitor *)monitor, gamma);
}

const glfw_gammaramp *glfw_GetGammaRamp(glfw_monitor *monitor)
{
    return (glfw_gammaramp *)(glfwGetGammaRamp((GLFWmonitor *)monitor));
}

void glfw_SetGammaRamp(glfw_monitor *monitor, const glfw_gammaramp *ramp)
{
    glfwSetGammaRamp((GLFWmonitor *)monitor, (GLFWgammaramp *)ramp);
}

void glfw_DefaultWindowHints(void)
{
    glfwDefaultWindowHints();
}

void glfw_WindowHint(int hint, int value)
{
    glfwWindowHint(hint, value);
}

void glfw_WindowHintString(int hint, const char *value)
{
    glfwWindowHintString(hint, value);
}

glfw_window *glfw_CreateWindow(int width, int height, const char *title, glfw_monitor *monitor, glfw_window *share)
{
    return (glfw_window *)(glfwCreateWindow(width, height, title, (GLFWmonitor *)monitor, (GLFWwindow *)share));
}

void glfw_DestroyWindow(glfw_window *window)
{
    glfwDestroyWindow((GLFWwindow *)window);
}

int glfw_WindowShouldClose(glfw_window *window)
{
    return glfwWindowShouldClose((GLFWwindow *)window);
}

void glfw_SetWindowShouldClose(glfw_window *window, int value)
{
    glfwSetWindowShouldClose((GLFWwindow *)window, value);
}

const char *glfw_GetWindowTitle(glfw_window *window)
{
    return glfwGetWindowTitle((GLFWwindow *)window);
}

void glfw_SetWindowTitle(glfw_window *window, const char *title)
{
    glfwSetWindowTitle((GLFWwindow *)window, title);
}

void glfw_SetWindowIcon(glfw_window *window, int count, const glfw_image *images)
{
    glfwSetWindowIcon((GLFWwindow *)window, count, (GLFWimage *)images);
}

void glfw_GetWindowPos(glfw_window *window, int *xpos, int *ypos)
{
    glfwGetWindowPos((GLFWwindow *)window, xpos, ypos);
}

void glfw_SetWindowPos(glfw_window *window, int xpos, int ypos)
{
    glfwSetWindowPos((GLFWwindow *)window, xpos, ypos);
}

void glfw_GetWindowSize(glfw_window *window, int *width, int *height)
{
    glfwGetWindowSize((GLFWwindow *)window, width, height);
}

void glfw_SetWindowSizeLimits(glfw_window *window, int minwidth, int minheight, int maxwidth, int maxheight)
{
    glfwSetWindowSizeLimits((GLFWwindow *)window, minwidth, minheight, maxwidth, maxheight);
}

void glfw_SetWindowAspectRatio(glfw_window *window, int numer, int denom)
{
    glfwSetWindowAspectRatio((GLFWwindow *)window, numer, denom);
}

void glfw_SetWindowSize(glfw_window *window, int width, int height)
{
    glfwSetWindowSize((GLFWwindow *)window, width, height);
}

void glfw_GetFramebufferSize(glfw_window *window, int *width, int *height)
{
    glfwGetFramebufferSize((GLFWwindow *)window, width, height);
}

void glfw_GetWindowFrameSize(glfw_window *window, int *left, int *top, int *right, int *bottom)
{
    glfwGetWindowFrameSize((GLFWwindow *)window, left, top, right, bottom);
}

void glfw_GetWindowContentScale(glfw_window *window, float *xscale, float *yscale)
{
    glfwGetWindowContentScale((GLFWwindow *)window, xscale, yscale);
}

float glfw_GetWindowOpacity(glfw_window *window)
{
    return glfwGetWindowOpacity((GLFWwindow *)window);
}

void glfw_SetWindowOpacity(glfw_window *window, float opacity)
{
    glfwSetWindowOpacity((GLFWwindow *)window, opacity);
}

void glfw_IconifyWindow(glfw_window *window)
{
    glfwIconifyWindow((GLFWwindow *)window);
}

void glfw_RestoreWindow(glfw_window *window)
{
    glfwRestoreWindow((GLFWwindow *)window);
}

void glfw_MaximizeWindow(glfw_window *window)
{
    glfwMaximizeWindow((GLFWwindow *)window);
}

void glfw_ShowWindow(glfw_window *window)
{
    glfwShowWindow((GLFWwindow *)window);
}

void glfw_HideWindow(glfw_window *window)
{
    glfwHideWindow((GLFWwindow *)window);
}

void glfw_FocusWindow(glfw_window *window)
{
    glfwFocusWindow((GLFWwindow *)window);
}

void glfw_RequestWindowAttention(glfw_window *window)
{
    glfwRequestWindowAttention((GLFWwindow *)window);
}

glfw_monitor *glfw_GetWindowMonitor(glfw_window *window)
{
    return (glfw_monitor *)(glfwGetWindowMonitor((GLFWwindow *)window));
}

void glfw_SetWindowMonitor(glfw_window *window, glfw_monitor *monitor, int xpos, int ypos, int width, int height, int refreshRate)
{
    glfwSetWindowMonitor((GLFWwindow *)window, (GLFWmonitor *)monitor, xpos, ypos, width, height, refreshRate);
}

int glfw_GetWindowAttrib(glfw_window *window, int attrib)
{
    return glfwGetWindowAttrib((GLFWwindow *)window, attrib);
}

void glfw_SetWindowAttrib(glfw_window *window, int attrib, int value)
{
    glfwSetWindowAttrib((GLFWwindow *)window, attrib, value);
}

void glfw_SetWindowUserPointer(glfw_window *window, void *pointer)
{
    glfwSetWindowUserPointer((GLFWwindow *)window, pointer);
}

void *glfw_GetWindowUserPointer(glfw_window *window)
{
    return glfwGetWindowUserPointer((GLFWwindow *)window);
}

glfw_windowposfun glfw_SetWindowPosCallback(glfw_window *window, glfw_windowposfun callback)
{
    return ((union { glfw_windowposfun ns; GLFWwindowposfun vd; }){.vd = glfwSetWindowPosCallback((GLFWwindow *)window, ((union { glfw_windowposfun ns; GLFWwindowposfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowsizefun glfw_SetWindowSizeCallback(glfw_window *window, glfw_windowsizefun callback)
{
    return ((union { glfw_windowsizefun ns; GLFWwindowsizefun vd; }){.vd = glfwSetWindowSizeCallback((GLFWwindow *)window, ((union { glfw_windowsizefun ns; GLFWwindowsizefun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowclosefun glfw_SetWindowCloseCallback(glfw_window *window, glfw_windowclosefun callback)
{
    return ((union { glfw_windowclosefun ns; GLFWwindowclosefun vd; }){.vd = glfwSetWindowCloseCallback((GLFWwindow *)window, ((union { glfw_windowclosefun ns; GLFWwindowclosefun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowrefreshfun glfw_SetWindowRefreshCallback(glfw_window *window, glfw_windowrefreshfun callback)
{
    return ((union { glfw_windowrefreshfun ns; GLFWwindowrefreshfun vd; }){.vd = glfwSetWindowRefreshCallback((GLFWwindow *)window, ((union { glfw_windowrefreshfun ns; GLFWwindowrefreshfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowfocusfun glfw_SetWindowFocusCallback(glfw_window *window, glfw_windowfocusfun callback)
{
    return ((union { glfw_windowfocusfun ns; GLFWwindowfocusfun vd; }){.vd = glfwSetWindowFocusCallback((GLFWwindow *)window, ((union { glfw_windowfocusfun ns; GLFWwindowfocusfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowiconifyfun glfw_SetWindowIconifyCallback(glfw_window *window, glfw_windowiconifyfun callback)
{
    return ((union { glfw_windowiconifyfun ns; GLFWwindowiconifyfun vd; }){.vd = glfwSetWindowIconifyCallback((GLFWwindow *)window, ((union { glfw_windowiconifyfun ns; GLFWwindowiconifyfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowmaximizefun glfw_SetWindowMaximizeCallback(glfw_window *window, glfw_windowmaximizefun callback)
{
    return ((union { glfw_windowmaximizefun ns; GLFWwindowmaximizefun vd; }){.vd = glfwSetWindowMaximizeCallback((GLFWwindow *)window, ((union { glfw_windowmaximizefun ns; GLFWwindowmaximizefun vd; }){.ns = callback}).vd)}).ns;
}

glfw_framebuffersizefun glfw_SetFramebufferSizeCallback(glfw_window *window, glfw_framebuffersizefun callback)
{
    return ((union { glfw_framebuffersizefun ns; GLFWframebuffersizefun vd; }){.vd = glfwSetFramebufferSizeCallback((GLFWwindow *)window, ((union { glfw_framebuffersizefun ns; GLFWframebuffersizefun vd; }){.ns = callback}).vd)}).ns;
}

glfw_windowcontentscalefun glfw_SetWindowContentScaleCallback(glfw_window *window, glfw_windowcontentscalefun callback)
{
    return ((union { glfw_windowcontentscalefun ns; GLFWwindowcontentscalefun vd; }){.vd = glfwSetWindowContentScaleCallback((GLFWwindow *)window, ((union { glfw_windowcontentscalefun ns; GLFWwindowcontentscalefun vd; }){.ns = callback}).vd)}).ns;
}

void glfw_PollEvents(void)
{
    glfwPollEvents();
}

void glfw_WaitEvents(void)
{
    glfwWaitEvents();
}

void glfw_WaitEventsTimeout(double timeout)
{
    glfwWaitEventsTimeout(timeout);
}

void glfw_PostEmptyEvent(void)
{
    glfwPostEmptyEvent();
}

int glfw_GetInputMode(glfw_window *window, int mode)
{
    return glfwGetInputMode((GLFWwindow *)window, mode);
}

void glfw_SetInputMode(glfw_window *window, int mode, int value)
{
    glfwSetInputMode((GLFWwindow *)window, mode, value);
}

int glfw_RawMouseMotionSupported(void)
{
    return glfwRawMouseMotionSupported();
}

const char *glfw_GetKeyName(int key, int scancode)
{
    return glfwGetKeyName(key, scancode);
}

int glfw_GetKeyScancode(int key)
{
    return glfwGetKeyScancode(key);
}

int glfw_GetKey(glfw_window *window, int key)
{
    return glfwGetKey((GLFWwindow *)window, key);
}

int glfw_GetMouseButton(glfw_window *window, int button)
{
    return glfwGetMouseButton((GLFWwindow *)window, button);
}

void glfw_GetCursorPos(glfw_window *window, double *xpos, double *ypos)
{
    glfwGetCursorPos((GLFWwindow *)window, xpos, ypos);
}

void glfw_SetCursorPos(glfw_window *window, double xpos, double ypos)
{
    glfwSetCursorPos((GLFWwindow *)window, xpos, ypos);
}

glfw_cursor *glfw_CreateCursor(const glfw_image *image, int xhot, int yhot)
{
    return (glfw_cursor *)(glfwCreateCursor((GLFWimage *)image, xhot, yhot));
}

glfw_cursor *glfw_CreateStandardCursor(int shape)
{
    return (glfw_cursor *)(glfwCreateStandardCursor(shape));
}

void glfw_DestroyCursor(glfw_cursor *cursor)
{
    glfwDestroyCursor((GLFWcursor *)cursor);
}

void glfw_SetCursor(glfw_window *window, glfw_cursor *cursor)
{
    glfwSetCursor((GLFWwindow *)window, (GLFWcursor *)cursor);
}

glfw_keyfun glfw_SetKeyCallback(glfw_window *window, glfw_keyfun callback)
{
    return ((union { glfw_keyfun ns; GLFWkeyfun vd; }){.vd = glfwSetKeyCallback((GLFWwindow *)window, ((union { glfw_keyfun ns; GLFWkeyfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_charfun glfw_SetCharCallback(glfw_window *window, glfw_charfun callback)
{
    return ((union { glfw_charfun ns; GLFWcharfun vd; }){.vd = glfwSetCharCallback((GLFWwindow *)window, ((union { glfw_charfun ns; GLFWcharfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_charmodsfun glfw_SetCharModsCallback(glfw_window *window, glfw_charmodsfun callback)
{
    return ((union { glfw_charmodsfun ns; GLFWcharmodsfun vd; }){.vd = glfwSetCharModsCallback((GLFWwindow *)window, ((union { glfw_charmodsfun ns; GLFWcharmodsfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_mousebuttonfun glfw_SetMouseButtonCallback(glfw_window *window, glfw_mousebuttonfun callback)
{
    return ((union { glfw_mousebuttonfun ns; GLFWmousebuttonfun vd; }){.vd = glfwSetMouseButtonCallback((GLFWwindow *)window, ((union { glfw_mousebuttonfun ns; GLFWmousebuttonfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_cursorposfun glfw_SetCursorPosCallback(glfw_window *window, glfw_cursorposfun callback)
{
    return ((union { glfw_cursorposfun ns; GLFWcursorposfun vd; }){.vd = glfwSetCursorPosCallback((GLFWwindow *)window, ((union { glfw_cursorposfun ns; GLFWcursorposfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_cursorenterfun glfw_SetCursorEnterCallback(glfw_window *window, glfw_cursorenterfun callback)
{
    return ((union { glfw_cursorenterfun ns; GLFWcursorenterfun vd; }){.vd = glfwSetCursorEnterCallback((GLFWwindow *)window, ((union { glfw_cursorenterfun ns; GLFWcursorenterfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_scrollfun glfw_SetScrollCallback(glfw_window *window, glfw_scrollfun callback)
{
    return ((union { glfw_scrollfun ns; GLFWscrollfun vd; }){.vd = glfwSetScrollCallback((GLFWwindow *)window, ((union { glfw_scrollfun ns; GLFWscrollfun vd; }){.ns = callback}).vd)}).ns;
}

glfw_dropfun glfw_SetDropCallback(glfw_window *window, glfw_dropfun callback)
{
    return ((union { glfw_dropfun ns; GLFWdropfun vd; }){.vd = glfwSetDropCallback((GLFWwindow *)window, ((union { glfw_dropfun ns; GLFWdropfun vd; }){.ns = callback}).vd)}).ns;
}

int glfw_JoystickPresent(int jid)
{
    return glfwJoystickPresent(jid);
}

const float *glfw_GetJoystickAxes(int jid, int *count)
{
    return glfwGetJoystickAxes(jid, count);
}

const unsigned char *glfw_GetJoystickButtons(int jid, int *count)
{
    return glfwGetJoystickButtons(jid, count);
}

const unsigned char *glfw_GetJoystickHats(int jid, int *count)
{
    return glfwGetJoystickHats(jid, count);
}

const char *glfw_GetJoystickName(int jid)
{
    return glfwGetJoystickName(jid);
}

const char *glfw_GetJoystickGUID(int jid)
{
    return glfwGetJoystickGUID(jid);
}

void glfw_SetJoystickUserPointer(int jid, void *pointer)
{
    glfwSetJoystickUserPointer(jid, pointer);
}

void *glfw_GetJoystickUserPointer(int jid)
{
    return glfwGetJoystickUserPointer(jid);
}

int glfw_JoystickIsGamepad(int jid)
{
    return glfwJoystickIsGamepad(jid);
}

glfw_joystickfun glfw_SetJoystickCallback(glfw_joystickfun callback)
{
    return ((union { glfw_joystickfun ns; GLFWjoystickfun vd; }){.vd = glfwSetJoystickCallback(((union { glfw_joystickfun ns; GLFWjoystickfun vd; }){.ns = callback}).vd)}).ns;
}

int glfw_UpdateGamepadMappings(const char *string)
{
    return glfwUpdateGamepadMappings(string);
}

const char *glfw_GetGamepadName(int jid)
{
    return glfwGetGamepadName(jid);
}

int glfw_GetGamepadState(int jid, glfw_gamepadstate *state)
{
    return glfwGetGamepadState(jid, (GLFWgamepadstate *)state);
}

void glfw_SetClipboardString(glfw_window *window, const char *string)
{
    glfwSetClipboardString((GLFWwindow *)window, string);
}

const char *glfw_GetClipboardString(glfw_window *window)
{
    return glfwGetClipboardString((GLFWwindow *)window);
}

double glfw_GetTime(void)
{
    return glfwGetTime();
}

void glfw_SetTime(double time)
{
    glfwSetTime(time);
}

uint64_t glfw_GetTimerValue(void)
{
    return glfwGetTimerValue();
}

uint64_t glfw_GetTimerFrequency(void)
{
    return glfwGetTimerFrequency();
}

void glfw_MakeContextCurrent(glfw_window *window)
{
    glfwMakeContextCurrent((GLFWwindow *)window);
}

glfw_window *glfw_GetCurrentContext(void)
{
    return (glfw_window *)(glfwGetCurrentContext());
}

void glfw_SwapBuffers(glfw_window *window)
{
    glfwSwapBuffers((GLFWwindow *)window);
}

void glfw_SwapInterval(int interval)
{
    glfwSwapInterval(interval);
}

int glfw_ExtensionSupported(const char *extension)
{
    return glfwExtensionSupported(extension);
}

glfw_glproc glfw_GetProcAddress(const char *procname)
{
    return ((union { glfw_glproc ns; GLFWglproc vd; }){.vd = glfwGetProcAddress(procname)}).ns;
}

int glfw_VulkanSupported(void)
{
    return glfwVulkanSupported();
}

const char **glfw_GetRequiredInstanceExtensions(uint32_t *count)
{
    return glfwGetRequiredInstanceExtensions(count);
}
