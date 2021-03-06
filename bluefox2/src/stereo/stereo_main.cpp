#include "bluefox2/stereo_node.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2_stereo");
  ros::NodeHandle pnh("~");

  try {
    bluefox2::StereoNode stereo_node(pnh);
    stereo_node.Run();
    ros::spin();
    stereo_node.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR("%s: %s", pnh.getNamespace().c_str(), e.what());
  }
}
