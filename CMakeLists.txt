# CMakeList.txt : 最上位の CMake プロジェクト ファイル。グローバル構成を行います
# また、サブプロジェクトをここに含めます。
#
cmake_minimum_required (VERSION 3.8)

project ("wander_json_proj" VERSION 1.0)


add_subdirectory(dependencies/wander_lib)
add_subdirectory(dependencies/json-cpp)

option(RILEY_JSONCPP_UTILS_WITH_TESTS "Build and run RileyJsonCppUtils test executables" ON)

# add_subdirectory(src/main)

if (${RILEY_JSONCPP_UTILS_WITH_TESTS})
	enable_testing()
	add_subdirectory(src/test)
endif()
