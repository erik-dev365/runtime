set(SOURCES
  test2.cpp
)

add_executable(paltest_pal_except_test2
  ${SOURCES}
)

add_dependencies(paltest_pal_except_test2 coreclrpal)

target_link_libraries(paltest_pal_except_test2
  ${COMMON_TEST_LIBRARIES}
)
