// ����ͷ�ļ�
#include <hardware/hardware.h>

// ��������
#define CAM_DEV_NUM   1
#define CAM_DEV_FILE  "/dev/video0"

// ��������
int camdev_open (const hw_module_t* mod, const char* name, hw_device_t** dev);
int camdev_close(hw_device_t* device);
