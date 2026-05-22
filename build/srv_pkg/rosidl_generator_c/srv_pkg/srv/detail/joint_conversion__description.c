// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#include "srv_pkg/srv/detail/joint_conversion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__JointConversion__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x89, 0xdb, 0xce, 0x4c, 0x1d, 0xbc, 0x2e,
      0x0c, 0x66, 0x4f, 0x07, 0x01, 0xa2, 0xf2, 0xbf,
      0x6b, 0x03, 0xb1, 0xf1, 0xab, 0x07, 0x92, 0x03,
      0x9a, 0xa3, 0x70, 0x18, 0xeb, 0x48, 0xe1, 0x8a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__JointConversion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x20, 0x86, 0x5c, 0xb1, 0xd2, 0x4c, 0xbc,
      0x17, 0x4b, 0x1b, 0xcb, 0x2e, 0x01, 0x23, 0x2d,
      0xf3, 0xfb, 0xdd, 0xe3, 0xcd, 0x07, 0x11, 0x91,
      0x03, 0xf7, 0xe0, 0x2a, 0x72, 0x94, 0xca, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__JointConversion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0xac, 0x92, 0xa4, 0x14, 0xd1, 0x25, 0xd0,
      0x2f, 0x92, 0x57, 0x9f, 0x84, 0x33, 0x17, 0x1c,
      0xe7, 0xb9, 0x91, 0xea, 0xd6, 0xe2, 0x64, 0x55,
      0x31, 0xcf, 0xdd, 0xd1, 0xe0, 0x7b, 0xa1, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_srv_pkg
const rosidl_type_hash_t *
srv_pkg__srv__JointConversion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x86, 0x0d, 0x1a, 0x3e, 0x6d, 0x82, 0xb4,
      0x91, 0xd8, 0x6c, 0x46, 0x8b, 0x3b, 0x6f, 0x2e,
      0x01, 0x4d, 0xdb, 0x78, 0x9f, 0xf6, 0x18, 0x87,
      0x34, 0x4c, 0x31, 0xc6, 0x97, 0x8f, 0xa6, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/float64__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Float64__EXPECTED_HASH = {1, {
    0x70, 0x5b, 0xa9, 0xc3, 0xd1, 0xa0, 0x9d, 0xf4,
    0x37, 0x37, 0xeb, 0x67, 0x09, 0x55, 0x34, 0xde,
    0x36, 0xfd, 0x42, 0x6c, 0x05, 0x87, 0x77, 0x9b,
    0xda, 0x2b, 0xc5, 0x1f, 0xe7, 0x90, 0x18, 0x2a,
  }};
#endif

static char srv_pkg__srv__JointConversion__TYPE_NAME[] = "srv_pkg/srv/JointConversion";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char srv_pkg__srv__JointConversion_Event__TYPE_NAME[] = "srv_pkg/srv/JointConversion_Event";
static char srv_pkg__srv__JointConversion_Request__TYPE_NAME[] = "srv_pkg/srv/JointConversion_Request";
static char srv_pkg__srv__JointConversion_Response__TYPE_NAME[] = "srv_pkg/srv/JointConversion_Response";
static char std_msgs__msg__Float64__TYPE_NAME[] = "std_msgs/msg/Float64";

// Define type names, field names, and default values
static char srv_pkg__srv__JointConversion__FIELD_NAME__request_message[] = "request_message";
static char srv_pkg__srv__JointConversion__FIELD_NAME__response_message[] = "response_message";
static char srv_pkg__srv__JointConversion__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__JointConversion__FIELDS[] = {
  {
    {srv_pkg__srv__JointConversion__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {srv_pkg__srv__JointConversion_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__JointConversion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__JointConversion__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__JointConversion__TYPE_NAME, 27, 27},
      {srv_pkg__srv__JointConversion__FIELDS, 3, 3},
    },
    {srv_pkg__srv__JointConversion__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = srv_pkg__srv__JointConversion_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = srv_pkg__srv__JointConversion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = srv_pkg__srv__JointConversion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float64__EXPECTED_HASH, std_msgs__msg__Float64__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Float64__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__JointConversion_Request__FIELD_NAME__joint_input[] = "joint_input";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__JointConversion_Request__FIELDS[] = {
  {
    {srv_pkg__srv__JointConversion_Request__FIELD_NAME__joint_input, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      7,
      0,
      {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__JointConversion_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__JointConversion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
      {srv_pkg__srv__JointConversion_Request__FIELDS, 1, 1},
    },
    {srv_pkg__srv__JointConversion_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Float64__EXPECTED_HASH, std_msgs__msg__Float64__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Float64__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__JointConversion_Response__FIELD_NAME__joint_output[] = "joint_output";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__JointConversion_Response__FIELDS[] = {
  {
    {srv_pkg__srv__JointConversion_Response__FIELD_NAME__joint_output, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      7,
      0,
      {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__JointConversion_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__JointConversion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
      {srv_pkg__srv__JointConversion_Response__FIELDS, 1, 1},
    },
    {srv_pkg__srv__JointConversion_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Float64__EXPECTED_HASH, std_msgs__msg__Float64__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Float64__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char srv_pkg__srv__JointConversion_Event__FIELD_NAME__info[] = "info";
static char srv_pkg__srv__JointConversion_Event__FIELD_NAME__request[] = "request";
static char srv_pkg__srv__JointConversion_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field srv_pkg__srv__JointConversion_Event__FIELDS[] = {
  {
    {srv_pkg__srv__JointConversion_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription srv_pkg__srv__JointConversion_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float64__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
srv_pkg__srv__JointConversion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {srv_pkg__srv__JointConversion_Event__TYPE_NAME, 33, 33},
      {srv_pkg__srv__JointConversion_Event__FIELDS, 3, 3},
    },
    {srv_pkg__srv__JointConversion_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = srv_pkg__srv__JointConversion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = srv_pkg__srv__JointConversion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float64__EXPECTED_HASH, std_msgs__msg__Float64__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Float64__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Float64[7] joint_input\n"
  "---\n"
  "std_msgs/Float64[7] joint_output";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__JointConversion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__JointConversion__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__JointConversion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__JointConversion_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__JointConversion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__JointConversion_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
srv_pkg__srv__JointConversion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {srv_pkg__srv__JointConversion_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__JointConversion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__JointConversion__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *srv_pkg__srv__JointConversion_Event__get_individual_type_description_source(NULL);
    sources[4] = *srv_pkg__srv__JointConversion_Request__get_individual_type_description_source(NULL);
    sources[5] = *srv_pkg__srv__JointConversion_Response__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Float64__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__JointConversion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__JointConversion_Request__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Float64__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__JointConversion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__JointConversion_Response__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Float64__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
srv_pkg__srv__JointConversion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *srv_pkg__srv__JointConversion_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *srv_pkg__srv__JointConversion_Request__get_individual_type_description_source(NULL);
    sources[4] = *srv_pkg__srv__JointConversion_Response__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Float64__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
