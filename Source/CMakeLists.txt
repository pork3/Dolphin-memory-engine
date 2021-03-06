cmake_minimum_required(VERSION 3.5.0)
project(Dolphin-memory-engine)

if(WIN32)
    set(DolphinProcessSrc DolphinProcess/Windows/WindowsDolphinProcess.cpp)
endif(WIN32)

if(UNIX)
   set(DolphinProcessSrc DolphinProcess/Linux/LinuxDolphinProcess.cpp)
endif(UNIX)

set(SRCS ${DolphinProcessSrc}
         DolphinProcess/DolphinAccessor.cpp  
         Common/MemoryCommon.cpp
         MemoryWatch/MemWatchEntry.cpp   
         MemoryWatch/MemWatchTreeNode.cpp
         CheatEngineParser/CheatEngineParser.cpp
         MemoryScanner/MemoryScanner.cpp
         GUI/GUICommon.cpp
         GUI/Settings/SConfig.cpp
         GUI/Settings/DlgSettings.cpp
         GUI/MemWatcher/MemWatchDelegate.cpp
         GUI/MemWatcher/MemWatchModel.cpp    
         GUI/MemWatcher/Dialogs/DlgChangeType.cpp 
         GUI/MemWatcher/Dialogs/DlgAddWatchEntry.cpp 
         GUI/MemWatcher/MemWatchWidget.cpp  
         GUI/MemWatcher/Dialogs/DlgImportCTFile.cpp
         GUI/MemScanner/ResultsListModel.cpp 
         GUI/MemScanner/MemScanWidget.cpp
         GUI/MemViewer/MemViewer.cpp
         GUI/MemViewer/MemViewerWidget.cpp
         GUI/MainWindow.cpp
		GUI/MemWatcher/MemwatchConsole.cpp
         main.cpp)

set(CMAKE_INCLUE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)

set(CMAKE_AUTOMOC ON)

IF(WIN32)
SET(GUI_TYPE WIN32 GUI/MemWatcher/MemWatchConsole.cpp GUI/MemWatcher/MemWatchConsole.h GUI/MemWatcher/MemwatchConsole.cpp GUI/MemWatcher/MemwatchConsole.h)
ENDIF(WIN32)

add_executable(Dolphin-memory-engine ${GUI_TYPE} ${SRCS})

target_link_libraries(Dolphin-memory-engine Qt5::Widgets)
target_link_libraries(Dolphin-memory-engine Qt5::Gui)
target_link_libraries(Dolphin-memory-engine Qt5::Core)

if(WIN32)
    if($<CONFIG:Debug>)
        get_target_property(WIDGETDLL Qt5::Widgets IMPORTED_LOCATION_DEBUG)
		get_target_property(COREDLL Qt5::Widgets IMPORTED_LOCATION_DEBUG)
		get_target_property(GUIDLL Qt5::Widgets IMPORTED_LOCATION_DEBUG)
    else($<CONFIG:Debug>)
        get_target_property(WIDGETDLL Qt5::Widgets IMPORTED_LOCATION_RELEASE)
		get_target_property(COREDLL Qt5::Widgets IMPORTED_LOCATION_RELEASE)
		get_target_property(GUIDLL Qt5::Widgets IMPORTED_LOCATION_RELEASE)
    endif($<CONFIG:Debug>)
    add_custom_command(
		TARGET Dolphin-memory-engine POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
			$<TARGET_FILE:Qt5::Widgets>
			$<TARGET_FILE_DIR:Dolphin-memory-engine>
		TARGET Dolphin-memory-engine POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
			$<TARGET_FILE:Qt5::Core>
			$<TARGET_FILE_DIR:Dolphin-memory-engine>
		TARGET Dolphin-memory-engine POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
			$<TARGET_FILE:Qt5::Gui>
			$<TARGET_FILE_DIR:Dolphin-memory-engine>
	)
endif(WIN32)