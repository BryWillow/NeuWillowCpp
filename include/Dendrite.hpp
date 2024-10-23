#pragma once

#include <memory>
#include "NeuroTransmitter.hpp"

namespace neuWillow
{
  class Dendrite
  {
    public:
      Dendrite(long uniqueId);
      ~Dendrite();
      
    public:
      long getUniqueId() const { return _uniqueId; }
        
    private:
      long _uniqueId;
  };
} // namespace neuWillow