load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

def imgui():
    new_git_repository(
        name = "imgui",
        remote = "https://github.com/ocornut/imgui",
        # branch = "docking",
        commit = "1d8e48c161370c37628c4f37f3f87cb19fbcb723",
        build_file = "//third_party/imgui:imgui.BUILD",
    )
