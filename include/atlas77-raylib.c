#include "raylib.h"
#include "atlas77-raylib.h"

void raylib_InitWindow(int width, int height, const char *title) {
    InitWindow(width, height, title);
}

void raylib_CloseWindow(void) {
    CloseWindow();
}

_Bool raylib_WindowShouldClose(void) {
    return WindowShouldClose();
}

_Bool raylib_IsWindowReady(void) {
    return IsWindowReady();
}

_Bool raylib_IsWindowFullscreen(void) {
    return IsWindowFullscreen();
}

_Bool raylib_IsWindowHidden(void) {
    return IsWindowHidden();
}

_Bool raylib_IsWindowMinimized(void) {
    return IsWindowMinimized();
}

_Bool raylib_IsWindowMaximized(void) {
    return IsWindowMaximized();
}

_Bool raylib_IsWindowFocused(void) {
    return IsWindowFocused();
}

_Bool raylib_IsWindowResized(void) {
    return IsWindowResized();
}

_Bool raylib_IsWindowState(unsigned int flag) {
    return IsWindowState(flag);
}

void raylib_SetWindowState(unsigned int flags) {
    SetWindowState(flags);
}

void raylib_ClearWindowState(unsigned int flags) {
    ClearWindowState(flags);
}

void raylib_ToggleFullscreen(void) {
    ToggleFullscreen();
}

void raylib_ToggleBorderlessWindowed(void) {
    ToggleBorderlessWindowed();
}

void raylib_MaximizeWindow(void) {
    MaximizeWindow();
}

void raylib_MinimizeWindow(void) {
    MinimizeWindow();
}

void raylib_RestoreWindow(void) {
    RestoreWindow();
}

void raylib_SetWindowIcon(raylib_Image image) {
    SetWindowIcon(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd);
}

void raylib_SetWindowIcons(raylib_Image *images, int count) {
    SetWindowIcons((Image* )images, count);
}

void raylib_SetWindowTitle(const char *title) {
    SetWindowTitle(title);
}

void raylib_SetWindowPosition(int x, int y) {
    SetWindowPosition(x, y);
}

void raylib_SetWindowMonitor(int monitor) {
    SetWindowMonitor(monitor);
}

void raylib_SetWindowMinSize(int width, int height) {
    SetWindowMinSize(width, height);
}

void raylib_SetWindowMaxSize(int width, int height) {
    SetWindowMaxSize(width, height);
}

void raylib_SetWindowSize(int width, int height) {
    SetWindowSize(width, height);
}

void raylib_SetWindowOpacity(float opacity) {
    SetWindowOpacity(opacity);
}

void raylib_SetWindowFocused(void) {
    SetWindowFocused();
}

void *raylib_GetWindowHandle(void) {
    return GetWindowHandle();
}

int raylib_GetScreenWidth(void) {
    return GetScreenWidth();
}

int raylib_GetScreenHeight(void) {
    return GetScreenHeight();
}

int raylib_GetRenderWidth(void) {
    return GetRenderWidth();
}

int raylib_GetRenderHeight(void) {
    return GetRenderHeight();
}

int raylib_GetMonitorCount(void) {
    return GetMonitorCount();
}

int raylib_GetCurrentMonitor(void) {
    return GetCurrentMonitor();
}

raylib_Vector2 raylib_GetMonitorPosition(int monitor) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetMonitorPosition(monitor) }).ns;
}

int raylib_GetMonitorWidth(int monitor) {
    return GetMonitorWidth(monitor);
}

int raylib_GetMonitorHeight(int monitor) {
    return GetMonitorHeight(monitor);
}

int raylib_GetMonitorPhysicalWidth(int monitor) {
    return GetMonitorPhysicalWidth(monitor);
}

int raylib_GetMonitorPhysicalHeight(int monitor) {
    return GetMonitorPhysicalHeight(monitor);
}

int raylib_GetMonitorRefreshRate(int monitor) {
    return GetMonitorRefreshRate(monitor);
}

raylib_Vector2 raylib_GetWindowPosition(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetWindowPosition() }).ns;
}

raylib_Vector2 raylib_GetWindowScaleDPI(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetWindowScaleDPI() }).ns;
}

const char *raylib_GetMonitorName(int monitor) {
    return GetMonitorName(monitor);
}

void raylib_SetClipboardText(const char *text) {
    SetClipboardText(text);
}

const char *raylib_GetClipboardText(void) {
    return GetClipboardText();
}

raylib_Image raylib_GetClipboardImage(void) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GetClipboardImage() }).ns;
}

void raylib_EnableEventWaiting(void) {
    EnableEventWaiting();
}

void raylib_DisableEventWaiting(void) {
    DisableEventWaiting();
}

void raylib_ShowCursor(void) {
    ShowCursor();
}

void raylib_HideCursor(void) {
    HideCursor();
}

_Bool raylib_IsCursorHidden(void) {
    return IsCursorHidden();
}

void raylib_EnableCursor(void) {
    EnableCursor();
}

void raylib_DisableCursor(void) {
    DisableCursor();
}

_Bool raylib_IsCursorOnScreen(void) {
    return IsCursorOnScreen();
}

void raylib_ClearBackground(raylib_Color color) {
    ClearBackground(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_BeginDrawing(void) {
    BeginDrawing();
}

void raylib_EndDrawing(void) {
    EndDrawing();
}

void raylib_BeginMode2D(raylib_Camera2D camera) {
    BeginMode2D(((union { raylib_Camera2D ns; Camera2D vd; }){ .ns = camera }).vd);
}

void raylib_EndMode2D(void) {
    EndMode2D();
}

void raylib_BeginMode3D(raylib_Camera3D camera) {
    BeginMode3D(((union { raylib_Camera3D ns; Camera3D vd; }){ .ns = camera }).vd);
}

void raylib_EndMode3D(void) {
    EndMode3D();
}

void raylib_BeginTextureMode(raylib_RenderTexture2D target) {
    BeginTextureMode(((union { raylib_RenderTexture2D ns; RenderTexture2D vd; }){ .ns = target }).vd);
}

void raylib_EndTextureMode(void) {
    EndTextureMode();
}

void raylib_BeginShaderMode(raylib_Shader shader) {
    BeginShaderMode(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd);
}

void raylib_EndShaderMode(void) {
    EndShaderMode();
}

void raylib_BeginBlendMode(int mode) {
    BeginBlendMode(mode);
}

void raylib_EndBlendMode(void) {
    EndBlendMode();
}

void raylib_BeginScissorMode(int x, int y, int width, int height) {
    BeginScissorMode(x, y, width, height);
}

void raylib_EndScissorMode(void) {
    EndScissorMode();
}

void raylib_BeginVrStereoMode(raylib_VrStereoConfig config) {
    BeginVrStereoMode(((union { raylib_VrStereoConfig ns; VrStereoConfig vd; }){ .ns = config }).vd);
}

void raylib_EndVrStereoMode(void) {
    EndVrStereoMode();
}

raylib_VrStereoConfig raylib_LoadVrStereoConfig(raylib_VrDeviceInfo device) {
    return ((union { raylib_VrStereoConfig ns; VrStereoConfig vd; }){ .vd = LoadVrStereoConfig(((union { raylib_VrDeviceInfo ns; VrDeviceInfo vd; }){ .ns = device }).vd) }).ns;
}

void raylib_UnloadVrStereoConfig(raylib_VrStereoConfig config) {
    UnloadVrStereoConfig(((union { raylib_VrStereoConfig ns; VrStereoConfig vd; }){ .ns = config }).vd);
}

raylib_Shader raylib_LoadShader(const char *vsFileName, const char *fsFileName) {
    return ((union { raylib_Shader ns; Shader vd; }){ .vd = LoadShader(vsFileName, fsFileName) }).ns;
}

raylib_Shader raylib_LoadShaderFromMemory(const char *vsCode, const char *fsCode) {
    return ((union { raylib_Shader ns; Shader vd; }){ .vd = LoadShaderFromMemory(vsCode, fsCode) }).ns;
}

_Bool raylib_IsShaderValid(raylib_Shader shader) {
    return IsShaderValid(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd);
}

int raylib_GetShaderLocation(raylib_Shader shader, const char *uniformName) {
    return GetShaderLocation(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, uniformName);
}

int raylib_GetShaderLocationAttrib(raylib_Shader shader, const char *attribName) {
    return GetShaderLocationAttrib(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, attribName);
}

void raylib_SetShaderValue(raylib_Shader shader, int locIndex, const void *value, int uniformType) {
    SetShaderValue(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, locIndex, value, uniformType);
}

void raylib_SetShaderValueV(raylib_Shader shader, int locIndex, const void *value, int uniformType, int count) {
    SetShaderValueV(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, locIndex, value, uniformType, count);
}

void raylib_SetShaderValueMatrix(raylib_Shader shader, int locIndex, raylib_Matrix mat) {
    SetShaderValueMatrix(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, locIndex, ((union { raylib_Matrix ns; Matrix vd; }){ .ns = mat }).vd);
}

void raylib_SetShaderValueTexture(raylib_Shader shader, int locIndex, raylib_Texture2D texture) {
    SetShaderValueTexture(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd, locIndex, ((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd);
}

void raylib_UnloadShader(raylib_Shader shader) {
    UnloadShader(((union { raylib_Shader ns; Shader vd; }){ .ns = shader }).vd);
}

raylib_Ray raylib_GetScreenToWorldRay(raylib_Vector2 position, raylib_Camera camera) {
    return ((union { raylib_Ray ns; Ray vd; }){ .vd = GetScreenToWorldRay(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd) }).ns;
}

raylib_Ray raylib_GetScreenToWorldRayEx(raylib_Vector2 position, raylib_Camera camera, int width, int height) {
    return ((union { raylib_Ray ns; Ray vd; }){ .vd = GetScreenToWorldRayEx(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd, width, height) }).ns;
}

raylib_Vector2 raylib_GetWorldToScreen(raylib_Vector3 position, raylib_Camera camera) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetWorldToScreen(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd) }).ns;
}

raylib_Vector2 raylib_GetWorldToScreenEx(raylib_Vector3 position, raylib_Camera camera, int width, int height) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetWorldToScreenEx(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd, width, height) }).ns;
}

raylib_Vector2 raylib_GetWorldToScreen2D(raylib_Vector2 position, raylib_Camera2D camera) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetWorldToScreen2D(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Camera2D ns; Camera2D vd; }){ .ns = camera }).vd) }).ns;
}

raylib_Vector2 raylib_GetScreenToWorld2D(raylib_Vector2 position, raylib_Camera2D camera) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetScreenToWorld2D(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Camera2D ns; Camera2D vd; }){ .ns = camera }).vd) }).ns;
}

