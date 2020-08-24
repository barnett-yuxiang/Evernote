//
// Created by yuli on 2020/8/24.
//

#ifndef POINTER__DEX_FILE_H_
#define POINTER__DEX_FILE_H_

#include <cstdint>
#include <cstddef>

static constexpr size_t kSha1DigestSize = 20;

struct Header {
  uint8_t magic_[8] = {};
  uint32_t checksum_ = 0;  // See also location_checksum_
  uint8_t signature_[kSha1DigestSize] = {};
  uint32_t file_size_ = 0;  // size of entire file
  uint32_t header_size_ = 0;  // offset to start of next section
  uint32_t endian_tag_ = 0;
  uint32_t link_size_ = 0;  // unused
  uint32_t link_off_ = 0;  // unused
  uint32_t map_off_ = 0;  // map list offset from data_off_
  uint32_t string_ids_size_ = 0;  // number of StringIds
  uint32_t string_ids_off_ = 0;  // file offset of StringIds array
  uint32_t type_ids_size_ = 0;  // number of TypeIds, we don't support more than 65535
  uint32_t type_ids_off_ = 0;  // file offset of TypeIds array
  uint32_t proto_ids_size_ = 0;  // number of ProtoIds, we don't support more than 65535
  uint32_t proto_ids_off_ = 0;  // file offset of ProtoIds array
  uint32_t field_ids_size_ = 0;  // number of FieldIds
  uint32_t field_ids_off_ = 0;  // file offset of FieldIds array
  uint32_t method_ids_size_ = 0;  // number of MethodIds
  uint32_t method_ids_off_ = 0;  // file offset of MethodIds array
  uint32_t class_defs_size_ = 0;  // number of ClassDefs
  uint32_t class_defs_off_ = 0;  // file offset of ClassDef array
  uint32_t data_size_ = 0;  // size of data section
  uint32_t data_off_ = 0;  // file offset of data section

  // Decode the dex magic version
  uint32_t GetVersion() const;
};

#endif //POINTER__DEX_FILE_H_
