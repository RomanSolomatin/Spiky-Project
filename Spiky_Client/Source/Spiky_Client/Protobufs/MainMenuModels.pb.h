// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MainMenuModels.proto

#ifndef PROTOBUF_MainMenuModels_2eproto__INCLUDED
#define PROTOBUF_MainMenuModels_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "DisableWarnings.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MainMenuModels_2eproto();
void protobuf_AssignDesc_MainMenuModels_2eproto();
void protobuf_ShutdownFile_MainMenuModels_2eproto();

class Chat;
class ChatMessage;
class MainMenu;

// ===================================================================

class ChatMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ChatMessage) */ {
 public:
  ChatMessage();
  virtual ~ChatMessage();

  ChatMessage(const ChatMessage& from);

  inline ChatMessage& operator=(const ChatMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChatMessage& default_instance();

  void Swap(ChatMessage* other);

  // implements Message ----------------------------------------------

  inline ChatMessage* New() const { return New(NULL); }

  ChatMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatMessage& from);
  void MergeFrom(const ChatMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ChatMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 time = 1;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string text = 3;
  void clear_text();
  static const int kTextFieldNumber = 3;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // @@protoc_insertion_point(class_scope:ChatMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 time_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_MainMenuModels_2eproto();
  friend void protobuf_AssignDesc_MainMenuModels_2eproto();
  friend void protobuf_ShutdownFile_MainMenuModels_2eproto();

  void InitAsDefaultInstance();
  static ChatMessage* default_instance_;
};
// -------------------------------------------------------------------

class Chat : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Chat) */ {
 public:
  Chat();
  virtual ~Chat();

  Chat(const Chat& from);

  inline Chat& operator=(const Chat& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Chat& default_instance();

  enum V1Case {
    kSubscribe = 4,
    V1_NOT_SET = 0,
  };

  void Swap(Chat* other);

  // implements Message ----------------------------------------------

  inline Chat* New() const { return New(NULL); }

  Chat* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Chat& from);
  void MergeFrom(const Chat& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Chat* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 time = 1;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string text = 3;
  void clear_text();
  static const int kTextFieldNumber = 3;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // optional bool subscribe = 4;
  private:
  bool has_subscribe() const;
  public:
  void clear_subscribe();
  static const int kSubscribeFieldNumber = 4;
  bool subscribe() const;
  void set_subscribe(bool value);

  // repeated .ChatMessage messages = 5;
  int messages_size() const;
  void clear_messages();
  static const int kMessagesFieldNumber = 5;
  const ::ChatMessage& messages(int index) const;
  ::ChatMessage* mutable_messages(int index);
  ::ChatMessage* add_messages();
  ::google::protobuf::RepeatedPtrField< ::ChatMessage >*
      mutable_messages();
  const ::google::protobuf::RepeatedPtrField< ::ChatMessage >&
      messages() const;

  V1Case v1_case() const;
  // @@protoc_insertion_point(class_scope:Chat)
 private:
  inline void set_has_subscribe();

  inline bool has_v1() const;
  void clear_v1();
  inline void clear_has_v1();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 time_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::RepeatedPtrField< ::ChatMessage > messages_;
  union V1Union {
    V1Union() {}
    bool subscribe_;
  } v1_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_MainMenuModels_2eproto();
  friend void protobuf_AssignDesc_MainMenuModels_2eproto();
  friend void protobuf_ShutdownFile_MainMenuModels_2eproto();

  void InitAsDefaultInstance();
  static Chat* default_instance_;
};
// -------------------------------------------------------------------

class MainMenu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MainMenu) */ {
 public:
  MainMenu();
  virtual ~MainMenu();

  MainMenu(const MainMenu& from);

  inline MainMenu& operator=(const MainMenu& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MainMenu& default_instance();

  void Swap(MainMenu* other);

  // implements Message ----------------------------------------------

  inline MainMenu* New() const { return New(NULL); }

  MainMenu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MainMenu& from);
  void MergeFrom(const MainMenu& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MainMenu* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .Chat chat = 1;
  bool has_chat() const;
  void clear_chat();
  static const int kChatFieldNumber = 1;
  const ::Chat& chat() const;
  ::Chat* mutable_chat();
  ::Chat* release_chat();
  void set_allocated_chat(::Chat* chat);

  // @@protoc_insertion_point(class_scope:MainMenu)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::Chat* chat_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_MainMenuModels_2eproto();
  friend void protobuf_AssignDesc_MainMenuModels_2eproto();
  friend void protobuf_ShutdownFile_MainMenuModels_2eproto();

  void InitAsDefaultInstance();
  static MainMenu* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ChatMessage

// optional int64 time = 1;
inline void ChatMessage::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ChatMessage::time() const {
  // @@protoc_insertion_point(field_get:ChatMessage.time)
  return time_;
}
inline void ChatMessage::set_time(::google::protobuf::int64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:ChatMessage.time)
}

// optional string name = 2;
inline void ChatMessage::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ChatMessage::name() const {
  // @@protoc_insertion_point(field_get:ChatMessage.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMessage::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ChatMessage.name)
}
inline void ChatMessage::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ChatMessage.name)
}
inline void ChatMessage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ChatMessage.name)
}
inline ::std::string* ChatMessage::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ChatMessage.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChatMessage::release_name() {
  // @@protoc_insertion_point(field_release:ChatMessage.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMessage::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ChatMessage.name)
}

