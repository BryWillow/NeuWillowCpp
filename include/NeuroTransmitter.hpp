#pragma once

namespace neuWillow
{
  /**
   * There are quite a few more neurotransmitters, but
   * these are the ones we are interested in.
   */
  enum NeurotransmitterTypes
  {
    Acetylcholine,
    AminoAcid,
    Dopamine,
    Gaba,
    Glutamate,
    Histaime,
    Neuropeptide,
    Norepinephrine,
    Peptide,
    Serotonin,
  };

  class NeuroTransmitter
  {
    public:
      NeuroTransmitter();
      ~NeuroTransmitter();
      
    public:
      virtual bool isExcitatory() = 0;
  };

  class Dopamine : NeuroTransmitter
  { 
    public:
      bool isExcitatory() { return true; }
  };

  class Gaba : NeuroTransmitter
  { 
    public:
      bool isExcitatory() { return false; }
  };

  class Glutamate : NeuroTransmitter
  { 
    public:
      bool isExcitatory() { return true; }
  };

  class Seratonin : NeuroTransmitter
  { 
    public:
      bool isExcitatory() { return false; }
  };

} // namespace neuWillow