-- A solution contains projects, and defines the available configurations
solution "MyApplication"
    configurations { "Debug", "Release" }
    buildoptions {"-std=c++11"}
    defines { "NOBWAPI" }
    language "C++"

   -- A project defines one build target
   project "BuildTree"
      kind "StaticLib"
      files { "src/**.hpp", "src/**.cpp" }

      configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }

      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }
    
    project "test"
        kind "ConsoleApp"
        links { "gtest", "BuildTree" }
        files { "tests/**.hpp", "tests/**.cpp" }
        includedirs { "src/" }

      configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }

      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }
