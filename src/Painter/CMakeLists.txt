project(Painter)

file(GLOB_RECURSE SOURCES "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")

ADD_MODULE(Painter
	SOURCES ${SOURCES}
	DEPENDS fmt opengl32
)