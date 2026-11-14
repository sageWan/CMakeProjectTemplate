project(OCCTImgui)

file(GLOB_RECURSE SOURCES "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")

add_executable_module(OCCTImgui
	SOURCES ${SOURCES}
	DEPENDS imgui
)