#include "stdafx.h"

#include "../runtime.hpp"
#include "../syscall_errors.hpp"
#include "deci_tty_device.hpp"

using namespace uplift;
using namespace uplift::devices;
using namespace uplift::syscall_errors;

DeciTTYDevice::DeciTTYDevice(Runtime* runtime)
  : Device(runtime)
{
}

DeciTTYDevice::~DeciTTYDevice()
{
}

SCERR DeciTTYDevice::Initialize(std::string path, uint32_t flags, uint32_t mode)
{
  return SUCCESS;
}

SCERR DeciTTYDevice::Close()
{
  return SUCCESS;
}

SCERR DeciTTYDevice::Read(void* data_buffer, size_t data_size, size_t* read_size)
{
  assert_always();
  return SCERR::eNOSYS;
}

SCERR DeciTTYDevice::Write(const void* data_buffer, size_t data_size, size_t* written_size)
{
  assert_always();
  return SCERR::eNOSYS;
}

SCERR DeciTTYDevice::IOControl(uint32_t request, void* argp)
{
  assert_always();
  return SCERR::eNOSYS;
}

SCERR DeciTTYDevice::MMap(void* addr, size_t len, int prot, int flags, off_t offset, void*& allocation)
{
  assert_always();
  return SCERR::eNOSYS;
}
