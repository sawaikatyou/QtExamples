cmake_minimum_required(VERSION 2.6)

PROJECT(TableWidgetClickRows)

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})

QT4_WRAP_UI(UISrcs form.ui)
QT4_WRAP_CPP(MOCSrcs form.h)

include_directories(${include_directories} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

ADD_EXECUTABLE(TableWidgetClickRows main.cpp form.h form.cpp ${MOCSrcs} ${UISrcs})
TARGET_LINK_LIBRARIES(TableWidgetClickRows ${QT_LIBRARIES})