raylib_Matrix raylib_GetCameraMatrix(raylib_Camera camera) {
    return ((union { raylib_Matrix ns; Matrix vd; }){ .vd = GetCameraMatrix(((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd) }).ns;
}

raylib_Matrix raylib_GetCameraMatrix2D(raylib_Camera2D camera) {
    return ((union { raylib_Matrix ns; Matrix vd; }){ .vd = GetCameraMatrix2D(((union { raylib_Camera2D ns; Camera2D vd; }){ .ns = camera }).vd) }).ns;
}

void raylib_SetTargetFPS(int fps) {
    SetTargetFPS(fps);
}

float raylib_GetFrameTime(void) {
    return GetFrameTime();
}

double raylib_GetTime(void) {
    return GetTime();
}

int raylib_GetFPS(void) {
    return GetFPS();
}

void raylib_SwapScreenBuffer(void) {
    SwapScreenBuffer();
}

void raylib_PollInputEvents(void) {
    PollInputEvents();
}

void raylib_WaitTime(double seconds) {
    WaitTime(seconds);
}

void raylib_SetRandomSeed(unsigned int seed) {
    SetRandomSeed(seed);
}

int raylib_GetRandomValue(int min, int max) {
    return GetRandomValue(min, max);
}

int *raylib_LoadRandomSequence(unsigned int count, int min, int max) {
    return LoadRandomSequence(count, min, max);
}

void raylib_UnloadRandomSequence(int *sequence) {
    UnloadRandomSequence(sequence);
}

void raylib_TakeScreenshot(const char *fileName) {
    TakeScreenshot(fileName);
}

void raylib_SetConfigFlags(unsigned int flags) {
    SetConfigFlags(flags);
}

void raylib_OpenURL(const char *url) {
    OpenURL(url);
}

void raylib_SetTraceLogLevel(int logLevel) {
    SetTraceLogLevel(logLevel);
}

void *raylib_MemAlloc(unsigned int size) {
    return MemAlloc(size);
}

void *raylib_MemRealloc(void *ptr, unsigned int size) {
    return MemRealloc(ptr, size);
}

void raylib_MemFree(void *ptr) {
    MemFree(ptr);
}

void raylib_SetTraceLogCallback(raylib_TraceLogCallback callback) {
    SetTraceLogCallback(((union { raylib_TraceLogCallback ns; TraceLogCallback vd; }){ .ns = callback }).vd);
}

void raylib_SetLoadFileDataCallback(raylib_LoadFileDataCallback callback) {
    SetLoadFileDataCallback(((union { raylib_LoadFileDataCallback ns; LoadFileDataCallback vd; }){ .ns = callback }).vd);
}

void raylib_SetSaveFileDataCallback(raylib_SaveFileDataCallback callback) {
    SetSaveFileDataCallback(((union { raylib_SaveFileDataCallback ns; SaveFileDataCallback vd; }){ .ns = callback }).vd);
}

void raylib_SetLoadFileTextCallback(raylib_LoadFileTextCallback callback) {
    SetLoadFileTextCallback(((union { raylib_LoadFileTextCallback ns; LoadFileTextCallback vd; }){ .ns = callback }).vd);
}

void raylib_SetSaveFileTextCallback(raylib_SaveFileTextCallback callback) {
    SetSaveFileTextCallback(((union { raylib_SaveFileTextCallback ns; SaveFileTextCallback vd; }){ .ns = callback }).vd);
}

unsigned char *raylib_LoadFileData(const char *fileName, int *dataSize) {
    return LoadFileData(fileName, dataSize);
}

void raylib_UnloadFileData(unsigned char *data) {
    UnloadFileData(data);
}

_Bool raylib_SaveFileData(const char *fileName, void *data, int dataSize) {
    return SaveFileData(fileName, data, dataSize);
}

_Bool raylib_ExportDataAsCode(const unsigned char *data, int dataSize, const char *fileName) {
    return ExportDataAsCode(data, dataSize, fileName);
}

char *raylib_LoadFileText(const char *fileName) {
    return LoadFileText(fileName);
}

void raylib_UnloadFileText(char *text) {
    UnloadFileText(text);
}

_Bool raylib_SaveFileText(const char *fileName, char *text) {
    return SaveFileText(fileName, text);
}

_Bool raylib_FileExists(const char *fileName) {
    return FileExists(fileName);
}

_Bool raylib_DirectoryExists(const char *dirPath) {
    return DirectoryExists(dirPath);
}

_Bool raylib_IsFileExtension(const char *fileName, const char *ext) {
    return IsFileExtension(fileName, ext);
}

int raylib_GetFileLength(const char *fileName) {
    return GetFileLength(fileName);
}

const char *raylib_GetFileExtension(const char *fileName) {
    return GetFileExtension(fileName);
}

const char *raylib_GetFileName(const char *filePath) {
    return GetFileName(filePath);
}

const char *raylib_GetFileNameWithoutExt(const char *filePath) {
    return GetFileNameWithoutExt(filePath);
}

const char *raylib_GetDirectoryPath(const char *filePath) {
    return GetDirectoryPath(filePath);
}

const char *raylib_GetPrevDirectoryPath(const char *dirPath) {
    return GetPrevDirectoryPath(dirPath);
}

const char *raylib_GetWorkingDirectory(void) {
    return GetWorkingDirectory();
}

const char *raylib_GetApplicationDirectory(void) {
    return GetApplicationDirectory();
}

int raylib_MakeDirectory(const char *dirPath) {
    return MakeDirectory(dirPath);
}

_Bool raylib_ChangeDirectory(const char *dir) {
    return ChangeDirectory(dir);
}

_Bool raylib_IsPathFile(const char *path) {
    return IsPathFile(path);
}

_Bool raylib_IsFileNameValid(const char *fileName) {
    return IsFileNameValid(fileName);
}

raylib_FilePathList raylib_LoadDirectoryFiles(const char *dirPath) {
    return ((union { raylib_FilePathList ns; FilePathList vd; }){ .vd = LoadDirectoryFiles(dirPath) }).ns;
}

raylib_FilePathList raylib_LoadDirectoryFilesEx(const char *basePath, const char *filter, _Bool scanSubdirs) {
    return ((union { raylib_FilePathList ns; FilePathList vd; }){ .vd = LoadDirectoryFilesEx(basePath, filter, scanSubdirs) }).ns;
}

void raylib_UnloadDirectoryFiles(raylib_FilePathList files) {
    UnloadDirectoryFiles(((union { raylib_FilePathList ns; FilePathList vd; }){ .ns = files }).vd);
}

_Bool raylib_IsFileDropped(void) {
    return IsFileDropped();
}

raylib_FilePathList raylib_LoadDroppedFiles(void) {
    return ((union { raylib_FilePathList ns; FilePathList vd; }){ .vd = LoadDroppedFiles() }).ns;
}

void raylib_UnloadDroppedFiles(raylib_FilePathList files) {
    UnloadDroppedFiles(((union { raylib_FilePathList ns; FilePathList vd; }){ .ns = files }).vd);
}

long raylib_GetFileModTime(const char *fileName) {
    return GetFileModTime(fileName);
}

unsigned char *raylib_CompressData(const unsigned char *data, int dataSize, int *compDataSize) {
    return CompressData(data, dataSize, compDataSize);
}

unsigned char *raylib_DecompressData(const unsigned char *compData, int compDataSize, int *dataSize) {
    return DecompressData(compData, compDataSize, dataSize);
}

char *raylib_EncodeDataBase64(const unsigned char *data, int dataSize, int *outputSize) {
    return EncodeDataBase64(data, dataSize, outputSize);
}

unsigned char *raylib_DecodeDataBase64(const unsigned char *data, int *outputSize) {
    return DecodeDataBase64(data, outputSize);
}

unsigned int raylib_ComputeCRC32(unsigned char *data, int dataSize) {
    return ComputeCRC32(data, dataSize);
}

unsigned int *raylib_ComputeMD5(unsigned char *data, int dataSize) {
    return ComputeMD5(data, dataSize);
}

unsigned int *raylib_ComputeSHA1(unsigned char *data, int dataSize) {
    return ComputeSHA1(data, dataSize);
}

raylib_AutomationEventList raylib_LoadAutomationEventList(const char *fileName) {
    return ((union { raylib_AutomationEventList ns; AutomationEventList vd; }){ .vd = LoadAutomationEventList(fileName) }).ns;
}

void raylib_UnloadAutomationEventList(raylib_AutomationEventList list) {
    UnloadAutomationEventList(((union { raylib_AutomationEventList ns; AutomationEventList vd; }){ .ns = list }).vd);
}

_Bool raylib_ExportAutomationEventList(raylib_AutomationEventList list, const char *fileName) {
    return ExportAutomationEventList(((union { raylib_AutomationEventList ns; AutomationEventList vd; }){ .ns = list }).vd, fileName);
}

void raylib_SetAutomationEventList(raylib_AutomationEventList *list) {
    SetAutomationEventList((AutomationEventList* )list);
}

void raylib_SetAutomationEventBaseFrame(int frame) {
    SetAutomationEventBaseFrame(frame);
}

void raylib_StartAutomationEventRecording(void) {
    StartAutomationEventRecording();
}

void raylib_StopAutomationEventRecording(void) {
    StopAutomationEventRecording();
}

void raylib_PlayAutomationEvent(raylib_AutomationEvent event) {
    PlayAutomationEvent(((union { raylib_AutomationEvent ns; AutomationEvent vd; }){ .ns = event }).vd);
}

_Bool raylib_IsKeyPressed(int key) {
    return IsKeyPressed(key);
}

_Bool raylib_IsKeyPressedRepeat(int key) {
    return IsKeyPressedRepeat(key);
}

_Bool raylib_IsKeyDown(int key) {
    return IsKeyDown(key);
}

_Bool raylib_IsKeyReleased(int key) {
    return IsKeyReleased(key);
}

_Bool raylib_IsKeyUp(int key) {
    return IsKeyUp(key);
}

int raylib_GetKeyPressed(void) {
    return GetKeyPressed();
}

int raylib_GetCharPressed(void) {
    return GetCharPressed();
}

void raylib_SetExitKey(int key) {
    SetExitKey(key);
}

_Bool raylib_IsGamepadAvailable(int gamepad) {
    return IsGamepadAvailable(gamepad);
}

const char *raylib_GetGamepadName(int gamepad) {
    return GetGamepadName(gamepad);
}

_Bool raylib_IsGamepadButtonPressed(int gamepad, int button) {
    return IsGamepadButtonPressed(gamepad, button);
}

_Bool raylib_IsGamepadButtonDown(int gamepad, int button) {
    return IsGamepadButtonDown(gamepad, button);
}

_Bool raylib_IsGamepadButtonReleased(int gamepad, int button) {
    return IsGamepadButtonReleased(gamepad, button);
}

_Bool raylib_IsGamepadButtonUp(int gamepad, int button) {
    return IsGamepadButtonUp(gamepad, button);
}

int raylib_GetGamepadButtonPressed(void) {
    return GetGamepadButtonPressed();
}

int raylib_GetGamepadAxisCount(int gamepad) {
    return GetGamepadAxisCount(gamepad);
}

float raylib_GetGamepadAxisMovement(int gamepad, int axis) {
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib_SetGamepadMappings(const char *mappings) {
    return SetGamepadMappings(mappings);
}

void raylib_SetGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration) {
    SetGamepadVibration(gamepad, leftMotor, rightMotor, duration);
}

_Bool raylib_IsMouseButtonPressed(int button) {
    return IsMouseButtonPressed(button);
}

_Bool raylib_IsMouseButtonDown(int button) {
    return IsMouseButtonDown(button);
}

_Bool raylib_IsMouseButtonReleased(int button) {
    return IsMouseButtonReleased(button);
}

_Bool raylib_IsMouseButtonUp(int button) {
    return IsMouseButtonUp(button);
}

int raylib_GetMouseX(void) {
    return GetMouseX();
}

int raylib_GetMouseY(void) {
    return GetMouseY();
}

raylib_Vector2 raylib_GetMousePosition(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetMousePosition() }).ns;
}

