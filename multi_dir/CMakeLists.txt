PROJECT(sayHello)
ADD_SUBDIRECTORY(hello)
aux_source_directory(. dir_srcs)
ADD_EXECUTABLE(main ${dir_srcs})
target_link_libraries(main hello)
