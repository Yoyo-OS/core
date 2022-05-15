#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
#include "settings.h"

class OsdServer;
class Application : public QApplication
{
    Q_OBJECT

public:
    explicit Application(int& argc, char** argv);

    int run();

private:
    OsdServer *m_osdServer;
    Settings *m_settings;
    bool m_instance;
};

#endif // APPLICATION_H