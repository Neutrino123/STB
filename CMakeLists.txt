cmake_minimum_required(VERSION 3.5)

project(User_registration_system VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Căutăm pachetele necesare
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Sql Network REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Sql Network REQUIRED)

set(PROJECT_SOURCES
    main.cpp
    LoginPage.cpp
    LoginPage.h
    LoginPage.ui
    RegisterPage.h
    RegisterPage.cpp
    RegisterPage.ui
    MainPage.h
    MainPage.cpp
    MainPage.ui
    DatabaseHeader.h
    utils.h
    utils.cpp
)

# Crearea aplicației în funcție de versiunea Qt
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(User_registration_system
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ServerConnection.h ServerConnection.cpp
        TicketWidget.ui
        TicketWidget.h TicketWidget.cpp
        CautaTraseu.h CautaTraseu.cpp
        CautaTraseu.ui
        RezultatCautareTraseu.ui
        RezultatCautareTraseu.h RezultatCautareTraseu.cpp
        RezultatePage.h RezultatePage.cpp
        RezultatePage.ui
        TicketListPage.ui
        TicketListPage.h TicketListPage.cpp





    )
else()
    if(ANDROID)
        add_library(User_registration_system SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(User_registration_system
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Linkăm la librăriile necesare
target_link_libraries(User_registration_system PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
    Qt${QT_VERSION_MAJOR}::Network  # Adăugăm QtNetwork
)

# Setăm proprietăți pentru targetul nostru
set_target_properties(User_registration_system PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(User_registration_system)
endif()
