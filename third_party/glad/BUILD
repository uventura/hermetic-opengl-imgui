cc_library(
    name = "glad",
    srcs = [
        "src/gl.c",
    ],
    hdrs = [
        "include/glad/gl.h",
        "include/KHR/khrplatform.h"
    ],
    visibility = ["//visibility:public"],
    strip_include_prefix = "include",
    linkopts = [
        "-ldl",
        "-lpthread",
        "-fpic",
        "-fPIC",
        "-m64"
    ],
    copts = [
        "-fpic",
        "-fPIC",
        "-m64"
    ],
)
