add_executable(
	test_wander_lib
	wander_test_main.cpp
)
target_link_libraries(
	test_wander_lib PRIVATE
	wander_test_lib
	wander-lib
	jsoncpp_static
)
target_include_directories(test_wander_lib PUBLIC "${PROJECT_SOURCE_DIR}/include")


add_test(NAME TestWanderLib COMMAND test_wander_lib)