raylib_Vector2 raylib_GetMouseDelta(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetMouseDelta() }).ns;
}

void raylib_SetMousePosition(int x, int y) {
    SetMousePosition(x, y);
}

void raylib_SetMouseOffset(int offsetX, int offsetY) {
    SetMouseOffset(offsetX, offsetY);
}

void raylib_SetMouseScale(float scaleX, float scaleY) {
    SetMouseScale(scaleX, scaleY);
}

float raylib_GetMouseWheelMove(void) {
    return GetMouseWheelMove();
}

raylib_Vector2 raylib_GetMouseWheelMoveV(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetMouseWheelMoveV() }).ns;
}

void raylib_SetMouseCursor(int cursor) {
    SetMouseCursor(cursor);
}

int raylib_GetTouchX(void) {
    return GetTouchX();
}

int raylib_GetTouchY(void) {
    return GetTouchY();
}

raylib_Vector2 raylib_GetTouchPosition(int index) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetTouchPosition(index) }).ns;
}

int raylib_GetTouchPointId(int index) {
    return GetTouchPointId(index);
}

int raylib_GetTouchPointCount(void) {
    return GetTouchPointCount();
}

void raylib_SetGesturesEnabled(unsigned int flags) {
    SetGesturesEnabled(flags);
}

_Bool raylib_IsGestureDetected(unsigned int gesture) {
    return IsGestureDetected(gesture);
}

int raylib_GetGestureDetected(void) {
    return GetGestureDetected();
}

float raylib_GetGestureHoldDuration(void) {
    return GetGestureHoldDuration();
}

raylib_Vector2 raylib_GetGestureDragVector(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetGestureDragVector() }).ns;
}

float raylib_GetGestureDragAngle(void) {
    return GetGestureDragAngle();
}

raylib_Vector2 raylib_GetGesturePinchVector(void) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetGesturePinchVector() }).ns;
}

float raylib_GetGesturePinchAngle(void) {
    return GetGesturePinchAngle();
}

void raylib_UpdateCamera(raylib_Camera *camera, int mode) {
    UpdateCamera((Camera* )camera, mode);
}

void raylib_UpdateCameraPro(raylib_Camera *camera, raylib_Vector3 movement, raylib_Vector3 rotation, float zoom) {
    UpdateCameraPro((Camera* )camera, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = movement }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = rotation }).vd, zoom);
}

void raylib_SetShapesTexture(raylib_Texture2D texture, raylib_Rectangle source) {
    SetShapesTexture(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = source }).vd);
}

raylib_Texture2D raylib_GetShapesTexture(void) {
    return ((union { raylib_Texture2D ns; Texture2D vd; }){ .vd = GetShapesTexture() }).ns;
}

raylib_Rectangle raylib_GetShapesTextureRectangle(void) {
    return ((union { raylib_Rectangle ns; Rectangle vd; }){ .vd = GetShapesTextureRectangle() }).ns;
}

void raylib_DrawPixel(int posX, int posY, raylib_Color color) {
    DrawPixel(posX, posY, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPixelV(raylib_Vector2 position, raylib_Color color) {
    DrawPixelV(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, raylib_Color color) {
    DrawLine(startPosX, startPosY, endPosX, endPosY, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawLineV(raylib_Vector2 startPos, raylib_Vector2 endPos, raylib_Color color) {
    DrawLineV(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawLineEx(raylib_Vector2 startPos, raylib_Vector2 endPos, float thick, raylib_Color color) {
    DrawLineEx(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawLineStrip(const raylib_Vector2 *points, int pointCount, raylib_Color color) {
    DrawLineStrip((Vector2* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawLineBezier(raylib_Vector2 startPos, raylib_Vector2 endPos, float thick, raylib_Color color) {
    DrawLineBezier(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircle(int centerX, int centerY, float radius, raylib_Color color) {
    DrawCircle(centerX, centerY, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircleSector(raylib_Vector2 center, float radius, float startAngle, float endAngle, int segments, raylib_Color color) {
    DrawCircleSector(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, startAngle, endAngle, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircleSectorLines(raylib_Vector2 center, float radius, float startAngle, float endAngle, int segments, raylib_Color color) {
    DrawCircleSectorLines(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, startAngle, endAngle, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircleGradient(int centerX, int centerY, float radius, raylib_Color inner, raylib_Color outer) {
    DrawCircleGradient(centerX, centerY, radius, ((union { raylib_Color ns; Color vd; }){ .ns = inner }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = outer }).vd);
}

void raylib_DrawCircleV(raylib_Vector2 center, float radius, raylib_Color color) {
    DrawCircleV(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircleLines(int centerX, int centerY, float radius, raylib_Color color) {
    DrawCircleLines(centerX, centerY, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircleLinesV(raylib_Vector2 center, float radius, raylib_Color color) {
    DrawCircleLinesV(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, raylib_Color color) {
    DrawEllipse(centerX, centerY, radiusH, radiusV, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, raylib_Color color) {
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRing(raylib_Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, raylib_Color color) {
    DrawRing(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, innerRadius, outerRadius, startAngle, endAngle, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRingLines(raylib_Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, raylib_Color color) {
    DrawRingLines(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, innerRadius, outerRadius, startAngle, endAngle, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangle(int posX, int posY, int width, int height, raylib_Color color) {
    DrawRectangle(posX, posY, width, height, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleV(raylib_Vector2 position, raylib_Vector2 size, raylib_Color color) {
    DrawRectangleV(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleRec(raylib_Rectangle rec, raylib_Color color) {
    DrawRectangleRec(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectanglePro(raylib_Rectangle rec, raylib_Vector2 origin, float rotation, raylib_Color color) {
    DrawRectanglePro(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = origin }).vd, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleGradientV(int posX, int posY, int width, int height, raylib_Color top, raylib_Color bottom) {
    DrawRectangleGradientV(posX, posY, width, height, ((union { raylib_Color ns; Color vd; }){ .ns = top }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = bottom }).vd);
}

void raylib_DrawRectangleGradientH(int posX, int posY, int width, int height, raylib_Color left, raylib_Color right) {
    DrawRectangleGradientH(posX, posY, width, height, ((union { raylib_Color ns; Color vd; }){ .ns = left }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = right }).vd);
}

void raylib_DrawRectangleGradientEx(raylib_Rectangle rec, raylib_Color topLeft, raylib_Color bottomLeft, raylib_Color topRight, raylib_Color bottomRight) {
    DrawRectangleGradientEx(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = topLeft }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = bottomLeft }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = topRight }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = bottomRight }).vd);
}

void raylib_DrawRectangleLines(int posX, int posY, int width, int height, raylib_Color color) {
    DrawRectangleLines(posX, posY, width, height, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleLinesEx(raylib_Rectangle rec, float lineThick, raylib_Color color) {
    DrawRectangleLinesEx(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, lineThick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleRounded(raylib_Rectangle rec, float roundness, int segments, raylib_Color color) {
    DrawRectangleRounded(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, roundness, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleRoundedLines(raylib_Rectangle rec, float roundness, int segments, raylib_Color color) {
    DrawRectangleRoundedLines(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, roundness, segments, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRectangleRoundedLinesEx(raylib_Rectangle rec, float roundness, int segments, float lineThick, raylib_Color color) {
    DrawRectangleRoundedLinesEx(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, roundness, segments, lineThick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangle(raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color) {
    DrawTriangle(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangleLines(raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color) {
    DrawTriangleLines(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangleFan(const raylib_Vector2 *points, int pointCount, raylib_Color color) {
    DrawTriangleFan((Vector2* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangleStrip(const raylib_Vector2 *points, int pointCount, raylib_Color color) {
    DrawTriangleStrip((Vector2* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPoly(raylib_Vector2 center, int sides, float radius, float rotation, raylib_Color color) {
    DrawPoly(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, sides, radius, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPolyLines(raylib_Vector2 center, int sides, float radius, float rotation, raylib_Color color) {
    DrawPolyLines(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, sides, radius, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPolyLinesEx(raylib_Vector2 center, int sides, float radius, float rotation, float lineThick, raylib_Color color) {
    DrawPolyLinesEx(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, sides, radius, rotation, lineThick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineLinear(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color) {
    DrawSplineLinear((Vector2* )points, pointCount, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineBasis(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color) {
    DrawSplineBasis((Vector2* )points, pointCount, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineCatmullRom(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color) {
    DrawSplineCatmullRom((Vector2* )points, pointCount, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineBezierQuadratic(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color) {
    DrawSplineBezierQuadratic((Vector2* )points, pointCount, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineBezierCubic(const raylib_Vector2 *points, int pointCount, float thick, raylib_Color color) {
    DrawSplineBezierCubic((Vector2* )points, pointCount, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineSegmentLinear(raylib_Vector2 p1, raylib_Vector2 p2, float thick, raylib_Color color) {
    DrawSplineSegmentLinear(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineSegmentBasis(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float thick, raylib_Color color) {
    DrawSplineSegmentBasis(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineSegmentCatmullRom(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float thick, raylib_Color color) {
    DrawSplineSegmentCatmullRom(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineSegmentBezierQuadratic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 p3, float thick, raylib_Color color) {
    DrawSplineSegmentBezierQuadratic(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSplineSegmentBezierCubic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 c3, raylib_Vector2 p4, float thick, raylib_Color color) {
    DrawSplineSegmentBezierCubic(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

raylib_Vector2 raylib_GetSplinePointLinear(raylib_Vector2 startPos, raylib_Vector2 endPos, float t) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetSplinePointLinear(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos }).vd, t) }).ns;
}

raylib_Vector2 raylib_GetSplinePointBasis(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float t) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetSplinePointBasis(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, t) }).ns;
}

raylib_Vector2 raylib_GetSplinePointCatmullRom(raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3, raylib_Vector2 p4, float t) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetSplinePointCatmullRom(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, t) }).ns;
}

raylib_Vector2 raylib_GetSplinePointBezierQuad(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 p3, float t) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetSplinePointBezierQuad(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd, t) }).ns;
}

raylib_Vector2 raylib_GetSplinePointBezierCubic(raylib_Vector2 p1, raylib_Vector2 c2, raylib_Vector2 c3, raylib_Vector2 p4, float t) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = GetSplinePointBezierCubic(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = c3 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p4 }).vd, t) }).ns;
}

_Bool raylib_CheckCollisionRecs(raylib_Rectangle rec1, raylib_Rectangle rec2) {
    return CheckCollisionRecs(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec1 }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec2 }).vd);
}

_Bool raylib_CheckCollisionCircles(raylib_Vector2 center1, float radius1, raylib_Vector2 center2, float radius2) {
    return CheckCollisionCircles(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center1 }).vd, radius1, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center2 }).vd, radius2);
}

_Bool raylib_CheckCollisionCircleRec(raylib_Vector2 center, float radius, raylib_Rectangle rec) {
    return CheckCollisionCircleRec(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd);
}

_Bool raylib_CheckCollisionCircleLine(raylib_Vector2 center, float radius, raylib_Vector2 p1, raylib_Vector2 p2) {
    return CheckCollisionCircleLine(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd);
}

_Bool raylib_CheckCollisionPointRec(raylib_Vector2 point, raylib_Rectangle rec) {
    return CheckCollisionPointRec(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = point }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd);
}

_Bool raylib_CheckCollisionPointCircle(raylib_Vector2 point, raylib_Vector2 center, float radius) {
    return CheckCollisionPointCircle(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = point }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius);
}

_Bool raylib_CheckCollisionPointTriangle(raylib_Vector2 point, raylib_Vector2 p1, raylib_Vector2 p2, raylib_Vector2 p3) {
    return CheckCollisionPointTriangle(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = point }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p3 }).vd);
}

_Bool raylib_CheckCollisionPointLine(raylib_Vector2 point, raylib_Vector2 p1, raylib_Vector2 p2, int threshold) {
    return CheckCollisionPointLine(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = point }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = p2 }).vd, threshold);
}

_Bool raylib_CheckCollisionPointPoly(raylib_Vector2 point, const raylib_Vector2 *points, int pointCount) {
    return CheckCollisionPointPoly(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = point }).vd, (Vector2* )points, pointCount);
}

_Bool raylib_CheckCollisionLines(raylib_Vector2 startPos1, raylib_Vector2 endPos1, raylib_Vector2 startPos2, raylib_Vector2 endPos2, raylib_Vector2 *collisionPoint) {
    return CheckCollisionLines(((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = startPos2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = endPos2 }).vd, (Vector2* )collisionPoint);
}

raylib_Rectangle raylib_GetCollisionRec(raylib_Rectangle rec1, raylib_Rectangle rec2) {
    return ((union { raylib_Rectangle ns; Rectangle vd; }){ .vd = GetCollisionRec(((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec1 }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec2 }).vd) }).ns;
}

raylib_Image raylib_LoadImage(const char *fileName) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImage(fileName) }).ns;
}

raylib_Image raylib_LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageRaw(fileName, width, height, format, headerSize) }).ns;
}

raylib_Image raylib_LoadImageAnim(const char *fileName, int *frames) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageAnim(fileName, frames) }).ns;
}

raylib_Image raylib_LoadImageAnimFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int *frames) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageAnimFromMemory(fileType, fileData, dataSize, frames) }).ns;
}

raylib_Image raylib_LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageFromMemory(fileType, fileData, dataSize) }).ns;
}

raylib_Image raylib_LoadImageFromTexture(raylib_Texture2D texture) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageFromTexture(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd) }).ns;
}

raylib_Image raylib_LoadImageFromScreen(void) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = LoadImageFromScreen() }).ns;
}

_Bool raylib_IsImageValid(raylib_Image image) {
    return IsImageValid(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd);
}

void raylib_UnloadImage(raylib_Image image) {
    UnloadImage(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd);
}

_Bool raylib_ExportImage(raylib_Image image, const char *fileName) {
    return ExportImage(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, fileName);
}

unsigned char *raylib_ExportImageToMemory(raylib_Image image, const char *fileType, int *fileSize) {
    return ExportImageToMemory(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, fileType, fileSize);
}

_Bool raylib_ExportImageAsCode(raylib_Image image, const char *fileName) {
    return ExportImageAsCode(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, fileName);
}

raylib_Image raylib_GenImageColor(int width, int height, raylib_Color color) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageColor(width, height, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd) }).ns;
}

raylib_Image raylib_GenImageGradientLinear(int width, int height, int direction, raylib_Color start, raylib_Color end) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageGradientLinear(width, height, direction, ((union { raylib_Color ns; Color vd; }){ .ns = start }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = end }).vd) }).ns;
}

raylib_Image raylib_GenImageGradientRadial(int width, int height, float density, raylib_Color inner, raylib_Color outer) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageGradientRadial(width, height, density, ((union { raylib_Color ns; Color vd; }){ .ns = inner }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = outer }).vd) }).ns;
}

raylib_Image raylib_GenImageGradientSquare(int width, int height, float density, raylib_Color inner, raylib_Color outer) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageGradientSquare(width, height, density, ((union { raylib_Color ns; Color vd; }){ .ns = inner }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = outer }).vd) }).ns;
}

