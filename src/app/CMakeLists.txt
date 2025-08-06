set(APP_SOURCES 
    app.cpp 
    app.h
)

add_library(app ${APP_SOURCES})

target_include_directories(app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
