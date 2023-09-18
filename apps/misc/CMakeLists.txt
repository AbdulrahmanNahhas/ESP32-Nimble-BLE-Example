set(SOURCES "misc.c")

idf_component_register(
  SRCS ${SOURCES}
  INCLUDE_DIRS "."
  REQUIRES         # Components that you want to include
)