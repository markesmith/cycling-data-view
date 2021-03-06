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


#if !defined(FIELD_HPP)
#define FIELD_HPP

#include <cstdio>
#include <iosfwd>
#include <string>
#include <vector>
#include "fit.hpp"
#include "fit_profile.hpp"

namespace fit
{

class Field
{
   public:
      Field(void);
      Field(const Field &field);
      Field(const Profile::MESG_INDEX mesgIndex, const FIT_UINT16 fieldIndex);
      Field(const FIT_UINT16 mesgNum, const FIT_UINT8 fieldNum);
      Field(const std::string& mesgName, const std::string& fieldName);
      FIT_BOOL IsValid(void) const;
      FIT_UINT16 GetIndex(void) const;
      std::string GetName(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT8 GetNum(void) const;
      FIT_UINT8 GetType(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_BOOL IsSignedInteger(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      std::string GetUnits(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_FLOAT32 GetScale(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_FLOAT32 GetOffset(const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT16 GetNumComponents(void) const;
      FIT_UINT16 GetNumSubFields(void) const;
      const Profile::FIELD_COMPONENT* GetComponent(const FIT_UINT16 component) const;
      const Profile::SUBFIELD* GetSubField(const FIT_UINT16 subFieldIndex) const;
      FIT_UINT8 GetSize(void) const;
      FIT_UINT8 GetNumValues(void) const;
      FIT_UINT32 GetBitsValue(const FIT_UINT16 offset, const FIT_UINT8 bits) const;
      FIT_SINT32 GetBitsSignedValue(const FIT_UINT16 offset, const FIT_UINT8 bits) const;
      FIT_ENUM GetENUMValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_BYTE GetBYTEValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_SINT8 GetSINT8Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT8 GetUINT8Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT8Z GetUINT8ZValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_SINT16 GetSINT16Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT16 GetUINT16Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT16Z GetUINT16ZValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_SINT32 GetSINT32Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT32 GetUINT32Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_UINT32Z GetUINT32ZValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_FLOAT32 GetFLOAT32Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_FLOAT64 GetFLOAT64Value(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      FIT_WSTRING GetSTRINGValue(const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD) const;
      void SetENUMValue(const FIT_ENUM value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetBYTEValue(const FIT_BYTE value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetSINT8Value(const FIT_SINT8 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT8Value(const FIT_UINT8 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT8ZValue(const FIT_UINT8 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetSINT16Value(const FIT_SINT16 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT16Value(const FIT_UINT16 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT16ZValue(const FIT_UINT16Z value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetSINT32Value(const FIT_SINT32 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT32Value(const FIT_UINT32 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetUINT32ZValue(const FIT_UINT32Z value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetFLOAT32Value(const FIT_FLOAT32 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetFLOAT64Value(const FIT_FLOAT64 value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      void SetSTRINGValue(const FIT_WSTRING& value, const FIT_UINT8 fieldArrayIndex = 0, const FIT_UINT16 subFieldIndex = FIT_SUBFIELD_INDEX_MAIN_FIELD);
      FIT_BOOL Read(const void *data, const FIT_UINT8 size);
      FIT_UINT8 Write(std::ostream &file) const;

   private:
      const Profile::MESG* profile;
      FIT_UINT16 profileIndex;
      std::vector<std::vector<FIT_BYTE> > values;
};

} // namespace fit

#endif // defined(FIELD_HPP)
