project(LearnOpenGL)

file(GLOB_RECURSE SOURCES "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")

add_executable_module(LearnOpenGL
	SOURCES ${SOURCES}
	DEPENDS glfw
)