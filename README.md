# Evernote
Personal developer notes, daily record some key points and bits and pieces.

## DevHub/GoLand

[![codecov](https://codecov.io/gh/barnett-yuxiang/Evernote/branch/main/graph/badge.svg?token=<TOKEN>)](https://codecov.io/gh/barnett-yuxiang/Evernote)

## DevHub/AndroidStudio

In this section, we will explore how to build a well-structured project directory in a project that uses Android Studio Flamingo, Gradle 5.x, AGP 3.x.x, and Kotlin.

The choice of project structure depends on the project's size, team size, and personal preferences. Here is a recommended directory structure:

```
gradle_5_agp_3_kotlin_1_3
│
├── app
│ ├── src
│ │ ├── main
│ │ │ ├── java
│ │ │ ├── res
│ │ │ └── AndroidManifest.xml
│ │ └── test
│ └── build.gradle
│
├── gradle
│ └── wrapper
│ ├── gradle-wrapper.jar
│ └── gradle-wrapper.properties
│
├── build.gradle
├── settings.gradle
└── gradle.properties
```

This template serves as a basic framework, and you can modify and extend it based on your project requirements.
