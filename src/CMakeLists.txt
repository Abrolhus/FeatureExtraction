set (CMAKE_CXX_STANDARD 11)

cmake_minimum_required(VERSION 2.8)
project(main)
find_package(OpenCV REQUIRED)
set(SOURCES
    main.cpp
    featureDetection/line_detection.cpp
    featureDetection/hough_line_detection.cpp
    featureDetection/img_processing.cpp
    featureDetection/geometry_utils.cpp
    featureDetection/line_feature_detection.cpp
    featureDetection/ellipse_detector.cpp
    featureDetection/goal_detection.cpp
    featureDetection/feature_extraction.cpp
    featureDetection/dis_ang_translation.cpp
    featureDetection/clustering.cpp)

add_executable(main.out ${SOURCES})
target_link_libraries(main.out ${OpenCV_LIBS})
