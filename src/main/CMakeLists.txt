add_library(
	wander_test_lib STATIC
	test.cpp
)
target_link_libraries(
	wander_test_lib PRIVATE
	wander-lib
	jsoncpp_static
)
target_include_directories(wander_test_lib PUBLIC "${PROJECT_SOURCE_DIR}/include")