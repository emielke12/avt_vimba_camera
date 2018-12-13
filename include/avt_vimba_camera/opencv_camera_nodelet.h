#include <nodelet/nodelet.h>
#include "avt_vimba_camera/opencv_camera.h"

namespace avt_vimba_camera
{

    class OpenCvCameraNodelet : public nodelet::Nodelet
    {
        public:
            virtual void onInit();
            virtual ~OpenCvCameraNodelet();
        private:
            OpenCvCamera* camera_;
    };

}