raylib_Image raylib_GenImageChecked(int width, int height, int checksX, int checksY, raylib_Color col1, raylib_Color col2) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageChecked(width, height, checksX, checksY, ((union { raylib_Color ns; Color vd; }){ .ns = col1 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = col2 }).vd) }).ns;
}

raylib_Image raylib_GenImageWhiteNoise(int width, int height, float factor) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageWhiteNoise(width, height, factor) }).ns;
}

raylib_Image raylib_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImagePerlinNoise(width, height, offsetX, offsetY, scale) }).ns;
}

raylib_Image raylib_GenImageCellular(int width, int height, int tileSize) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageCellular(width, height, tileSize) }).ns;
}

raylib_Image raylib_GenImageText(int width, int height, const char *text) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageText(width, height, text) }).ns;
}

raylib_Image raylib_ImageCopy(raylib_Image image) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = ImageCopy(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd) }).ns;
}

raylib_Image raylib_ImageFromImage(raylib_Image image, raylib_Rectangle rec) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = ImageFromImage(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd) }).ns;
}

raylib_Image raylib_ImageFromChannel(raylib_Image image, int selectedChannel) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = ImageFromChannel(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, selectedChannel) }).ns;
}

raylib_Image raylib_ImageText(const char *text, int fontSize, raylib_Color color) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = ImageText(text, fontSize, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd) }).ns;
}

raylib_Image raylib_ImageTextEx(raylib_Font font, const char *text, float fontSize, float spacing, raylib_Color tint) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = ImageTextEx(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, text, fontSize, spacing, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd) }).ns;
}

void raylib_ImageFormat(raylib_Image *image, int newFormat) {
    ImageFormat((Image* )image, newFormat);
}

void raylib_ImageToPOT(raylib_Image *image, raylib_Color fill) {
    ImageToPOT((Image* )image, ((union { raylib_Color ns; Color vd; }){ .ns = fill }).vd);
}

void raylib_ImageCrop(raylib_Image *image, raylib_Rectangle crop) {
    ImageCrop((Image* )image, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = crop }).vd);
}

void raylib_ImageAlphaCrop(raylib_Image *image, float threshold) {
    ImageAlphaCrop((Image* )image, threshold);
}

void raylib_ImageAlphaClear(raylib_Image *image, raylib_Color color, float threshold) {
    ImageAlphaClear((Image* )image, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, threshold);
}

void raylib_ImageAlphaMask(raylib_Image *image, raylib_Image alphaMask) {
    ImageAlphaMask((Image* )image, ((union { raylib_Image ns; Image vd; }){ .ns = alphaMask }).vd);
}

void raylib_ImageAlphaPremultiply(raylib_Image *image) {
    ImageAlphaPremultiply((Image* )image);
}

void raylib_ImageBlurGaussian(raylib_Image *image, int blurSize) {
    ImageBlurGaussian((Image* )image, blurSize);
}

void raylib_ImageKernelConvolution(raylib_Image *image, const float *kernel, int kernelSize) {
    ImageKernelConvolution((Image* )image, kernel, kernelSize);
}

void raylib_ImageResize(raylib_Image *image, int newWidth, int newHeight) {
    ImageResize((Image* )image, newWidth, newHeight);
}

void raylib_ImageResizeNN(raylib_Image *image, int newWidth, int newHeight) {
    ImageResizeNN((Image* )image, newWidth, newHeight);
}

void raylib_ImageResizeCanvas(raylib_Image *image, int newWidth, int newHeight, int offsetX, int offsetY, raylib_Color fill) {
    ImageResizeCanvas((Image* )image, newWidth, newHeight, offsetX, offsetY, ((union { raylib_Color ns; Color vd; }){ .ns = fill }).vd);
}

void raylib_ImageMipmaps(raylib_Image *image) {
    ImageMipmaps((Image* )image);
}

void raylib_ImageDither(raylib_Image *image, int rBpp, int gBpp, int bBpp, int aBpp) {
    ImageDither((Image* )image, rBpp, gBpp, bBpp, aBpp);
}

void raylib_ImageFlipVertical(raylib_Image *image) {
    ImageFlipVertical((Image* )image);
}

void raylib_ImageFlipHorizontal(raylib_Image *image) {
    ImageFlipHorizontal((Image* )image);
}

void raylib_ImageRotate(raylib_Image *image, int degrees) {
    ImageRotate((Image* )image, degrees);
}

void raylib_ImageRotateCW(raylib_Image *image) {
    ImageRotateCW((Image* )image);
}

void raylib_ImageRotateCCW(raylib_Image *image) {
    ImageRotateCCW((Image* )image);
}

