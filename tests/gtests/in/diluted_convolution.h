/*******************************************************************************
* Copyright 2017-2018 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

INST_TEST_CASE(SimpleSmall_NCHW_Dilution,
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 8, 8, 3, 3, 2, 2, 1, 1, 1, 1),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 6, 6, 3, 3, 1, 1, 1, 1, 1, 1),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 8, 8, 3, 3, 3, 3, 1, 1, 2, 2),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 4, 4, 3, 3, 2, 2, 1, 1, 3, 3),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 10, 10, 6, 5, 5, 3, 3, 3, 3, 2, 2, 2, 2),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 10, 10, 6, 3, 3, 3, 3, 2, 2, 2, 2, 3, 3),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 2, 2, 5, 5, 1, 1, 1, 1, 1, 1),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 2, 2, 5, 5, 3, 3, 1, 1, 2, 2),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 14, 14, 6, 4, 4, 7, 7, 1, 1, 1, 1, 1, 1),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 14, 14, 6, 2, 2, 7, 7, 3, 3, 1, 1, 2, 2),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 8, 8, 3, 3, 2, 1, 1, 1, 1, 0),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 4, 8, 8, 6, 8, 8, 3, 3, 1, 3, 1, 1, 0, 2),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 8, 8, 8, 8, 3, 8, 3, 3, 1, 1, 2, 1, 1, 0),
     PARAMS(nchw, oihw, FMT_BIAS, nchw,
         2, 1, 8, 8, 8, 8, 8, 2, 3, 3, 1, 1, 1, 3, 0, 2)
);

INST_TEST_CASE(SimpleSmall_Blocked_Dilution,
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 11, 11, 3, 3, 0, 0, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 9, 9, 3, 3, 0, 0, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 7, 7, 3, 3, 0, 0, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 7, 7, 3, 3, 1, 1, 2, 2, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 6, 6, 3, 3, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 5, 5, 3, 3, 1, 1, 2, 2, 3, 3),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 9, 9, 5, 5, 1, 1, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 15, 15, 32, 3, 3, 5, 5, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 22, 22, 32, 12, 12, 7, 7, 1, 1, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 22, 22, 32, 3, 3, 7, 7, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 8, 8, 32, 3, 8, 3, 3, 1, 1, 2, 1, 1, 0),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 8, 8, 32, 8, 2, 3, 3, 1, 1, 1, 3, 0, 2)
);

INST_TEST_CASE(SimpleSmall_Blocked16_Dilution,
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 11, 11, 3, 3, 0, 0, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 9, 9, 3, 3, 0, 0, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 7, 7, 3, 3, 0, 0, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 7, 7, 3, 3, 1, 1, 2, 2, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 6, 6, 3, 3, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 5, 5, 3, 3, 1, 1, 2, 2, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 9, 9, 5, 5, 1, 1, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 15, 15, 32, 3, 3, 5, 5, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 22, 22, 32, 12, 12, 7, 7, 1, 1, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 22, 22, 32, 3, 3, 7, 7, 1, 1, 2, 2, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 8, 8, 32, 3, 8, 3, 3, 1, 1, 2, 1, 1, 0),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 32, 8, 8, 32, 8, 2, 3, 3, 1, 1, 1, 3, 0, 2)
);

INST_TEST_CASE(PERF_NCHW_Dilution,
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 3, 227, 227, 96, 111, 111, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 3, 227, 227, 96, 110, 72, 5, 5, 0, 0, 2, 3, 1, 2),
    PARAMS(nchw, goihw, FMT_BIAS, nchw,
        2, 2, 96, 57, 57, 96, 26, 26, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(nchw, goihw, FMT_BIAS, nchw,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(nchw, goihw, FMT_BIAS, nchw,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(nchw, goihw, FMT_BIAS, nchw,
        2, 2, 128, 21, 21, 256, 3, 13, 5, 5, 0, 0, 2, 1, 3, 1)
);

INST_TEST_CASE(PERF_Blocked_Dilution,
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 3, 227, 227, 96, 111, 111, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 3, 227, 227, 96, 110, 72, 5, 5, 0, 0, 2, 3, 1, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED_G, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 2, 96, 57, 57, 96, 26, 26, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED_G, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED_G, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED_G, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 2, 128, 21, 21, 256, 3, 13, 5, 5, 0, 0, 2, 1, 3, 1)
);

INST_TEST_CASE(PERF_Blocked16_Dilution,
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 3, 227, 227, 96, 111, 111, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 3, 227, 227, 96, 110, 72, 5, 5, 0, 0, 2, 3, 1, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16_G, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 2, 96, 57, 57, 96, 26, 26, 5, 5, 1, 1, 2, 2, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16_G, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 1, 1, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16_G, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 2, 384, 11, 11, 512, 7, 7, 3, 3, 2, 2, 1, 1, 3, 3),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16_G, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 2, 128, 21, 21, 256, 3, 13, 5, 5, 0, 0, 2, 1, 3, 1)
);
