// Copyright 2014 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLC_RCLC_TYPES_H_
#define RCLC_RCLC_TYPES_H_

#include <rcl/types.h>

typedef rcl_ret_t rclc_ret_t;
typedef rcl_node_t rclc_node_t;
typedef rcl_publisher_t rclc_publisher_t;

typedef void (* rclc_callback_t)(const void *);

typedef struct rclc_subscription_t
{
  struct rclc_subscription_t * rcl_subscription;
  rclc_callback_t user_callback;
} rclc_subscription_t;

typedef struct rclc_executor_t
{
  // TODO: Fill this out
} rclc_executor_t;

#endif  /* RCLC_RCLC_TYPES_H_ */
