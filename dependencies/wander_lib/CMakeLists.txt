include(FetchContent)

set(RILEY_CPP_UTILS_WITH_TESTS OFF)
FetchContent_Declare(
	WanderLib
	GIT_REPOSITORY https://github.com/GodRyosuke/cmake_test_lib.git
	GIT_TAG 1.0
)

FetchContent_MakeAvailable(WanderLib)