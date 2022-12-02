

#include "square_controller.h"

int main(int argc, char **argv){
    // Initialize ROS
    ros::init(argc, argv, "SquareController");

    auto controller = SquareController();
    controller.run();
    
    return 0;
}
