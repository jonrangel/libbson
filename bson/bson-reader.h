/*
 * Copyright 2013 MongoDB Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#if !defined (BSON_INSIDE) && !defined (BSON_COMPILATION)
#error "Only <bson.h> can be included directly."
#endif


#ifndef BSON_READER_H
#define BSON_READER_H


#include "bson-oid.h"
#include "bson-types.h"


BSON_BEGIN_DECLS


bson_reader_t *
bson_reader_new_from_fd (int         fd,
                         bson_bool_t close_fd);


bson_reader_t *
bson_reader_new_from_data (const bson_uint8_t *data,
                           bson_size_t              length);


void
bson_reader_destroy (bson_reader_t *reader);


void
bson_reader_set_read_func (bson_reader_t   *reader,
                           bson_read_func_t func);


const bson_t *
bson_reader_read (bson_reader_t *reader,
                  bson_bool_t   *reached_eof);


bson_off_t
bson_reader_tell (bson_reader_t *reader);


BSON_END_DECLS


#endif /* BSON_READER_H */
