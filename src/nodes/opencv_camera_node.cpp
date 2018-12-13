#include <ros/ros.h>
#include <avt_vimba_camera/opencv_camera.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "opencv_camera_node");

  ros::NodeHandle nh;
  ros::NodeHandle nhp("~");

  avt_vimba_camera::OpenCvCamera oc(nh,nhp);

  ros::spin();
  return 0;
}
