// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: auth.proto

#include "auth.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace Authenticator {

inline constexpr Variables::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : servercontext_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        a_{0},
        b_{0},
        c_{0},
        x_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Variables::Variables(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct VariablesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VariablesDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~VariablesDefaultTypeInternal() {}
  union {
    Variables _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VariablesDefaultTypeInternal _Variables_default_instance_;

inline constexpr Answer::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : answer_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Answer::Answer(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct AnswerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AnswerDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AnswerDefaultTypeInternal() {}
  union {
    Answer _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AnswerDefaultTypeInternal _Answer_default_instance_;
}  // namespace Authenticator
static ::_pb::Metadata file_level_metadata_auth_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_auth_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_auth_2eproto = nullptr;
const ::uint32_t TableStruct_auth_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _impl_.a_),
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _impl_.b_),
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _impl_.c_),
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _impl_.x_),
    PROTOBUF_FIELD_OFFSET(::Authenticator::Variables, _impl_.servercontext_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::Authenticator::Answer, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::Authenticator::Answer, _impl_.answer_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::Authenticator::Variables)},
        {13, -1, -1, sizeof(::Authenticator::Answer)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::Authenticator::_Variables_default_instance_._instance,
    &::Authenticator::_Answer_default_instance_._instance,
};
const char descriptor_table_protodef_auth_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\nauth.proto\022\rAuthenticator\"N\n\tVariables"
    "\022\t\n\001a\030\001 \001(\005\022\t\n\001b\030\002 \001(\005\022\t\n\001c\030\003 \001(\005\022\t\n\001x\030\004"
    " \001(\005\022\025\n\rServerContext\030\005 \001(\t\"\030\n\006Answer\022\016\n"
    "\006Answer\030\001 \001(\0012\272\002\n\004Auth\022O\n\030ClientToServer"
    "PortStream\022\025.Authenticator.Answer\032\030.Auth"
    "enticator.Variables\"\0000\001\022O\n\030ServerToClien"
    "tPortStream\022\025.Authenticator.Answer\032\030.Aut"
    "henticator.Variables\"\0000\001\022G\n\022ClientVerifi"
    "cation\022\025.Authenticator.Answer\032\030.Authenti"
    "cator.Variables\"\000\022G\n\022ServerVerification\022"
    "\025.Authenticator.Answer\032\030.Authenticator.V"
    "ariables\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_auth_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_auth_2eproto = {
    false,
    false,
    458,
    descriptor_table_protodef_auth_2eproto,
    "auth.proto",
    &descriptor_table_auth_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_auth_2eproto::offsets,
    file_level_metadata_auth_2eproto,
    file_level_enum_descriptors_auth_2eproto,
    file_level_service_descriptors_auth_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_auth_2eproto_getter() {
  return &descriptor_table_auth_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_auth_2eproto(&descriptor_table_auth_2eproto);
namespace Authenticator {
// ===================================================================

class Variables::_Internal {
 public:
};

Variables::Variables(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Authenticator.Variables)
}
inline PROTOBUF_NDEBUG_INLINE Variables::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : servercontext_(arena, from.servercontext_),
        _cached_size_{0} {}

Variables::Variables(
    ::google::protobuf::Arena* arena,
    const Variables& from)
    : ::google::protobuf::Message(arena) {
  Variables* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, a_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, a_),
           offsetof(Impl_, x_) -
               offsetof(Impl_, a_) +
               sizeof(Impl_::x_));

  // @@protoc_insertion_point(copy_constructor:Authenticator.Variables)
}
inline PROTOBUF_NDEBUG_INLINE Variables::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : servercontext_(arena),
        _cached_size_{0} {}

