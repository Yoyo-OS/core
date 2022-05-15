#include "application.h"

int main(int argc, char *argv[])
{
    // QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    // QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);

    Application a(argc, argv);
    return a.run();
}