// optional string text = 3;
inline void ChatMessage::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ChatMessage::text() const {
  // @@protoc_insertion_point(field_get:ChatMessage.text)
  return text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMessage::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ChatMessage.text)
}
inline void ChatMessage::set_text(const char* value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ChatMessage.text)
}
inline void ChatMessage::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ChatMessage.text)
}
inline ::std::string* ChatMessage::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:ChatMessage.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChatMessage::release_text() {
  // @@protoc_insertion_point(field_release:ChatMessage.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatMessage::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:ChatMessage.text)
}

// -------------------------------------------------------------------

// Chat

// optional int64 time = 1;
inline void Chat::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Chat::time() const {
  // @@protoc_insertion_point(field_get:Chat.time)
  return time_;
}
inline void Chat::set_time(::google::protobuf::int64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:Chat.time)
}

// optional string name = 2;
inline void Chat::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Chat::name() const {
  // @@protoc_insertion_point(field_get:Chat.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chat::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Chat.name)
}
inline void Chat::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Chat.name)
}
inline void Chat::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Chat.name)
}
inline ::std::string* Chat::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Chat.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Chat::release_name() {
  // @@protoc_insertion_point(field_release:Chat.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chat::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Chat.name)
}

// optional string text = 3;
inline void Chat::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Chat::text() const {
  // @@protoc_insertion_point(field_get:Chat.text)
  return text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chat::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Chat.text)
}
inline void Chat::set_text(const char* value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Chat.text)
}
inline void Chat::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Chat.text)
}
inline ::std::string* Chat::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:Chat.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Chat::release_text() {
  // @@protoc_insertion_point(field_release:Chat.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chat::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:Chat.text)
}

// optional bool subscribe = 4;
inline bool Chat::has_subscribe() const {
  return v1_case() == kSubscribe;
}
inline void Chat::set_has_subscribe() {
  _oneof_case_[0] = kSubscribe;
}
inline void Chat::clear_subscribe() {
  if (has_subscribe()) {
    v1_.subscribe_ = false;
    clear_has_v1();
  }
}
inline bool Chat::subscribe() const {
  // @@protoc_insertion_point(field_get:Chat.subscribe)
  if (has_subscribe()) {
    return v1_.subscribe_;
  }
  return false;
}
inline void Chat::set_subscribe(bool value) {
  if (!has_subscribe()) {
    clear_v1();
    set_has_subscribe();
  }
  v1_.subscribe_ = value;
  // @@protoc_insertion_point(field_set:Chat.subscribe)
}

// repeated .ChatMessage messages = 5;
inline int Chat::messages_size() const {
  return messages_.size();
}
inline void Chat::clear_messages() {
  messages_.Clear();
}
inline const ::ChatMessage& Chat::messages(int index) const {
  // @@protoc_insertion_point(field_get:Chat.messages)
  return messages_.Get(index);
}
inline ::ChatMessage* Chat::mutable_messages(int index) {
  // @@protoc_insertion_point(field_mutable:Chat.messages)
  return messages_.Mutable(index);
}
inline ::ChatMessage* Chat::add_messages() {
  // @@protoc_insertion_point(field_add:Chat.messages)
  return messages_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ChatMessage >*
Chat::mutable_messages() {
  // @@protoc_insertion_point(field_mutable_list:Chat.messages)
  return &messages_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ChatMessage >&
Chat::messages() const {
  // @@protoc_insertion_point(field_list:Chat.messages)
  return messages_;
}

inline bool Chat::has_v1() const {
  return v1_case() != V1_NOT_SET;
}
inline void Chat::clear_has_v1() {
  _oneof_case_[0] = V1_NOT_SET;
}
inline Chat::V1Case Chat::v1_case() const {
  return Chat::V1Case(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// MainMenu

// optional .Chat chat = 1;
inline bool MainMenu::has_chat() const {
  return !_is_default_instance_ && chat_ != NULL;
}
inline void MainMenu::clear_chat() {
  if (GetArenaNoVirtual() == NULL && chat_ != NULL) delete chat_;
  chat_ = NULL;
}
inline const ::Chat& MainMenu::chat() const {
  // @@protoc_insertion_point(field_get:MainMenu.chat)
  return chat_ != NULL ? *chat_ : *default_instance_->chat_;
}
inline ::Chat* MainMenu::mutable_chat() {
  
  if (chat_ == NULL) {
    chat_ = new ::Chat;
  }
  // @@protoc_insertion_point(field_mutable:MainMenu.chat)
  return chat_;
}
inline ::Chat* MainMenu::release_chat() {
  // @@protoc_insertion_point(field_release:MainMenu.chat)
  
  ::Chat* temp = chat_;
  chat_ = NULL;
  return temp;
}
inline void MainMenu::set_allocated_chat(::Chat* chat) {
  delete chat_;
  chat_ = chat;
  if (chat) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:MainMenu.chat)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MainMenuModels_2eproto__INCLUDED
