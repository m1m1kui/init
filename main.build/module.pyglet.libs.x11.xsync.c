/* Generated code for Python module 'pyglet.libs.x11.xsync'
 * created by Nuitka version 1.8.2
 *
 * This code is in part copyright 2023 Kay Hayen.
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
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyglet$libs$x11$xsync" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$x11$xsync;
PyDictObject *moduledict_pyglet$libs$x11$xsync;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[201];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[201];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.x11.xsync"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 201; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyglet$libs$x11$xsync(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 201; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_54097234714fbb26711fe2f5ad035ed5;
static PyCodeObject *codeobj_060b9d00f770f947351322337298ba0f;
static PyCodeObject *codeobj_b2299eabcd8abd3a69d303b2ae0ea169;
static PyCodeObject *codeobj_7d8d4631f278461d13618da0ffdf59ef;
static PyCodeObject *codeobj_1a9d885c9964b573c85f34f822ed8c46;
static PyCodeObject *codeobj_ffe1f2249fca0b3c740cead2f29b835d;
static PyCodeObject *codeobj_0e202bfb5822d4b5abcb6b1c16060ee0;
static PyCodeObject *codeobj_0b00e23ff87e78ed0c298d380fc228ee;
static PyCodeObject *codeobj_3d26cb4a80dee09cb390d353ca333e41;
static PyCodeObject *codeobj_91d1a62ddb5e7962f799abc6af588425;
static PyCodeObject *codeobj_c74e103f5d03f870ce87bdbdd9ccb337;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[198]); CHECK_OBJECT(module_filename_obj);
    codeobj_54097234714fbb26711fe2f5ad035ed5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[199], mod_consts[199], NULL, NULL, 0, 0, 0);
    codeobj_060b9d00f770f947351322337298ba0f = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[200], NULL, 0, 0, 0);
    codeobj_b2299eabcd8abd3a69d303b2ae0ea169 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[200], NULL, 0, 0, 0);
    codeobj_7d8d4631f278461d13618da0ffdf59ef = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[200], NULL, 0, 0, 0);
    codeobj_1a9d885c9964b573c85f34f822ed8c46 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[200], NULL, 0, 0, 0);
    codeobj_ffe1f2249fca0b3c740cead2f29b835d = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[200], NULL, 0, 0, 0);
    codeobj_0e202bfb5822d4b5abcb6b1c16060ee0 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[200], NULL, 0, 0, 0);
    codeobj_0b00e23ff87e78ed0c298d380fc228ee = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[200], NULL, 0, 0, 0);
    codeobj_3d26cb4a80dee09cb390d353ca333e41 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[200], NULL, 0, 0, 0);
    codeobj_91d1a62ddb5e7962f799abc6af588425 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[200], NULL, 0, 0, 0);
    codeobj_c74e103f5d03f870ce87bdbdd9ccb337 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[200], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pyglet$libs$x11$xsync[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pyglet$libs$x11$xsync;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_pyglet$libs$x11$xsync) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pyglet$libs$x11$xsync[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pyglet$libs$x11$xsync,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyglet$libs$x11$xsync(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.x11.xsync");

    // Store the module for future use.
    module_pyglet$libs$x11$xsync = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyglet.libs.x11.xsync: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.x11.xsync: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$x11$xsync\n");

    moduledict_pyglet$libs$x11$xsync = MODULE_DICT(module_pyglet$libs$x11$xsync);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$x11$xsync,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$x11$xsync,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$x11$xsync,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$x11$xsync,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$x11$xsync,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$x11$xsync);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$x11$xsync);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_54097234714fbb26711fe2f5ad035ed5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__1_c_void_60 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_060b9d00f770f947351322337298ba0f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121 = NULL;
    struct Nuitka_FrameObject *frame_7d8d4631f278461d13618da0ffdf59ef_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213 = NULL;
    struct Nuitka_FrameObject *frame_b2299eabcd8abd3a69d303b2ae0ea169_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226 = NULL;
    struct Nuitka_FrameObject *frame_0b00e23ff87e78ed0c298d380fc228ee_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241 = NULL;
    struct Nuitka_FrameObject *frame_3d26cb4a80dee09cb390d353ca333e41_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252 = NULL;
    struct Nuitka_FrameObject *frame_91d1a62ddb5e7962f799abc6af588425_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267 = NULL;
    struct Nuitka_FrameObject *frame_c74e103f5d03f870ce87bdbdd9ccb337_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296 = NULL;
    struct Nuitka_FrameObject *frame_1a9d885c9964b573c85f34f822ed8c46_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321 = NULL;
    struct Nuitka_FrameObject *frame_ffe1f2249fca0b3c740cead2f29b835d_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342 = NULL;
    struct Nuitka_FrameObject *frame_0e202bfb5822d4b5abcb6b1c16060ee0_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_54097234714fbb26711fe2f5ad035ed5 = MAKE_MODULE_FRAME(codeobj_54097234714fbb26711fe2f5ad035ed5, module_pyglet$libs$x11$xsync);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_54097234714fbb26711fe2f5ad035ed5);
    assert(Py_REFCNT(frame_54097234714fbb26711fe2f5ad035ed5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$x11$xsync, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$x11$xsync;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 46;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 48;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[12],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_7, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        tmp_args_element_value_2 = mod_consts[19];
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_2;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_iadd_expr_right_1, 0, tmp_tuple_element_2);
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_TUPLE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_8) {
            UPDATE_STRING_DICT_INPLACE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 56;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 57;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 57;

            goto try_except_handler_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 57;

            goto try_except_handler_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 57;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 57;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_tuple_element_4 = mod_consts[26];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 60;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[29];
        tmp_default_value_1 = mod_consts[30];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[29]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 60;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$libs$x11$xsync$$$class__1_c_void_60 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        frame_060b9d00f770f947351322337298ba0f_2 = MAKE_CLASS_FRAME(tstate, codeobj_060b9d00f770f947351322337298ba0f, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_060b9d00f770f947351322337298ba0f_2);
        assert(Py_REFCNT(frame_060b9d00f770f947351322337298ba0f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = mod_consts[34];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60, mod_consts[35]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_060b9d00f770f947351322337298ba0f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_060b9d00f770f947351322337298ba0f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_060b9d00f770f947351322337298ba0f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_060b9d00f770f947351322337298ba0f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_060b9d00f770f947351322337298ba0f_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[26];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$libs$x11$xsync$$$class__1_c_void_60;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 60;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60);
        locals_pyglet$libs$x11$xsync$$$class__1_c_void_60 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__1_c_void_60);
        locals_pyglet$libs$x11$xsync$$$class__1_c_void_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 60;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$x11$xsync;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[39];
        tmp_level_value_2 = mod_consts[40];
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 72;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$libs$x11$xsync,
                mod_consts[41],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_51 == NULL)) {
            tmp_assign_source_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assign_source_54 == NULL)) {
            tmp_assign_source_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        assert(!(tmp_assign_source_54 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_55 == NULL)) {
            tmp_assign_source_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_60 == NULL)) {
            tmp_assign_source_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        assert(!(tmp_assign_source_60 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_61 == NULL)) {
            tmp_assign_source_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_assign_source_65 == NULL)) {
            tmp_assign_source_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        assert(!(tmp_assign_source_65 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_assign_source_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[100]);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_assign_source_67 == NULL)) {
            tmp_assign_source_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        assert(!(tmp_assign_source_67 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_assign_source_68 == NULL)) {
            tmp_assign_source_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_68);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_assign_source_69 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_70 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_tuple_element_9 = mod_consts[103];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_9 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 121;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[29];
        tmp_default_value_2 = mod_consts[30];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[29]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 121;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_74;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_7;
        }
        frame_7d8d4631f278461d13618da0ffdf59ef_3 = MAKE_CLASS_FRAME(tstate, codeobj_7d8d4631f278461d13618da0ffdf59ef, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7d8d4631f278461d13618da0ffdf59ef_3);
        assert(Py_REFCNT(frame_7d8d4631f278461d13618da0ffdf59ef_3) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[104],mod_consts[105]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7d8d4631f278461d13618da0ffdf59ef_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7d8d4631f278461d13618da0ffdf59ef_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7d8d4631f278461d13618da0ffdf59ef_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7d8d4631f278461d13618da0ffdf59ef_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_7d8d4631f278461d13618da0ffdf59ef_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[103];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 121;
            tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_75 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121);
        locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121);
        locals_pyglet$libs$x11$xsync$$$class__2_struct__XSyncValue_121 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 121;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_75);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_assattr_target_3;
        tmp_tuple_element_12 = mod_consts[104];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_13;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_2);
            tmp_tuple_element_13 = mod_consts[105];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[36], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_assign_source_77 == NULL)) {
            tmp_assign_source_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[109]);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        assert(!(tmp_assattr_target_4 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[110], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 135;
        tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_assattr_value_5, 1, tmp_list_element_3);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[112], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[113]);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        assert(!(tmp_assattr_target_6 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[110], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 140;
        tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_value_7, 1, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_value_7, 2, tmp_list_element_4);
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[112], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[114]);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[115]);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        assert(!(tmp_assattr_target_8 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[110], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_9;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_9, 0, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 1, tmp_list_element_5);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[112], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[116]);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_10 == NULL)) {
            tmp_assattr_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        assert(!(tmp_assattr_target_10 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[110], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_11;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_11, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_value_11, 1, tmp_list_element_6);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[112], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[117]);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        assert(!(tmp_assattr_target_12 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[110], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_13;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_13, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_13, 1, tmp_list_element_7);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[112], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[118]);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        assert(!(tmp_assattr_target_14 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[110], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_15;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_15, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 1, tmp_list_element_8);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[112], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[119]);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        assert(!(tmp_assattr_target_16 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[110], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_17;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_17, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 1, tmp_list_element_9);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[112], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[120]);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        assert(!(tmp_assattr_target_18 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[110], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_19;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_19, 0, tmp_list_element_10);
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[112], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[121]);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_20 == NULL)) {
            tmp_assattr_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        assert(!(tmp_assattr_target_20 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[110], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_21;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_21 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_21, 0, tmp_list_element_11);
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[112], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[122]);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        tmp_assattr_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_value_22 == NULL)) {
            tmp_assattr_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        assert(!(tmp_assattr_target_22 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[110], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_23;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_23, 0, tmp_list_element_12);
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[112], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[123]);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        assert(!(tmp_assattr_target_24 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[110], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_25;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_25, 0, tmp_list_element_13);
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[112], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[124]);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        assert(!(tmp_assattr_target_26 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[110], tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_27;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_27, 0, tmp_list_element_14);
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[112], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[125]);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        tmp_assattr_value_28 = Py_None;
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        assert(!(tmp_assattr_target_28 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[110], tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_29;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 196;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_29 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_8;
            PyList_SET_ITEM(tmp_assattr_value_29, 0, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_29, 1, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_29, 2, tmp_list_element_15);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_9;
            }
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_9;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 196;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_29, 3, tmp_list_element_15);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_29);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[112], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[126]);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        tmp_assattr_value_30 = Py_None;
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        assert(!(tmp_assattr_target_30 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[110], tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_31;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 201;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_31 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_10;
            PyList_SET_ITEM(tmp_assattr_value_31, 0, tmp_list_element_16);
            tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_list_element_16 == NULL)) {
                tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_31, 1, tmp_list_element_16);
            tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_list_element_16 == NULL)) {
                tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_31, 2, tmp_list_element_16);
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_10;
            }
            tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_10 == NULL)) {
                tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_10;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 201;
            tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_31, 3, tmp_list_element_16);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[112], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[127]);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_assattr_target_32;
        tmp_assattr_value_32 = Py_None;
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        assert(!(tmp_assattr_target_32 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[110], tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_assattr_target_33;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 206;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_33 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_33, 0, tmp_list_element_17);
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_33);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[112], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[128]);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_assattr_target_34;
        tmp_assattr_value_34 = Py_None;
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        assert(!(tmp_assattr_target_34 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[110], tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_list_element_18;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_assattr_target_35;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 211;
        tmp_list_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_35 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_35, 0, tmp_list_element_18);
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_35);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[112], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_assign_source_95 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_14);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_33 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_34 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_35 = tmp_class_creation_3__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[25]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_tuple_element_15 = mod_consts[129];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_15 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 213;
        tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_36 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_37 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[29];
        tmp_default_value_3 = mod_consts[30];
        tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[29]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 213;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_100;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        frame_b2299eabcd8abd3a69d303b2ae0ea169_4 = MAKE_CLASS_FRAME(tstate, codeobj_b2299eabcd8abd3a69d303b2ae0ea169, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b2299eabcd8abd3a69d303b2ae0ea169_4);
        assert(Py_REFCNT(frame_b2299eabcd8abd3a69d303b2ae0ea169_4) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[130],mod_consts[131],mod_consts[132]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b2299eabcd8abd3a69d303b2ae0ea169_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b2299eabcd8abd3a69d303b2ae0ea169_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b2299eabcd8abd3a69d303b2ae0ea169_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b2299eabcd8abd3a69d303b2ae0ea169_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_b2299eabcd8abd3a69d303b2ae0ea169_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_17 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_17 = mod_consts[129];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_17 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 213;
            tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_101 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213);
        locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213);
        locals_pyglet$libs$x11$xsync$$$class__3_struct__XSyncSystemCounter_213 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 213;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_101);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_list_element_19;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_assattr_target_36;
        tmp_tuple_element_18 = mod_consts[130];
        tmp_list_element_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_list_element_19, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_list_element_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assattr_value_36 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyList_SET_ITEM(tmp_assattr_value_36, 0, tmp_list_element_19);
            tmp_tuple_element_19 = mod_consts[131];
            tmp_list_element_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_list_element_19, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_19);
            goto list_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            PyList_SET_ITEM(tmp_assattr_value_36, 1, tmp_list_element_19);
            tmp_tuple_element_20 = mod_consts[132];
            tmp_list_element_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_19, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_list_element_19, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_19);
            goto list_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyList_SET_ITEM(tmp_assattr_value_36, 2, tmp_list_element_19);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[36], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assign_source_103 == NULL)) {
            tmp_assign_source_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_103);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_assign_source_104 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_104, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_105 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_39 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[9];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_107 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_40 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_41 = tmp_class_creation_4__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[25]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_tuple_element_22 = mod_consts[135];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_22 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 226;
        tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_108;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_42 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_43 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[29];
        tmp_default_value_4 = mod_consts[30];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_43, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_44 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[29]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 226;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_109;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_110;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_13;
        }
        frame_0b00e23ff87e78ed0c298d380fc228ee_5 = MAKE_CLASS_FRAME(tstate, codeobj_0b00e23ff87e78ed0c298d380fc228ee, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0b00e23ff87e78ed0c298d380fc228ee_5);
        assert(Py_REFCNT(frame_0b00e23ff87e78ed0c298d380fc228ee_5) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST4(mod_consts[136]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0b00e23ff87e78ed0c298d380fc228ee_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b00e23ff87e78ed0c298d380fc228ee_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b00e23ff87e78ed0c298d380fc228ee_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b00e23ff87e78ed0c298d380fc228ee_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_0b00e23ff87e78ed0c298d380fc228ee_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_13;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_19 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_24 = mod_consts[135];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_24 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 226;
            tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_111;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_110 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_110);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226);
        locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226);
        locals_pyglet$libs$x11$xsync$$$class__4_struct_anon_96_226 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 226;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_110);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_list_element_20;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_assattr_target_37;
        tmp_tuple_element_25 = mod_consts[131];
        tmp_list_element_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto tuple_build_exception_12;
        }
        PyTuple_SET_ITEM0(tmp_list_element_20, 1, tmp_tuple_element_25);
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_list_element_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assattr_value_37 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyList_SET_ITEM(tmp_assattr_value_37, 0, tmp_list_element_20);
            tmp_tuple_element_26 = mod_consts[137];
            tmp_list_element_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_list_element_20, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_list_element_20);
            goto list_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyList_SET_ITEM(tmp_assattr_value_37, 1, tmp_list_element_20);
            tmp_tuple_element_27 = mod_consts[138];
            tmp_list_element_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_list_element_20, 1, tmp_tuple_element_27);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_20);
            goto list_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            PyList_SET_ITEM(tmp_assattr_value_37, 2, tmp_list_element_20);
            tmp_tuple_element_28 = mod_consts[139];
            tmp_list_element_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_list_element_20, 1, tmp_tuple_element_28);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_20);
            goto list_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            PyList_SET_ITEM(tmp_assattr_value_37, 3, tmp_list_element_20);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_37);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_37);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[36], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assign_source_112 == NULL)) {
            tmp_assign_source_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_112);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_assign_source_113 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_113, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_114 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_45 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[9];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_116 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_116;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_46 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_47 = tmp_class_creation_5__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[25]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_tuple_element_30 = mod_consts[141];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_30 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 241;
        tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_117;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_48 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_49 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[29];
        tmp_default_value_5 = mod_consts[30];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_49, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[29]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 241;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_118;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_119;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_16;
        }
        frame_3d26cb4a80dee09cb390d353ca333e41_6 = MAKE_CLASS_FRAME(tstate, codeobj_3d26cb4a80dee09cb390d353ca333e41, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3d26cb4a80dee09cb390d353ca333e41_6);
        assert(Py_REFCNT(frame_3d26cb4a80dee09cb390d353ca333e41_6) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[142],mod_consts[143]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3d26cb4a80dee09cb390d353ca333e41_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3d26cb4a80dee09cb390d353ca333e41_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3d26cb4a80dee09cb390d353ca333e41_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3d26cb4a80dee09cb390d353ca333e41_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_3d26cb4a80dee09cb390d353ca333e41_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_16;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_120;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_21 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_32 = mod_consts[141];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_32 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 241;
            tmp_assign_source_120 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_120;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_119 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_119);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241);
        locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241);
        locals_pyglet$libs$x11$xsync$$$class__5_struct_anon_97_241 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 241;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_119);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_list_element_21;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_assattr_target_38;
        tmp_tuple_element_33 = mod_consts[142];
        tmp_list_element_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_21, 0, tmp_tuple_element_33);
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_list_element_21, 1, tmp_tuple_element_33);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_list_element_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_assattr_value_38 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_34;
            PyList_SET_ITEM(tmp_assattr_value_38, 0, tmp_list_element_21);
            tmp_tuple_element_34 = mod_consts[143];
            tmp_list_element_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_21, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_list_element_21, 1, tmp_tuple_element_34);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_21);
            goto list_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            PyList_SET_ITEM(tmp_assattr_value_38, 1, tmp_list_element_21);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[36], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assign_source_121 == NULL)) {
            tmp_assign_source_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_121);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_assign_source_122 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_123 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_condition_result_23 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_51 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_125 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_125;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_52 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_53 = tmp_class_creation_6__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[25]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_tuple_element_36 = mod_consts[145];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_36 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 252;
        tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_54 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_55 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[29];
        tmp_default_value_6 = mod_consts[30];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[29]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 252;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_127;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_128;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_19;
        }
        frame_91d1a62ddb5e7962f799abc6af588425_7 = MAKE_CLASS_FRAME(tstate, codeobj_91d1a62ddb5e7962f799abc6af588425, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_91d1a62ddb5e7962f799abc6af588425_7);
        assert(Py_REFCNT(frame_91d1a62ddb5e7962f799abc6af588425_7) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST4(mod_consts[146]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_91d1a62ddb5e7962f799abc6af588425_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_91d1a62ddb5e7962f799abc6af588425_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_91d1a62ddb5e7962f799abc6af588425_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_91d1a62ddb5e7962f799abc6af588425_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_91d1a62ddb5e7962f799abc6af588425_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_19;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_129;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_23 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_38 = mod_consts[145];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_38 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 252;
            tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_129;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_128 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_128);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252);
        locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252);
        locals_pyglet$libs$x11$xsync$$$class__6_struct_anon_98_252 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 252;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_128);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_list_element_22;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_assattr_target_39;
        tmp_tuple_element_39 = mod_consts[142];
        tmp_list_element_22 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_22, 0, tmp_tuple_element_39);
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto tuple_build_exception_20;
        }
        PyTuple_SET_ITEM0(tmp_list_element_22, 1, tmp_tuple_element_39);
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_list_element_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_assattr_value_39 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyList_SET_ITEM(tmp_assattr_value_39, 0, tmp_list_element_22);
            tmp_tuple_element_40 = mod_consts[147];
            tmp_list_element_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_22, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_list_element_22, 1, tmp_tuple_element_40);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_list_element_22);
            goto list_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            PyList_SET_ITEM(tmp_assattr_value_39, 1, tmp_list_element_22);
            tmp_tuple_element_41 = mod_consts[148];
            tmp_list_element_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_22, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_list_element_22, 1, tmp_tuple_element_41);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_list_element_22);
            goto list_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            PyList_SET_ITEM(tmp_assattr_value_39, 2, tmp_list_element_22);
            tmp_tuple_element_42 = mod_consts[149];
            tmp_list_element_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_22, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_list_element_22, 1, tmp_tuple_element_42);
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_22);
            goto list_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            PyList_SET_ITEM(tmp_assattr_value_39, 3, tmp_list_element_22);
        }
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_39);

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[36], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_assign_source_130 == NULL)) {
            tmp_assign_source_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_130);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_43;
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_43 == NULL)) {
            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_43);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_132 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_condition_result_27 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_57 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[9];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_134;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_58 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_condition_result_28 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_59 = tmp_class_creation_7__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[25]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_tuple_element_44 = mod_consts[151];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_44 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 267;
        tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_135;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_60 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_61 = tmp_class_creation_7__metaclass;
        tmp_name_value_9 = mod_consts[29];
        tmp_default_value_7 = mod_consts[30];
        tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_9, tmp_default_value_7);
        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_62 == NULL));
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[29]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 267;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_136;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_22;
        }
        frame_c74e103f5d03f870ce87bdbdd9ccb337_8 = MAKE_CLASS_FRAME(tstate, codeobj_c74e103f5d03f870ce87bdbdd9ccb337, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c74e103f5d03f870ce87bdbdd9ccb337_8);
        assert(Py_REFCNT(frame_c74e103f5d03f870ce87bdbdd9ccb337_8) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST10(mod_consts[152]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c74e103f5d03f870ce87bdbdd9ccb337_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c74e103f5d03f870ce87bdbdd9ccb337_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c74e103f5d03f870ce87bdbdd9ccb337_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c74e103f5d03f870ce87bdbdd9ccb337_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_c74e103f5d03f870ce87bdbdd9ccb337_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_22;
        }
        branch_no_23:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_25 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_46 = mod_consts[151];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_46 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 267;
            tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_138;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_137 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_137);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267);
        locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267);
        locals_pyglet$libs$x11$xsync$$$class__7_struct_anon_99_267 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 267;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_137);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[153]);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_64;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[154]);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_list_element_23;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_assattr_target_40;
        tmp_tuple_element_47 = mod_consts[155];
        tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_47);
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto tuple_build_exception_25;
        }
        PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_47);
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_list_element_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_assattr_value_40 = MAKE_LIST_EMPTY(10);
        {
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyList_SET_ITEM(tmp_assattr_value_40, 0, tmp_list_element_23);
            tmp_tuple_element_48 = mod_consts[156];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_48);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            PyList_SET_ITEM(tmp_assattr_value_40, 1, tmp_list_element_23);
            tmp_tuple_element_49 = mod_consts[158];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_49);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyList_SET_ITEM(tmp_assattr_value_40, 2, tmp_list_element_23);
            tmp_tuple_element_50 = mod_consts[159];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_13;
                PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_50);
                tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

                if (unlikely(tmp_called_value_26 == NULL)) {
                    tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
                }

                if (tmp_called_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_28;
                }
                tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

                if (unlikely(tmp_args_element_value_13 == NULL)) {
                    tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
                }

                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_28;
                }
                frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 286;
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_13);
                if (tmp_tuple_element_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_list_element_23, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            PyList_SET_ITEM(tmp_assattr_value_40, 3, tmp_list_element_23);
            tmp_tuple_element_51 = mod_consts[131];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_51);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            PyList_SET_ITEM(tmp_assattr_value_40, 4, tmp_list_element_23);
            tmp_tuple_element_52 = mod_consts[138];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_52);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            PyList_SET_ITEM(tmp_assattr_value_40, 5, tmp_list_element_23);
            tmp_tuple_element_53 = mod_consts[160];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_53);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyList_SET_ITEM(tmp_assattr_value_40, 6, tmp_list_element_23);
            tmp_tuple_element_54 = mod_consts[161];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            PyList_SET_ITEM(tmp_assattr_value_40, 7, tmp_list_element_23);
            tmp_tuple_element_55 = mod_consts[162];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_55);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyList_SET_ITEM(tmp_assattr_value_40, 8, tmp_list_element_23);
            tmp_tuple_element_56 = mod_consts[163];
            tmp_list_element_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_list_element_23, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_list_element_23);
            goto list_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            PyList_SET_ITEM(tmp_assattr_value_40, 9, tmp_list_element_23);
        }
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_40 == NULL)) {
            tmp_assattr_target_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[36], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assign_source_141 == NULL)) {
            tmp_assign_source_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_141);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_tuple_element_57;
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_57 == NULL)) {
            tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_assign_source_142 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_142, 0, tmp_tuple_element_57);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_143 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_31;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_condition_result_31 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_65 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[9];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_65, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_145 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_145;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_66 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_condition_result_32 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_67 = tmp_class_creation_8__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[25]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_tuple_element_58 = mod_consts[165];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_58 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 296;
        tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_146;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_68 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_69 = tmp_class_creation_8__metaclass;
        tmp_name_value_10 = mod_consts[29];
        tmp_default_value_8 = mod_consts[30];
        tmp_tuple_element_59 = BUILTIN_GETATTR(tstate, tmp_expression_value_69, tmp_name_value_10, tmp_default_value_8);
        if (tmp_tuple_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[29]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 296;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_25:;
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_147;
    }
    branch_end_24:;
    {
        PyObject *tmp_assign_source_148;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_25;
        }
        frame_1a9d885c9964b573c85f34f822ed8c46_9 = MAKE_CLASS_FRAME(tstate, codeobj_1a9d885c9964b573c85f34f822ed8c46, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1a9d885c9964b573c85f34f822ed8c46_9);
        assert(Py_REFCNT(frame_1a9d885c9964b573c85f34f822ed8c46_9) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[166]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1a9d885c9964b573c85f34f822ed8c46_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1a9d885c9964b573c85f34f822ed8c46_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1a9d885c9964b573c85f34f822ed8c46_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1a9d885c9964b573c85f34f822ed8c46_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_1a9d885c9964b573c85f34f822ed8c46_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_25;
        }
        branch_no_26:;
        {
            PyObject *tmp_assign_source_149;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_28 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_60 = mod_consts[165];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_60);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_60 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_60);
            tmp_tuple_element_60 = locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_60);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 296;
            tmp_assign_source_149 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_149;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_148 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_148);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296);
        locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296);
        locals_pyglet$libs$x11$xsync$$$class__8_struct_anon_100_296 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 296;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_148);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_list_element_24;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_assattr_target_41;
        tmp_tuple_element_61 = mod_consts[155];
        tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_61);
        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_61 == NULL)) {
            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto tuple_build_exception_36;
        }
        PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_61);
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_list_element_24);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_assattr_value_41 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyList_SET_ITEM(tmp_assattr_value_41, 0, tmp_list_element_24);
            tmp_tuple_element_62 = mod_consts[156];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_62);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_assattr_value_41, 1, tmp_list_element_24);
            tmp_tuple_element_63 = mod_consts[158];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_63);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_assattr_value_41, 2, tmp_list_element_24);
            tmp_tuple_element_64 = mod_consts[159];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_64);
                tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

                if (unlikely(tmp_called_value_29 == NULL)) {
                    tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
                }

                if (tmp_called_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;

                    goto tuple_build_exception_39;
                }
                tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

                if (unlikely(tmp_args_element_value_14 == NULL)) {
                    tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
                }

                if (tmp_args_element_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;

                    goto tuple_build_exception_39;
                }
                frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 312;
                tmp_tuple_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_14);
                if (tmp_tuple_element_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_list_element_24, 1, tmp_tuple_element_64);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_assattr_value_41, 3, tmp_list_element_24);
            tmp_tuple_element_65 = mod_consts[167];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_65);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_assattr_value_41, 4, tmp_list_element_24);
            tmp_tuple_element_66 = mod_consts[160];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_66);
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_assattr_value_41, 5, tmp_list_element_24);
            tmp_tuple_element_67 = mod_consts[168];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            PyList_SET_ITEM(tmp_assattr_value_41, 6, tmp_list_element_24);
            tmp_tuple_element_68 = mod_consts[161];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_68);
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            PyList_SET_ITEM(tmp_assattr_value_41, 7, tmp_list_element_24);
            tmp_tuple_element_69 = mod_consts[149];
            tmp_list_element_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_24, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_list_element_24, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_24);
            goto list_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_assattr_value_41, 8, tmp_list_element_24);
        }
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assattr_target_41 == NULL)) {
            tmp_assattr_target_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_41);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[36], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assign_source_150 == NULL)) {
            tmp_assign_source_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_150);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_tuple_element_70;
        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_70 == NULL)) {
            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_assign_source_151 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_151, 0, tmp_tuple_element_70);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_152 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_153;
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_condition_result_35 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_71 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[9];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_71, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_154 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_154;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_72 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_condition_result_36 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_73 = tmp_class_creation_9__metaclass;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[25]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_tuple_element_71 = mod_consts[170];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_71);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_71 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_71);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 321;
        tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_155;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_74 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_75 = tmp_class_creation_9__metaclass;
        tmp_name_value_11 = mod_consts[29];
        tmp_default_value_9 = mod_consts[30];
        tmp_tuple_element_72 = BUILTIN_GETATTR(tstate, tmp_expression_value_75, tmp_name_value_11, tmp_default_value_9);
        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_72);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_76 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_76 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[29]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_45;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_45:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_45:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 321;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_156;
    }
    branch_end_27:;
    {
        PyObject *tmp_assign_source_157;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[170];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_28;
        }
        frame_ffe1f2249fca0b3c740cead2f29b835d_10 = MAKE_CLASS_FRAME(tstate, codeobj_ffe1f2249fca0b3c740cead2f29b835d, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ffe1f2249fca0b3c740cead2f29b835d_10);
        assert(Py_REFCNT(frame_ffe1f2249fca0b3c740cead2f29b835d_10) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST7(mod_consts[171]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ffe1f2249fca0b3c740cead2f29b835d_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ffe1f2249fca0b3c740cead2f29b835d_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ffe1f2249fca0b3c740cead2f29b835d_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ffe1f2249fca0b3c740cead2f29b835d_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_ffe1f2249fca0b3c740cead2f29b835d_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_29;
            } else {
                goto branch_no_29;
            }
        }
        branch_yes_29:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_28;
        }
        branch_no_29:;
        {
            PyObject *tmp_assign_source_158;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_31 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_73 = mod_consts[170];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_73 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_73);
            tmp_tuple_element_73 = locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 321;
            tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_158;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_157 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_157);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321);
        locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321);
        locals_pyglet$libs$x11$xsync$$$class__9_struct_anon_101_321 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 321;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_157);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_list_element_25;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_assattr_target_42;
        tmp_tuple_element_74 = mod_consts[155];
        tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_74);
        tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_74 == NULL)) {
            tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto tuple_build_exception_46;
        }
        PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_74);
        goto tuple_build_noexception_46;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_46:;
        Py_DECREF(tmp_list_element_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_46:;
        tmp_assattr_value_42 = MAKE_LIST_EMPTY(7);
        {
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_tuple_element_80;
            PyList_SET_ITEM(tmp_assattr_value_42, 0, tmp_list_element_25);
            tmp_tuple_element_75 = mod_consts[159];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_75);
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;

                    goto tuple_build_exception_47;
                }
                tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

                if (unlikely(tmp_args_element_value_15 == NULL)) {
                    tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
                }

                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;

                    goto tuple_build_exception_47;
                }
                frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 333;
                tmp_tuple_element_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_15);
                if (tmp_tuple_element_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;

                    goto tuple_build_exception_47;
                }
                PyTuple_SET_ITEM(tmp_list_element_25, 1, tmp_tuple_element_75);
            }
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_assattr_value_42, 1, tmp_list_element_25);
            tmp_tuple_element_76 = mod_consts[167];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_76);
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_assattr_value_42, 2, tmp_list_element_25);
            tmp_tuple_element_77 = mod_consts[156];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_77);
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_assattr_value_42, 3, tmp_list_element_25);
            tmp_tuple_element_78 = mod_consts[172];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_78);
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_assattr_value_42, 4, tmp_list_element_25);
            tmp_tuple_element_79 = mod_consts[174];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_79);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            PyList_SET_ITEM(tmp_assattr_value_42, 5, tmp_list_element_25);
            tmp_tuple_element_80 = mod_consts[175];
            tmp_list_element_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_25, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM0(tmp_list_element_25, 1, tmp_tuple_element_80);
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_list_element_25);
            goto list_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            PyList_SET_ITEM(tmp_assattr_value_42, 6, tmp_list_element_25);
        }
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_assattr_target_42 == NULL)) {
            tmp_assattr_target_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[36], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_assign_source_159 == NULL)) {
            tmp_assign_source_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_159);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_tuple_element_81;
        tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_81 == NULL)) {
            tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_assign_source_160 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_160, 0, tmp_tuple_element_81);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_160;
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_161 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_161;
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_162;
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_39;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_condition_result_39 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_77 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[9];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_77, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_163 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_163;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_78 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_condition_result_40 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_79 = tmp_class_creation_10__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[25]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_tuple_element_82 = mod_consts[177];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_82 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 342;
        tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_164;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_80 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_81 = tmp_class_creation_10__metaclass;
        tmp_name_value_12 = mod_consts[29];
        tmp_default_value_10 = mod_consts[30];
        tmp_tuple_element_83 = BUILTIN_GETATTR(tstate, tmp_expression_value_81, tmp_name_value_12, tmp_default_value_10);
        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_82;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_82 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_82 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[29]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_83);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 342;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_165;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_166;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[177];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_31;
        }
        frame_0e202bfb5822d4b5abcb6b1c16060ee0_11 = MAKE_CLASS_FRAME(tstate, codeobj_0e202bfb5822d4b5abcb6b1c16060ee0, module_pyglet$libs$x11$xsync, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0e202bfb5822d4b5abcb6b1c16060ee0_11);
        assert(Py_REFCNT(frame_0e202bfb5822d4b5abcb6b1c16060ee0_11) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST7(mod_consts[178]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e202bfb5822d4b5abcb6b1c16060ee0_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e202bfb5822d4b5abcb6b1c16060ee0_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e202bfb5822d4b5abcb6b1c16060ee0_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e202bfb5822d4b5abcb6b1c16060ee0_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_0e202bfb5822d4b5abcb6b1c16060ee0_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_31;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto try_except_handler_31;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_31;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_167;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_34 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_84 = mod_consts[177];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_84);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_84 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_84);
            tmp_tuple_element_84 = locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_84);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 342;
            tmp_assign_source_167 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_167;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_166 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_166);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342);
        locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342);
        locals_pyglet$libs$x11$xsync$$$class__10_struct_anon_102_342 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 342;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_166);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_list_element_26;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_assattr_target_43;
        tmp_tuple_element_85 = mod_consts[155];
        tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_85);
        tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_85 == NULL)) {
            tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto tuple_build_exception_54;
        }
        PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_85);
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_list_element_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_assattr_value_43 = MAKE_LIST_EMPTY(7);
        {
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_tuple_element_91;
            PyList_SET_ITEM(tmp_assattr_value_43, 0, tmp_list_element_26);
            tmp_tuple_element_86 = mod_consts[159];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_element_value_16;
                PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_86);
                tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

                if (unlikely(tmp_called_value_35 == NULL)) {
                    tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
                }

                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_55;
                }
                tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

                if (unlikely(tmp_args_element_value_16 == NULL)) {
                    tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
                }

                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_55;
                }
                frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 354;
                tmp_tuple_element_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_16);
                if (tmp_tuple_element_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_55;
                }
                PyTuple_SET_ITEM(tmp_list_element_26, 1, tmp_tuple_element_86);
            }
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyList_SET_ITEM(tmp_assattr_value_43, 1, tmp_list_element_26);
            tmp_tuple_element_87 = mod_consts[131];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_87);
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_87);
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            PyList_SET_ITEM(tmp_assattr_value_43, 2, tmp_list_element_26);
            tmp_tuple_element_88 = mod_consts[156];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_88);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            PyList_SET_ITEM(tmp_assattr_value_43, 3, tmp_list_element_26);
            tmp_tuple_element_89 = mod_consts[172];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_89);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            PyList_SET_ITEM(tmp_assattr_value_43, 4, tmp_list_element_26);
            tmp_tuple_element_90 = mod_consts[174];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_90);
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            PyList_SET_ITEM(tmp_assattr_value_43, 5, tmp_list_element_26);
            tmp_tuple_element_91 = mod_consts[175];
            tmp_list_element_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_26, 0, tmp_tuple_element_91);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_list_element_26, 1, tmp_tuple_element_91);
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_list_element_26);
            goto list_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            PyList_SET_ITEM(tmp_assattr_value_43, 6, tmp_list_element_26);
        }
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assattr_target_43 == NULL)) {
            tmp_assattr_target_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_43);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[36], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assign_source_168 == NULL)) {
            tmp_assign_source_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_expression_value_83;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[180]);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_assattr_target_44;
        tmp_assattr_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_44 == NULL)) {
            tmp_assattr_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assattr_target_44 == NULL)) {
            tmp_assattr_target_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        assert(!(tmp_assattr_target_44 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[110], tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_list_element_27;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_45;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 366;
        tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_17);
        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_45 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_19;
            PyList_SET_ITEM(tmp_assattr_value_45, 0, tmp_list_element_27);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 366;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_18);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_45, 1, tmp_list_element_27);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 366;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_19);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_45, 2, tmp_list_element_27);
        }
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_45);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assattr_target_45 == NULL)) {
            tmp_assattr_target_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_45);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[112], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_expression_value_84;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[181]);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_assattr_target_46;
        tmp_assattr_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_46 == NULL)) {
            tmp_assattr_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_46 == NULL)) {
            tmp_assattr_target_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[181]);
        }

        assert(!(tmp_assattr_target_46 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[110], tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_list_element_28;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_assattr_target_47;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 371;
        tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_20);
        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_47 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_22;
            PyList_SET_ITEM(tmp_assattr_value_47, 0, tmp_list_element_28);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_21 == NULL)) {
                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 371;
            tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_21);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM(tmp_assattr_value_47, 1, tmp_list_element_28);
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 371;
            tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_22);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM(tmp_assattr_value_47, 2, tmp_list_element_28);
        }
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_47);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_47 == NULL)) {
            tmp_assattr_target_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[181]);
        }

        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_47);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[112], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_expression_value_85;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[182]);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_assattr_target_48;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 375;
        tmp_assattr_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_23);
        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_assattr_target_48 == NULL)) {
            tmp_assattr_target_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[110], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_list_element_29;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_assattr_target_49;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 376;
        tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_24);
        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_49 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_25;
            PyList_SET_ITEM(tmp_assattr_value_49, 0, tmp_list_element_29);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_21;
            }
            tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_25 == NULL)) {
                tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_21;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 376;
            tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_25);
            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_49, 1, tmp_list_element_29);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_49);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_assattr_target_49 == NULL)) {
            tmp_assattr_target_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_49);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[112], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_expression_value_86;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[183]);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_assattr_target_50;
        tmp_assattr_value_50 = Py_None;
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_assattr_target_50 == NULL)) {
            tmp_assattr_target_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        assert(!(tmp_assattr_target_50 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[110], tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_list_element_30;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_assattr_target_51;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 381;
        tmp_list_element_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_26);
        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_51 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_51, 0, tmp_list_element_30);
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_assattr_target_51 == NULL)) {
            tmp_assattr_target_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_51);

            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[112], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_expression_value_87;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[184]);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_assattr_target_52;
        tmp_assattr_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_52 == NULL)) {
            tmp_assattr_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_assattr_target_52 == NULL)) {
            tmp_assattr_target_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[184]);
        }

        assert(!(tmp_assattr_target_52 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[110], tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_list_element_31;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_assattr_target_53;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 386;
        tmp_list_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_27);
        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_53 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assattr_value_53, 0, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 1, tmp_list_element_31);
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_53);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_assattr_target_53 == NULL)) {
            tmp_assattr_target_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[184]);
        }

        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_53);

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[112], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_value_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_expression_value_88;
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[185]);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_assattr_target_54;
        tmp_assattr_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_54 == NULL)) {
            tmp_assattr_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_assattr_target_54 == NULL)) {
            tmp_assattr_target_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[185]);
        }

        assert(!(tmp_assattr_target_54 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[110], tmp_assattr_value_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_list_element_32;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_assattr_target_55;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 391;
        tmp_list_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_28);
        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_55 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_55, 0, tmp_list_element_32);
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 1, tmp_list_element_32);
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 2, tmp_list_element_32);
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_55);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_assattr_target_55 == NULL)) {
            tmp_assattr_target_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[185]);
        }

        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_55);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[112], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_value_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_expression_value_89;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[186]);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_assattr_target_56;
        tmp_assattr_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_56 == NULL)) {
            tmp_assattr_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_56 == NULL)) {
            tmp_assattr_target_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        assert(!(tmp_assattr_target_56 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[110], tmp_assattr_value_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_list_element_33;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_assattr_target_57;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 396;
        tmp_list_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_29);
        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_57 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_57, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_57, 1, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_57, 2, tmp_list_element_33);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_57);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_assattr_target_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_57 == NULL)) {
            tmp_assattr_target_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_57);

            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[112], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_value_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_expression_value_90;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[187]);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_assattr_target_58;
        tmp_assattr_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_58 == NULL)) {
            tmp_assattr_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_target_58 == NULL)) {
            tmp_assattr_target_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        assert(!(tmp_assattr_target_58 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[110], tmp_assattr_value_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_list_element_34;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_assattr_target_59;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 401;
        tmp_list_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_30);
        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_59 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assattr_value_59, 0, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_59, 1, tmp_list_element_34);
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_59);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_assattr_target_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_assattr_target_59 == NULL)) {
            tmp_assattr_target_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[112], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_expression_value_91;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_177 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[188]);
        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_assattr_target_60;
        tmp_assattr_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_60 == NULL)) {
            tmp_assattr_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assattr_target_60 == NULL)) {
            tmp_assattr_target_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        assert(!(tmp_assattr_target_60 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[110], tmp_assattr_value_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_list_element_35;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_assattr_target_61;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 406;
        tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_31);
        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_61 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_32;
            PyList_SET_ITEM(tmp_assattr_value_61, 0, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_assattr_value_61, 1, tmp_list_element_35);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto list_build_exception_26;
            }
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto list_build_exception_26;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 406;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_32);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_assattr_value_61, 2, tmp_list_element_35);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_61);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_assattr_target_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assattr_target_61 == NULL)) {
            tmp_assattr_target_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[112], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_value_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_expression_value_92;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[189]);
        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_assattr_target_62;
        tmp_assattr_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_62 == NULL)) {
            tmp_assattr_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_62 == NULL)) {
            tmp_assattr_target_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        assert(!(tmp_assattr_target_62 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[110], tmp_assattr_value_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_list_element_36;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_assattr_target_63;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 411;
        tmp_list_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_33);
        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_63 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_34;
            PyList_SET_ITEM(tmp_assattr_value_63, 0, tmp_list_element_36);
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_27;
            }
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_27;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 411;
            tmp_list_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_34);
            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_assattr_value_63, 1, tmp_list_element_36);
            tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_36 == NULL)) {
                tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_assattr_value_63, 2, tmp_list_element_36);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_63);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_assattr_target_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_63 == NULL)) {
            tmp_assattr_target_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[112], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_value_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_expression_value_93;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[190]);
        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_assattr_target_64;
        tmp_assattr_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_assattr_value_64 == NULL)) {
            tmp_assattr_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_assattr_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_assattr_target_64 == NULL)) {
            tmp_assattr_target_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        assert(!(tmp_assattr_target_64 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[110], tmp_assattr_value_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_list_element_37;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_assattr_target_65;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 416;
        tmp_list_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_35);
        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_65 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_36;
            PyList_SET_ITEM(tmp_assattr_value_65, 0, tmp_list_element_37);
            tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_list_element_37 == NULL)) {
                tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM0(tmp_assattr_value_65, 1, tmp_list_element_37);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_28;
            }
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_28;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 416;
            tmp_list_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_36);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_65, 2, tmp_list_element_37);
        }
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_65);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_assattr_target_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_assattr_target_65 == NULL)) {
            tmp_assattr_target_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[112], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_value_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_expression_value_94;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[191]);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_assattr_target_66;
        tmp_assattr_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_66 == NULL)) {
            tmp_assattr_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_assattr_target_66 == NULL)) {
            tmp_assattr_target_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        assert(!(tmp_assattr_target_66 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[110], tmp_assattr_value_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_list_element_38;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_assattr_target_67;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 421;
        tmp_list_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_37);
        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_67 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assattr_value_67, 0, tmp_list_element_38);
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_67, 1, tmp_list_element_38);
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_67);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_assattr_target_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_assattr_target_67 == NULL)) {
            tmp_assattr_target_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[112], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_value_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_expression_value_95;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[192]);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_assattr_target_68;
        tmp_assattr_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_68 == NULL)) {
            tmp_assattr_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_68 == NULL)) {
            tmp_assattr_target_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        assert(!(tmp_assattr_target_68 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[110], tmp_assattr_value_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_list_element_39;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_assattr_target_69;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 426;
        tmp_list_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_38);
        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_69 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_39;
            PyList_SET_ITEM(tmp_assattr_value_69, 0, tmp_list_element_39);
            tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_list_element_39 == NULL)) {
                tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_list_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM0(tmp_assattr_value_69, 1, tmp_list_element_39);
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_30;
            }
            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_args_element_value_39 == NULL)) {
                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_30;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 426;
            tmp_list_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_39);
            if (tmp_list_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_assattr_value_69, 2, tmp_list_element_39);
        }
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_69);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_assattr_target_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_69 == NULL)) {
            tmp_assattr_target_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[112], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_value_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_expression_value_96;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[193]);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_assattr_target_70;
        tmp_assattr_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_70 == NULL)) {
            tmp_assattr_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_assattr_target_70 == NULL)) {
            tmp_assattr_target_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        assert(!(tmp_assattr_target_70 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[110], tmp_assattr_value_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_71;
        PyObject *tmp_list_element_40;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_assattr_target_71;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 431;
        tmp_list_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_40);
        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_71 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_41;
            PyList_SET_ITEM(tmp_assattr_value_71, 0, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_list_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM0(tmp_assattr_value_71, 1, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_list_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM0(tmp_assattr_value_71, 2, tmp_list_element_40);
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_31;
            }
            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_args_element_value_41 == NULL)) {
                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_31;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 431;
            tmp_list_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_41);
            if (tmp_list_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_assattr_value_71, 3, tmp_list_element_40);
        }
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_71);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_assattr_target_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_assattr_target_71 == NULL)) {
            tmp_assattr_target_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        if (tmp_assattr_target_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_71, mod_consts[112], tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_value_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_expression_value_97;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_183 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[194]);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assattr_value_72;
        PyObject *tmp_assattr_target_72;
        tmp_assattr_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_72 == NULL)) {
            tmp_assattr_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_assattr_target_72 == NULL)) {
            tmp_assattr_target_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        assert(!(tmp_assattr_target_72 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_72, mod_consts[110], tmp_assattr_value_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_73;
        PyObject *tmp_list_element_41;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_assattr_target_73;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 436;
        tmp_list_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_42);
        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_73 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_73, 0, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_assattr_value_73, 1, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_assattr_value_73, 2, tmp_list_element_41);
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_assattr_value_73);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_assattr_target_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_assattr_target_73 == NULL)) {
            tmp_assattr_target_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        if (tmp_assattr_target_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_73, mod_consts[112], tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_value_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_expression_value_98;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[195]);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assattr_value_74;
        PyObject *tmp_assattr_target_74;
        tmp_assattr_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_74 == NULL)) {
            tmp_assattr_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_74 == NULL)) {
            tmp_assattr_target_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_assattr_target_74 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_74, mod_consts[110], tmp_assattr_value_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_75;
        PyObject *tmp_list_element_42;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_assattr_target_75;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 441;
        tmp_list_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_43);
        if (tmp_list_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_75 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_44;
            PyList_SET_ITEM(tmp_assattr_value_75, 0, tmp_list_element_42);
            tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_list_element_42 == NULL)) {
                tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_list_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM0(tmp_assattr_value_75, 1, tmp_list_element_42);
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_33;
            }
            tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_44 == NULL)) {
                tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_33;
            }
            frame_54097234714fbb26711fe2f5ad035ed5->m_frame.f_lineno = 441;
            tmp_list_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_44);
            if (tmp_list_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM(tmp_assattr_value_75, 2, tmp_list_element_42);
        }
        goto list_build_noexception_33;
        // Exception handling pass through code for list_build:
        list_build_exception_33:;
        Py_DECREF(tmp_assattr_value_75);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_33:;
        tmp_assattr_target_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_75 == NULL)) {
            tmp_assattr_target_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_assattr_target_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_75, mod_consts[112], tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_value_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_11;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54097234714fbb26711fe2f5ad035ed5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54097234714fbb26711fe2f5ad035ed5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54097234714fbb26711fe2f5ad035ed5, exception_lineno);
    }



    assertFrameObject(frame_54097234714fbb26711fe2f5ad035ed5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_11:;
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = LIST_COPY(mod_consts[196]);
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_185);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.x11.xsync", false);

    Py_INCREF(module_pyglet$libs$x11$xsync);
    return module_pyglet$libs$x11$xsync;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xsync, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$x11$xsync", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
