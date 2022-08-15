#include "../include/engine_sim_application.h"

#include <iostream>

#if 1 // TODO: should be common
int main() {
    EngineSimApplication application;
    application.initialize(nullptr, ysContextObject::DeviceAPI::OpenGL4_0);
    application.run();
    application.destroy();
}
#else
int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nCmdShow)
{
    (void)nCmdShow;
    (void)lpCmdLine;
    (void)hPrevInstance;

    EngineSimApplication application;
    application.initialize((void *)&hInstance, ysContextObject::DeviceAPI::DirectX11);
    application.run();
    application.destroy();

    return 0;
}
#endif
