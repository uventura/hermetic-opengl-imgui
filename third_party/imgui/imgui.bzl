load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

def imgui():
    new_git_repository(
        name = "imgui",
        remote = "https://github.com/ocornut/imgui",
        branch = "docking",
        build_file = "//third_party/imgui:imgui.BUILD",
    )
