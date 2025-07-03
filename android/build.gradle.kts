import org.gradle.api.tasks.Delete
import org.gradle.api.file.Directory

allprojects {
    repositories {
//        flatDir {
//            dirs(file("${project(":unityLibrary").projectDir}/libs"))
//        }
        google()
        mavenCentral()
    }
}

// Optional: mengatur ulang direktori build ke folder atas
//val newBuildDir: Directory = rootProject.layout.buildDirectory.dir("../../build").get()
//rootProject.layout.buildDirectory.value(newBuildDir)

//subprojects {
//    val newSubprojectBuildDir: Directory = newBuildDir.dir(project.name)
//    project.layout.buildDirectory.value(newSubprojectBuildDir)
//}

// Pastikan evaluasi project app dilakukan
subprojects {
    project.evaluationDependsOn(":app")
}

// Task untuk membersihkan build
tasks.register<Delete>("clean") {
    delete(rootProject.layout.buildDirectory)
}
