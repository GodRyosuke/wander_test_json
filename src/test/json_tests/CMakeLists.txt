add_executable(
	wander_lib_tests
	wander_main_test.cpp
)
target_link_libraries(
	wander_lib_tests PRIVATE
	wander-lib
	jsoncpp_static
)
target_include_directories(wander_lib_tests PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_custom_command(
	TARGET wander_lib_tests
	COMMAND ${CMAKE_COMMAND} -E copy_directory
		${PROJECT_SOURCE_DIR}/src/test/json_tests/test_resources $<TARGET_FILE_DIR:wander_lib_tests>/test_resources
)


add_test(NAME WanderLibTests COMMAND wander_lib_tests)