void raylib_ImageColorTint(raylib_Image *image, raylib_Color color) {
    ImageColorTint((Image* )image, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageColorInvert(raylib_Image *image) {
    ImageColorInvert((Image* )image);
}

void raylib_ImageColorGrayscale(raylib_Image *image) {
    ImageColorGrayscale((Image* )image);
}

void raylib_ImageColorContrast(raylib_Image *image, float contrast) {
    ImageColorContrast((Image* )image, contrast);
}

void raylib_ImageColorBrightness(raylib_Image *image, int brightness) {
    ImageColorBrightness((Image* )image, brightness);
}

void raylib_ImageColorReplace(raylib_Image *image, raylib_Color color, raylib_Color replace) {
    ImageColorReplace((Image* )image, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = replace }).vd);
}

raylib_Color *raylib_LoadImageColors(raylib_Image image) {
    return (raylib_Color*)(LoadImageColors(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd));
}

raylib_Color *raylib_LoadImagePalette(raylib_Image image, int maxPaletteSize, int *colorCount) {
    return (raylib_Color*)(LoadImagePalette(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, maxPaletteSize, colorCount));
}

void raylib_UnloadImageColors(raylib_Color *colors) {
    UnloadImageColors((Color* )colors);
}

void raylib_UnloadImagePalette(raylib_Color *colors) {
    UnloadImagePalette((Color* )colors);
}

raylib_Rectangle raylib_GetImageAlphaBorder(raylib_Image image, float threshold) {
    return ((union { raylib_Rectangle ns; Rectangle vd; }){ .vd = GetImageAlphaBorder(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, threshold) }).ns;
}

raylib_Color raylib_GetImageColor(raylib_Image image, int x, int y) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = GetImageColor(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, x, y) }).ns;
}

