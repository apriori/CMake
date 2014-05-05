cmake_policy(SET CMP0054 OLD)

function (watch_callback var access value file stack)
  message(${access})
endfunction ()

variable_watch(uninit watch_callback)
message("-->${uninit}<--")
set(CMAKE_ALLOW_UNKNOWN_VARIABLE_READ_ACCESS ON)
message("-->${uninit}<--")
# Don't warn during generate
set(CMAKE_ALLOW_UNKNOWN_VARIABLE_READ_ACCESS OFF)
