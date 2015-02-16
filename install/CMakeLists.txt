cmake_minimum_required(VERSION 2.5)

PROJECT (hello)
INSTALL(FILES COPYRIGHT README DESTINATION share/doc/cmake/install_test)
INSTALL(PROGRAMS runhello.sh DESTINATION bin)
INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/install_test)
ADD_SUBDIRECTORY(src bin)
