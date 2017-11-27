#pragma once

#include "file.hpp"

namespace uplift::objects
{
  class Eport : public File
  {
  public:
    Eport(Runtime* runtime);
    virtual ~Eport();

    uint32_t Close();

    uint32_t Read(void* data_buffer, size_t data_size, size_t* read_size);
    uint32_t Write(const void* data_buffer, size_t data_size, size_t* written_size);
    uint32_t IOControl(uint32_t request, void* argp);
    uint32_t MMap(void* addr, size_t len, int prot, int flags, off_t offset, void*& allocation);
  };
}