void raylib_ImageClearBackground(raylib_Image *dst, raylib_Color color) {
    ImageClearBackground((Image* )dst, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawPixel(raylib_Image *dst, int posX, int posY, raylib_Color color) {
    ImageDrawPixel((Image* )dst, posX, posY, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawPixelV(raylib_Image *dst, raylib_Vector2 position, raylib_Color color) {
    ImageDrawPixelV((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawLine(raylib_Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, raylib_Color color) {
    ImageDrawLine((Image* )dst, startPosX, startPosY, endPosX, endPosY, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawLineV(raylib_Image *dst, raylib_Vector2 start, raylib_Vector2 end, raylib_Color color) {
    ImageDrawLineV((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = start }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = end }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawLineEx(raylib_Image *dst, raylib_Vector2 start, raylib_Vector2 end, int thick, raylib_Color color) {
    ImageDrawLineEx((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = start }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = end }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawCircle(raylib_Image *dst, int centerX, int centerY, int radius, raylib_Color color) {
    ImageDrawCircle((Image* )dst, centerX, centerY, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawCircleV(raylib_Image *dst, raylib_Vector2 center, int radius, raylib_Color color) {
    ImageDrawCircleV((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawCircleLines(raylib_Image *dst, int centerX, int centerY, int radius, raylib_Color color) {
    ImageDrawCircleLines((Image* )dst, centerX, centerY, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawCircleLinesV(raylib_Image *dst, raylib_Vector2 center, int radius, raylib_Color color) {
    ImageDrawCircleLinesV((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = center }).vd, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawRectangle(raylib_Image *dst, int posX, int posY, int width, int height, raylib_Color color) {
    ImageDrawRectangle((Image* )dst, posX, posY, width, height, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawRectangleV(raylib_Image *dst, raylib_Vector2 position, raylib_Vector2 size, raylib_Color color) {
    ImageDrawRectangleV((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawRectangleRec(raylib_Image *dst, raylib_Rectangle rec, raylib_Color color) {
    ImageDrawRectangleRec((Image* )dst, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawRectangleLines(raylib_Image *dst, raylib_Rectangle rec, int thick, raylib_Color color) {
    ImageDrawRectangleLines((Image* )dst, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, thick, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawTriangle(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color) {
    ImageDrawTriangle((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawTriangleEx(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color c1, raylib_Color c2, raylib_Color c3) {
    ImageDrawTriangleEx((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = c1 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = c2 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = c3 }).vd);
}

void raylib_ImageDrawTriangleLines(raylib_Image *dst, raylib_Vector2 v1, raylib_Vector2 v2, raylib_Vector2 v3, raylib_Color color) {
    ImageDrawTriangleLines((Image* )dst, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawTriangleFan(raylib_Image *dst, raylib_Vector2 *points, int pointCount, raylib_Color color) {
    ImageDrawTriangleFan((Image* )dst, (Vector2* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawTriangleStrip(raylib_Image *dst, raylib_Vector2 *points, int pointCount, raylib_Color color) {
    ImageDrawTriangleStrip((Image* )dst, (Vector2* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDraw(raylib_Image *dst, raylib_Image src, raylib_Rectangle srcRec, raylib_Rectangle dstRec, raylib_Color tint) {
    ImageDraw((Image* )dst, ((union { raylib_Image ns; Image vd; }){ .ns = src }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = srcRec }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = dstRec }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_ImageDrawText(raylib_Image *dst, const char *text, int posX, int posY, int fontSize, raylib_Color color) {
    ImageDrawText((Image* )dst, text, posX, posY, fontSize, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_ImageDrawTextEx(raylib_Image *dst, raylib_Font font, const char *text, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint) {
    ImageDrawTextEx((Image* )dst, ((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, text, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, fontSize, spacing, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

raylib_Texture2D raylib_LoadTexture(const char *fileName) {
    return ((union { raylib_Texture2D ns; Texture2D vd; }){ .vd = LoadTexture(fileName) }).ns;
}

raylib_Texture2D raylib_LoadTextureFromImage(raylib_Image image) {
    return ((union { raylib_Texture2D ns; Texture2D vd; }){ .vd = LoadTextureFromImage(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd) }).ns;
}

raylib_TextureCubemap raylib_LoadTextureCubemap(raylib_Image image, int layout) {
    return ((union { raylib_TextureCubemap ns; TextureCubemap vd; }){ .vd = LoadTextureCubemap(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, layout) }).ns;
}

raylib_RenderTexture2D raylib_LoadRenderTexture(int width, int height) {
    return ((union { raylib_RenderTexture2D ns; RenderTexture2D vd; }){ .vd = LoadRenderTexture(width, height) }).ns;
}

_Bool raylib_IsTextureValid(raylib_Texture2D texture) {
    return IsTextureValid(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd);
}

void raylib_UnloadTexture(raylib_Texture2D texture) {
    UnloadTexture(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd);
}

_Bool raylib_IsRenderTextureValid(raylib_RenderTexture2D target) {
    return IsRenderTextureValid(((union { raylib_RenderTexture2D ns; RenderTexture2D vd; }){ .ns = target }).vd);
}

void raylib_UnloadRenderTexture(raylib_RenderTexture2D target) {
    UnloadRenderTexture(((union { raylib_RenderTexture2D ns; RenderTexture2D vd; }){ .ns = target }).vd);
}

void raylib_UpdateTexture(raylib_Texture2D texture, const void *pixels) {
    UpdateTexture(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, pixels);
}

void raylib_UpdateTextureRec(raylib_Texture2D texture, raylib_Rectangle rec, const void *pixels) {
    UpdateTextureRec(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = rec }).vd, pixels);
}

void raylib_GenTextureMipmaps(raylib_Texture2D *texture) {
    GenTextureMipmaps((Texture2D* )texture);
}

void raylib_SetTextureFilter(raylib_Texture2D texture, int filter) {
    SetTextureFilter(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, filter);
}

void raylib_SetTextureWrap(raylib_Texture2D texture, int wrap) {
    SetTextureWrap(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, wrap);
}

void raylib_DrawTexture(raylib_Texture2D texture, int posX, int posY, raylib_Color tint) {
    DrawTexture(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, posX, posY, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextureV(raylib_Texture2D texture, raylib_Vector2 position, raylib_Color tint) {
    DrawTextureV(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextureEx(raylib_Texture2D texture, raylib_Vector2 position, float rotation, float scale, raylib_Color tint) {
    DrawTextureEx(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, rotation, scale, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextureRec(raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector2 position, raylib_Color tint) {
    DrawTextureRec(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = source }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTexturePro(raylib_Texture2D texture, raylib_Rectangle source, raylib_Rectangle dest, raylib_Vector2 origin, float rotation, raylib_Color tint) {
    DrawTexturePro(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = source }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = dest }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = origin }).vd, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextureNPatch(raylib_Texture2D texture, raylib_NPatchInfo nPatchInfo, raylib_Rectangle dest, raylib_Vector2 origin, float rotation, raylib_Color tint) {
    DrawTextureNPatch(((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_NPatchInfo ns; NPatchInfo vd; }){ .ns = nPatchInfo }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = dest }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = origin }).vd, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

_Bool raylib_ColorIsEqual(raylib_Color col1, raylib_Color col2) {
    return ColorIsEqual(((union { raylib_Color ns; Color vd; }){ .ns = col1 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = col2 }).vd);
}

raylib_Color raylib_Fade(raylib_Color color, float alpha) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = Fade(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, alpha) }).ns;
}

int raylib_ColorToInt(raylib_Color color) {
    return ColorToInt(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

raylib_Vector4 raylib_ColorNormalize(raylib_Color color) {
    return ((union { raylib_Vector4 ns; Vector4 vd; }){ .vd = ColorNormalize(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd) }).ns;
}

raylib_Color raylib_ColorFromNormalized(raylib_Vector4 normalized) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorFromNormalized(((union { raylib_Vector4 ns; Vector4 vd; }){ .ns = normalized }).vd) }).ns;
}

raylib_Vector3 raylib_ColorToHSV(raylib_Color color) {
    return ((union { raylib_Vector3 ns; Vector3 vd; }){ .vd = ColorToHSV(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd) }).ns;
}

raylib_Color raylib_ColorFromHSV(float hue, float saturation, float value) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorFromHSV(hue, saturation, value) }).ns;
}

raylib_Color raylib_ColorTint(raylib_Color color, raylib_Color tint) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorTint(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd) }).ns;
}

raylib_Color raylib_ColorBrightness(raylib_Color color, float factor) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorBrightness(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, factor) }).ns;
}

raylib_Color raylib_ColorContrast(raylib_Color color, float contrast) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorContrast(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, contrast) }).ns;
}

raylib_Color raylib_ColorAlpha(raylib_Color color, float alpha) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorAlpha(((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, alpha) }).ns;
}

raylib_Color raylib_ColorAlphaBlend(raylib_Color dst, raylib_Color src, raylib_Color tint) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorAlphaBlend(((union { raylib_Color ns; Color vd; }){ .ns = dst }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = src }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd) }).ns;
}

raylib_Color raylib_ColorLerp(raylib_Color color1, raylib_Color color2, float factor) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = ColorLerp(((union { raylib_Color ns; Color vd; }){ .ns = color1 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color2 }).vd, factor) }).ns;
}

raylib_Color raylib_GetColor(unsigned int hexValue) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = GetColor(hexValue) }).ns;
}

raylib_Color raylib_GetPixelColor(void *srcPtr, int format) {
    return ((union { raylib_Color ns; Color vd; }){ .vd = GetPixelColor(srcPtr, format) }).ns;
}

void raylib_SetPixelColor(void *dstPtr, raylib_Color color, int format) {
    SetPixelColor(dstPtr, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd, format);
}

int raylib_GetPixelDataSize(int width, int height, int format) {
    return GetPixelDataSize(width, height, format);
}

raylib_Font raylib_GetFontDefault(void) {
    return ((union { raylib_Font ns; Font vd; }){ .vd = GetFontDefault() }).ns;
}

raylib_Font raylib_LoadFont(const char *fileName) {
    return ((union { raylib_Font ns; Font vd; }){ .vd = LoadFont(fileName) }).ns;
}

raylib_Font raylib_LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount) {
    return ((union { raylib_Font ns; Font vd; }){ .vd = LoadFontEx(fileName, fontSize, codepoints, codepointCount) }).ns;
}

raylib_Font raylib_LoadFontFromImage(raylib_Image image, raylib_Color key, int firstChar) {
    return ((union { raylib_Font ns; Font vd; }){ .vd = LoadFontFromImage(((union { raylib_Image ns; Image vd; }){ .ns = image }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = key }).vd, firstChar) }).ns;
}

raylib_Font raylib_LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount) {
    return ((union { raylib_Font ns; Font vd; }){ .vd = LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount) }).ns;
}

_Bool raylib_IsFontValid(raylib_Font font) {
    return IsFontValid(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd);
}

raylib_GlyphInfo *raylib_LoadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount, int type) {
    return (raylib_GlyphInfo*)(LoadFontData(fileData, dataSize, fontSize, codepoints, codepointCount, type));
}

raylib_Image raylib_GenImageFontAtlas(const raylib_GlyphInfo *glyphs, raylib_Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod) {
    return ((union { raylib_Image ns; Image vd; }){ .vd = GenImageFontAtlas((GlyphInfo* )glyphs, (Rectangle** )glyphRecs, glyphCount, fontSize, padding, packMethod) }).ns;
}

void raylib_UnloadFontData(raylib_GlyphInfo *glyphs, int glyphCount) {
    UnloadFontData((GlyphInfo* )glyphs, glyphCount);
}

void raylib_UnloadFont(raylib_Font font) {
    UnloadFont(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd);
}

_Bool raylib_ExportFontAsCode(raylib_Font font, const char *fileName) {
    return ExportFontAsCode(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, fileName);
}

void raylib_DrawFPS(int posX, int posY) {
    DrawFPS(posX, posY);
}

void raylib_DrawText(const char *text, int posX, int posY, int fontSize, raylib_Color color) {
    DrawText(text, posX, posY, fontSize, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTextEx(raylib_Font font, const char *text, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint) {
    DrawTextEx(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, text, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, fontSize, spacing, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextPro(raylib_Font font, const char *text, raylib_Vector2 position, raylib_Vector2 origin, float rotation, float fontSize, float spacing, raylib_Color tint) {
    DrawTextPro(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, text, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = origin }).vd, rotation, fontSize, spacing, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextCodepoint(raylib_Font font, int codepoint, raylib_Vector2 position, float fontSize, raylib_Color tint) {
    DrawTextCodepoint(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, codepoint, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, fontSize, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawTextCodepoints(raylib_Font font, const int *codepoints, int codepointCount, raylib_Vector2 position, float fontSize, float spacing, raylib_Color tint) {
    DrawTextCodepoints(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, codepoints, codepointCount, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = position }).vd, fontSize, spacing, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_SetTextLineSpacing(int spacing) {
    SetTextLineSpacing(spacing);
}

int raylib_MeasureText(const char *text, int fontSize) {
    return MeasureText(text, fontSize);
}

raylib_Vector2 raylib_MeasureTextEx(raylib_Font font, const char *text, float fontSize, float spacing) {
    return ((union { raylib_Vector2 ns; Vector2 vd; }){ .vd = MeasureTextEx(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, text, fontSize, spacing) }).ns;
}

int raylib_GetGlyphIndex(raylib_Font font, int codepoint) {
    return GetGlyphIndex(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, codepoint);
}

raylib_GlyphInfo raylib_GetGlyphInfo(raylib_Font font, int codepoint) {
    return ((union { raylib_GlyphInfo ns; GlyphInfo vd; }){ .vd = GetGlyphInfo(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, codepoint) }).ns;
}

raylib_Rectangle raylib_GetGlyphAtlasRec(raylib_Font font, int codepoint) {
    return ((union { raylib_Rectangle ns; Rectangle vd; }){ .vd = GetGlyphAtlasRec(((union { raylib_Font ns; Font vd; }){ .ns = font }).vd, codepoint) }).ns;
}

char *raylib_LoadUTF8(const int *codepoints, int length) {
    return LoadUTF8(codepoints, length);
}

void raylib_UnloadUTF8(char *text) {
    UnloadUTF8(text);
}

int *raylib_LoadCodepoints(const char *text, int *count) {
    return LoadCodepoints(text, count);
}

void raylib_UnloadCodepoints(int *codepoints) {
    UnloadCodepoints(codepoints);
}

int raylib_GetCodepointCount(const char *text) {
    return GetCodepointCount(text);
}

int raylib_GetCodepoint(const char *text, int *codepointSize) {
    return GetCodepoint(text, codepointSize);
}

int raylib_GetCodepointNext(const char *text, int *codepointSize) {
    return GetCodepointNext(text, codepointSize);
}

int raylib_GetCodepointPrevious(const char *text, int *codepointSize) {
    return GetCodepointPrevious(text, codepointSize);
}

const char *raylib_CodepointToUTF8(int codepoint, int *utf8Size) {
    return CodepointToUTF8(codepoint, utf8Size);
}

int raylib_TextCopy(char *dst, const char *src) {
    return TextCopy(dst, src);
}

_Bool raylib_TextIsEqual(const char *text1, const char *text2) {
    return TextIsEqual(text1, text2);
}

unsigned int raylib_TextLength(const char *text) {
    return TextLength(text);
}

const char *raylib_TextSubtext(const char *text, int position, int length) {
    return TextSubtext(text, position, length);
}

char *raylib_TextReplace(const char *text, const char *replace, const char *by) {
    return TextReplace(text, replace, by);
}

char *raylib_TextInsert(const char *text, const char *insert, int position) {
    return TextInsert(text, insert, position);
}

const char *raylib_TextJoin(const char **textList, int count, const char *delimiter) {
    return TextJoin(textList, count, delimiter);
}

const char **raylib_TextSplit(const char *text, char delimiter, int *count) {
    return TextSplit(text, delimiter, count);
}

void raylib_TextAppend(char *text, const char *append, int *position) {
    TextAppend(text, append, position);
}

int raylib_TextFindIndex(const char *text, const char *find) {
    return TextFindIndex(text, find);
}

const char *raylib_TextToUpper(const char *text) {
    return TextToUpper(text);
}

const char *raylib_TextToLower(const char *text) {
    return TextToLower(text);
}

const char *raylib_TextToPascal(const char *text) {
    return TextToPascal(text);
}

const char *raylib_TextToSnake(const char *text) {
    return TextToSnake(text);
}

const char *raylib_TextToCamel(const char *text) {
    return TextToCamel(text);
}

int raylib_TextToInteger(const char *text) {
    return TextToInteger(text);
}

float raylib_TextToFloat(const char *text) {
    return TextToFloat(text);
}

void raylib_DrawLine3D(raylib_Vector3 startPos, raylib_Vector3 endPos, raylib_Color color) {
    DrawLine3D(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = endPos }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPoint3D(raylib_Vector3 position, raylib_Color color) {
    DrawPoint3D(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCircle3D(raylib_Vector3 center, float radius, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Color color) {
    DrawCircle3D(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = center }).vd, radius, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = rotationAxis }).vd, rotationAngle, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangle3D(raylib_Vector3 v1, raylib_Vector3 v2, raylib_Vector3 v3, raylib_Color color) {
    DrawTriangle3D(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = v1 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = v2 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = v3 }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawTriangleStrip3D(const raylib_Vector3 *points, int pointCount, raylib_Color color) {
    DrawTriangleStrip3D((Vector3* )points, pointCount, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCube(raylib_Vector3 position, float width, float height, float length, raylib_Color color) {
    DrawCube(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, width, height, length, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCubeV(raylib_Vector3 position, raylib_Vector3 size, raylib_Color color) {
    DrawCubeV(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCubeWires(raylib_Vector3 position, float width, float height, float length, raylib_Color color) {
    DrawCubeWires(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, width, height, length, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCubeWiresV(raylib_Vector3 position, raylib_Vector3 size, raylib_Color color) {
    DrawCubeWiresV(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSphere(raylib_Vector3 centerPos, float radius, raylib_Color color) {
    DrawSphere(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = centerPos }).vd, radius, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSphereEx(raylib_Vector3 centerPos, float radius, int rings, int slices, raylib_Color color) {
    DrawSphereEx(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = centerPos }).vd, radius, rings, slices, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawSphereWires(raylib_Vector3 centerPos, float radius, int rings, int slices, raylib_Color color) {
    DrawSphereWires(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = centerPos }).vd, radius, rings, slices, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCylinder(raylib_Vector3 position, float radiusTop, float radiusBottom, float height, int slices, raylib_Color color) {
    DrawCylinder(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, radiusTop, radiusBottom, height, slices, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCylinderEx(raylib_Vector3 startPos, raylib_Vector3 endPos, float startRadius, float endRadius, int sides, raylib_Color color) {
    DrawCylinderEx(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = endPos }).vd, startRadius, endRadius, sides, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCylinderWires(raylib_Vector3 position, float radiusTop, float radiusBottom, float height, int slices, raylib_Color color) {
    DrawCylinderWires(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, radiusTop, radiusBottom, height, slices, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCylinderWiresEx(raylib_Vector3 startPos, raylib_Vector3 endPos, float startRadius, float endRadius, int sides, raylib_Color color) {
    DrawCylinderWiresEx(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = endPos }).vd, startRadius, endRadius, sides, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCapsule(raylib_Vector3 startPos, raylib_Vector3 endPos, float radius, int slices, int rings, raylib_Color color) {
    DrawCapsule(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = endPos }).vd, radius, slices, rings, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawCapsuleWires(raylib_Vector3 startPos, raylib_Vector3 endPos, float radius, int slices, int rings, raylib_Color color) {
    DrawCapsuleWires(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = startPos }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = endPos }).vd, radius, slices, rings, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawPlane(raylib_Vector3 centerPos, raylib_Vector2 size, raylib_Color color) {
    DrawPlane(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = centerPos }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawRay(raylib_Ray ray, raylib_Color color) {
    DrawRay(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawGrid(int slices, float spacing) {
    DrawGrid(slices, spacing);
}

raylib_Model raylib_LoadModel(const char *fileName) {
    return ((union { raylib_Model ns; Model vd; }){ .vd = LoadModel(fileName) }).ns;
}

raylib_Model raylib_LoadModelFromMesh(raylib_Mesh mesh) {
    return ((union { raylib_Model ns; Model vd; }){ .vd = LoadModelFromMesh(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd) }).ns;
}

_Bool raylib_IsModelValid(raylib_Model model) {
    return IsModelValid(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd);
}

void raylib_UnloadModel(raylib_Model model) {
    UnloadModel(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd);
}

raylib_BoundingBox raylib_GetModelBoundingBox(raylib_Model model) {
    return ((union { raylib_BoundingBox ns; BoundingBox vd; }){ .vd = GetModelBoundingBox(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd) }).ns;
}

void raylib_DrawModel(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint) {
    DrawModel(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, scale, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawModelEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint) {
    DrawModelEx(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = rotationAxis }).vd, rotationAngle, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = scale }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawModelWires(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint) {
    DrawModelWires(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, scale, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawModelWiresEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint) {
    DrawModelWiresEx(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = rotationAxis }).vd, rotationAngle, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = scale }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawModelPoints(raylib_Model model, raylib_Vector3 position, float scale, raylib_Color tint) {
    DrawModelPoints(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, scale, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawModelPointsEx(raylib_Model model, raylib_Vector3 position, raylib_Vector3 rotationAxis, float rotationAngle, raylib_Vector3 scale, raylib_Color tint) {
    DrawModelPointsEx(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = rotationAxis }).vd, rotationAngle, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = scale }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawBoundingBox(raylib_BoundingBox box, raylib_Color color) {
    DrawBoundingBox(((union { raylib_BoundingBox ns; BoundingBox vd; }){ .ns = box }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = color }).vd);
}

void raylib_DrawBillboard(raylib_Camera camera, raylib_Texture2D texture, raylib_Vector3 position, float scale, raylib_Color tint) {
    DrawBillboard(((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd, ((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, scale, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawBillboardRec(raylib_Camera camera, raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector3 position, raylib_Vector2 size, raylib_Color tint) {
    DrawBillboardRec(((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd, ((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = source }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = size }).vd, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_DrawBillboardPro(raylib_Camera camera, raylib_Texture2D texture, raylib_Rectangle source, raylib_Vector3 position, raylib_Vector3 up, raylib_Vector2 size, raylib_Vector2 origin, float rotation, raylib_Color tint) {
    DrawBillboardPro(((union { raylib_Camera ns; Camera vd; }){ .ns = camera }).vd, ((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd, ((union { raylib_Rectangle ns; Rectangle vd; }){ .ns = source }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = position }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = up }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = size }).vd, ((union { raylib_Vector2 ns; Vector2 vd; }){ .ns = origin }).vd, rotation, ((union { raylib_Color ns; Color vd; }){ .ns = tint }).vd);
}

void raylib_UploadMesh(raylib_Mesh *mesh, _Bool dynamic) {
    UploadMesh((Mesh* )mesh, dynamic);
}

void raylib_UpdateMeshBuffer(raylib_Mesh mesh, int index, const void *data, int dataSize, int offset) {
    UpdateMeshBuffer(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, index, data, dataSize, offset);
}

void raylib_UnloadMesh(raylib_Mesh mesh) {
    UnloadMesh(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd);
}

void raylib_DrawMesh(raylib_Mesh mesh, raylib_Material material, raylib_Matrix transform) {
    DrawMesh(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, ((union { raylib_Material ns; Material vd; }){ .ns = material }).vd, ((union { raylib_Matrix ns; Matrix vd; }){ .ns = transform }).vd);
}

void raylib_DrawMeshInstanced(raylib_Mesh mesh, raylib_Material material, const raylib_Matrix *transforms, int instances) {
    DrawMeshInstanced(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, ((union { raylib_Material ns; Material vd; }){ .ns = material }).vd, (Matrix* )transforms, instances);
}

raylib_BoundingBox raylib_GetMeshBoundingBox(raylib_Mesh mesh) {
    return ((union { raylib_BoundingBox ns; BoundingBox vd; }){ .vd = GetMeshBoundingBox(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd) }).ns;
}

void raylib_GenMeshTangents(raylib_Mesh *mesh) {
    GenMeshTangents((Mesh* )mesh);
}

_Bool raylib_ExportMesh(raylib_Mesh mesh, const char *fileName) {
    return ExportMesh(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, fileName);
}

_Bool raylib_ExportMeshAsCode(raylib_Mesh mesh, const char *fileName) {
    return ExportMeshAsCode(((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, fileName);
}

raylib_Mesh raylib_GenMeshPoly(int sides, float radius) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshPoly(sides, radius) }).ns;
}

raylib_Mesh raylib_GenMeshPlane(float width, float length, int resX, int resZ) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshPlane(width, length, resX, resZ) }).ns;
}

raylib_Mesh raylib_GenMeshCube(float width, float height, float length) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshCube(width, height, length) }).ns;
}

raylib_Mesh raylib_GenMeshSphere(float radius, int rings, int slices) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshSphere(radius, rings, slices) }).ns;
}

raylib_Mesh raylib_GenMeshHemiSphere(float radius, int rings, int slices) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshHemiSphere(radius, rings, slices) }).ns;
}

raylib_Mesh raylib_GenMeshCylinder(float radius, float height, int slices) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshCylinder(radius, height, slices) }).ns;
}

raylib_Mesh raylib_GenMeshCone(float radius, float height, int slices) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshCone(radius, height, slices) }).ns;
}

raylib_Mesh raylib_GenMeshTorus(float radius, float size, int radSeg, int sides) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshTorus(radius, size, radSeg, sides) }).ns;
}

raylib_Mesh raylib_GenMeshKnot(float radius, float size, int radSeg, int sides) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshKnot(radius, size, radSeg, sides) }).ns;
}

raylib_Mesh raylib_GenMeshHeightmap(raylib_Image heightmap, raylib_Vector3 size) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshHeightmap(((union { raylib_Image ns; Image vd; }){ .ns = heightmap }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = size }).vd) }).ns;
}

raylib_Mesh raylib_GenMeshCubicmap(raylib_Image cubicmap, raylib_Vector3 cubeSize) {
    return ((union { raylib_Mesh ns; Mesh vd; }){ .vd = GenMeshCubicmap(((union { raylib_Image ns; Image vd; }){ .ns = cubicmap }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = cubeSize }).vd) }).ns;
}

raylib_Material *raylib_LoadMaterials(const char *fileName, int *materialCount) {
    return (raylib_Material*)(LoadMaterials(fileName, materialCount));
}

raylib_Material raylib_LoadMaterialDefault(void) {
    return ((union { raylib_Material ns; Material vd; }){ .vd = LoadMaterialDefault() }).ns;
}

_Bool raylib_IsMaterialValid(raylib_Material material) {
    return IsMaterialValid(((union { raylib_Material ns; Material vd; }){ .ns = material }).vd);
}

void raylib_UnloadMaterial(raylib_Material material) {
    UnloadMaterial(((union { raylib_Material ns; Material vd; }){ .ns = material }).vd);
}

void raylib_SetMaterialTexture(raylib_Material *material, int mapType, raylib_Texture2D texture) {
    SetMaterialTexture((Material* )material, mapType, ((union { raylib_Texture2D ns; Texture2D vd; }){ .ns = texture }).vd);
}

void raylib_SetModelMeshMaterial(raylib_Model *model, int meshId, int materialId) {
    SetModelMeshMaterial((Model* )model, meshId, materialId);
}

raylib_ModelAnimation *raylib_LoadModelAnimations(const char *fileName, int *animCount) {
    return (raylib_ModelAnimation*)(LoadModelAnimations(fileName, animCount));
}

void raylib_UpdateModelAnimation(raylib_Model model, raylib_ModelAnimation anim, int frame) {
    UpdateModelAnimation(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_ModelAnimation ns; ModelAnimation vd; }){ .ns = anim }).vd, frame);
}

void raylib_UpdateModelAnimationBones(raylib_Model model, raylib_ModelAnimation anim, int frame) {
    UpdateModelAnimationBones(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_ModelAnimation ns; ModelAnimation vd; }){ .ns = anim }).vd, frame);
}

void raylib_UnloadModelAnimation(raylib_ModelAnimation anim) {
    UnloadModelAnimation(((union { raylib_ModelAnimation ns; ModelAnimation vd; }){ .ns = anim }).vd);
}

void raylib_UnloadModelAnimations(raylib_ModelAnimation *animations, int animCount) {
    UnloadModelAnimations((ModelAnimation* )animations, animCount);
}

_Bool raylib_IsModelAnimationValid(raylib_Model model, raylib_ModelAnimation anim) {
    return IsModelAnimationValid(((union { raylib_Model ns; Model vd; }){ .ns = model }).vd, ((union { raylib_ModelAnimation ns; ModelAnimation vd; }){ .ns = anim }).vd);
}

_Bool raylib_CheckCollisionSpheres(raylib_Vector3 center1, float radius1, raylib_Vector3 center2, float radius2) {
    return CheckCollisionSpheres(((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = center1 }).vd, radius1, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = center2 }).vd, radius2);
}

_Bool raylib_CheckCollisionBoxes(raylib_BoundingBox box1, raylib_BoundingBox box2) {
    return CheckCollisionBoxes(((union { raylib_BoundingBox ns; BoundingBox vd; }){ .ns = box1 }).vd, ((union { raylib_BoundingBox ns; BoundingBox vd; }){ .ns = box2 }).vd);
}

_Bool raylib_CheckCollisionBoxSphere(raylib_BoundingBox box, raylib_Vector3 center, float radius) {
    return CheckCollisionBoxSphere(((union { raylib_BoundingBox ns; BoundingBox vd; }){ .ns = box }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = center }).vd, radius);
}

raylib_RayCollision raylib_GetRayCollisionSphere(raylib_Ray ray, raylib_Vector3 center, float radius) {
    return ((union { raylib_RayCollision ns; RayCollision vd; }){ .vd = GetRayCollisionSphere(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = center }).vd, radius) }).ns;
}

raylib_RayCollision raylib_GetRayCollisionBox(raylib_Ray ray, raylib_BoundingBox box) {
    return ((union { raylib_RayCollision ns; RayCollision vd; }){ .vd = GetRayCollisionBox(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_BoundingBox ns; BoundingBox vd; }){ .ns = box }).vd) }).ns;
}

raylib_RayCollision raylib_GetRayCollisionMesh(raylib_Ray ray, raylib_Mesh mesh, raylib_Matrix transform) {
    return ((union { raylib_RayCollision ns; RayCollision vd; }){ .vd = GetRayCollisionMesh(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_Mesh ns; Mesh vd; }){ .ns = mesh }).vd, ((union { raylib_Matrix ns; Matrix vd; }){ .ns = transform }).vd) }).ns;
}

raylib_RayCollision raylib_GetRayCollisionTriangle(raylib_Ray ray, raylib_Vector3 p1, raylib_Vector3 p2, raylib_Vector3 p3) {
    return ((union { raylib_RayCollision ns; RayCollision vd; }){ .vd = GetRayCollisionTriangle(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p3 }).vd) }).ns;
}

