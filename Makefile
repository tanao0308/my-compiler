cmake_minimum_required(VERSION 3.10)

# 设置项目名和版本
project(CompilerProject VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

# 包含子目录
add_subdirectory(third_party/spdlog)

# 查找所有源文件
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 创建可执行文件
add_executable(compiler_project ${SOURCES})

# 设置头文件目录
target_include_directories(compiler_project PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 链接 spdlog 库
target_link_libraries(compiler_project PRIVATE spdlog::spdlog)

# 设置安装规则
install(TARGETS compiler_project DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)

# 可选：如果有测试，可以启用 CTest
enable_testing()
add_subdirectory(tests)
