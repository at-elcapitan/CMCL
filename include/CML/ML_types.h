#ifndef ___ML_TYPES
#define ___ML_TYPES

union __ML_multitype {
    int int_type;
    double double_type;
    char *char_type;
};

typedef enum __ML_DATATYPE {
    INT,
    DOUBLE,
    CHAR
} __ML_DATATYPE_t;

typedef struct __ML_GLOBAL_VARIABLES_FRAME {
    char *name;
    __ML_DATATYPE_t type;
    union __ML_multitype value;
} __ML_GLOBAL_VARIABLES_DECIMAL_FRAME_t;

typedef struct __ML_GLOBAL_VARIABLES {
    int size;
    __ML_GLOBAL_VARIABLES_DECIMAL_FRAME_t *data[];
} __ML_GLOBAL_VARIABLES_DECIMALS_t;

/*typedef struct __ML_FUNC_INTERNALCALL {
    char *name;
    void *stack_function_data_begin;
} __ML_FUNC_t;

typedef struct __ML_FUNC_INTERNALCALL_POOL {
    int size;
    __ML_FUNC_t *functions[];
} __ML_FUNC_POOL_t;

typedef struct __ML_FUNC_EXTERNALCALL {
    char *name;
    void (*function) (void *);
} __ML_FUNC_EXTERNALCALL_t;

typedef struct __ML_FUNC_EXTERNALCALL_POOL {
    int size;
    __ML_FUNC_EXTERNALCALL_t *functions[];
} __ML_FUNC_EXTERNALCALL_POOL_t;*/

#endif