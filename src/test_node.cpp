/*----------------------------------------
    Author: Lukas Hoyer 2016
    EMail: lukas.hoyer@live.de
    License: MIT License
 ----------------------------------------*/
#include <ros/ros.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "test_node");
    ROS_INFO("Hello World!");
    return 0;
}