inline void Variables::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, a_),
           0,
           offsetof(Impl_, x_) -
               offsetof(Impl_, a_) +
               sizeof(Impl_::x_));
}
Variables::~Variables() {
  // @@protoc_insertion_point(destructor:Authenticator.Variables)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Variables::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.servercontext_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Variables::Clear() {
// @@protoc_insertion_point(message_clear_start:Authenticator.Variables)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.servercontext_.ClearToEmpty();
  ::memset(&_impl_.a_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.x_) -
      reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.x_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Variables::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 0, 45, 2> Variables::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Variables_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // int32 a = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Variables, _impl_.a_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Variables, _impl_.a_)}},
    // int32 b = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Variables, _impl_.b_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Variables, _impl_.b_)}},
    // int32 c = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Variables, _impl_.c_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Variables, _impl_.c_)}},
    // int32 x = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Variables, _impl_.x_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Variables, _impl_.x_)}},
    // string ServerContext = 5;
    {::_pbi::TcParser::FastUS1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Variables, _impl_.servercontext_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 a = 1;
    {PROTOBUF_FIELD_OFFSET(Variables, _impl_.a_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 b = 2;
    {PROTOBUF_FIELD_OFFSET(Variables, _impl_.b_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 c = 3;
    {PROTOBUF_FIELD_OFFSET(Variables, _impl_.c_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 x = 4;
    {PROTOBUF_FIELD_OFFSET(Variables, _impl_.x_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string ServerContext = 5;
    {PROTOBUF_FIELD_OFFSET(Variables, _impl_.servercontext_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\27\0\0\0\0\15\0\0"
    "Authenticator.Variables"
    "ServerContext"
  }},
};

::uint8_t* Variables::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Authenticator.Variables)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_a(), target);
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_b(), target);
  }

  // int32 c = 3;
  if (this->_internal_c() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_c(), target);
  }

  // int32 x = 4;
  if (this->_internal_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<4>(
            stream, this->_internal_x(), target);
  }

  // string ServerContext = 5;
  if (!this->_internal_servercontext().empty()) {
    const std::string& _s = this->_internal_servercontext();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Authenticator.Variables.ServerContext");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Authenticator.Variables)
  return target;
}

::size_t Variables::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Authenticator.Variables)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string ServerContext = 5;
  if (!this->_internal_servercontext().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_servercontext());
  }

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_a());
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_b());
  }

  // int32 c = 3;
  if (this->_internal_c() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_c());
  }

  // int32 x = 4;
  if (this->_internal_x() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_x());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Variables::_class_data_ = {
    Variables::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Variables::GetClassData() const {
  return &_class_data_;
}

void Variables::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Variables*>(&to_msg);
  auto& from = static_cast<const Variables&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Authenticator.Variables)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_servercontext().empty()) {
    _this->_internal_set_servercontext(from._internal_servercontext());
  }
  if (from._internal_a() != 0) {
    _this->_internal_set_a(from._internal_a());
  }
  if (from._internal_b() != 0) {
    _this->_internal_set_b(from._internal_b());
  }
  if (from._internal_c() != 0) {
    _this->_internal_set_c(from._internal_c());
  }
  if (from._internal_x() != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Variables::CopyFrom(const Variables& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Authenticator.Variables)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Variables::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Variables::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Variables::InternalSwap(Variables* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.servercontext_, &other->_impl_.servercontext_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Variables, _impl_.x_)
      + sizeof(Variables::_impl_.x_)
      - PROTOBUF_FIELD_OFFSET(Variables, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::google::protobuf::Metadata Variables::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_auth_2eproto_getter, &descriptor_table_auth_2eproto_once,
      file_level_metadata_auth_2eproto[0]);
}
// ===================================================================

class Answer::_Internal {
 public:
};

Answer::Answer(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Authenticator.Answer)
}
Answer::Answer(
    ::google::protobuf::Arena* arena, const Answer& from)
    : Answer(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE Answer::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Answer::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.answer_ = {};
}
Answer::~Answer() {
  // @@protoc_insertion_point(destructor:Authenticator.Answer)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Answer::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Answer::Clear() {
// @@protoc_insertion_point(message_clear_start:Authenticator.Answer)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.answer_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Answer::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> Answer::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Answer_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // double Answer = 1;
    {::_pbi::TcParser::FastF64S1,
     {9, 63, 0, PROTOBUF_FIELD_OFFSET(Answer, _impl_.answer_)}},
  }}, {{
    65535, 65535
  }}, {{
    // double Answer = 1;
    {PROTOBUF_FIELD_OFFSET(Answer, _impl_.answer_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kDouble)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Answer::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Authenticator.Answer)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // double Answer = 1;
  static_assert(sizeof(::uint64_t) == sizeof(double),
                "Code assumes ::uint64_t and double are the same size.");
  double tmp_answer = this->_internal_answer();
  ::uint64_t raw_answer;
  memcpy(&raw_answer, &tmp_answer, sizeof(tmp_answer));
  if (raw_answer != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(
        1, this->_internal_answer(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Authenticator.Answer)
  return target;
}

::size_t Answer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Authenticator.Answer)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double Answer = 1;
  static_assert(sizeof(::uint64_t) == sizeof(double),
                "Code assumes ::uint64_t and double are the same size.");
  double tmp_answer = this->_internal_answer();
  ::uint64_t raw_answer;
  memcpy(&raw_answer, &tmp_answer, sizeof(tmp_answer));
  if (raw_answer != 0) {
    total_size += 9;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Answer::_class_data_ = {
    Answer::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Answer::GetClassData() const {
  return &_class_data_;
}

void Answer::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Answer*>(&to_msg);
  auto& from = static_cast<const Answer&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Authenticator.Answer)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(::uint64_t) == sizeof(double),
                "Code assumes ::uint64_t and double are the same size.");
  double tmp_answer = from._internal_answer();
  ::uint64_t raw_answer;
  memcpy(&raw_answer, &tmp_answer, sizeof(tmp_answer));
  if (raw_answer != 0) {
    _this->_internal_set_answer(from._internal_answer());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Answer::CopyFrom(const Answer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Authenticator.Answer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Answer::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Answer::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Answer::InternalSwap(Answer* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.answer_, other->_impl_.answer_);
}

::google::protobuf::Metadata Answer::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_auth_2eproto_getter, &descriptor_table_auth_2eproto_once,
      file_level_metadata_auth_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace Authenticator
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
