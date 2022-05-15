set(SRCS main.cpp
         application.cpp
         osdserver.cpp
)

qt5_add_dbus_adaptor(DBUS_SOURCES com.cutefish.Osd.xml application.h Application)
set_source_files_properties(${DBUS_SOURCES} PROPERTIES SKIP_AUTOGEN ON)

find_package(KF5WindowSystem)

add_executable(cutefish-osd ${SRCS} ${DBUS_SOURCES})

target_link_libraries(cutefish-osd
    Qt5::Core
    Qt5::DBus
    Qt5::Quick
    Qt5::Widgets
    KF5::WindowSystem
)

install(TARGETS cutefish-osd
    DESTINATION /usr/bin
    COMPONENT Runtime
)

file(GLOB TS_FILES translations/*.ts)
qt5_create_translation(QM_FILES ${TS_FILES})
add_custom_target(osd_translations DEPENDS ${QM_FILES} SOURCES ${TS_FILES})
add_dependencies(cutefish-osd osd_translations)

install(FILES ${QM_FILES} DESTINATION /usr/share/cutefish-osd/translations)
