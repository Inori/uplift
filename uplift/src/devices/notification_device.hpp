#pragma once

#include "device.hpp"

namespace uplift::devices
{
  class NotificationDevice : public Device
  {
  public:
    NotificationDevice(Runtime* runtime);
    virtual ~NotificationDevice();

    SyscallError Initialize(std::string path, uint32_t flags, uint32_t mode);
    SyscallError Close();

    SyscallError Read(void* data_buffer, size_t data_size, size_t* read_size);
    SyscallError Write(const void* data_buffer, size_t data_size, size_t* written_size);
    SyscallError IOControl(uint32_t request, void* argp);
    SyscallError MMap(void* addr, size_t len, int prot, int flags, off_t offset, void*& allocation);
  };
}
