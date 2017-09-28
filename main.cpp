#include <iostream>
#include <ros/ros.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "test");
    ros::NodeHandle n;
    while(!ros::isShuttingDown())
    {
        std::cout << "Hello, World!" << std::endl;
    }
    return 0;
}