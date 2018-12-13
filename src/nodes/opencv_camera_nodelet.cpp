#include <pluginlib/class_list_macros.h>
#include "avt_vimba_camera/opencv_camera_nodelet.h"

namespace avt_vimba_camera
{
    void OpenCvCameraNodelet::onInit()
    {
        NODELET_DEBUG("Initializing nodelet...");
				camera_ = new OpenCvCamera(getMTNodeHandle(), getMTPrivateNodeHandle());
    }

    OpenCvCameraNodelet::~OpenCvCameraNodelet()
    {
      	delete camera_;
    }
}

PLUGINLIB_EXPORT_CLASS(avt_vimba_camera::OpenCvCameraNodelet, nodelet::Nodelet)
