set(SOURCES "nimble_component.c")

idf_component_register(
  SRCS ${SOURCES}
  INCLUDE_DIRS "."
  REQUIRES nvs_flash           # Components that you want to include
)