raylib_RayCollision raylib_GetRayCollisionQuad(raylib_Ray ray, raylib_Vector3 p1, raylib_Vector3 p2, raylib_Vector3 p3, raylib_Vector3 p4) {
    return ((union { raylib_RayCollision ns; RayCollision vd; }){ .vd = GetRayCollisionQuad(((union { raylib_Ray ns; Ray vd; }){ .ns = ray }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p1 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p2 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p3 }).vd, ((union { raylib_Vector3 ns; Vector3 vd; }){ .ns = p4 }).vd) }).ns;
}

void raylib_InitAudioDevice(void) {
    InitAudioDevice();
}

void raylib_CloseAudioDevice(void) {
    CloseAudioDevice();
}

_Bool raylib_IsAudioDeviceReady(void) {
    return IsAudioDeviceReady();
}

void raylib_SetMasterVolume(float volume) {
    SetMasterVolume(volume);
}

float raylib_GetMasterVolume(void) {
    return GetMasterVolume();
}

raylib_Wave raylib_LoadWave(const char *fileName) {
    return ((union { raylib_Wave ns; Wave vd; }){ .vd = LoadWave(fileName) }).ns;
}

raylib_Wave raylib_LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return ((union { raylib_Wave ns; Wave vd; }){ .vd = LoadWaveFromMemory(fileType, fileData, dataSize) }).ns;
}

