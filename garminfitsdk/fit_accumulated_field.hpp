////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.50Release
// Tag = $Name: AKW1_500 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_ACCUMULATED_FIELD_HPP)
#define FIT_ACCUMULATED_FIELD_HPP

#include "fit.hpp"

namespace fit
{

class AccumulatedField
{
   public:
      FIT_UINT16 mesgNum;
      FIT_UINT8 fieldNum;
      FIT_UINT8 componentNum;
      FIT_UINT32 lastValue;
      FIT_UINT32 accumulatedValue;

      AccumulatedField(const FIT_UINT16 newMesgNum, const FIT_UINT8 newFieldNum, const FIT_UINT8 newComponentNum);
      FIT_UINT32 Accumulate(const FIT_UINT32 value, const FIT_UINT8 bits);

   private:
};

} // namespace fit

#endif // defined(FIT_ACCUMULATED_FIELD_HPP)


