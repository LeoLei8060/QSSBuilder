cmake_minimum_required(VERSION 3.5)

project(QSSBuilder VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES QSSBuilder_zh_CN.ts)

set(ITEMS_FILES
    Items/Widgets/item_widget.h Items/Widgets/item_widget.cpp Items/Widgets/item_widget.ui
    Items/Widgets/item_dialog.h Items/Widgets/item_dialog.cpp Items/Widgets/item_dialog.ui
    Items/Widgets/item_window.h Items/Widgets/item_window.cpp Items/Widgets/item_window.ui
    Items/Buttons/item_pushbutton.h Items/Buttons/item_pushbutton.cpp Items/Buttons/item_pushbutton.ui
    Items/Buttons/item_toolbutton.h Items/Buttons/item_toolbutton.cpp Items/Buttons/item_toolbutton.ui
    Items/Buttons/item_radiobutton.h Items/Buttons/item_radiobutton.cpp Items/Buttons/item_radiobutton.ui
    Items/Buttons/item_checkbox.h Items/Buttons/item_checkbox.cpp Items/Buttons/item_checkbox.ui
    Items/ItemViews/item_listview.h Items/ItemViews/item_listview.cpp Items/ItemViews/item_listview.ui
    Items/ItemViews/item_treeview.h Items/ItemViews/item_treeview.cpp Items/ItemViews/item_treeview.ui
    Items/ItemViews/item_tableview.h Items/ItemViews/item_tableview.cpp Items/ItemViews/item_tableview.ui
    Items/ItemWidgets/item_listwidget.h Items/ItemWidgets/item_listwidget.cpp Items/ItemWidgets/item_listwidget.ui
    Items/ItemWidgets/item_treewidget.h Items/ItemWidgets/item_treewidget.cpp Items/ItemWidgets/item_treewidget.ui
    Items/ItemWidgets/item_tablewidget.h Items/ItemWidgets/item_tablewidget.cpp Items/ItemWidgets/item_tablewidget.ui
    Items/Containers/item_groupbox.h Items/Containers/item_groupbox.cpp Items/Containers/item_groupbox.ui
    Items/Containers/item_scrollarea.h Items/Containers/item_scrollarea.cpp Items/Containers/item_scrollarea.ui
    Items/Containers/item_toolbox.h Items/Containers/item_toolbox.cpp Items/Containers/item_toolbox.ui
    Items/Containers/item_tabwidget.h Items/Containers/item_tabwidget.cpp Items/Containers/item_tabwidget.ui
    Items/Containers/item_stackedwidget.h Items/Containers/item_stackedwidget.cpp Items/Containers/item_stackedwidget.ui
    Items/Containers/item_frame.h Items/Containers/item_frame.cpp Items/Containers/item_frame.ui
    Items/Containers/item_mdiarea.h Items/Containers/item_mdiarea.cpp Items/Containers/item_mdiarea.ui
    Items/Containers/item_dockwidget.h Items/Containers/item_dockwidget.cpp Items/Containers/item_dockwidget.ui
    Items/InputWidgets/item_combobox.h Items/InputWidgets/item_combobox.cpp Items/InputWidgets/item_combobox.ui
    Items/InputWidgets/item_fontcombobox.h Items/InputWidgets/item_fontcombobox.cpp Items/InputWidgets/item_fontcombobox.ui
    Items/InputWidgets/item_lineedit.h Items/InputWidgets/item_lineedit.cpp Items/InputWidgets/item_lineedit.ui
    Items/InputWidgets/item_textedit.h Items/InputWidgets/item_textedit.cpp Items/InputWidgets/item_textedit.ui
    Items/InputWidgets/item_plaintextedit.h Items/InputWidgets/item_plaintextedit.cpp Items/InputWidgets/item_plaintextedit.ui
    Items/InputWidgets/item_spinbox.h Items/InputWidgets/item_spinbox.cpp Items/InputWidgets/item_spinbox.ui
    Items/InputWidgets/item_doublespinbox.h Items/InputWidgets/item_doublespinbox.cpp Items/InputWidgets/item_doublespinbox.ui
    Items/InputWidgets/item_timeedit.h Items/InputWidgets/item_timeedit.cpp Items/InputWidgets/item_timeedit.ui
    Items/InputWidgets/item_dateedit.h Items/InputWidgets/item_dateedit.cpp Items/InputWidgets/item_dateedit.ui
    Items/InputWidgets/item_dial.h Items/InputWidgets/item_dial.cpp Items/InputWidgets/item_dial.ui
    Items/InputWidgets/item_horscrollbar.h Items/InputWidgets/item_horscrollbar.cpp Items/InputWidgets/item_horscrollbar.ui
    Items/InputWidgets/item_verscrollbar.h Items/InputWidgets/item_verscrollbar.cpp Items/InputWidgets/item_verscrollbar.ui
    Items/InputWidgets/item_horslider.h Items/InputWidgets/item_horslider.cpp Items/InputWidgets/item_horslider.ui
    Items/InputWidgets/item_verslider.h Items/InputWidgets/item_verslider.cpp Items/InputWidgets/item_verslider.ui
    Items/DisplayWidgets/item_label.h Items/DisplayWidgets/item_label.cpp Items/DisplayWidgets/item_label.ui
    Items/DisplayWidgets/item_textbrowser.h Items/DisplayWidgets/item_textbrowser.cpp Items/DisplayWidgets/item_textbrowser.ui
    Items/DisplayWidgets/item_graphicsview.h Items/DisplayWidgets/item_graphicsview.cpp Items/DisplayWidgets/item_graphicsview.ui
    Items/DisplayWidgets/item_calendarwidget.h Items/DisplayWidgets/item_calendarwidget.cpp Items/DisplayWidgets/item_calendarwidget.ui
    Items/DisplayWidgets/item_lcdnumber.h Items/DisplayWidgets/item_lcdnumber.cpp Items/DisplayWidgets/item_lcdnumber.ui
    Items/DisplayWidgets/item_progressbar.h Items/DisplayWidgets/item_progressbar.cpp Items/DisplayWidgets/item_progressbar.ui
    Items/DisplayWidgets/item_horizontalline.h Items/DisplayWidgets/item_horizontalline.cpp Items/DisplayWidgets/item_horizontalline.ui
    Items/DisplayWidgets/item_verticalline.h Items/DisplayWidgets/item_verticalline.cpp Items/DisplayWidgets/item_verticalline.ui
)

set(PROJECT_SOURCES
        main.cpp
        builderwidget.cpp
        builderwidget.h
        builderwidget.ui
        ${TS_FILES}
        ${ITEMS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QSSBuilder
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QSSBuilder APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(QSSBuilder SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QSSBuilder
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(QSSBuilder PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QSSBuilder)
endif()
set_target_properties(QSSBuilder PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QSSBuilder
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QSSBuilder)
endif()
