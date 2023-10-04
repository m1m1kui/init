/* Generated code for Python module 'pyglet.media.codecs.ffmpeg_lib.libavformat'
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

/* The "module_pyglet$media$codecs$ffmpeg_lib$libavformat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$codecs$ffmpeg_lib$libavformat;
PyDictObject *moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[238];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[238];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.codecs.ffmpeg_lib.libavformat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 238; i++) {
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
void checkModuleConstants_pyglet$media$codecs$ffmpeg_lib$libavformat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 238; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1ad76f12a9be6a537a70ba120759896e;
static PyCodeObject *codeobj_2faecca9d93fac75e7f69701075960ec;
static PyCodeObject *codeobj_1d928c6a49f8fbb6b8f75eb229cfbb5e;
static PyCodeObject *codeobj_33ef7f7e288cfbab41b3708dd84d3aca;
static PyCodeObject *codeobj_0a4cd621a71eaeaa057a47f5c60189df;
static PyCodeObject *codeobj_6eb1db705f73ff5e2a0e2ced86c65155;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[235]); CHECK_OBJECT(module_filename_obj);
    codeobj_1ad76f12a9be6a537a70ba120759896e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[236], mod_consts[236], NULL, NULL, 0, 0, 0);
    codeobj_2faecca9d93fac75e7f69701075960ec = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[237], NULL, 0, 0, 0);
    codeobj_1d928c6a49f8fbb6b8f75eb229cfbb5e = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[237], NULL, 0, 0, 0);
    codeobj_33ef7f7e288cfbab41b3708dd84d3aca = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[237], NULL, 0, 0, 0);
    codeobj_0a4cd621a71eaeaa057a47f5c60189df = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[237], NULL, 0, 0, 0);
    codeobj_6eb1db705f73ff5e2a0e2ced86c65155 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[237], NULL, 0, 0, 0);
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

function_impl_code functable_pyglet$media$codecs$ffmpeg_lib$libavformat[] = {

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

    function_impl_code *current = functable_pyglet$media$codecs$ffmpeg_lib$libavformat;
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

    if (offset > sizeof(functable_pyglet$media$codecs$ffmpeg_lib$libavformat) || offset < 0) {
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
        functable_pyglet$media$codecs$ffmpeg_lib$libavformat[offset],
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
        module_pyglet$media$codecs$ffmpeg_lib$libavformat,
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
PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavformat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.codecs.ffmpeg_lib.libavformat");

    // Store the module for future use.
    module_pyglet$media$codecs$ffmpeg_lib$libavformat = module;

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
        PRINT_STRING("pyglet.media.codecs.ffmpeg_lib.libavformat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.codecs.ffmpeg_lib.libavformat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$codecs$ffmpeg_lib$libavformat\n");

    moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat = MODULE_DICT(module_pyglet$media$codecs$ffmpeg_lib$libavformat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[26]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$codecs$ffmpeg_lib$libavformat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$codecs$ffmpeg_lib$libavformat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_1ad76f12a9be6a537a70ba120759896e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73 = NULL;
    struct Nuitka_FrameObject *frame_33ef7f7e288cfbab41b3708dd84d3aca_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91 = NULL;
    struct Nuitka_FrameObject *frame_6eb1db705f73ff5e2a0e2ced86c65155_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110 = NULL;
    struct Nuitka_FrameObject *frame_0a4cd621a71eaeaa057a47f5c60189df_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127 = NULL;
    struct Nuitka_FrameObject *frame_2faecca9d93fac75e7f69701075960ec_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194 = NULL;
    struct Nuitka_FrameObject *frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_1ad76f12a9be6a537a70ba120759896e = MAKE_MODULE_FRAME(codeobj_1ad76f12a9be6a537a70ba120759896e, module_pyglet$media$codecs$ffmpeg_lib$libavformat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1ad76f12a9be6a537a70ba120759896e);
    assert(Py_REFCNT(frame_1ad76f12a9be6a537a70ba120759896e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[7],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[7]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_2__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[10],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[11],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[11]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[12],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[12]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[13]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[14]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[15],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[15]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[16],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[16]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_15 == NULL));
        assert(tmp_import_from_3__module == NULL);
        Py_INCREF(tmp_assign_source_15);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[17],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[17]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[18],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[18]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[19],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[19]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[20],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[20]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_19);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 41;
        tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[23];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[24];
        tmp_level_value_2 = mod_consts[8];
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 42;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[25],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[26];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[27];
        tmp_level_value_3 = mod_consts[28];
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 43;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[29],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[26];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[30];
        tmp_level_value_4 = mod_consts[28];
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 44;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[31],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[26];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[32];
        tmp_level_value_5 = mod_consts[28];
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 45;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat,
                mod_consts[33],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 47;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[36]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[37]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 49;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[41]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[42], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[40];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 57;
        tmp_rshift_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[44];
        tmp_args_element_value_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_33);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_35 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[57]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[58];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 69;
        tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_6 = mod_consts[61];
        tmp_default_value_1 = mod_consts[62];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_6, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[61]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 69;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_39;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_6;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[58];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 69;
            tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_40 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__1_AVPacketList_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 69;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_40);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_assign_source_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_43 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[57]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[67];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 73;
        tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_name_value_7 = mod_consts[61];
        tmp_default_value_2 = mod_consts[62];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_7, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[61]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_47;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        frame_33ef7f7e288cfbab41b3708dd84d3aca_2 = MAKE_CLASS_FRAME(tstate, codeobj_33ef7f7e288cfbab41b3708dd84d3aca, module_pyglet$media$codecs$ffmpeg_lib$libavformat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_33ef7f7e288cfbab41b3708dd84d3aca_2);
        assert(Py_REFCNT(frame_33ef7f7e288cfbab41b3708dd84d3aca_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = mod_consts[68];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73, mod_consts[16]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_33ef7f7e288cfbab41b3708dd84d3aca_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_33ef7f7e288cfbab41b3708dd84d3aca_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_33ef7f7e288cfbab41b3708dd84d3aca_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_33ef7f7e288cfbab41b3708dd84d3aca_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_33ef7f7e288cfbab41b3708dd84d3aca_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[67];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 73;
            tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_48 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__2_AVInputFormat_73 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 73;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_48);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_assign_source_50 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_51 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_17 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[57]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_tuple_element_11 = mod_consts[70];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 79;
        tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_20 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_name_value_8 = mod_consts[61];
        tmp_default_value_3 = mod_consts[62];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_8, tmp_default_value_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[61]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 79;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_12;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[70];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 79;
            tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_56 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__3_AVOutputFormat_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 79;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_56);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_assign_source_58 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_14);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_59 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_23 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[8];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_25 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[57]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_tuple_element_15 = mod_consts[71];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_15 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 83;
        tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_26 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_name_value_9 = mod_consts[61];
        tmp_default_value_4 = mod_consts[62];
        tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_9, tmp_default_value_4);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[61]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_63;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_15;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_17 = mod_consts[71];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_17 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 83;
            tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_64 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__4_AVIOContext_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 83;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_64);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_assign_source_66 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_66, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_67 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_29 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_69 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_31 = tmp_class_creation_5__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[57]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_tuple_element_19 = mod_consts[72];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_19 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 87;
        tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_70;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_32 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_33 = tmp_class_creation_5__metaclass;
        tmp_name_value_10 = mod_consts[61];
        tmp_default_value_5 = mod_consts[62];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_10, tmp_default_value_5);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_34 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[61]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 87;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_71;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_72;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_13 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_21 = mod_consts[72];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_21 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 87;
            tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_73;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_72 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_72);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__5_AVIndexEntry_87 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 87;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_72);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_tuple_element_22;
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_assign_source_74 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_74, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_75 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_35 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[8];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_77 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_77;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_36 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_37 = tmp_class_creation_6__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[57]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_tuple_element_23 = mod_consts[73];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_23 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 91;
        tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_38 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_39 = tmp_class_creation_6__metaclass;
        tmp_name_value_11 = mod_consts[61];
        tmp_default_value_6 = mod_consts[62];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_11, tmp_default_value_6);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[61]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_79;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_80;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        frame_6eb1db705f73ff5e2a0e2ced86c65155_3 = MAKE_CLASS_FRAME(tstate, codeobj_6eb1db705f73ff5e2a0e2ced86c65155, module_pyglet$media$codecs$ffmpeg_lib$libavformat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6eb1db705f73ff5e2a0e2ced86c65155_3);
        assert(Py_REFCNT(frame_6eb1db705f73ff5e2a0e2ced86c65155_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_25;
            tmp_tuple_element_25 = mod_consts[74];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

            if (tmp_tuple_element_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_tuple_element_25 == NULL)) {
                        tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_25);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_25);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dictset_value = MAKE_LIST_EMPTY(14);
            {
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_26 = mod_consts[75];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_27 = mod_consts[76];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[7]);

                if (tmp_tuple_element_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_27 == NULL)) {
                            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_27);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_27);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_28 = mod_consts[77];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_29 = mod_consts[78];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_15;
                    PyObject *tmp_args_element_value_3;
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyObject *tmp_mult_expr_left_2;
                    PyObject *tmp_mult_expr_right_2;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_29);
                    tmp_called_value_15 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[18]);

                    if (tmp_called_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_15 == NULL)) {
                                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_15 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 97;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_called_value_15);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_mult_expr_left_2 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[12]);

                    if (tmp_mult_expr_left_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_mult_expr_left_2 == NULL)) {
                                tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_mult_expr_left_2 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_15);

                                exception_lineno = 97;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_mult_expr_left_2);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_mult_expr_right_2 = mod_consts[46];
                    tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                    Py_DECREF(tmp_mult_expr_left_2);
                    if (tmp_mult_expr_left_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_mult_expr_right_1 = mod_consts[79];
                    tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    if (tmp_args_element_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    frame_6eb1db705f73ff5e2a0e2ced86c65155_3->m_frame.f_lineno = 97;
                    tmp_tuple_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_3);
                    Py_DECREF(tmp_called_value_15);
                    Py_DECREF(tmp_args_element_value_3);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_30 = mod_consts[80];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "o";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_31 = mod_consts[81];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_2);
                tmp_tuple_element_32 = mod_consts[82];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[7]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_32 == NULL)) {
                            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_32);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_2);
                tmp_tuple_element_33 = mod_consts[83];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_33);
                tmp_tuple_element_33 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[7]);

                if (tmp_tuple_element_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_33 == NULL)) {
                            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_33);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_33);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_2);
                tmp_tuple_element_34 = mod_consts[84];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_34 == NULL)) {
                            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_34);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_34);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_2);
                tmp_tuple_element_35 = mod_consts[85];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_35);
                tmp_tuple_element_35 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_35 == NULL)) {
                            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_35);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_35);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_2);
                tmp_tuple_element_36 = mod_consts[86];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_36);
                tmp_tuple_element_36 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[7]);

                if (tmp_tuple_element_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_36 == NULL)) {
                            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_tuple_element_36);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_36);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_2);
                tmp_tuple_element_37 = mod_consts[87];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[9]);

                if (tmp_tuple_element_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_37 == NULL)) {
                            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_37);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_37);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_2);
                tmp_tuple_element_38 = mod_consts[88];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[7]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6eb1db705f73ff5e2a0e2ced86c65155_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6eb1db705f73ff5e2a0e2ced86c65155_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6eb1db705f73ff5e2a0e2ced86c65155_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6eb1db705f73ff5e2a0e2ced86c65155_3,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_6eb1db705f73ff5e2a0e2ced86c65155_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_21;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_16 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_39 = mod_consts[73];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_39 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 91;
            tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_21;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_81;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_80 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_80);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__6_AVStreamInfo_91 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 91;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_80);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_tuple_element_40;
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_assign_source_82 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_82, 0, tmp_tuple_element_40);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_83 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_41 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[8];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_85 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_85;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_42 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_43 = tmp_class_creation_7__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[57]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_tuple_element_41 = mod_consts[89];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_41 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 110;
        tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_44 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_45 = tmp_class_creation_7__metaclass;
        tmp_name_value_12 = mod_consts[61];
        tmp_default_value_7 = mod_consts[62];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_12, tmp_default_value_7);
        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[61]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 110;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_87;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_24;
        }
        frame_0a4cd621a71eaeaa057a47f5c60189df_4 = MAKE_CLASS_FRAME(tstate, codeobj_0a4cd621a71eaeaa057a47f5c60189df, module_pyglet$media$codecs$ffmpeg_lib$libavformat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0a4cd621a71eaeaa057a47f5c60189df_4);
        assert(Py_REFCNT(frame_0a4cd621a71eaeaa057a47f5c60189df_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_43;
            tmp_tuple_element_43 = mod_consts[90];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[16]);

            if (tmp_tuple_element_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_tuple_element_43 == NULL)) {
                        tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                    }

                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto tuple_build_exception_23;
                    }
                    Py_INCREF(tmp_tuple_element_43);
                } else {
                    goto tuple_build_exception_23;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[91];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_args_element_value_4;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                    tmp_called_value_18 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[18]);

                    if (tmp_called_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_18 == NULL)) {
                                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 113;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_called_value_18);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_args_element_value_4 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[13]);

                    if (tmp_args_element_value_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[13]);

                            if (unlikely(tmp_args_element_value_4 == NULL)) {
                                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                            }

                            if (tmp_args_element_value_4 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);

                                exception_lineno = 113;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_args_element_value_4);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    frame_0a4cd621a71eaeaa057a47f5c60189df_4->m_frame.f_lineno = 113;
                    tmp_tuple_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_4);
                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_4);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 113;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[92];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                tmp_tuple_element_45 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[7]);

                if (tmp_tuple_element_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_45 == NULL)) {
                            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_45);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_46 = mod_consts[93];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_46);
                tmp_tuple_element_46 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[16]);

                if (tmp_tuple_element_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_46 == NULL)) {
                            tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_tuple_element_46);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_46);
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0a4cd621a71eaeaa057a47f5c60189df_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0a4cd621a71eaeaa057a47f5c60189df_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0a4cd621a71eaeaa057a47f5c60189df_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0a4cd621a71eaeaa057a47f5c60189df_4,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_0a4cd621a71eaeaa057a47f5c60189df_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_24;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_24;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_19 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_47 = mod_consts[89];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_47 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 110;
            tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_24;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_89;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_88 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_88);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__7_AVProbeData_110 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 110;
        goto try_except_handler_22;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_88);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
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
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_tuple_element_48;
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_48 == NULL)) {
            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_assign_source_90 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_90, 0, tmp_tuple_element_48);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_91 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_47 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[8];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_93;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_48 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_49 = tmp_class_creation_8__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[57]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_tuple_element_49 = mod_consts[94];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_49 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 119;
        tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_50 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_51 = tmp_class_creation_8__metaclass;
        tmp_name_value_13 = mod_consts[61];
        tmp_default_value_8 = mod_consts[62];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_13, tmp_default_value_8);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[61]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 119;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_95;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_96;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_27;
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_27;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_21 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_51 = mod_consts[94];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_51 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 119;
            tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_27;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_97;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_96 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_96);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__8_FFFrac_119 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 119;
        goto try_except_handler_25;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_96);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
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
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_assign_source_98 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_98, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_99 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_53 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[8];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_101;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_54 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_55 = tmp_class_creation_9__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[57]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_tuple_element_53 = mod_consts[95];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_53 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 123;
        tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_56 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_57 = tmp_class_creation_9__metaclass;
        tmp_name_value_14 = mod_consts[61];
        tmp_default_value_9 = mod_consts[62];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_14, tmp_default_value_9);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_58 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[61]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 123;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_103;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_104;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_30;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_30;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_23 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_55 = mod_consts[95];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_55 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 123;
            tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto try_except_handler_30;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_105;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_104 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_104);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__9_AVStreamInternal_123 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 123;
        goto try_except_handler_28;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_104);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
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
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_assign_source_106 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_106, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_107 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_59 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[8];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_59, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_109 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_109;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_60 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_61 = tmp_class_creation_10__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[57]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_tuple_element_57 = mod_consts[96];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_57 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 127;
        tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_62 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_63 = tmp_class_creation_10__metaclass;
        tmp_name_value_15 = mod_consts[61];
        tmp_default_value_10 = mod_consts[62];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_63, tmp_name_value_15, tmp_default_value_10);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_64 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[61]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 127;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_111;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_112;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_33;
        }
        frame_2faecca9d93fac75e7f69701075960ec_5 = MAKE_CLASS_FRAME(tstate, codeobj_2faecca9d93fac75e7f69701075960ec, module_pyglet$media$codecs$ffmpeg_lib$libavformat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2faecca9d93fac75e7f69701075960ec_5);
        assert(Py_REFCNT(frame_2faecca9d93fac75e7f69701075960ec_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_59;
            tmp_tuple_element_59 = mod_consts[97];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[9]);

            if (tmp_tuple_element_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_tuple_element_59 == NULL)) {
                        tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                    }

                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    Py_INCREF(tmp_tuple_element_59);
                } else {
                    goto tuple_build_exception_30;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_59);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_60 = mod_consts[98];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_60);
                tmp_tuple_element_60 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[9]);

                if (tmp_tuple_element_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_60 == NULL)) {
                            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto tuple_build_exception_31;
                        }
                        Py_INCREF(tmp_tuple_element_60);
                    } else {
                        goto tuple_build_exception_31;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_60);
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_61 = mod_consts[99];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[9]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto tuple_build_exception_32;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2faecca9d93fac75e7f69701075960ec_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2faecca9d93fac75e7f69701075960ec_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2faecca9d93fac75e7f69701075960ec_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2faecca9d93fac75e7f69701075960ec_5,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_2faecca9d93fac75e7f69701075960ec_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_33;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_33;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_25 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_62 = mod_consts[96];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_62 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 127;
            tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto try_except_handler_33;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_113;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_112 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_112);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__10_AVFrac_127 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 127;
        goto try_except_handler_31;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_112);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
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
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
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
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[100]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[101]);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[102]);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[103]);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_expression_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[104]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_70;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[105]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_71;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[106]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_expression_value_72;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[107]);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_expression_value_73;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[108]);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[109]);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_123);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_tuple_element_63;
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_63 == NULL)) {
            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_assign_source_124 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_124, 0, tmp_tuple_element_63);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_125 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_75 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[8];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_127 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_76 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_77 = tmp_class_creation_11__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[57]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_tuple_element_64 = mod_consts[110];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_64 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 148;
        tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_128;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_78 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_79 = tmp_class_creation_11__metaclass;
        tmp_name_value_16 = mod_consts[61];
        tmp_default_value_11 = mod_consts[62];
        tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_16, tmp_default_value_11);
        if (tmp_tuple_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[61]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 148;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_129;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_130;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_36;
        }
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_36;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_36;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_131;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_27 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_66 = mod_consts[110];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_66 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_66);
            tmp_tuple_element_66 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 148;
            tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_36;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_131;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_130 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_130);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__11_AVStream_148 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 148;
        goto try_except_handler_34;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_130);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_list_element_5;
        PyObject *tmp_tuple_element_67;
        tmp_tuple_element_67 = mod_consts[111];
        tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_67);
        tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_67 == NULL)) {
            tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto tuple_build_exception_34;
        }
        PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_67);
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_list_element_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_assign_source_132 = MAKE_LIST_EMPTY(22);
        {
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_tuple_element_88;
            PyList_SET_ITEM(tmp_assign_source_132, 0, tmp_list_element_5);
            tmp_tuple_element_68 = mod_consts[112];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_68);
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyList_SET_ITEM(tmp_assign_source_132, 1, tmp_list_element_5);
            tmp_tuple_element_69 = mod_consts[113];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_element_value_5;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_69);
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;

                    goto tuple_build_exception_36;
                }
                tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[100]);

                if (unlikely(tmp_args_element_value_5 == NULL)) {
                    tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
                }

                if (tmp_args_element_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;

                    goto tuple_build_exception_36;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 154;
                tmp_tuple_element_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_5);
                if (tmp_tuple_element_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;

                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_69);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            PyList_SET_ITEM(tmp_assign_source_132, 2, tmp_list_element_5);
            tmp_tuple_element_70 = mod_consts[114];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_70);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_assign_source_132, 3, tmp_list_element_5);
            tmp_tuple_element_71 = mod_consts[115];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_71);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_assign_source_132, 4, tmp_list_element_5);
            tmp_tuple_element_72 = mod_consts[116];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_72);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_assign_source_132, 5, tmp_list_element_5);
            tmp_tuple_element_73 = mod_consts[117];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_73);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_assign_source_132, 6, tmp_list_element_5);
            tmp_tuple_element_74 = mod_consts[118];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_74);
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_assign_source_132, 7, tmp_list_element_5);
            tmp_tuple_element_75 = mod_consts[119];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_75);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            PyList_SET_ITEM(tmp_assign_source_132, 8, tmp_list_element_5);
            tmp_tuple_element_76 = mod_consts[120];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_76);
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            PyList_SET_ITEM(tmp_assign_source_132, 9, tmp_list_element_5);
            tmp_tuple_element_77 = mod_consts[121];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_77);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_assign_source_132, 10, tmp_list_element_5);
            tmp_tuple_element_78 = mod_consts[122];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_78);
                tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_29 == NULL)) {
                    tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_45;
                }
                tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_args_element_value_6 == NULL)) {
                    tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
                }

                if (tmp_args_element_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_45;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 163;
                tmp_tuple_element_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_6);
                if (tmp_tuple_element_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_45;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_78);
            }
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            PyList_SET_ITEM(tmp_assign_source_132, 11, tmp_list_element_5);
            tmp_tuple_element_79 = mod_consts[123];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_79);
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyList_SET_ITEM(tmp_assign_source_132, 12, tmp_list_element_5);
            tmp_tuple_element_80 = mod_consts[124];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_80);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_assign_source_132, 13, tmp_list_element_5);
            tmp_tuple_element_81 = mod_consts[125];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_args_element_value_7;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_81);
                tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_30 == NULL)) {
                    tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_48;
                }
                tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[101]);

                if (unlikely(tmp_args_element_value_7 == NULL)) {
                    tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
                }

                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_48;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 166;
                tmp_tuple_element_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_7);
                if (tmp_tuple_element_81 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_48;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_81);
            }
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_assign_source_132, 14, tmp_list_element_5);
            tmp_tuple_element_82 = mod_consts[126];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_82);
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_assign_source_132, 15, tmp_list_element_5);
            tmp_tuple_element_83 = mod_consts[127];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_83);
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_assign_source_132, 16, tmp_list_element_5);
            tmp_tuple_element_84 = mod_consts[128];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_84);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            PyList_SET_ITEM(tmp_assign_source_132, 17, tmp_list_element_5);
            tmp_tuple_element_85 = mod_consts[129];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_85);
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            PyList_SET_ITEM(tmp_assign_source_132, 18, tmp_list_element_5);
            tmp_tuple_element_86 = mod_consts[130];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_86);
                tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_31 == NULL)) {
                    tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_53;
                }
                tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[104]);

                if (unlikely(tmp_args_element_value_8 == NULL)) {
                    tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
                }

                if (tmp_args_element_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_53;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 171;
                tmp_tuple_element_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_8);
                if (tmp_tuple_element_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_53;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_86);
            }
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_53:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            PyList_SET_ITEM(tmp_assign_source_132, 19, tmp_list_element_5);
            tmp_tuple_element_87 = mod_consts[131];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_9;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_87);
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;

                    goto tuple_build_exception_54;
                }
                tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_args_element_value_9 == NULL)) {
                    tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;

                    goto tuple_build_exception_54;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 172;
                tmp_tuple_element_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_9);
                if (tmp_tuple_element_87 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;

                    goto tuple_build_exception_54;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_87);
            }
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            PyList_SET_ITEM(tmp_assign_source_132, 20, tmp_list_element_5);
            tmp_tuple_element_88 = mod_consts[132];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_88);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyList_SET_ITEM(tmp_assign_source_132, 21, tmp_list_element_5);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assign_source_132);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_132);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_kwargs_value_23;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[134]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_89 = mod_consts[40];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_89);
        tmp_tuple_element_89 = mod_consts[135];
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_89);
        tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_89 == NULL)) {
            tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto tuple_build_exception_56;
        }
        PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_89);
        tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_tuple_element_89 == NULL)) {
            tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto tuple_build_exception_56;
        }
        PyTuple_SET_ITEM0(tmp_args_value_23, 3, tmp_tuple_element_89);
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_kwargs_value_23 = DICT_COPY(mod_consts[136]);
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 176;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_23);
        Py_DECREF(tmp_kwargs_value_23);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_24;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_kwargs_value_24;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[134]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_90 = mod_consts[40];
        tmp_args_value_24 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_90);
        tmp_tuple_element_90 = mod_consts[137];
        PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_90);
        tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_90 == NULL)) {
            tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_tuple_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto tuple_build_exception_57;
        }
        PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_90);
        tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_tuple_element_90 == NULL)) {
            tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_tuple_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto tuple_build_exception_57;
        }
        PyTuple_SET_ITEM0(tmp_args_value_24, 3, tmp_tuple_element_90);
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_24);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_kwargs_value_24 = DICT_COPY(mod_consts[138]);
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 178;
        tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_24, tmp_kwargs_value_24);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_24);
        Py_DECREF(tmp_kwargs_value_24);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_tuple_element_91;
        tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_91 == NULL)) {
            tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_assign_source_133 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_133, 0, tmp_tuple_element_91);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_134 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_83 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[8];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_83, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_136 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_136;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_84 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_92;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_85 = tmp_class_creation_12__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[57]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_tuple_element_92 = mod_consts[139];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_92 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_12__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 182;
        tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_137;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_86 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_87 = tmp_class_creation_12__metaclass;
        tmp_name_value_17 = mod_consts[61];
        tmp_default_value_12 = mod_consts[62];
        tmp_tuple_element_93 = BUILTIN_GETATTR(tstate, tmp_expression_value_87, tmp_name_value_17, tmp_default_value_12);
        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_88;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_93);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_88 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_88 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[61]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_93);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 182;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_138;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_139;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_39;
        }
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_39;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_39;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_140;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_36 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_94 = mod_consts[139];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_94 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_94);
            tmp_tuple_element_94 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_12__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 182;
            tmp_assign_source_140 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_39;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_140;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_139 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_139);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__12_AVProgram_182 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 182;
        goto try_except_handler_37;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_139);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_tuple_element_95;
        tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_95 == NULL)) {
            tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_assign_source_141 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_141, 0, tmp_tuple_element_95);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_142 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_89 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[8];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_144 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_144;
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_expression_value_90;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_90 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_96;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_91 = tmp_class_creation_13__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[57]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_tuple_element_96 = mod_consts[140];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_96 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_13__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 186;
        tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_145;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_92 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_93 = tmp_class_creation_13__metaclass;
        tmp_name_value_18 = mod_consts[61];
        tmp_default_value_13 = mod_consts[62];
        tmp_tuple_element_97 = BUILTIN_GETATTR(tstate, tmp_expression_value_93, tmp_name_value_18, tmp_default_value_13);
        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_94;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_97);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_94 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_94 == NULL));
            tmp_tuple_element_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[61]);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_tuple_element_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_97);
        }
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_59:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_40;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 186;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_40;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_146;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_147;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_42;
        }
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto try_except_handler_42;
            }
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto try_except_handler_42;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_148;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_98;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_38 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_98 = mod_consts[140];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_98 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_98);
            tmp_tuple_element_98 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_13__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 186;
            tmp_assign_source_148 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto try_except_handler_42;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_148;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_147 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_147);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__13_AVChapter_186 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 186;
        goto try_except_handler_40;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_147);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_tuple_element_99;
        tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_99 == NULL)) {
            tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_assign_source_149 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_149, 0, tmp_tuple_element_99);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_150 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_150;
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_95 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[8];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_95, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_152 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_152;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_96 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_100;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_97 = tmp_class_creation_14__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[57]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_tuple_element_100 = mod_consts[141];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_100 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_14__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 190;
        tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_153;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_98 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_101;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_99 = tmp_class_creation_14__metaclass;
        tmp_name_value_19 = mod_consts[61];
        tmp_default_value_14 = mod_consts[62];
        tmp_tuple_element_101 = BUILTIN_GETATTR(tstate, tmp_expression_value_99, tmp_name_value_19, tmp_default_value_14);
        if (tmp_tuple_element_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_101);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_100 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_100 == NULL));
            tmp_tuple_element_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[61]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_101);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_43;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 190;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_43;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_154;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_155;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_45;
        }
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_45;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_45;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_156;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_40 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_102 = mod_consts[141];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_102 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_102);
            tmp_tuple_element_102 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_14__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 190;
            tmp_assign_source_156 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_45;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_156;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_155 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_155);
        goto try_return_handler_45;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__14_AVFormatInternal_190 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 190;
        goto try_except_handler_43;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_155);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_tuple_element_103;
        tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_103 == NULL)) {
            tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_assign_source_157 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_157, 0, tmp_tuple_element_103);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_157;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_158 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_101 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[8];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_101, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_160 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_160;
    }
    {
        bool tmp_condition_result_58;
        PyObject *tmp_expression_value_102;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_102 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_102, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_104;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_103 = tmp_class_creation_15__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[57]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_tuple_element_104 = mod_consts[142];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_104);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_104 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_104);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_15__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 194;
        tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_161;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_104 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_105;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_105 = tmp_class_creation_15__metaclass;
        tmp_name_value_20 = mod_consts[61];
        tmp_default_value_15 = mod_consts[62];
        tmp_tuple_element_105 = BUILTIN_GETATTR(tstate, tmp_expression_value_105, tmp_name_value_20, tmp_default_value_15);
        if (tmp_tuple_element_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_106;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_105);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_106 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_106 == NULL));
            tmp_tuple_element_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[61]);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_tuple_element_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_105);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_46;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_46;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 194;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_46;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_162;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_163;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_48;
        }
        frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6 = MAKE_CLASS_FRAME(tstate, codeobj_1d928c6a49f8fbb6b8f75eb229cfbb5e, module_pyglet$media$codecs$ffmpeg_lib$libavformat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6);
        assert(Py_REFCNT(frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_106;
            tmp_tuple_element_106 = mod_consts[143];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_args_element_value_11;
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_106);
                tmp_called_value_42 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[19]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_62;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_62;
                    }
                }

                tmp_args_element_value_10 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[7]);

                if (tmp_args_element_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_args_element_value_10 == NULL)) {
                            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_args_element_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_42);

                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_62;
                        }
                        Py_INCREF(tmp_args_element_value_10);
                    } else {
                        goto tuple_build_exception_62;
                    }
                }

                tmp_args_element_value_11 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[17]);

                if (tmp_args_element_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_args_element_value_11 == NULL)) {
                            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                        }

                        if (tmp_args_element_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_42);
                            Py_DECREF(tmp_args_element_value_10);

                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_62;
                        }
                        Py_INCREF(tmp_args_element_value_11);
                    } else {
                        goto tuple_build_exception_62;
                    }
                }

                frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6->m_frame.f_lineno = 196;
                {
                    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
                    tmp_tuple_element_106 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
                }

                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_tuple_element_106 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto tuple_build_exception_62;
                }
                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_106);
            }
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_107;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_107 = mod_consts[144];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_107);
                tmp_tuple_element_107 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[17]);

                if (tmp_tuple_element_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_tuple_element_107 == NULL)) {
                            tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                        }

                        if (tmp_tuple_element_107 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 197;
                            type_description_2 = "o";
                            goto tuple_build_exception_63;
                        }
                        Py_INCREF(tmp_tuple_element_107);
                    } else {
                        goto tuple_build_exception_63;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_107);
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_1d928c6a49f8fbb6b8f75eb229cfbb5e_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_48;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto try_except_handler_48;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto try_except_handler_48;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_164;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_108;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_43 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_108 = mod_consts[142];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_108);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_108 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_108);
            tmp_tuple_element_108 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_108);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_15__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 194;
            tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto try_except_handler_48;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_164;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_163 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_163);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__15_AVIOInterruptCB_194 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 194;
        goto try_except_handler_46;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_163);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_tuple_element_109;
        tmp_tuple_element_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_109 == NULL)) {
            tmp_tuple_element_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_assign_source_165 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_165, 0, tmp_tuple_element_109);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_166 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_167;
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_61;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_107 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[8];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_107, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_168 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_168;
    }
    {
        bool tmp_condition_result_62;
        PyObject *tmp_expression_value_108;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_108 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_110;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_109 = tmp_class_creation_16__metaclass;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[57]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_tuple_element_110 = mod_consts[145];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_110);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_110 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_110);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_16__class_decl_dict;
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 201;
        tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_169;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_110 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[59]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_111;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_111 = tmp_class_creation_16__metaclass;
        tmp_name_value_21 = mod_consts[61];
        tmp_default_value_16 = mod_consts[62];
        tmp_tuple_element_111 = BUILTIN_GETATTR(tstate, tmp_expression_value_111, tmp_name_value_21, tmp_default_value_16);
        if (tmp_tuple_element_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_111);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_112 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_112 == NULL));
            tmp_tuple_element_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[61]);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_tuple_element_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_111);
        }
        goto tuple_build_noexception_64;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_64:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_64:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_49;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 201;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_49;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_170;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_171;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_51;
        }
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto try_except_handler_51;
            }
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_51;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_172;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_112;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_45 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_112 = mod_consts[145];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_112);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_112 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_112);
            tmp_tuple_element_112 = locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_112);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_16__class_decl_dict;
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 201;
            tmp_assign_source_172 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto try_except_handler_51;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_172;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_171 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_171);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201);
        locals_pyglet$media$codecs$ffmpeg_lib$libavformat$$$class__16_AVFormatContext_201 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 201;
        goto try_except_handler_49;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_171);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_list_element_7;
        PyObject *tmp_tuple_element_113;
        tmp_tuple_element_113 = mod_consts[146];
        tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_12;
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_113);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_65;
            }
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_65;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 206;
            tmp_tuple_element_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_12);
            if (tmp_tuple_element_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_113);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_list_element_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_assign_source_173 = MAKE_LIST_EMPTY(75);
        {
            PyObject *tmp_tuple_element_114;
            PyObject *tmp_tuple_element_115;
            PyObject *tmp_tuple_element_116;
            PyObject *tmp_tuple_element_117;
            PyObject *tmp_tuple_element_118;
            PyObject *tmp_tuple_element_119;
            PyObject *tmp_tuple_element_120;
            PyObject *tmp_tuple_element_121;
            PyObject *tmp_tuple_element_122;
            PyObject *tmp_tuple_element_123;
            PyObject *tmp_tuple_element_124;
            PyObject *tmp_tuple_element_125;
            PyObject *tmp_tuple_element_126;
            PyObject *tmp_tuple_element_127;
            PyObject *tmp_tuple_element_128;
            PyObject *tmp_tuple_element_129;
            PyObject *tmp_tuple_element_130;
            PyObject *tmp_tuple_element_131;
            PyObject *tmp_tuple_element_132;
            PyObject *tmp_tuple_element_133;
            PyObject *tmp_tuple_element_134;
            PyObject *tmp_tuple_element_135;
            PyObject *tmp_tuple_element_136;
            PyObject *tmp_tuple_element_137;
            PyObject *tmp_tuple_element_138;
            PyObject *tmp_tuple_element_139;
            PyObject *tmp_tuple_element_140;
            PyObject *tmp_tuple_element_141;
            PyObject *tmp_tuple_element_142;
            PyObject *tmp_tuple_element_143;
            PyObject *tmp_tuple_element_144;
            PyObject *tmp_tuple_element_145;
            PyObject *tmp_tuple_element_146;
            PyObject *tmp_tuple_element_147;
            PyObject *tmp_tuple_element_148;
            PyObject *tmp_tuple_element_149;
            PyObject *tmp_tuple_element_150;
            PyObject *tmp_tuple_element_151;
            PyObject *tmp_tuple_element_152;
            PyObject *tmp_tuple_element_153;
            PyObject *tmp_tuple_element_154;
            PyObject *tmp_tuple_element_155;
            PyObject *tmp_tuple_element_156;
            PyObject *tmp_tuple_element_157;
            PyObject *tmp_tuple_element_158;
            PyObject *tmp_tuple_element_159;
            PyObject *tmp_tuple_element_160;
            PyObject *tmp_tuple_element_161;
            PyObject *tmp_tuple_element_162;
            PyObject *tmp_tuple_element_163;
            PyObject *tmp_tuple_element_164;
            PyObject *tmp_tuple_element_165;
            PyObject *tmp_tuple_element_166;
            PyObject *tmp_tuple_element_167;
            PyObject *tmp_tuple_element_168;
            PyObject *tmp_tuple_element_169;
            PyObject *tmp_tuple_element_170;
            PyObject *tmp_tuple_element_171;
            PyObject *tmp_tuple_element_172;
            PyObject *tmp_tuple_element_173;
            PyObject *tmp_tuple_element_174;
            PyObject *tmp_tuple_element_175;
            PyObject *tmp_tuple_element_176;
            PyObject *tmp_tuple_element_177;
            PyObject *tmp_tuple_element_178;
            PyObject *tmp_tuple_element_179;
            PyObject *tmp_tuple_element_180;
            PyObject *tmp_tuple_element_181;
            PyObject *tmp_tuple_element_182;
            PyObject *tmp_tuple_element_183;
            PyObject *tmp_tuple_element_184;
            PyObject *tmp_tuple_element_185;
            PyObject *tmp_tuple_element_186;
            PyObject *tmp_tuple_element_187;
            PyList_SET_ITEM(tmp_assign_source_173, 0, tmp_list_element_7);
            tmp_tuple_element_114 = mod_consts[147];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_47;
                PyObject *tmp_args_element_value_13;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_114);
                tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_47 == NULL)) {
                    tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;

                    goto tuple_build_exception_66;
                }
                tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_args_element_value_13 == NULL)) {
                    tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                }

                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;

                    goto tuple_build_exception_66;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 207;
                tmp_tuple_element_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_13);
                if (tmp_tuple_element_114 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;

                    goto tuple_build_exception_66;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_114);
            }
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            PyList_SET_ITEM(tmp_assign_source_173, 1, tmp_list_element_7);
            tmp_tuple_element_115 = mod_consts[148];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_48;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_115);
                tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_48 == NULL)) {
                    tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_67;
                }
                tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[70]);

                if (unlikely(tmp_args_element_value_14 == NULL)) {
                    tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                }

                if (tmp_args_element_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_67;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 208;
                tmp_tuple_element_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_14);
                if (tmp_tuple_element_115 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_67;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_115);
            }
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            PyList_SET_ITEM(tmp_assign_source_173, 2, tmp_list_element_7);
            tmp_tuple_element_116 = mod_consts[114];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_116);
            tmp_tuple_element_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_116 == NULL)) {
                tmp_tuple_element_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_116);
            goto tuple_build_noexception_68;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_68:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_68:;
            PyList_SET_ITEM(tmp_assign_source_173, 3, tmp_list_element_7);
            tmp_tuple_element_117 = mod_consts[149];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_49;
                PyObject *tmp_args_element_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_117);
                tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_49 == NULL)) {
                    tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;

                    goto tuple_build_exception_69;
                }
                tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_args_element_value_15 == NULL)) {
                    tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;

                    goto tuple_build_exception_69;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 210;
                tmp_tuple_element_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_15);
                if (tmp_tuple_element_117 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;

                    goto tuple_build_exception_69;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_117);
            }
            goto tuple_build_noexception_69;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_69:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_69:;
            PyList_SET_ITEM(tmp_assign_source_173, 4, tmp_list_element_7);
            tmp_tuple_element_118 = mod_consts[150];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_118);
            tmp_tuple_element_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_118 == NULL)) {
                tmp_tuple_element_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_118);
            goto tuple_build_noexception_70;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_70:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_70:;
            PyList_SET_ITEM(tmp_assign_source_173, 5, tmp_list_element_7);
            tmp_tuple_element_119 = mod_consts[151];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_119);
            tmp_tuple_element_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_119 == NULL)) {
                tmp_tuple_element_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_119);
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_71:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            PyList_SET_ITEM(tmp_assign_source_173, 6, tmp_list_element_7);
            tmp_tuple_element_120 = mod_consts[152];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_called_value_51;
                PyObject *tmp_args_element_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_120);
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_72;
                }
                tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_51 == NULL)) {
                    tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_72;
                }
                tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_args_element_value_17 == NULL)) {
                    tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_args_element_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_72;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 213;
                tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_17);
                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_72;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 213;
                tmp_tuple_element_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_16);
                if (tmp_tuple_element_120 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;

                    goto tuple_build_exception_72;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_120);
            }
            goto tuple_build_noexception_72;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_72:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_72:;
            PyList_SET_ITEM(tmp_assign_source_173, 7, tmp_list_element_7);
            tmp_tuple_element_121 = mod_consts[90];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_3;
                PyObject *tmp_mult_expr_right_3;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_121);
                tmp_mult_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_mult_expr_left_3 == NULL)) {
                    tmp_mult_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_mult_expr_left_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;

                    goto tuple_build_exception_73;
                }
                tmp_mult_expr_right_3 = mod_consts[153];
                tmp_tuple_element_121 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
                if (tmp_tuple_element_121 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;

                    goto tuple_build_exception_73;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_121);
            }
            goto tuple_build_noexception_73;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_73:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_73:;
            PyList_SET_ITEM(tmp_assign_source_173, 8, tmp_list_element_7);
            tmp_tuple_element_122 = mod_consts[154];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_122);
            tmp_tuple_element_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_122 == NULL)) {
                tmp_tuple_element_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_122);
            goto tuple_build_noexception_74;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_74:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_74:;
            PyList_SET_ITEM(tmp_assign_source_173, 9, tmp_list_element_7);
            tmp_tuple_element_123 = mod_consts[116];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_123);
            tmp_tuple_element_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_123 == NULL)) {
                tmp_tuple_element_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_123);
            goto tuple_build_noexception_75;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_75:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_75:;
            PyList_SET_ITEM(tmp_assign_source_173, 10, tmp_list_element_7);
            tmp_tuple_element_124 = mod_consts[117];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_124);
            tmp_tuple_element_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_124 == NULL)) {
                tmp_tuple_element_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_124);
            goto tuple_build_noexception_76;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_76:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_76:;
            PyList_SET_ITEM(tmp_assign_source_173, 11, tmp_list_element_7);
            tmp_tuple_element_125 = mod_consts[155];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_125);
            tmp_tuple_element_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_125 == NULL)) {
                tmp_tuple_element_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_125);
            goto tuple_build_noexception_77;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_77:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_77:;
            PyList_SET_ITEM(tmp_assign_source_173, 12, tmp_list_element_7);
            tmp_tuple_element_126 = mod_consts[156];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_126);
            tmp_tuple_element_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_126 == NULL)) {
                tmp_tuple_element_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_126);
            goto tuple_build_noexception_78;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_78:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_78:;
            PyList_SET_ITEM(tmp_assign_source_173, 13, tmp_list_element_7);
            tmp_tuple_element_127 = mod_consts[157];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_127);
            tmp_tuple_element_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_127 == NULL)) {
                tmp_tuple_element_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_127);
            goto tuple_build_noexception_79;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_79:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_79:;
            PyList_SET_ITEM(tmp_assign_source_173, 14, tmp_list_element_7);
            tmp_tuple_element_128 = mod_consts[158];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_128);
            tmp_tuple_element_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_128 == NULL)) {
                tmp_tuple_element_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_128);
            goto tuple_build_noexception_80;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_80:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_80:;
            PyList_SET_ITEM(tmp_assign_source_173, 15, tmp_list_element_7);
            tmp_tuple_element_129 = mod_consts[159];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_129);
            tmp_tuple_element_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_129 == NULL)) {
                tmp_tuple_element_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_129);
            goto tuple_build_noexception_81;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_81:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_81:;
            PyList_SET_ITEM(tmp_assign_source_173, 16, tmp_list_element_7);
            tmp_tuple_element_130 = mod_consts[160];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_130);
            tmp_tuple_element_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_130 == NULL)) {
                tmp_tuple_element_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_130);
            goto tuple_build_noexception_82;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_82:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_82:;
            PyList_SET_ITEM(tmp_assign_source_173, 17, tmp_list_element_7);
            tmp_tuple_element_131 = mod_consts[161];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_52;
                PyObject *tmp_args_element_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_131);
                tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_52 == NULL)) {
                    tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_83;
                }
                tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_args_element_value_18 == NULL)) {
                    tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                }

                if (tmp_args_element_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_83;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 224;
                tmp_tuple_element_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_18);
                if (tmp_tuple_element_131 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_83;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_131);
            }
            goto tuple_build_noexception_83;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_83:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_83:;
            PyList_SET_ITEM(tmp_assign_source_173, 18, tmp_list_element_7);
            tmp_tuple_element_132 = mod_consts[162];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_132);
            tmp_tuple_element_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_132 == NULL)) {
                tmp_tuple_element_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_84;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_132);
            goto tuple_build_noexception_84;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_84:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_84:;
            PyList_SET_ITEM(tmp_assign_source_173, 19, tmp_list_element_7);
            tmp_tuple_element_133 = mod_consts[163];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_133);
            tmp_tuple_element_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_133 == NULL)) {
                tmp_tuple_element_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_85;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_133);
            goto tuple_build_noexception_85;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_85:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_85:;
            PyList_SET_ITEM(tmp_assign_source_173, 20, tmp_list_element_7);
            tmp_tuple_element_134 = mod_consts[164];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_53;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_20;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_134);
                tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_53 == NULL)) {
                    tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_86;
                }
                tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_54 == NULL)) {
                    tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_86;
                }
                tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[139]);

                if (unlikely(tmp_args_element_value_20 == NULL)) {
                    tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
                }

                if (tmp_args_element_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_86;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 227;
                tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_20);
                if (tmp_args_element_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_86;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 227;
                tmp_tuple_element_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_19);
                if (tmp_tuple_element_134 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_86;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_134);
            }
            goto tuple_build_noexception_86;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_86:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_86:;
            PyList_SET_ITEM(tmp_assign_source_173, 21, tmp_list_element_7);
            tmp_tuple_element_135 = mod_consts[165];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_135);
            tmp_tuple_element_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_135 == NULL)) {
                tmp_tuple_element_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_87;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_135);
            goto tuple_build_noexception_87;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_87:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_87:;
            PyList_SET_ITEM(tmp_assign_source_173, 22, tmp_list_element_7);
            tmp_tuple_element_136 = mod_consts[166];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_136);
            tmp_tuple_element_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_136 == NULL)) {
                tmp_tuple_element_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_88;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_136);
            goto tuple_build_noexception_88;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_88:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_88:;
            PyList_SET_ITEM(tmp_assign_source_173, 23, tmp_list_element_7);
            tmp_tuple_element_137 = mod_consts[167];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_137);
            tmp_tuple_element_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_137 == NULL)) {
                tmp_tuple_element_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_89;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_137);
            goto tuple_build_noexception_89;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_89:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_89:;
            PyList_SET_ITEM(tmp_assign_source_173, 24, tmp_list_element_7);
            tmp_tuple_element_138 = mod_consts[168];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_138);
            tmp_tuple_element_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_138 == NULL)) {
                tmp_tuple_element_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_90;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_138);
            goto tuple_build_noexception_90;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_90:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_90:;
            PyList_SET_ITEM(tmp_assign_source_173, 25, tmp_list_element_7);
            tmp_tuple_element_139 = mod_consts[169];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_139);
            tmp_tuple_element_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_139 == NULL)) {
                tmp_tuple_element_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_91;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_139);
            goto tuple_build_noexception_91;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_91:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_91:;
            PyList_SET_ITEM(tmp_assign_source_173, 26, tmp_list_element_7);
            tmp_tuple_element_140 = mod_consts[170];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_140);
            tmp_tuple_element_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_140 == NULL)) {
                tmp_tuple_element_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto tuple_build_exception_92;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_140);
            goto tuple_build_noexception_92;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_92:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_92:;
            PyList_SET_ITEM(tmp_assign_source_173, 27, tmp_list_element_7);
            tmp_tuple_element_141 = mod_consts[171];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_55;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_22;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_141);
                tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_55 == NULL)) {
                    tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;

                    goto tuple_build_exception_93;
                }
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;

                    goto tuple_build_exception_93;
                }
                tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_args_element_value_22 == NULL)) {
                    tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
                }

                if (tmp_args_element_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;

                    goto tuple_build_exception_93;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 234;
                tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_22);
                if (tmp_args_element_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;

                    goto tuple_build_exception_93;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 234;
                tmp_tuple_element_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_21);
                if (tmp_tuple_element_141 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;

                    goto tuple_build_exception_93;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_141);
            }
            goto tuple_build_noexception_93;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_93:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_93:;
            PyList_SET_ITEM(tmp_assign_source_173, 28, tmp_list_element_7);
            tmp_tuple_element_142 = mod_consts[122];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_57;
                PyObject *tmp_args_element_value_23;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_142);
                tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_57 == NULL)) {
                    tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;

                    goto tuple_build_exception_94;
                }
                tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_args_element_value_23 == NULL)) {
                    tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
                }

                if (tmp_args_element_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;

                    goto tuple_build_exception_94;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 235;
                tmp_tuple_element_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_23);
                if (tmp_tuple_element_142 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;

                    goto tuple_build_exception_94;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_142);
            }
            goto tuple_build_noexception_94;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_94:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_94:;
            PyList_SET_ITEM(tmp_assign_source_173, 29, tmp_list_element_7);
            tmp_tuple_element_143 = mod_consts[172];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_143);
            tmp_tuple_element_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_143 == NULL)) {
                tmp_tuple_element_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_95;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_143);
            goto tuple_build_noexception_95;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_95:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_95:;
            PyList_SET_ITEM(tmp_assign_source_173, 30, tmp_list_element_7);
            tmp_tuple_element_144 = mod_consts[173];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_144);
            tmp_tuple_element_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_144 == NULL)) {
                tmp_tuple_element_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_96;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_144);
            goto tuple_build_noexception_96;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_96:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_96:;
            PyList_SET_ITEM(tmp_assign_source_173, 31, tmp_list_element_7);
            tmp_tuple_element_145 = mod_consts[174];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_145);
            tmp_tuple_element_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_145 == NULL)) {
                tmp_tuple_element_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto tuple_build_exception_97;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_145);
            goto tuple_build_noexception_97;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_97:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_97:;
            PyList_SET_ITEM(tmp_assign_source_173, 32, tmp_list_element_7);
            tmp_tuple_element_146 = mod_consts[175];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_146);
            tmp_tuple_element_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_tuple_element_146 == NULL)) {
                tmp_tuple_element_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
            }

            if (tmp_tuple_element_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto tuple_build_exception_98;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_146);
            goto tuple_build_noexception_98;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_98:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_98:;
            PyList_SET_ITEM(tmp_assign_source_173, 33, tmp_list_element_7);
            tmp_tuple_element_147 = mod_consts[176];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_147);
            tmp_tuple_element_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_147 == NULL)) {
                tmp_tuple_element_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_147);
            goto tuple_build_noexception_99;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_99:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_99:;
            PyList_SET_ITEM(tmp_assign_source_173, 34, tmp_list_element_7);
            tmp_tuple_element_148 = mod_consts[177];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_148);
            tmp_tuple_element_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_148 == NULL)) {
                tmp_tuple_element_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_100;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_148);
            goto tuple_build_noexception_100;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_100:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_100:;
            PyList_SET_ITEM(tmp_assign_source_173, 35, tmp_list_element_7);
            tmp_tuple_element_149 = mod_consts[178];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_149);
            tmp_tuple_element_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_149 == NULL)) {
                tmp_tuple_element_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto tuple_build_exception_101;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_149);
            goto tuple_build_noexception_101;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_101:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_101:;
            PyList_SET_ITEM(tmp_assign_source_173, 36, tmp_list_element_7);
            tmp_tuple_element_150 = mod_consts[127];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_150);
            tmp_tuple_element_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_150 == NULL)) {
                tmp_tuple_element_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto tuple_build_exception_102;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_150);
            goto tuple_build_noexception_102;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_102:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_102:;
            PyList_SET_ITEM(tmp_assign_source_173, 37, tmp_list_element_7);
            tmp_tuple_element_151 = mod_consts[179];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_151);
            tmp_tuple_element_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_151 == NULL)) {
                tmp_tuple_element_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_103;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_151);
            goto tuple_build_noexception_103;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_103:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_103:;
            PyList_SET_ITEM(tmp_assign_source_173, 38, tmp_list_element_7);
            tmp_tuple_element_152 = mod_consts[180];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_152);
            tmp_tuple_element_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_152 == NULL)) {
                tmp_tuple_element_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_104;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_152);
            goto tuple_build_noexception_104;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_104:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_104:;
            PyList_SET_ITEM(tmp_assign_source_173, 39, tmp_list_element_7);
            tmp_tuple_element_153 = mod_consts[181];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_153);
            tmp_tuple_element_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_153 == NULL)) {
                tmp_tuple_element_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_105;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_153);
            goto tuple_build_noexception_105;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_105:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_105:;
            PyList_SET_ITEM(tmp_assign_source_173, 40, tmp_list_element_7);
            tmp_tuple_element_154 = mod_consts[182];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_154);
            tmp_tuple_element_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_154 == NULL)) {
                tmp_tuple_element_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_106;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_154);
            goto tuple_build_noexception_106;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_106:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_106:;
            PyList_SET_ITEM(tmp_assign_source_173, 41, tmp_list_element_7);
            tmp_tuple_element_155 = mod_consts[183];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_155);
            tmp_tuple_element_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_155 == NULL)) {
                tmp_tuple_element_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_107;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_155);
            goto tuple_build_noexception_107;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_107:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_107:;
            PyList_SET_ITEM(tmp_assign_source_173, 42, tmp_list_element_7);
            tmp_tuple_element_156 = mod_consts[184];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_156);
            tmp_tuple_element_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_156 == NULL)) {
                tmp_tuple_element_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_108;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_156);
            goto tuple_build_noexception_108;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_108:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_108:;
            PyList_SET_ITEM(tmp_assign_source_173, 43, tmp_list_element_7);
            tmp_tuple_element_157 = mod_consts[185];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_157);
            tmp_tuple_element_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_157 == NULL)) {
                tmp_tuple_element_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_109;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_157);
            goto tuple_build_noexception_109;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_109:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_109:;
            PyList_SET_ITEM(tmp_assign_source_173, 44, tmp_list_element_7);
            tmp_tuple_element_158 = mod_consts[186];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_158);
            tmp_tuple_element_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_158 == NULL)) {
                tmp_tuple_element_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_110;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_158);
            goto tuple_build_noexception_110;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_110:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_110:;
            PyList_SET_ITEM(tmp_assign_source_173, 45, tmp_list_element_7);
            tmp_tuple_element_159 = mod_consts[187];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_159);
            tmp_tuple_element_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_159 == NULL)) {
                tmp_tuple_element_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto tuple_build_exception_111;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_159);
            goto tuple_build_noexception_111;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_111:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_111:;
            PyList_SET_ITEM(tmp_assign_source_173, 46, tmp_list_element_7);
            tmp_tuple_element_160 = mod_consts[188];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_160);
            tmp_tuple_element_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_160 == NULL)) {
                tmp_tuple_element_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_112;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_160);
            goto tuple_build_noexception_112;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_112:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_112:;
            PyList_SET_ITEM(tmp_assign_source_173, 47, tmp_list_element_7);
            tmp_tuple_element_161 = mod_consts[189];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_161);
            tmp_tuple_element_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_tuple_element_161 == NULL)) {
                tmp_tuple_element_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_tuple_element_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto tuple_build_exception_113;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_161);
            goto tuple_build_noexception_113;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_113:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_113:;
            PyList_SET_ITEM(tmp_assign_source_173, 48, tmp_list_element_7);
            tmp_tuple_element_162 = mod_consts[190];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_162);
            tmp_tuple_element_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_162 == NULL)) {
                tmp_tuple_element_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_114;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_162);
            goto tuple_build_noexception_114;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_114:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_114:;
            PyList_SET_ITEM(tmp_assign_source_173, 49, tmp_list_element_7);
            tmp_tuple_element_163 = mod_consts[191];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_163);
            tmp_tuple_element_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_163 == NULL)) {
                tmp_tuple_element_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto tuple_build_exception_115;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_163);
            goto tuple_build_noexception_115;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_115:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_115:;
            PyList_SET_ITEM(tmp_assign_source_173, 50, tmp_list_element_7);
            tmp_tuple_element_164 = mod_consts[192];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_164);
            tmp_tuple_element_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_164 == NULL)) {
                tmp_tuple_element_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_116;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_164);
            goto tuple_build_noexception_116;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_116:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_116:;
            PyList_SET_ITEM(tmp_assign_source_173, 51, tmp_list_element_7);
            tmp_tuple_element_165 = mod_consts[193];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_165);
            tmp_tuple_element_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_165 == NULL)) {
                tmp_tuple_element_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_117;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_165);
            goto tuple_build_noexception_117;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_117:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_117:;
            PyList_SET_ITEM(tmp_assign_source_173, 52, tmp_list_element_7);
            tmp_tuple_element_166 = mod_consts[194];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_166);
            tmp_tuple_element_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_166 == NULL)) {
                tmp_tuple_element_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_118;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_166);
            goto tuple_build_noexception_118;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_118:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_118:;
            PyList_SET_ITEM(tmp_assign_source_173, 53, tmp_list_element_7);
            tmp_tuple_element_167 = mod_consts[195];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_167);
            tmp_tuple_element_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_167 == NULL)) {
                tmp_tuple_element_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_119;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_167);
            goto tuple_build_noexception_119;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_119:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_119:;
            PyList_SET_ITEM(tmp_assign_source_173, 54, tmp_list_element_7);
            tmp_tuple_element_168 = mod_consts[196];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_58;
                PyObject *tmp_args_element_value_24;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_168);
                tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_58 == NULL)) {
                    tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_120;
                }
                tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_args_element_value_24 == NULL)) {
                    tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
                }

                if (tmp_args_element_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_120;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 261;
                tmp_tuple_element_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_24);
                if (tmp_tuple_element_168 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_120;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_168);
            }
            goto tuple_build_noexception_120;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_120:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_120:;
            PyList_SET_ITEM(tmp_assign_source_173, 55, tmp_list_element_7);
            tmp_tuple_element_169 = mod_consts[197];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_169);
            tmp_tuple_element_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_169 == NULL)) {
                tmp_tuple_element_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_121;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_169);
            goto tuple_build_noexception_121;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_121:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_121:;
            PyList_SET_ITEM(tmp_assign_source_173, 56, tmp_list_element_7);
            tmp_tuple_element_170 = mod_consts[198];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_args_element_value_25;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_170);
                tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_59 == NULL)) {
                    tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;

                    goto tuple_build_exception_122;
                }
                tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_25 == NULL)) {
                    tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;

                    goto tuple_build_exception_122;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 263;
                tmp_tuple_element_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_25);
                if (tmp_tuple_element_170 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;

                    goto tuple_build_exception_122;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_170);
            }
            goto tuple_build_noexception_122;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_122:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_122:;
            PyList_SET_ITEM(tmp_assign_source_173, 57, tmp_list_element_7);
            tmp_tuple_element_171 = mod_consts[199];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_60;
                PyObject *tmp_args_element_value_26;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_171);
                tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_60 == NULL)) {
                    tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;

                    goto tuple_build_exception_123;
                }
                tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_26 == NULL)) {
                    tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;

                    goto tuple_build_exception_123;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 264;
                tmp_tuple_element_171 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_26);
                if (tmp_tuple_element_171 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;

                    goto tuple_build_exception_123;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_171);
            }
            goto tuple_build_noexception_123;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_123:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_123:;
            PyList_SET_ITEM(tmp_assign_source_173, 58, tmp_list_element_7);
            tmp_tuple_element_172 = mod_consts[200];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_61;
                PyObject *tmp_args_element_value_27;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_172);
                tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_61 == NULL)) {
                    tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;

                    goto tuple_build_exception_124;
                }
                tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_27 == NULL)) {
                    tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;

                    goto tuple_build_exception_124;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 265;
                tmp_tuple_element_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_27);
                if (tmp_tuple_element_172 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;

                    goto tuple_build_exception_124;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_172);
            }
            goto tuple_build_noexception_124;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_124:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_124:;
            PyList_SET_ITEM(tmp_assign_source_173, 59, tmp_list_element_7);
            tmp_tuple_element_173 = mod_consts[201];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_62;
                PyObject *tmp_args_element_value_28;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_173);
                tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_62 == NULL)) {
                    tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 266;

                    goto tuple_build_exception_125;
                }
                tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_28 == NULL)) {
                    tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 266;

                    goto tuple_build_exception_125;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 266;
                tmp_tuple_element_173 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_28);
                if (tmp_tuple_element_173 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 266;

                    goto tuple_build_exception_125;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_173);
            }
            goto tuple_build_noexception_125;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_125:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_125:;
            PyList_SET_ITEM(tmp_assign_source_173, 60, tmp_list_element_7);
            tmp_tuple_element_174 = mod_consts[202];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_174);
            tmp_tuple_element_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_174 == NULL)) {
                tmp_tuple_element_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_126;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_174);
            goto tuple_build_noexception_126;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_126:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_126:;
            PyList_SET_ITEM(tmp_assign_source_173, 61, tmp_list_element_7);
            tmp_tuple_element_175 = mod_consts[144];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_175);
            tmp_tuple_element_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_175 == NULL)) {
                tmp_tuple_element_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto tuple_build_exception_127;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_175);
            goto tuple_build_noexception_127;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_127:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_127:;
            PyList_SET_ITEM(tmp_assign_source_173, 62, tmp_list_element_7);
            tmp_tuple_element_176 = mod_consts[203];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_63;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_called_value_64;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_176);
                tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_63 == NULL)) {
                    tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;

                    goto tuple_build_exception_128;
                }
                tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_29 == NULL)) {
                    tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;

                    goto tuple_build_exception_128;
                }
                tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_64 == NULL)) {
                    tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;

                    goto tuple_build_exception_128;
                }
                tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_args_element_value_31 == NULL)) {
                    tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
                }

                if (tmp_args_element_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;

                    goto tuple_build_exception_128;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 270;
                tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_31);
                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;

                    goto tuple_build_exception_128;
                }
                tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_32 == NULL)) {
                    tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_30);

                    exception_lineno = 270;

                    goto tuple_build_exception_128;
                }
                tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_33 == NULL)) {
                    tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_30);

                    exception_lineno = 270;

                    goto tuple_build_exception_128;
                }
                tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_args_element_value_34 == NULL)) {
                    tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                }

                if (tmp_args_element_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_30);

                    exception_lineno = 271;

                    goto tuple_build_exception_128;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 269;
                {
                    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
                    tmp_tuple_element_176 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_63, call_args);
                }

                Py_DECREF(tmp_args_element_value_30);
                if (tmp_tuple_element_176 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;

                    goto tuple_build_exception_128;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_176);
            }
            goto tuple_build_noexception_128;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_128:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_128:;
            PyList_SET_ITEM(tmp_assign_source_173, 63, tmp_list_element_7);
            tmp_tuple_element_177 = mod_consts[204];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_177);
            tmp_tuple_element_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_177 == NULL)) {
                tmp_tuple_element_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_tuple_element_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_129;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_177);
            goto tuple_build_noexception_129;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_129:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_129:;
            PyList_SET_ITEM(tmp_assign_source_173, 64, tmp_list_element_7);
            tmp_tuple_element_178 = mod_consts[205];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_65;
                PyObject *tmp_args_element_value_35;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_178);
                tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_65 == NULL)) {
                    tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;

                    goto tuple_build_exception_130;
                }
                tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_args_element_value_35 == NULL)) {
                    tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                }

                if (tmp_args_element_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;

                    goto tuple_build_exception_130;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 273;
                tmp_tuple_element_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_35);
                if (tmp_tuple_element_178 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;

                    goto tuple_build_exception_130;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_178);
            }
            goto tuple_build_noexception_130;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_130:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_130:;
            PyList_SET_ITEM(tmp_assign_source_173, 65, tmp_list_element_7);
            tmp_tuple_element_179 = mod_consts[206];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_179);
            tmp_tuple_element_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_179 == NULL)) {
                tmp_tuple_element_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto tuple_build_exception_131;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_179);
            goto tuple_build_noexception_131;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_131:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_131:;
            PyList_SET_ITEM(tmp_assign_source_173, 66, tmp_list_element_7);
            tmp_tuple_element_180 = mod_consts[207];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_180);
            tmp_tuple_element_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_180 == NULL)) {
                tmp_tuple_element_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_180 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto tuple_build_exception_132;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_180);
            goto tuple_build_noexception_132;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_132:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_132:;
            PyList_SET_ITEM(tmp_assign_source_173, 67, tmp_list_element_7);
            tmp_tuple_element_181 = mod_consts[208];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_66;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_called_value_67;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_called_value_68;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_called_value_69;
                PyObject *tmp_args_element_value_41;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_called_value_70;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_called_value_71;
                PyObject *tmp_args_element_value_46;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_181);
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 276;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_36 == NULL)) {
                    tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 276;

                    goto tuple_build_exception_133;
                }
                tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_67 == NULL)) {
                    tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_args_element_value_38 == NULL)) {
                    tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
                }

                if (tmp_args_element_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 277;
                tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_38);
                if (tmp_args_element_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;

                    goto tuple_build_exception_133;
                }
                tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_68 == NULL)) {
                    tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);

                    exception_lineno = 278;

                    goto tuple_build_exception_133;
                }
                tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_69 == NULL)) {
                    tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);

                    exception_lineno = 278;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_args_element_value_41 == NULL)) {
                    tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_args_element_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);

                    exception_lineno = 278;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 278;
                tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_41);
                if (tmp_args_element_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);

                    exception_lineno = 278;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 278;
                tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_args_element_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);

                    exception_lineno = 278;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_args_element_value_42 == NULL)) {
                    tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_args_element_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 279;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_43 == NULL)) {
                    tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 279;

                    goto tuple_build_exception_133;
                }
                tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_70 == NULL)) {
                    tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 280;

                    goto tuple_build_exception_133;
                }
                tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_71 == NULL)) {
                    tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 280;

                    goto tuple_build_exception_133;
                }
                tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_args_element_value_46 == NULL)) {
                    tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
                }

                if (tmp_args_element_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 280;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 280;
                tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_46);
                if (tmp_args_element_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 280;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 280;
                tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_args_element_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_37);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 280;

                    goto tuple_build_exception_133;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 276;
                {
                    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_39, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
                    tmp_tuple_element_181 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_66, call_args);
                }

                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_44);
                if (tmp_tuple_element_181 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 276;

                    goto tuple_build_exception_133;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_181);
            }
            goto tuple_build_noexception_133;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_133:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_133:;
            PyList_SET_ITEM(tmp_assign_source_173, 68, tmp_list_element_7);
            tmp_tuple_element_182 = mod_consts[209];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_72;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_args_element_value_48;
                PyObject *tmp_called_value_73;
                PyObject *tmp_args_element_value_49;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_called_value_74;
                PyObject *tmp_args_element_value_51;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_182);
                tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_72 == NULL)) {
                    tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;

                    goto tuple_build_exception_134;
                }
                tmp_args_element_value_47 = Py_None;
                tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_73 == NULL)) {
                    tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_args_element_value_49 == NULL)) {
                    tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
                }

                if (tmp_args_element_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 282;
                tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_49);
                if (tmp_args_element_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_74 == NULL)) {
                    tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_48);

                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_args_element_value_51 == NULL)) {
                    tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_args_element_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_48);

                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 282;
                tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_51);
                if (tmp_args_element_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_48);

                    exception_lineno = 282;

                    goto tuple_build_exception_134;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 281;
                {
                    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_50};
                    tmp_tuple_element_182 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_72, call_args);
                }

                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_50);
                if (tmp_tuple_element_182 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;

                    goto tuple_build_exception_134;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_182);
            }
            goto tuple_build_noexception_134;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_134:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_134:;
            PyList_SET_ITEM(tmp_assign_source_173, 69, tmp_list_element_7);
            tmp_tuple_element_183 = mod_consts[210];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_183);
            tmp_tuple_element_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_183 == NULL)) {
                tmp_tuple_element_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto tuple_build_exception_135;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_183);
            goto tuple_build_noexception_135;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_135:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_135:;
            PyList_SET_ITEM(tmp_assign_source_173, 70, tmp_list_element_7);
            tmp_tuple_element_184 = mod_consts[211];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_184);
            tmp_tuple_element_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_184 == NULL)) {
                tmp_tuple_element_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_184 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_136;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_184);
            goto tuple_build_noexception_136;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_136:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_136:;
            PyList_SET_ITEM(tmp_assign_source_173, 71, tmp_list_element_7);
            tmp_tuple_element_185 = mod_consts[212];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_185);
            tmp_tuple_element_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_185 == NULL)) {
                tmp_tuple_element_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_185 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto tuple_build_exception_137;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_185);
            goto tuple_build_noexception_137;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_137:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_137:;
            PyList_SET_ITEM(tmp_assign_source_173, 72, tmp_list_element_7);
            tmp_tuple_element_186 = mod_consts[213];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_186);
            tmp_tuple_element_186 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_186 == NULL)) {
                tmp_tuple_element_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_138;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_186);
            goto tuple_build_noexception_138;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_138:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_138:;
            PyList_SET_ITEM(tmp_assign_source_173, 73, tmp_list_element_7);
            tmp_tuple_element_187 = mod_consts[214];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_75;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_called_value_76;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_called_value_77;
                PyObject *tmp_args_element_value_56;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_187);
                tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_75 == NULL)) {
                    tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_52 == NULL)) {
                    tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_76 == NULL)) {
                    tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_args_element_value_54 == NULL)) {
                    tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
                }

                if (tmp_args_element_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 287;
                tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_54);
                if (tmp_args_element_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_77 == NULL)) {
                    tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_args_element_value_56 == NULL)) {
                    tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_args_element_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 287;
                tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_56);
                if (tmp_args_element_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 287;
                {
                    PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_55};
                    tmp_tuple_element_187 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_75, call_args);
                }

                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_55);
                if (tmp_tuple_element_187 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_139;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_187);
            }
            goto tuple_build_noexception_139;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_139:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_139:;
            PyList_SET_ITEM(tmp_assign_source_173, 74, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assign_source_173);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_173);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_188;
        PyObject *tmp_kwargs_value_35;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[134]);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_188 = mod_consts[40];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_188);
        tmp_tuple_element_188 = mod_consts[135];
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_188);
        tmp_tuple_element_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_tuple_element_188 == NULL)) {
            tmp_tuple_element_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_tuple_element_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto tuple_build_exception_140;
        }
        PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_188);
        tmp_tuple_element_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_tuple_element_188 == NULL)) {
            tmp_tuple_element_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        if (tmp_tuple_element_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto tuple_build_exception_140;
        }
        PyTuple_SET_ITEM0(tmp_args_value_35, 3, tmp_tuple_element_188);
        goto tuple_build_noexception_140;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_140:;
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_35);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_140:;
        tmp_kwargs_value_35 = DICT_COPY(mod_consts[216]);
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 290;
        tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_35);
        Py_DECREF(tmp_kwargs_value_35);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_value_36;
        PyObject *tmp_tuple_element_189;
        PyObject *tmp_kwargs_value_36;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[134]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_189 = mod_consts[40];
        tmp_args_value_36 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_189);
        tmp_tuple_element_189 = mod_consts[137];
        PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_189);
        tmp_tuple_element_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_tuple_element_189 == NULL)) {
            tmp_tuple_element_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_tuple_element_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto tuple_build_exception_141;
        }
        PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_189);
        tmp_tuple_element_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_tuple_element_189 == NULL)) {
            tmp_tuple_element_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        if (tmp_tuple_element_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto tuple_build_exception_141;
        }
        PyTuple_SET_ITEM0(tmp_args_value_36, 3, tmp_tuple_element_189);
        goto tuple_build_noexception_141;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_141:;
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_141:;
        tmp_kwargs_value_36 = DICT_COPY(mod_consts[217]);
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 293;
        tmp_call_result_5 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_36, tmp_kwargs_value_36);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_value_36);
        Py_DECREF(tmp_kwargs_value_36);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_115;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[218]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[42], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_116;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_5, 0, tmp_list_element_8);
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[218]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[219], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_117;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[220]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[42], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_118;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_58 == NULL)) {
            tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 301;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_58);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 301;
        tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_element_value_61;
            PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM0(tmp_assattr_value_7, 1, tmp_list_element_9);
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_7;
            }
            tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_args_element_value_59 == NULL)) {
                tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_args_element_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_7;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 303;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_59);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_7, 2, tmp_list_element_9);
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_7;
            }
            tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_84 == NULL)) {
                tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_7;
            }
            tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_args_element_value_61 == NULL)) {
                tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_args_element_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_7;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 304;
            tmp_args_element_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_61);
            if (tmp_args_element_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_7;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 304;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_7, 3, tmp_list_element_9);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[220]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[219], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_119;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[221]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[42], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_120;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_62 == NULL)) {
            tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 307;
        tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_62);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_64;
            PyList_SET_ITEM(tmp_assattr_value_9, 0, tmp_list_element_10);
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto list_build_exception_8;
            }
            tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_87 == NULL)) {
                tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto list_build_exception_8;
            }
            tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_args_element_value_64 == NULL)) {
                tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_args_element_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto list_build_exception_8;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 308;
            tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_64);
            if (tmp_args_element_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto list_build_exception_8;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 308;
            tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_9, 1, tmp_list_element_10);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[221]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[219], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_121;
        tmp_assattr_value_10 = Py_None;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[222]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[42], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_122;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 311;
        tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_66);
        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 311;
        tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_11, 0, tmp_list_element_11);
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[222]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[219], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_123;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[223]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[42], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_12;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_124;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_67 == NULL)) {
            tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 313;
        tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_67);
        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_68;
            PyList_SET_ITEM(tmp_assattr_value_13, 0, tmp_list_element_12);
            tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_91 == NULL)) {
                tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto list_build_exception_9;
            }
            tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_args_element_value_68 == NULL)) {
                tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_args_element_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto list_build_exception_9;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 314;
            tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_68);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 1, tmp_list_element_12);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[223]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[219], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_125;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[224]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[42], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_13;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_126;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_69 == NULL)) {
            tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 316;
        tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_69);
        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM(tmp_assattr_value_15, 0, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 1, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 2, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 3, tmp_list_element_13);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[224]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[219], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_127;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[225]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[42], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_128;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_70 == NULL)) {
            tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 319;
        tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_70);
        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(6);
        PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 1, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 2, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 3, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 4, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 5, tmp_list_element_14);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[225]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[219], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_129;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[226]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[42], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_130;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_71 == NULL)) {
            tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 322;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_71);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_element_value_73;
            PyList_SET_ITEM(tmp_assattr_value_19, 0, tmp_list_element_15);
            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_95 == NULL)) {
                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_args_element_value_72 == NULL)) {
                tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_args_element_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 323;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_72);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_19, 1, tmp_list_element_15);
            tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_96 == NULL)) {
                tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_args_element_value_73 == NULL)) {
                tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_args_element_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 323;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_73);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_19, 2, tmp_list_element_15);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[226]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[219], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_74 == NULL)) {
            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_args_element_value_77 == NULL)) {
            tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 325;
        tmp_args_element_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_77);
        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_78 == NULL)) {
            tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_76);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_78};
            tmp_assign_source_174 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_97, call_args);
        }

        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_100;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_80 == NULL)) {
            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_args_element_value_82 == NULL)) {
            tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 326;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_82);
        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_81);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_83};
            tmp_assign_source_175 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_99, call_args);
        }

        Py_DECREF(tmp_args_element_value_81);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_84 == NULL)) {
            tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_101, call_args);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_131;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_args_element_value_88 == NULL)) {
            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 329;
        tmp_assattr_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_88);
        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[230]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[42], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_list_element_16;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_132;
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_21 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_assattr_value_21, 0, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 1, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 2, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 3, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[227]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 4, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 5, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_21, 6, tmp_list_element_16);
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[230]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[219], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_133;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 332;
        tmp_assattr_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_89);
        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[231]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[42], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_134;
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[231]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[219], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_135;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[232]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[42], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_136;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_90 == NULL)) {
            tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_1ad76f12a9be6a537a70ba120759896e->m_frame.f_lineno = 336;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_90);
        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_25, 0, tmp_list_element_17);
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[232]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[219], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ad76f12a9be6a537a70ba120759896e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ad76f12a9be6a537a70ba120759896e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ad76f12a9be6a537a70ba120759896e, exception_lineno);
    }



    assertFrameObject(frame_1ad76f12a9be6a537a70ba120759896e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = MAKE_LIST6(mod_consts[233]);
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_177);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.codecs.ffmpeg_lib.libavformat", false);

    Py_INCREF(module_pyglet$media$codecs$ffmpeg_lib$libavformat);
    return module_pyglet$media$codecs$ffmpeg_lib$libavformat;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavformat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$codecs$ffmpeg_lib$libavformat", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