_Bool raylib_IsWaveValid(raylib_Wave wave) {
    return IsWaveValid(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd);
}

raylib_Sound raylib_LoadSound(const char *fileName) {
    return ((union { raylib_Sound ns; Sound vd; }){ .vd = LoadSound(fileName) }).ns;
}

raylib_Sound raylib_LoadSoundFromWave(raylib_Wave wave) {
    return ((union { raylib_Sound ns; Sound vd; }){ .vd = LoadSoundFromWave(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd) }).ns;
}

raylib_Sound raylib_LoadSoundAlias(raylib_Sound source) {
    return ((union { raylib_Sound ns; Sound vd; }){ .vd = LoadSoundAlias(((union { raylib_Sound ns; Sound vd; }){ .ns = source }).vd) }).ns;
}

_Bool raylib_IsSoundValid(raylib_Sound sound) {
    return IsSoundValid(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_UpdateSound(raylib_Sound sound, const void *data, int sampleCount) {
    UpdateSound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd, data, sampleCount);
}

void raylib_UnloadWave(raylib_Wave wave) {
    UnloadWave(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd);
}

void raylib_UnloadSound(raylib_Sound sound) {
    UnloadSound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_UnloadSoundAlias(raylib_Sound alias) {
    UnloadSoundAlias(((union { raylib_Sound ns; Sound vd; }){ .ns = alias }).vd);
}

_Bool raylib_ExportWave(raylib_Wave wave, const char *fileName) {
    return ExportWave(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd, fileName);
}

_Bool raylib_ExportWaveAsCode(raylib_Wave wave, const char *fileName) {
    return ExportWaveAsCode(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd, fileName);
}

void raylib_PlaySound(raylib_Sound sound) {
    PlaySound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_StopSound(raylib_Sound sound) {
    StopSound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_PauseSound(raylib_Sound sound) {
    PauseSound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_ResumeSound(raylib_Sound sound) {
    ResumeSound(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

_Bool raylib_IsSoundPlaying(raylib_Sound sound) {
    return IsSoundPlaying(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd);
}

void raylib_SetSoundVolume(raylib_Sound sound, float volume) {
    SetSoundVolume(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd, volume);
}

void raylib_SetSoundPitch(raylib_Sound sound, float pitch) {
    SetSoundPitch(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd, pitch);
}

void raylib_SetSoundPan(raylib_Sound sound, float pan) {
    SetSoundPan(((union { raylib_Sound ns; Sound vd; }){ .ns = sound }).vd, pan);
}

raylib_Wave raylib_WaveCopy(raylib_Wave wave) {
    return ((union { raylib_Wave ns; Wave vd; }){ .vd = WaveCopy(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd) }).ns;
}

void raylib_WaveCrop(raylib_Wave *wave, int initFrame, int finalFrame) {
    WaveCrop((Wave* )wave, initFrame, finalFrame);
}

void raylib_WaveFormat(raylib_Wave *wave, int sampleRate, int sampleSize, int channels) {
    WaveFormat((Wave* )wave, sampleRate, sampleSize, channels);
}

float *raylib_LoadWaveSamples(raylib_Wave wave) {
    return LoadWaveSamples(((union { raylib_Wave ns; Wave vd; }){ .ns = wave }).vd);
}

void raylib_UnloadWaveSamples(float *samples) {
    UnloadWaveSamples(samples);
}

raylib_Music raylib_LoadMusicStream(const char *fileName) {
    return ((union { raylib_Music ns; Music vd; }){ .vd = LoadMusicStream(fileName) }).ns;
}

raylib_Music raylib_LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize) {
    return ((union { raylib_Music ns; Music vd; }){ .vd = LoadMusicStreamFromMemory(fileType, data, dataSize) }).ns;
}

_Bool raylib_IsMusicValid(raylib_Music music) {
    return IsMusicValid(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_UnloadMusicStream(raylib_Music music) {
    UnloadMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_PlayMusicStream(raylib_Music music) {
    PlayMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

_Bool raylib_IsMusicStreamPlaying(raylib_Music music) {
    return IsMusicStreamPlaying(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_UpdateMusicStream(raylib_Music music) {
    UpdateMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_StopMusicStream(raylib_Music music) {
    StopMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_PauseMusicStream(raylib_Music music) {
    PauseMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_ResumeMusicStream(raylib_Music music) {
    ResumeMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

void raylib_SeekMusicStream(raylib_Music music, float position) {
    SeekMusicStream(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd, position);
}

void raylib_SetMusicVolume(raylib_Music music, float volume) {
    SetMusicVolume(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd, volume);
}

void raylib_SetMusicPitch(raylib_Music music, float pitch) {
    SetMusicPitch(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd, pitch);
}

void raylib_SetMusicPan(raylib_Music music, float pan) {
    SetMusicPan(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd, pan);
}

float raylib_GetMusicTimeLength(raylib_Music music) {
    return GetMusicTimeLength(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

float raylib_GetMusicTimePlayed(raylib_Music music) {
    return GetMusicTimePlayed(((union { raylib_Music ns; Music vd; }){ .ns = music }).vd);
}

raylib_AudioStream raylib_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
    return ((union { raylib_AudioStream ns; AudioStream vd; }){ .vd = LoadAudioStream(sampleRate, sampleSize, channels) }).ns;
}

_Bool raylib_IsAudioStreamValid(raylib_AudioStream stream) {
    return IsAudioStreamValid(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_UnloadAudioStream(raylib_AudioStream stream) {
    UnloadAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_UpdateAudioStream(raylib_AudioStream stream, const void *data, int frameCount) {
    UpdateAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, data, frameCount);
}

_Bool raylib_IsAudioStreamProcessed(raylib_AudioStream stream) {
    return IsAudioStreamProcessed(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_PlayAudioStream(raylib_AudioStream stream) {
    PlayAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_PauseAudioStream(raylib_AudioStream stream) {
    PauseAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_ResumeAudioStream(raylib_AudioStream stream) {
    ResumeAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

_Bool raylib_IsAudioStreamPlaying(raylib_AudioStream stream) {
    return IsAudioStreamPlaying(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_StopAudioStream(raylib_AudioStream stream) {
    StopAudioStream(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd);
}

void raylib_SetAudioStreamVolume(raylib_AudioStream stream, float volume) {
    SetAudioStreamVolume(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, volume);
}

void raylib_SetAudioStreamPitch(raylib_AudioStream stream, float pitch) {
    SetAudioStreamPitch(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, pitch);
}

void raylib_SetAudioStreamPan(raylib_AudioStream stream, float pan) {
    SetAudioStreamPan(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, pan);
}

void raylib_SetAudioStreamBufferSizeDefault(int size) {
    SetAudioStreamBufferSizeDefault(size);
}

void raylib_SetAudioStreamCallback(raylib_AudioStream stream, raylib_AudioCallback callback) {
    SetAudioStreamCallback(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, ((union { raylib_AudioCallback ns; AudioCallback vd; }){ .ns = callback }).vd);
}

void raylib_AttachAudioStreamProcessor(raylib_AudioStream stream, raylib_AudioCallback processor) {
    AttachAudioStreamProcessor(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, ((union { raylib_AudioCallback ns; AudioCallback vd; }){ .ns = processor }).vd);
}

void raylib_DetachAudioStreamProcessor(raylib_AudioStream stream, raylib_AudioCallback processor) {
    DetachAudioStreamProcessor(((union { raylib_AudioStream ns; AudioStream vd; }){ .ns = stream }).vd, ((union { raylib_AudioCallback ns; AudioCallback vd; }){ .ns = processor }).vd);
}

void raylib_AttachAudioMixedProcessor(raylib_AudioCallback processor) {
    AttachAudioMixedProcessor(((union { raylib_AudioCallback ns; AudioCallback vd; }){ .ns = processor }).vd);
}

void raylib_DetachAudioMixedProcessor(raylib_AudioCallback processor) {
    DetachAudioMixedProcessor(((union { raylib_AudioCallback ns; AudioCallback vd; }){ .ns = processor }).vd);
}

