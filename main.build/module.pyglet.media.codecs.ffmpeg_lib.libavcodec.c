/* Generated code for Python module 'pyglet.media.codecs.ffmpeg_lib.libavcodec'
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

/* The "module_pyglet$media$codecs$ffmpeg_lib$libavcodec" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$codecs$ffmpeg_lib$libavcodec;
PyDictObject *moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[328];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[328];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.codecs.ffmpeg_lib.libavcodec"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 328; i++) {
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
void checkModuleConstants_pyglet$media$codecs$ffmpeg_lib$libavcodec(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 328; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bed2d3ee8c27ff13b57eb52a918f9e45;
static PyCodeObject *codeobj_b068a643c3e516c93fcb0071bbd3c19c;
static PyCodeObject *codeobj_2e5d74d4d2a720fa6a6930299df67797;
static PyCodeObject *codeobj_754072668421666825043f69b636ed3e;
static PyCodeObject *codeobj_682fc55478e642620585f3ed4c3abf0d;
static PyCodeObject *codeobj_1c60ebeddca7a72994cde22f9e51bbaf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[325]); CHECK_OBJECT(module_filename_obj);
    codeobj_bed2d3ee8c27ff13b57eb52a918f9e45 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[326], mod_consts[326], NULL, NULL, 0, 0, 0);
    codeobj_b068a643c3e516c93fcb0071bbd3c19c = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[327], NULL, 0, 0, 0);
    codeobj_2e5d74d4d2a720fa6a6930299df67797 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[327], NULL, 0, 0, 0);
    codeobj_754072668421666825043f69b636ed3e = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[327], NULL, 0, 0, 0);
    codeobj_682fc55478e642620585f3ed4c3abf0d = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[327], NULL, 0, 0, 0);
    codeobj_1c60ebeddca7a72994cde22f9e51bbaf = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[327], NULL, 0, 0, 0);
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

function_impl_code functable_pyglet$media$codecs$ffmpeg_lib$libavcodec[] = {

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

    function_impl_code *current = functable_pyglet$media$codecs$ffmpeg_lib$libavcodec;
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

    if (offset > sizeof(functable_pyglet$media$codecs$ffmpeg_lib$libavcodec) || offset < 0) {
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
        functable_pyglet$media$codecs$ffmpeg_lib$libavcodec[offset],
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
        module_pyglet$media$codecs$ffmpeg_lib$libavcodec,
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
PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavcodec(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.codecs.ffmpeg_lib.libavcodec");

    // Store the module for future use.
    module_pyglet$media$codecs$ffmpeg_lib$libavcodec = module;

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
        PRINT_STRING("pyglet.media.codecs.ffmpeg_lib.libavcodec: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.codecs.ffmpeg_lib.libavcodec: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$codecs$ffmpeg_lib$libavcodec\n");

    moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec = MODULE_DICT(module_pyglet$media$codecs$ffmpeg_lib$libavcodec);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[26]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$codecs$ffmpeg_lib$libavcodec);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$codecs$ffmpeg_lib$libavcodec);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_bed2d3ee8c27ff13b57eb52a918f9e45;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_682fc55478e642620585f3ed4c3abf0d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110 = NULL;
    struct Nuitka_FrameObject *frame_754072668421666825043f69b636ed3e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144 = NULL;
    struct Nuitka_FrameObject *frame_1c60ebeddca7a72994cde22f9e51bbaf_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151 = NULL;
    struct Nuitka_FrameObject *frame_2e5d74d4d2a720fa6a6930299df67797_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167 = NULL;
    struct Nuitka_FrameObject *frame_b068a643c3e516c93fcb0071bbd3c19c_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_bed2d3ee8c27ff13b57eb52a918f9e45 = MAKE_MODULE_FRAME(codeobj_bed2d3ee8c27ff13b57eb52a918f9e45, module_pyglet$media$codecs$ffmpeg_lib$libavcodec);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bed2d3ee8c27ff13b57eb52a918f9e45);
    assert(Py_REFCNT(frame_bed2d3ee8c27ff13b57eb52a918f9e45) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[7],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[7]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[10],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[11],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[11]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[12],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[12]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[13]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_11);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[14]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_12);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[15],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[15]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_13);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[16],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[16]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_14);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[17],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[17]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_16);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[18],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[18]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_17);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[19],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[19]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_18);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
                mod_consts[20],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[20]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_19);
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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 43;
        tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_20);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[24];
        tmp_level_value_2 = mod_consts[8];
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 44;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
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


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_21);
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
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[27];
        tmp_level_value_3 = mod_consts[28];
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 45;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
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


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_22);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[30];
        tmp_level_value_4 = mod_consts[28];
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 46;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec,
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


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 48;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[32]);

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[34]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 50;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[37]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[39]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[40], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[38];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 58;
        tmp_rshift_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[39]);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[42];
        tmp_args_element_value_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
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


            exception_lineno = 64;

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


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[45]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[46];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 64;
        tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

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
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[49];
        tmp_default_value_1 = mod_consts[50];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[49]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

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


            exception_lineno = 64;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 64;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        frame_682fc55478e642620585f3ed4c3abf0d_2 = MAKE_CLASS_FRAME(tstate, codeobj_682fc55478e642620585f3ed4c3abf0d, module_pyglet$media$codecs$ffmpeg_lib$libavcodec, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_682fc55478e642620585f3ed4c3abf0d_2);
        assert(Py_REFCNT(frame_682fc55478e642620585f3ed4c3abf0d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[54];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_args_element_value_3;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_called_value_5 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[18]);

                if (tmp_called_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_called_value_5 == NULL)) {
                            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_called_value_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_args_element_value_3 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[13]);

                if (tmp_args_element_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_args_element_value_3 == NULL)) {
                            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                        }

                        if (tmp_args_element_value_3 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_5);

                            exception_lineno = 66;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_3);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_682fc55478e642620585f3ed4c3abf0d_2->m_frame.f_lineno = 66;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[55];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[7]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[56];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[7]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_682fc55478e642620585f3ed4c3abf0d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_682fc55478e642620585f3ed4c3abf0d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_682fc55478e642620585f3ed4c3abf0d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_682fc55478e642620585f3ed4c3abf0d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_682fc55478e642620585f3ed4c3abf0d_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
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


                exception_lineno = 64;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[46];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 64;
            tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__1_AVPacketSideData_64 = NULL;
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
        exception_lineno = 64;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_33);
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
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[59]);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[60]);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_36);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

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
        tmp_expression_value_13 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[45]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        tmp_tuple_element_9 = mod_consts[61];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_9 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 77;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_16 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

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
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_name_value_6 = mod_consts[49];
        tmp_default_value_2 = mod_consts[50];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_6, tmp_default_value_2);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[49]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 77;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_42;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_9;
        }
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


                exception_lineno = 77;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[61];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 77;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_43 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__2_AVPacket_77 = NULL;
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
        exception_lineno = 77;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_43);
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
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = mod_consts[62];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_4;
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_args_element_value_4 == NULL)) {
                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_6;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 81;
            tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_45 = MAKE_LIST_EMPTY(15);
        {
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyList_SET_ITEM(tmp_assign_source_45, 0, tmp_list_element_2);
            tmp_tuple_element_13 = mod_consts[63];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyList_SET_ITEM(tmp_assign_source_45, 1, tmp_list_element_2);
            tmp_tuple_element_14 = mod_consts[64];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyList_SET_ITEM(tmp_assign_source_45, 2, tmp_list_element_2);
            tmp_tuple_element_15 = mod_consts[54];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_5;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_10 == NULL)) {
                    tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_9;
                }
                tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_args_element_value_5 == NULL)) {
                    tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_args_element_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_9;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 84;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            PyList_SET_ITEM(tmp_assign_source_45, 3, tmp_list_element_2);
            tmp_tuple_element_16 = mod_consts[55];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_16);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyList_SET_ITEM(tmp_assign_source_45, 4, tmp_list_element_2);
            tmp_tuple_element_17 = mod_consts[65];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            PyList_SET_ITEM(tmp_assign_source_45, 5, tmp_list_element_2);
            tmp_tuple_element_18 = mod_consts[66];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            PyList_SET_ITEM(tmp_assign_source_45, 6, tmp_list_element_2);
            tmp_tuple_element_19 = mod_consts[67];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_19);
                tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_11 == NULL)) {
                    tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;

                    goto tuple_build_exception_13;
                }
                tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[46]);

                if (unlikely(tmp_args_element_value_6 == NULL)) {
                    tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
                }

                if (tmp_args_element_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;

                    goto tuple_build_exception_13;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 88;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyList_SET_ITEM(tmp_assign_source_45, 7, tmp_list_element_2);
            tmp_tuple_element_20 = mod_consts[68];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            PyList_SET_ITEM(tmp_assign_source_45, 8, tmp_list_element_2);
            tmp_tuple_element_21 = mod_consts[69];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            PyList_SET_ITEM(tmp_assign_source_45, 9, tmp_list_element_2);
            tmp_tuple_element_22 = mod_consts[70];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            PyList_SET_ITEM(tmp_assign_source_45, 10, tmp_list_element_2);
            tmp_tuple_element_23 = mod_consts[71];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_23);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            PyList_SET_ITEM(tmp_assign_source_45, 11, tmp_list_element_2);
            tmp_tuple_element_24 = mod_consts[72];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_24);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            PyList_SET_ITEM(tmp_assign_source_45, 12, tmp_list_element_2);
            tmp_tuple_element_25 = mod_consts[73];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_25);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            PyList_SET_ITEM(tmp_assign_source_45, 13, tmp_list_element_2);
            tmp_tuple_element_26 = mod_consts[74];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            PyList_SET_ITEM(tmp_assign_source_45, 14, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_45);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_45);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_kwargs_value_5;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[76]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = mod_consts[38];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = mod_consts[77];
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto tuple_build_exception_21;
        }
        PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto tuple_build_exception_21;
        }
        PyTuple_SET_ITEM0(tmp_args_value_5, 3, tmp_tuple_element_27);
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_kwargs_value_5 = DICT_COPY(mod_consts[78]);
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 99;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_6;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[76]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = mod_consts[38];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_28);
        tmp_tuple_element_28 = mod_consts[79];
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_args_value_6, 3, tmp_tuple_element_28);
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_kwargs_value_6 = DICT_COPY(mod_consts[80]);
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 102;
        tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_47 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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
        tmp_expression_value_21 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_22 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_23 = tmp_class_creation_3__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[45]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        tmp_tuple_element_30 = mod_consts[81];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_30 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_3__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 106;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_24 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_25 = tmp_class_creation_3__metaclass;
        tmp_name_value_7 = mod_consts[49];
        tmp_default_value_3 = mod_consts[50];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_7, tmp_default_value_3);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[49]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 106;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_51;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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


                exception_lineno = 106;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_15 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_32 = mod_consts[81];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_32 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_3__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 106;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_52 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__3_AVCodecParserContext_106 = NULL;
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
        exception_lineno = 106;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_52);
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
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_33;
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_33);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_55 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

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
        tmp_expression_value_27 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[8];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_28 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

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
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_29 = tmp_class_creation_4__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[45]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        tmp_tuple_element_34 = mod_consts[82];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_34 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_4__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 110;
        tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_30 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

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
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_31 = tmp_class_creation_4__metaclass;
        tmp_name_value_8 = mod_consts[49];
        tmp_default_value_4 = mod_consts[50];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_8, tmp_default_value_4);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[49]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 110;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_59;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        frame_754072668421666825043f69b636ed3e_3 = MAKE_CLASS_FRAME(tstate, codeobj_754072668421666825043f69b636ed3e, module_pyglet$media$codecs$ffmpeg_lib$libavcodec, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_754072668421666825043f69b636ed3e_3);
        assert(Py_REFCNT(frame_754072668421666825043f69b636ed3e_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_36;
            tmp_tuple_element_36 = mod_consts[83];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

            if (tmp_tuple_element_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_tuple_element_36 == NULL)) {
                        tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    Py_INCREF(tmp_tuple_element_36);
                } else {
                    goto tuple_build_exception_25;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_dictset_value = MAKE_LIST_EMPTY(29);
            {
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_tuple_element_48;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_tuple_element_50;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_tuple_element_54;
                PyObject *tmp_tuple_element_55;
                PyObject *tmp_tuple_element_56;
                PyObject *tmp_tuple_element_57;
                PyObject *tmp_tuple_element_58;
                PyObject *tmp_tuple_element_59;
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_tuple_element_64;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_37 = mod_consts[84];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_37 == NULL)) {
                            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_tuple_element_37);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_37);
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_38 = mod_consts[85];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[11]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[11]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto tuple_build_exception_27;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_27;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_39 = mod_consts[86];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_args_element_value_7;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_39);
                    tmp_called_value_17 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[18]);

                    if (tmp_called_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_17 == NULL)) {
                                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 115;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_called_value_17);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_args_element_value_7 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[13]);

                    if (tmp_args_element_value_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                            if (unlikely(tmp_args_element_value_7 == NULL)) {
                                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                            }

                            if (tmp_args_element_value_7 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);

                                exception_lineno = 115;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_args_element_value_7);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    frame_754072668421666825043f69b636ed3e_3->m_frame.f_lineno = 115;
                    tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_7);
                    Py_DECREF(tmp_called_value_17);
                    Py_DECREF(tmp_args_element_value_7);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_40 = mod_consts[87];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_40);
                tmp_tuple_element_40 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_40 == NULL)) {
                            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto tuple_build_exception_29;
                        }
                        Py_INCREF(tmp_tuple_element_40);
                    } else {
                        goto tuple_build_exception_29;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_40);
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_41 = mod_consts[88];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_41);
                tmp_tuple_element_41 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_41 == NULL)) {
                            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "o";
                            goto tuple_build_exception_30;
                        }
                        Py_INCREF(tmp_tuple_element_41);
                    } else {
                        goto tuple_build_exception_30;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_41);
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_42 = mod_consts[89];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_42);
                tmp_tuple_element_42 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[10]);

                if (tmp_tuple_element_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_tuple_element_42 == NULL)) {
                            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                        }

                        if (tmp_tuple_element_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "o";
                            goto tuple_build_exception_31;
                        }
                        Py_INCREF(tmp_tuple_element_42);
                    } else {
                        goto tuple_build_exception_31;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_42);
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_43 = mod_consts[90];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
                tmp_tuple_element_43 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_43 == NULL)) {
                            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto tuple_build_exception_32;
                        }
                        Py_INCREF(tmp_tuple_element_43);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[91];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                tmp_tuple_element_44 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_44 == NULL)) {
                            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_tuple_element_44);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[92];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                tmp_tuple_element_45 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_45 == NULL)) {
                            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_tuple_element_45);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_3);
                tmp_tuple_element_46 = mod_consts[93];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_46);
                tmp_tuple_element_46 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_46 == NULL)) {
                            tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto tuple_build_exception_35;
                        }
                        Py_INCREF(tmp_tuple_element_46);
                    } else {
                        goto tuple_build_exception_35;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_46);
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_3);
                tmp_tuple_element_47 = mod_consts[94];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_47);
                tmp_tuple_element_47 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_47 == NULL)) {
                            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_47 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto tuple_build_exception_36;
                        }
                        Py_INCREF(tmp_tuple_element_47);
                    } else {
                        goto tuple_build_exception_36;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_47);
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_3);
                tmp_tuple_element_48 = mod_consts[95];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_48);
                tmp_tuple_element_48 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_48 == NULL)) {
                            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto tuple_build_exception_37;
                        }
                        Py_INCREF(tmp_tuple_element_48);
                    } else {
                        goto tuple_build_exception_37;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_48);
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_3);
                tmp_tuple_element_49 = mod_consts[96];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_49);
                tmp_tuple_element_49 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[60]);

                if (tmp_tuple_element_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_tuple_element_49 == NULL)) {
                            tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_tuple_element_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto tuple_build_exception_38;
                        }
                        Py_INCREF(tmp_tuple_element_49);
                    } else {
                        goto tuple_build_exception_38;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_49);
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_3);
                tmp_tuple_element_50 = mod_consts[97];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_50);
                tmp_tuple_element_50 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_50 == NULL)) {
                            tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "o";
                            goto tuple_build_exception_39;
                        }
                        Py_INCREF(tmp_tuple_element_50);
                    } else {
                        goto tuple_build_exception_39;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_50);
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_3);
                tmp_tuple_element_51 = mod_consts[98];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_51);
                tmp_tuple_element_51 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_51 == NULL)) {
                            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto tuple_build_exception_40;
                        }
                        Py_INCREF(tmp_tuple_element_51);
                    } else {
                        goto tuple_build_exception_40;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_51);
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_3);
                tmp_tuple_element_52 = mod_consts[99];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_52);
                tmp_tuple_element_52 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_52 == NULL)) {
                            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 128;
                            type_description_2 = "o";
                            goto tuple_build_exception_41;
                        }
                        Py_INCREF(tmp_tuple_element_52);
                    } else {
                        goto tuple_build_exception_41;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_52);
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_3);
                tmp_tuple_element_53 = mod_consts[100];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_53);
                tmp_tuple_element_53 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_53 == NULL)) {
                            tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 129;
                            type_description_2 = "o";
                            goto tuple_build_exception_42;
                        }
                        Py_INCREF(tmp_tuple_element_53);
                    } else {
                        goto tuple_build_exception_42;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_53);
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_3);
                tmp_tuple_element_54 = mod_consts[101];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_54);
                tmp_tuple_element_54 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_54 == NULL)) {
                            tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto tuple_build_exception_43;
                        }
                        Py_INCREF(tmp_tuple_element_54);
                    } else {
                        goto tuple_build_exception_43;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_54);
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_3);
                tmp_tuple_element_55 = mod_consts[102];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_55);
                tmp_tuple_element_55 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_55 == NULL)) {
                            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto tuple_build_exception_44;
                        }
                        Py_INCREF(tmp_tuple_element_55);
                    } else {
                        goto tuple_build_exception_44;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_55);
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_3);
                tmp_tuple_element_56 = mod_consts[103];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_56);
                tmp_tuple_element_56 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_56 == NULL)) {
                            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto tuple_build_exception_45;
                        }
                        Py_INCREF(tmp_tuple_element_56);
                    } else {
                        goto tuple_build_exception_45;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_56);
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_3);
                tmp_tuple_element_57 = mod_consts[104];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_57);
                tmp_tuple_element_57 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[12]);

                if (tmp_tuple_element_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_tuple_element_57 == NULL)) {
                            tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                        }

                        if (tmp_tuple_element_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_57);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_57);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_3);
                tmp_tuple_element_58 = mod_consts[105];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_58);
                tmp_tuple_element_58 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_58 == NULL)) {
                            tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 134;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_tuple_element_58);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_58);
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_3);
                tmp_tuple_element_59 = mod_consts[106];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_59);
                tmp_tuple_element_59 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_59 == NULL)) {
                            tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_59);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_59);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_3);
                tmp_tuple_element_60 = mod_consts[107];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_60);
                tmp_tuple_element_60 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_60 == NULL)) {
                            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_60);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_60);
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(tmp_dictset_value, 24, tmp_list_element_3);
                tmp_tuple_element_61 = mod_consts[108];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto tuple_build_exception_50;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_50;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyList_SET_ITEM(tmp_dictset_value, 25, tmp_list_element_3);
                tmp_tuple_element_62 = mod_consts[109];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_62);
                tmp_tuple_element_62 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_62 == NULL)) {
                            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto tuple_build_exception_51;
                        }
                        Py_INCREF(tmp_tuple_element_62);
                    } else {
                        goto tuple_build_exception_51;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_62);
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyList_SET_ITEM(tmp_dictset_value, 26, tmp_list_element_3);
                tmp_tuple_element_63 = mod_consts[110];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_63);
                tmp_tuple_element_63 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_63 == NULL)) {
                            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_tuple_element_63);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_63);
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyList_SET_ITEM(tmp_dictset_value, 27, tmp_list_element_3);
                tmp_tuple_element_64 = mod_consts[111];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_64);
                tmp_tuple_element_64 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[7]);

                if (tmp_tuple_element_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_64 == NULL)) {
                            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_64 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto tuple_build_exception_53;
                        }
                        Py_INCREF(tmp_tuple_element_64);
                    } else {
                        goto tuple_build_exception_53;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_64);
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_53:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                PyList_SET_ITEM(tmp_dictset_value, 28, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_754072668421666825043f69b636ed3e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_754072668421666825043f69b636ed3e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_754072668421666825043f69b636ed3e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_754072668421666825043f69b636ed3e_3,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_754072668421666825043f69b636ed3e_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_15;
        skip_nested_handling_2:;
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


                exception_lineno = 110;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_18 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_65 = mod_consts[82];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_65 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_4__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 110;
            tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_60 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__4_AVCodecParameters_110 = NULL;
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
        exception_lineno = 110;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_60);
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
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_66;
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_66 == NULL)) {
            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        tmp_assign_source_62 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_62, 0, tmp_tuple_element_66);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_63 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

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
        tmp_expression_value_33 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_34 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

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
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_35 = tmp_class_creation_5__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[45]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        tmp_tuple_element_67 = mod_consts[112];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_67 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_5__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 144;
        tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_36 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

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
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_37 = tmp_class_creation_5__metaclass;
        tmp_name_value_9 = mod_consts[49];
        tmp_default_value_5 = mod_consts[50];
        tmp_tuple_element_68 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_9, tmp_default_value_5);
        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_68);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[49]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 144;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_67;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_18;
        }
        frame_1c60ebeddca7a72994cde22f9e51bbaf_4 = MAKE_CLASS_FRAME(tstate, codeobj_1c60ebeddca7a72994cde22f9e51bbaf, module_pyglet$media$codecs$ffmpeg_lib$libavcodec, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1c60ebeddca7a72994cde22f9e51bbaf_4);
        assert(Py_REFCNT(frame_1c60ebeddca7a72994cde22f9e51bbaf_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_69;
            tmp_tuple_element_69 = mod_consts[92];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[7]);

            if (tmp_tuple_element_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_tuple_element_69 == NULL)) {
                        tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    if (tmp_tuple_element_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto tuple_build_exception_55;
                    }
                    Py_INCREF(tmp_tuple_element_69);
                } else {
                    goto tuple_build_exception_55;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_70;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_70 = mod_consts[113];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_70);
                tmp_tuple_element_70 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[16]);

                if (tmp_tuple_element_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_70 == NULL)) {
                            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto tuple_build_exception_56;
                        }
                        Py_INCREF(tmp_tuple_element_70);
                    } else {
                        goto tuple_build_exception_56;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_70);
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_56:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1c60ebeddca7a72994cde22f9e51bbaf_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1c60ebeddca7a72994cde22f9e51bbaf_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1c60ebeddca7a72994cde22f9e51bbaf_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1c60ebeddca7a72994cde22f9e51bbaf_4,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_1c60ebeddca7a72994cde22f9e51bbaf_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_18;
        skip_nested_handling_3:;
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


                exception_lineno = 144;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_20 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_71 = mod_consts[112];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_71 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_5__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 144;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_68 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__5_AVProfile_144 = NULL;
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
        exception_lineno = 144;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_68);
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
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        tmp_assign_source_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_71 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

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
        tmp_expression_value_39 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[8];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_40 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

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
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_41 = tmp_class_creation_6__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[45]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        tmp_tuple_element_73 = mod_consts[114];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_73 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_6__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 151;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_42 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

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
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_43 = tmp_class_creation_6__metaclass;
        tmp_name_value_10 = mod_consts[49];
        tmp_default_value_6 = mod_consts[50];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_43, tmp_name_value_10, tmp_default_value_6);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_44 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[49]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 151;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_75;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_21;
        }
        frame_2e5d74d4d2a720fa6a6930299df67797_5 = MAKE_CLASS_FRAME(tstate, codeobj_2e5d74d4d2a720fa6a6930299df67797, module_pyglet$media$codecs$ffmpeg_lib$libavcodec, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2e5d74d4d2a720fa6a6930299df67797_5);
        assert(Py_REFCNT(frame_2e5d74d4d2a720fa6a6930299df67797_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_75;
            tmp_tuple_element_75 = mod_consts[115];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[7]);

            if (tmp_tuple_element_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_tuple_element_75 == NULL)) {
                        tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    if (tmp_tuple_element_75 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto tuple_build_exception_58;
                    }
                    Py_INCREF(tmp_tuple_element_75);
                } else {
                    goto tuple_build_exception_58;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_75);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            tmp_dictset_value = MAKE_LIST_EMPTY(7);
            {
                PyObject *tmp_tuple_element_76;
                PyObject *tmp_tuple_element_77;
                PyObject *tmp_tuple_element_78;
                PyObject *tmp_tuple_element_79;
                PyObject *tmp_tuple_element_80;
                PyObject *tmp_tuple_element_81;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_76 = mod_consts[56];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_76);
                tmp_tuple_element_76 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[7]);

                if (tmp_tuple_element_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_76 == NULL)) {
                            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_tuple_element_76);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_76);
                goto tuple_build_noexception_59;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_59:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_77 = mod_consts[113];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_77);
                tmp_tuple_element_77 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[16]);

                if (tmp_tuple_element_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_77 == NULL)) {
                            tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_tuple_element_77);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_77);
                goto tuple_build_noexception_60;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_60:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_60:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_78 = mod_consts[116];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_78);
                tmp_tuple_element_78 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[16]);

                if (tmp_tuple_element_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_78 == NULL)) {
                            tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_61;
                        }
                        Py_INCREF(tmp_tuple_element_78);
                    } else {
                        goto tuple_build_exception_61;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_78);
                goto tuple_build_noexception_61;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_61:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_61:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
                tmp_tuple_element_79 = mod_consts[117];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_79);
                tmp_tuple_element_79 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[7]);

                if (tmp_tuple_element_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_79 == NULL)) {
                            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_79 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto tuple_build_exception_62;
                        }
                        Py_INCREF(tmp_tuple_element_79);
                    } else {
                        goto tuple_build_exception_62;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_79);
                goto tuple_build_noexception_62;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_62:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_62:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_5);
                tmp_tuple_element_80 = mod_consts[118];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_80);
                tmp_tuple_element_80 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[16]);

                if (tmp_tuple_element_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_80 == NULL)) {
                            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_80 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto tuple_build_exception_63;
                        }
                        Py_INCREF(tmp_tuple_element_80);
                    } else {
                        goto tuple_build_exception_63;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_80);
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_5);
                tmp_tuple_element_81 = mod_consts[119];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_22;
                    PyObject *tmp_args_element_value_8;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_81);
                    tmp_called_value_22 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[18]);

                    if (tmp_called_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_22 == NULL)) {
                                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 159;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_called_value_22);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    tmp_args_element_value_8 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[112]);

                    if (tmp_args_element_value_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[112]);

                            if (unlikely(tmp_args_element_value_8 == NULL)) {
                                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
                            }

                            if (tmp_args_element_value_8 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_22);

                                exception_lineno = 159;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_args_element_value_8);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    frame_2e5d74d4d2a720fa6a6930299df67797_5->m_frame.f_lineno = 159;
                    tmp_tuple_element_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_8);
                    Py_DECREF(tmp_called_value_22);
                    Py_DECREF(tmp_args_element_value_8);
                    if (tmp_tuple_element_81 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto tuple_build_exception_64;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_81);
                }
                goto tuple_build_noexception_64;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_64:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_64:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2e5d74d4d2a720fa6a6930299df67797_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2e5d74d4d2a720fa6a6930299df67797_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2e5d74d4d2a720fa6a6930299df67797_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2e5d74d4d2a720fa6a6930299df67797_5,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_2e5d74d4d2a720fa6a6930299df67797_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_21;
        skip_nested_handling_4:;
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


                exception_lineno = 151;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_21;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_23 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_82 = mod_consts[114];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_82 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_6__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 151;
            tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto try_except_handler_21;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_77;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_76 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__6_AVCodecDescriptor_151 = NULL;
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
        exception_lineno = 151;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_76);
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
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_83;
        tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_83 == NULL)) {
            tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_78, 0, tmp_tuple_element_83);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_79 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        tmp_expression_value_45 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[8];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_46 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_47 = tmp_class_creation_7__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[45]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        tmp_tuple_element_84 = mod_consts[120];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_84 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_7__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 163;
        tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_48 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

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
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_49 = tmp_class_creation_7__metaclass;
        tmp_name_value_11 = mod_consts[49];
        tmp_default_value_7 = mod_consts[50];
        tmp_tuple_element_85 = BUILTIN_GETATTR(tstate, tmp_expression_value_49, tmp_name_value_11, tmp_default_value_7);
        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[49]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_85);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 163;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_83;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_24;
        }
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


                exception_lineno = 163;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_24;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_25 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_86 = mod_consts[120];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_86 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_7__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 163;
            tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto try_except_handler_24;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_84 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__7_AVCodecInternal_163 = NULL;
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
        exception_lineno = 163;
        goto try_except_handler_22;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_84);
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
        PyObject *tmp_assign_source_86;
        PyObject *tmp_tuple_element_87;
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_87 == NULL)) {
            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        tmp_assign_source_86 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_86, 0, tmp_tuple_element_87);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_87 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

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
        tmp_expression_value_51 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[8];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_89 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_52 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

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
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_53 = tmp_class_creation_8__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[45]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        tmp_tuple_element_88 = mod_consts[121];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_88 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_8__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 167;
        tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_54 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

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
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_55 = tmp_class_creation_8__metaclass;
        tmp_name_value_12 = mod_consts[49];
        tmp_default_value_8 = mod_consts[50];
        tmp_tuple_element_89 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_12, tmp_default_value_8);
        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[49]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_89);
        }
        goto tuple_build_noexception_66;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_66:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_66:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 167;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_91;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_92;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_27;
        }
        frame_b068a643c3e516c93fcb0071bbd3c19c_6 = MAKE_CLASS_FRAME(tstate, codeobj_b068a643c3e516c93fcb0071bbd3c19c, module_pyglet$media$codecs$ffmpeg_lib$libavcodec, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b068a643c3e516c93fcb0071bbd3c19c_6);
        assert(Py_REFCNT(frame_b068a643c3e516c93fcb0071bbd3c19c_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_90;
            tmp_tuple_element_90 = mod_consts[113];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[16]);

            if (tmp_tuple_element_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_tuple_element_90 == NULL)) {
                        tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                    }

                    if (tmp_tuple_element_90 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto tuple_build_exception_67;
                    }
                    Py_INCREF(tmp_tuple_element_90);
                } else {
                    goto tuple_build_exception_67;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_90);
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            tmp_dictset_value = MAKE_LIST_EMPTY(11);
            {
                PyObject *tmp_tuple_element_91;
                PyObject *tmp_tuple_element_92;
                PyObject *tmp_tuple_element_93;
                PyObject *tmp_tuple_element_94;
                PyObject *tmp_tuple_element_95;
                PyObject *tmp_tuple_element_96;
                PyObject *tmp_tuple_element_97;
                PyObject *tmp_tuple_element_98;
                PyObject *tmp_tuple_element_99;
                PyObject *tmp_tuple_element_100;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_91 = mod_consts[116];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_91);
                tmp_tuple_element_91 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[16]);

                if (tmp_tuple_element_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_tuple_element_91 == NULL)) {
                            tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_tuple_element_91 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "o";
                            goto tuple_build_exception_68;
                        }
                        Py_INCREF(tmp_tuple_element_91);
                    } else {
                        goto tuple_build_exception_68;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_91);
                goto tuple_build_noexception_68;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_68:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_68:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
                tmp_tuple_element_92 = mod_consts[56];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_92);
                tmp_tuple_element_92 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                if (tmp_tuple_element_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_92 == NULL)) {
                            tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "o";
                            goto tuple_build_exception_69;
                        }
                        Py_INCREF(tmp_tuple_element_92);
                    } else {
                        goto tuple_build_exception_69;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_92);
                goto tuple_build_noexception_69;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_69:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_69:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_6);
                tmp_tuple_element_93 = mod_consts[115];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_93);
                tmp_tuple_element_93 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                if (tmp_tuple_element_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_93 == NULL)) {
                            tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto tuple_build_exception_70;
                        }
                        Py_INCREF(tmp_tuple_element_93);
                    } else {
                        goto tuple_build_exception_70;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_93);
                goto tuple_build_noexception_70;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_70:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_70:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_6);
                tmp_tuple_element_94 = mod_consts[122];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_94);
                tmp_tuple_element_94 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                if (tmp_tuple_element_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_tuple_element_94 == NULL)) {
                            tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_tuple_element_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "o";
                            goto tuple_build_exception_71;
                        }
                        Py_INCREF(tmp_tuple_element_94);
                    } else {
                        goto tuple_build_exception_71;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_94);
                goto tuple_build_noexception_71;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_71:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_71:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_6);
                tmp_tuple_element_95 = mod_consts[123];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_27;
                    PyObject *tmp_args_element_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_95);
                    tmp_called_value_27 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[18]);

                    if (tmp_called_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_27 == NULL)) {
                                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 174;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_called_value_27);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    tmp_args_element_value_9 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[60]);

                    if (tmp_args_element_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

                            if (unlikely(tmp_args_element_value_9 == NULL)) {
                                tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                            }

                            if (tmp_args_element_value_9 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);

                                exception_lineno = 174;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_args_element_value_9);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame.f_lineno = 174;
                    tmp_tuple_element_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_9);
                    Py_DECREF(tmp_called_value_27);
                    Py_DECREF(tmp_args_element_value_9);
                    if (tmp_tuple_element_95 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto tuple_build_exception_72;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_95);
                }
                goto tuple_build_noexception_72;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_72:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_72:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_6);
                tmp_tuple_element_96 = mod_consts[124];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_args_element_value_10;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_96);
                    tmp_called_value_28 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[18]);

                    if (tmp_called_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_28 == NULL)) {
                                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_called_value_28);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    tmp_args_element_value_10 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                    if (tmp_args_element_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                            if (unlikely(tmp_args_element_value_10 == NULL)) {
                                tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                            }

                            if (tmp_args_element_value_10 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_args_element_value_10);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame.f_lineno = 175;
                    tmp_tuple_element_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_10);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_10);
                    if (tmp_tuple_element_96 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto tuple_build_exception_73;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_96);
                }
                goto tuple_build_noexception_73;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_73:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_73:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_6);
                tmp_tuple_element_97 = mod_consts[125];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_args_element_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_97);
                    tmp_called_value_29 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[18]);

                    if (tmp_called_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_29 == NULL)) {
                                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 176;
                                type_description_2 = "o";
                                goto tuple_build_exception_74;
                            }
                            Py_INCREF(tmp_called_value_29);
                        } else {
                            goto tuple_build_exception_74;
                        }
                    }

                    tmp_args_element_value_11 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                    if (tmp_args_element_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                            if (unlikely(tmp_args_element_value_11 == NULL)) {
                                tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                            }

                            if (tmp_args_element_value_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);

                                exception_lineno = 176;
                                type_description_2 = "o";
                                goto tuple_build_exception_74;
                            }
                            Py_INCREF(tmp_args_element_value_11);
                        } else {
                            goto tuple_build_exception_74;
                        }
                    }

                    frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame.f_lineno = 176;
                    tmp_tuple_element_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_11);
                    Py_DECREF(tmp_called_value_29);
                    Py_DECREF(tmp_args_element_value_11);
                    if (tmp_tuple_element_97 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto tuple_build_exception_74;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_97);
                }
                goto tuple_build_noexception_74;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_74:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_74:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_6);
                tmp_tuple_element_98 = mod_consts[126];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_args_element_value_12;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_98);
                    tmp_called_value_30 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[18]);

                    if (tmp_called_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_30 == NULL)) {
                                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 177;
                                type_description_2 = "o";
                                goto tuple_build_exception_75;
                            }
                            Py_INCREF(tmp_called_value_30);
                        } else {
                            goto tuple_build_exception_75;
                        }
                    }

                    tmp_args_element_value_12 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[7]);

                    if (tmp_args_element_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                            if (unlikely(tmp_args_element_value_12 == NULL)) {
                                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                            }

                            if (tmp_args_element_value_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 177;
                                type_description_2 = "o";
                                goto tuple_build_exception_75;
                            }
                            Py_INCREF(tmp_args_element_value_12);
                        } else {
                            goto tuple_build_exception_75;
                        }
                    }

                    frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame.f_lineno = 177;
                    tmp_tuple_element_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_12);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_12);
                    if (tmp_tuple_element_98 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto tuple_build_exception_75;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_98);
                }
                goto tuple_build_noexception_75;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_75:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_75:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_6);
                tmp_tuple_element_99 = mod_consts[127];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_31;
                    PyObject *tmp_args_element_value_13;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_99);
                    tmp_called_value_31 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[18]);

                    if (tmp_called_value_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                            if (unlikely(tmp_called_value_31 == NULL)) {
                                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                            }

                            if (tmp_called_value_31 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 178;
                                type_description_2 = "o";
                                goto tuple_build_exception_76;
                            }
                            Py_INCREF(tmp_called_value_31);
                        } else {
                            goto tuple_build_exception_76;
                        }
                    }

                    tmp_args_element_value_13 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[12]);

                    if (tmp_args_element_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_args_element_value_13 == NULL)) {
                                tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_args_element_value_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);

                                exception_lineno = 178;
                                type_description_2 = "o";
                                goto tuple_build_exception_76;
                            }
                            Py_INCREF(tmp_args_element_value_13);
                        } else {
                            goto tuple_build_exception_76;
                        }
                    }

                    frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame.f_lineno = 178;
                    tmp_tuple_element_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_13);
                    Py_DECREF(tmp_called_value_31);
                    Py_DECREF(tmp_args_element_value_13);
                    if (tmp_tuple_element_99 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "o";
                        goto tuple_build_exception_76;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_99);
                }
                goto tuple_build_noexception_76;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_76:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_76:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_6);
                tmp_tuple_element_100 = mod_consts[128];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_100);
                tmp_tuple_element_100 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[13]);

                if (tmp_tuple_element_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_tuple_element_100 == NULL)) {
                            tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                        }

                        if (tmp_tuple_element_100 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 179;
                            type_description_2 = "o";
                            goto tuple_build_exception_77;
                        }
                        Py_INCREF(tmp_tuple_element_100);
                    } else {
                        goto tuple_build_exception_77;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_100);
                goto tuple_build_noexception_77;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_77:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_77:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b068a643c3e516c93fcb0071bbd3c19c_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b068a643c3e516c93fcb0071bbd3c19c_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b068a643c3e516c93fcb0071bbd3c19c_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b068a643c3e516c93fcb0071bbd3c19c_6,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_b068a643c3e516c93fcb0071bbd3c19c_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_27;
        skip_nested_handling_5:;
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


                exception_lineno = 167;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_27;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_101;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_32 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_101 = mod_consts[121];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_101);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_101 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_101);
            tmp_tuple_element_101 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_101);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_8__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 167;
            tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto try_except_handler_27;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_93;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_92 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_92);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__8_AVCodec_167 = NULL;
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
        exception_lineno = 167;
        goto try_except_handler_25;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_92);
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
        PyObject *tmp_assign_source_94;
        PyObject *tmp_tuple_element_102;
        tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_102 == NULL)) {
            tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        tmp_assign_source_94 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_94, 0, tmp_tuple_element_102);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_95 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

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
        tmp_expression_value_57 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[8];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_97 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_58 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

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
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_103;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_59 = tmp_class_creation_9__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[45]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        tmp_tuple_element_103 = mod_consts[129];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_103);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_103 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_103);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_9__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 184;
        tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_60 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

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
        PyObject *tmp_tuple_element_104;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_61 = tmp_class_creation_9__metaclass;
        tmp_name_value_13 = mod_consts[49];
        tmp_default_value_9 = mod_consts[50];
        tmp_tuple_element_104 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_13, tmp_default_value_9);
        if (tmp_tuple_element_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_104);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_62 == NULL));
            tmp_tuple_element_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[49]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_tuple_element_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_104);
        }
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 184;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_99;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_100;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

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


                exception_lineno = 184;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_105;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_34 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_105 = mod_consts[129];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_105);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_105 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_105);
            tmp_tuple_element_105 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_105);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_9__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 184;
            tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_30;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_101;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_100 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_100);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__9_AVCodecContext_184 = NULL;
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
        exception_lineno = 184;
        goto try_except_handler_28;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_100);
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
        PyObject *tmp_assign_source_102;
        PyObject *tmp_tuple_element_106;
        tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_106 == NULL)) {
            tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        tmp_assign_source_102 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_102, 0, tmp_tuple_element_106);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_103 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        tmp_expression_value_63 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[8];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_105 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_105;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_64 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_107;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_65 = tmp_class_creation_10__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[45]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        tmp_tuple_element_107 = mod_consts[130];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_107);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_107 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_107);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_10__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 188;
        tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_66 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        PyObject *tmp_tuple_element_108;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_67 = tmp_class_creation_10__metaclass;
        tmp_name_value_14 = mod_consts[49];
        tmp_default_value_10 = mod_consts[50];
        tmp_tuple_element_108 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_14, tmp_default_value_10);
        if (tmp_tuple_element_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_108);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_68 == NULL));
            tmp_tuple_element_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[49]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_tuple_element_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_108);
        }
        goto tuple_build_noexception_79;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_79:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_79:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_107;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_108;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_33;
        }
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


                exception_lineno = 188;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_33;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_109;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_36 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_109 = mod_consts[130];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_109);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_109 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_109);
            tmp_tuple_element_109 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_109);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_10__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 188;
            tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_33;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_109;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_108 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_108);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__10_RcOverride_188 = NULL;
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
        exception_lineno = 188;
        goto try_except_handler_31;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_108);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_tuple_element_110;
        tmp_tuple_element_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_110 == NULL)) {
            tmp_tuple_element_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_tuple_element_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        tmp_assign_source_110 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_110, 0, tmp_tuple_element_110);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_110;
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_111 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

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
        tmp_expression_value_69 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[8];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_113 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_113;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_70 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

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
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_111;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_71 = tmp_class_creation_11__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[45]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        tmp_tuple_element_111 = mod_consts[131];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_111);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_111 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_111);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_11__class_decl_dict;
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 192;
        tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_114;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_72 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

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
        PyObject *tmp_tuple_element_112;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_73 = tmp_class_creation_11__metaclass;
        tmp_name_value_15 = mod_consts[49];
        tmp_default_value_11 = mod_consts[50];
        tmp_tuple_element_112 = BUILTIN_GETATTR(tstate, tmp_expression_value_73, tmp_name_value_15, tmp_default_value_11);
        if (tmp_tuple_element_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_74;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_112);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_74 == NULL));
            tmp_tuple_element_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[49]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_tuple_element_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_112);
        }
        goto tuple_build_noexception_80;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_80:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_80:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 192;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_115;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_116;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

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


                exception_lineno = 192;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto try_except_handler_36;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_117;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_113;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_38 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_113 = mod_consts[131];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_113);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_113 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_113);
            tmp_tuple_element_113 = locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_113);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_11__class_decl_dict;
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 192;
            tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto try_except_handler_36;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_117;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_116 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_116);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192);
        locals_pyglet$media$codecs$ffmpeg_lib$libavcodec$$$class__11_AVHWAccel_192 = NULL;
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
        exception_lineno = 192;
        goto try_except_handler_34;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_116);
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
        PyObject *tmp_assign_source_118;
        PyObject *tmp_expression_value_75;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[132]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_76;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[133]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_77;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[134]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_list_element_7;
        PyObject *tmp_tuple_element_114;
        tmp_tuple_element_114 = mod_consts[135];
        tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_14;
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_114);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_81;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[132]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_81;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 201;
            tmp_tuple_element_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_14);
            if (tmp_tuple_element_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_114);
        }
        goto tuple_build_noexception_81;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_81:;
        Py_DECREF(tmp_list_element_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_81:;
        tmp_assign_source_121 = MAKE_LIST_EMPTY(190);
        {
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
            PyObject *tmp_tuple_element_188;
            PyObject *tmp_tuple_element_189;
            PyObject *tmp_tuple_element_190;
            PyObject *tmp_tuple_element_191;
            PyObject *tmp_tuple_element_192;
            PyObject *tmp_tuple_element_193;
            PyObject *tmp_tuple_element_194;
            PyObject *tmp_tuple_element_195;
            PyObject *tmp_tuple_element_196;
            PyObject *tmp_tuple_element_197;
            PyObject *tmp_tuple_element_198;
            PyObject *tmp_tuple_element_199;
            PyObject *tmp_tuple_element_200;
            PyObject *tmp_tuple_element_201;
            PyObject *tmp_tuple_element_202;
            PyObject *tmp_tuple_element_203;
            PyObject *tmp_tuple_element_204;
            PyObject *tmp_tuple_element_205;
            PyObject *tmp_tuple_element_206;
            PyObject *tmp_tuple_element_207;
            PyObject *tmp_tuple_element_208;
            PyObject *tmp_tuple_element_209;
            PyObject *tmp_tuple_element_210;
            PyObject *tmp_tuple_element_211;
            PyObject *tmp_tuple_element_212;
            PyObject *tmp_tuple_element_213;
            PyObject *tmp_tuple_element_214;
            PyObject *tmp_tuple_element_215;
            PyObject *tmp_tuple_element_216;
            PyObject *tmp_tuple_element_217;
            PyObject *tmp_tuple_element_218;
            PyObject *tmp_tuple_element_219;
            PyObject *tmp_tuple_element_220;
            PyObject *tmp_tuple_element_221;
            PyObject *tmp_tuple_element_222;
            PyObject *tmp_tuple_element_223;
            PyObject *tmp_tuple_element_224;
            PyObject *tmp_tuple_element_225;
            PyObject *tmp_tuple_element_226;
            PyObject *tmp_tuple_element_227;
            PyObject *tmp_tuple_element_228;
            PyObject *tmp_tuple_element_229;
            PyObject *tmp_tuple_element_230;
            PyObject *tmp_tuple_element_231;
            PyObject *tmp_tuple_element_232;
            PyObject *tmp_tuple_element_233;
            PyObject *tmp_tuple_element_234;
            PyObject *tmp_tuple_element_235;
            PyObject *tmp_tuple_element_236;
            PyObject *tmp_tuple_element_237;
            PyObject *tmp_tuple_element_238;
            PyObject *tmp_tuple_element_239;
            PyObject *tmp_tuple_element_240;
            PyObject *tmp_tuple_element_241;
            PyObject *tmp_tuple_element_242;
            PyObject *tmp_tuple_element_243;
            PyObject *tmp_tuple_element_244;
            PyObject *tmp_tuple_element_245;
            PyObject *tmp_tuple_element_246;
            PyObject *tmp_tuple_element_247;
            PyObject *tmp_tuple_element_248;
            PyObject *tmp_tuple_element_249;
            PyObject *tmp_tuple_element_250;
            PyObject *tmp_tuple_element_251;
            PyObject *tmp_tuple_element_252;
            PyObject *tmp_tuple_element_253;
            PyObject *tmp_tuple_element_254;
            PyObject *tmp_tuple_element_255;
            PyObject *tmp_tuple_element_256;
            PyObject *tmp_tuple_element_257;
            PyObject *tmp_tuple_element_258;
            PyObject *tmp_tuple_element_259;
            PyObject *tmp_tuple_element_260;
            PyObject *tmp_tuple_element_261;
            PyObject *tmp_tuple_element_262;
            PyObject *tmp_tuple_element_263;
            PyObject *tmp_tuple_element_264;
            PyObject *tmp_tuple_element_265;
            PyObject *tmp_tuple_element_266;
            PyObject *tmp_tuple_element_267;
            PyObject *tmp_tuple_element_268;
            PyObject *tmp_tuple_element_269;
            PyObject *tmp_tuple_element_270;
            PyObject *tmp_tuple_element_271;
            PyObject *tmp_tuple_element_272;
            PyObject *tmp_tuple_element_273;
            PyObject *tmp_tuple_element_274;
            PyObject *tmp_tuple_element_275;
            PyObject *tmp_tuple_element_276;
            PyObject *tmp_tuple_element_277;
            PyObject *tmp_tuple_element_278;
            PyObject *tmp_tuple_element_279;
            PyObject *tmp_tuple_element_280;
            PyObject *tmp_tuple_element_281;
            PyObject *tmp_tuple_element_282;
            PyObject *tmp_tuple_element_283;
            PyObject *tmp_tuple_element_284;
            PyObject *tmp_tuple_element_285;
            PyObject *tmp_tuple_element_286;
            PyObject *tmp_tuple_element_287;
            PyObject *tmp_tuple_element_288;
            PyObject *tmp_tuple_element_289;
            PyObject *tmp_tuple_element_290;
            PyObject *tmp_tuple_element_291;
            PyObject *tmp_tuple_element_292;
            PyObject *tmp_tuple_element_293;
            PyObject *tmp_tuple_element_294;
            PyObject *tmp_tuple_element_295;
            PyObject *tmp_tuple_element_296;
            PyObject *tmp_tuple_element_297;
            PyObject *tmp_tuple_element_298;
            PyObject *tmp_tuple_element_299;
            PyObject *tmp_tuple_element_300;
            PyObject *tmp_tuple_element_301;
            PyObject *tmp_tuple_element_302;
            PyObject *tmp_tuple_element_303;
            PyList_SET_ITEM(tmp_assign_source_121, 0, tmp_list_element_7);
            tmp_tuple_element_115 = mod_consts[136];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_115);
            tmp_tuple_element_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_115 == NULL)) {
                tmp_tuple_element_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_115);
            goto tuple_build_noexception_82;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_82:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_82:;
            PyList_SET_ITEM(tmp_assign_source_121, 1, tmp_list_element_7);
            tmp_tuple_element_116 = mod_consts[83];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_116);
            tmp_tuple_element_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_116 == NULL)) {
                tmp_tuple_element_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto tuple_build_exception_83;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_116);
            goto tuple_build_noexception_83;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_83:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_83:;
            PyList_SET_ITEM(tmp_assign_source_121, 2, tmp_list_element_7);
            tmp_tuple_element_117 = mod_consts[137];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_40;
                PyObject *tmp_args_element_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_117);
                tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_40 == NULL)) {
                    tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;

                    goto tuple_build_exception_84;
                }
                tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121]);

                if (unlikely(tmp_args_element_value_15 == NULL)) {
                    tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
                }

                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;

                    goto tuple_build_exception_84;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 204;
                tmp_tuple_element_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_15);
                if (tmp_tuple_element_117 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;

                    goto tuple_build_exception_84;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_117);
            }
            goto tuple_build_noexception_84;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_84:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_84:;
            PyList_SET_ITEM(tmp_assign_source_121, 3, tmp_list_element_7);
            tmp_tuple_element_118 = mod_consts[84];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_118);
            tmp_tuple_element_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_118 == NULL)) {
                tmp_tuple_element_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_85;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_118);
            goto tuple_build_noexception_85;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_85:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_85:;
            PyList_SET_ITEM(tmp_assign_source_121, 4, tmp_list_element_7);
            tmp_tuple_element_119 = mod_consts[85];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_119);
            tmp_tuple_element_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_tuple_element_119 == NULL)) {
                tmp_tuple_element_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_tuple_element_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_86;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_119);
            goto tuple_build_noexception_86;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_86:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_86:;
            PyList_SET_ITEM(tmp_assign_source_121, 5, tmp_list_element_7);
            tmp_tuple_element_120 = mod_consts[138];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_120);
            tmp_tuple_element_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_120 == NULL)) {
                tmp_tuple_element_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto tuple_build_exception_87;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_120);
            goto tuple_build_noexception_87;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_87:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_87:;
            PyList_SET_ITEM(tmp_assign_source_121, 6, tmp_list_element_7);
            tmp_tuple_element_121 = mod_consts[139];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_41;
                PyObject *tmp_args_element_value_16;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_121);
                tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_41 == NULL)) {
                    tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_88;
                }
                tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[120]);

                if (unlikely(tmp_args_element_value_16 == NULL)) {
                    tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
                }

                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_88;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 208;
                tmp_tuple_element_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_16);
                if (tmp_tuple_element_121 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;

                    goto tuple_build_exception_88;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_121);
            }
            goto tuple_build_noexception_88;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_88:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_88:;
            PyList_SET_ITEM(tmp_assign_source_121, 7, tmp_list_element_7);
            tmp_tuple_element_122 = mod_consts[71];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_122);
            tmp_tuple_element_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_122 == NULL)) {
                tmp_tuple_element_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_89;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_122);
            goto tuple_build_noexception_89;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_89:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_89:;
            PyList_SET_ITEM(tmp_assign_source_121, 8, tmp_list_element_7);
            tmp_tuple_element_123 = mod_consts[89];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_123);
            tmp_tuple_element_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_123 == NULL)) {
                tmp_tuple_element_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_90;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_123);
            goto tuple_build_noexception_90;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_90:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_90:;
            PyList_SET_ITEM(tmp_assign_source_121, 9, tmp_list_element_7);
            tmp_tuple_element_124 = mod_consts[140];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_124);
            tmp_tuple_element_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_124 == NULL)) {
                tmp_tuple_element_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_91;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_124);
            goto tuple_build_noexception_91;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_91:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_91:;
            PyList_SET_ITEM(tmp_assign_source_121, 10, tmp_list_element_7);
            tmp_tuple_element_125 = mod_consts[141];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_125);
            tmp_tuple_element_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_125 == NULL)) {
                tmp_tuple_element_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_92;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_125);
            goto tuple_build_noexception_92;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_92:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_92:;
            PyList_SET_ITEM(tmp_assign_source_121, 11, tmp_list_element_7);
            tmp_tuple_element_126 = mod_consts[142];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_126);
            tmp_tuple_element_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_126 == NULL)) {
                tmp_tuple_element_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_93;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_126);
            goto tuple_build_noexception_93;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_93:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_93:;
            PyList_SET_ITEM(tmp_assign_source_121, 12, tmp_list_element_7);
            tmp_tuple_element_127 = mod_consts[66];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_127);
            tmp_tuple_element_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_127 == NULL)) {
                tmp_tuple_element_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_94;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_127);
            goto tuple_build_noexception_94;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_94:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_94:;
            PyList_SET_ITEM(tmp_assign_source_121, 13, tmp_list_element_7);
            tmp_tuple_element_128 = mod_consts[143];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_128);
            tmp_tuple_element_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_128 == NULL)) {
                tmp_tuple_element_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto tuple_build_exception_95;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_128);
            goto tuple_build_noexception_95;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_95:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_95:;
            PyList_SET_ITEM(tmp_assign_source_121, 14, tmp_list_element_7);
            tmp_tuple_element_129 = mod_consts[86];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_129);
                tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_42 == NULL)) {
                    tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_96;
                }
                tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_args_element_value_17 == NULL)) {
                    tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_args_element_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_96;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 216;
                tmp_tuple_element_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_17);
                if (tmp_tuple_element_129 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_96;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_129);
            }
            goto tuple_build_noexception_96;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_96:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_96:;
            PyList_SET_ITEM(tmp_assign_source_121, 15, tmp_list_element_7);
            tmp_tuple_element_130 = mod_consts[87];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_130);
            tmp_tuple_element_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_130 == NULL)) {
                tmp_tuple_element_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_97;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_130);
            goto tuple_build_noexception_97;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_97:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_97:;
            PyList_SET_ITEM(tmp_assign_source_121, 16, tmp_list_element_7);
            tmp_tuple_element_131 = mod_consts[73];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_131);
            tmp_tuple_element_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_131 == NULL)) {
                tmp_tuple_element_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_98;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_131);
            goto tuple_build_noexception_98;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_98:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_98:;
            PyList_SET_ITEM(tmp_assign_source_121, 17, tmp_list_element_7);
            tmp_tuple_element_132 = mod_consts[144];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_132);
            tmp_tuple_element_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_132 == NULL)) {
                tmp_tuple_element_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_132);
            goto tuple_build_noexception_99;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_99:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_99:;
            PyList_SET_ITEM(tmp_assign_source_121, 18, tmp_list_element_7);
            tmp_tuple_element_133 = mod_consts[145];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_133);
            tmp_tuple_element_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_133 == NULL)) {
                tmp_tuple_element_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_100;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_133);
            goto tuple_build_noexception_100;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_100:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_100:;
            PyList_SET_ITEM(tmp_assign_source_121, 19, tmp_list_element_7);
            tmp_tuple_element_134 = mod_consts[94];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_134);
            tmp_tuple_element_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_134 == NULL)) {
                tmp_tuple_element_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_101;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_134);
            goto tuple_build_noexception_101;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_101:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_101:;
            PyList_SET_ITEM(tmp_assign_source_121, 20, tmp_list_element_7);
            tmp_tuple_element_135 = mod_consts[95];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_135);
            tmp_tuple_element_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_135 == NULL)) {
                tmp_tuple_element_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_102;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_135);
            goto tuple_build_noexception_102;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_102:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_102:;
            PyList_SET_ITEM(tmp_assign_source_121, 21, tmp_list_element_7);
            tmp_tuple_element_136 = mod_consts[146];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_136);
            tmp_tuple_element_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_136 == NULL)) {
                tmp_tuple_element_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_103;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_136);
            goto tuple_build_noexception_103;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_103:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_103:;
            PyList_SET_ITEM(tmp_assign_source_121, 22, tmp_list_element_7);
            tmp_tuple_element_137 = mod_consts[147];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_137);
            tmp_tuple_element_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_137 == NULL)) {
                tmp_tuple_element_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_104;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_137);
            goto tuple_build_noexception_104;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_104:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_104:;
            PyList_SET_ITEM(tmp_assign_source_121, 23, tmp_list_element_7);
            tmp_tuple_element_138 = mod_consts[148];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_138);
            tmp_tuple_element_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_138 == NULL)) {
                tmp_tuple_element_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_105;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_138);
            goto tuple_build_noexception_105;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_105:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_105:;
            PyList_SET_ITEM(tmp_assign_source_121, 24, tmp_list_element_7);
            tmp_tuple_element_139 = mod_consts[149];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_139);
            tmp_tuple_element_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_139 == NULL)) {
                tmp_tuple_element_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_106;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_139);
            goto tuple_build_noexception_106;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_106:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_106:;
            PyList_SET_ITEM(tmp_assign_source_121, 25, tmp_list_element_7);
            tmp_tuple_element_140 = mod_consts[150];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_43;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_called_value_44;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_called_value_45;
                PyObject *tmp_args_element_value_22;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_mult_expr_left_1;
                PyObject *tmp_mult_expr_right_1;
                PyObject *tmp_args_element_value_24;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_args_element_value_26;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_140);
                tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_43 == NULL)) {
                    tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_18 = Py_None;
                tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_44 == NULL)) {
                    tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_20 == NULL)) {
                    tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 228;
                tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_20);
                if (tmp_args_element_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_45 == NULL)) {
                    tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);

                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[133]);

                if (unlikely(tmp_args_element_value_22 == NULL)) {
                    tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
                }

                if (tmp_args_element_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);

                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 228;
                tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_22);
                if (tmp_args_element_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);

                    exception_lineno = 228;

                    goto tuple_build_exception_107;
                }
                tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_mult_expr_left_1 == NULL)) {
                    tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_mult_expr_left_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_21);

                    exception_lineno = 229;

                    goto tuple_build_exception_107;
                }
                tmp_mult_expr_right_1 = mod_consts[151];
                tmp_args_element_value_23 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                if (tmp_args_element_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_21);

                    exception_lineno = 229;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_24 == NULL)) {
                    tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_21);
                    Py_DECREF(tmp_args_element_value_23);

                    exception_lineno = 229;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_25 == NULL)) {
                    tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_21);
                    Py_DECREF(tmp_args_element_value_23);

                    exception_lineno = 229;

                    goto tuple_build_exception_107;
                }
                tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_26 == NULL)) {
                    tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_21);
                    Py_DECREF(tmp_args_element_value_23);

                    exception_lineno = 229;

                    goto tuple_build_exception_107;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 227;
                {
                    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_21, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
                    tmp_tuple_element_140 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_43, call_args);
                }

                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_23);
                if (tmp_tuple_element_140 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_107;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_140);
            }
            goto tuple_build_noexception_107;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_107:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_107:;
            PyList_SET_ITEM(tmp_assign_source_121, 26, tmp_list_element_7);
            tmp_tuple_element_141 = mod_consts[152];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_46;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_called_value_47;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_called_value_48;
                PyObject *tmp_args_element_value_31;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_141);
                tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_46 == NULL)) {
                    tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_27 == NULL)) {
                    tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_47 == NULL)) {
                    tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_29 == NULL)) {
                    tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 230;
                tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_29);
                if (tmp_args_element_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_48 == NULL)) {
                    tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_28);

                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_31 == NULL)) {
                    tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_28);

                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 230;
                tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_31);
                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_28);

                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 230;
                {
                    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_30};
                    tmp_tuple_element_141 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_46, call_args);
                }

                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_tuple_element_141 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;

                    goto tuple_build_exception_108;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_141);
            }
            goto tuple_build_noexception_108;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_108:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_108:;
            PyList_SET_ITEM(tmp_assign_source_121, 27, tmp_list_element_7);
            tmp_tuple_element_142 = mod_consts[153];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_142);
            tmp_tuple_element_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_142 == NULL)) {
                tmp_tuple_element_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_109;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_142);
            goto tuple_build_noexception_109;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_109:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_109:;
            PyList_SET_ITEM(tmp_assign_source_121, 28, tmp_list_element_7);
            tmp_tuple_element_143 = mod_consts[154];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_143);
            tmp_tuple_element_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_143 == NULL)) {
                tmp_tuple_element_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_110;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_143);
            goto tuple_build_noexception_110;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_110:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_110:;
            PyList_SET_ITEM(tmp_assign_source_121, 29, tmp_list_element_7);
            tmp_tuple_element_144 = mod_consts[155];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_144);
            tmp_tuple_element_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_144 == NULL)) {
                tmp_tuple_element_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto tuple_build_exception_111;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_144);
            goto tuple_build_noexception_111;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_111:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_111:;
            PyList_SET_ITEM(tmp_assign_source_121, 30, tmp_list_element_7);
            tmp_tuple_element_145 = mod_consts[156];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_145);
            tmp_tuple_element_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_145 == NULL)) {
                tmp_tuple_element_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_112;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_145);
            goto tuple_build_noexception_112;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_112:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_112:;
            PyList_SET_ITEM(tmp_assign_source_121, 31, tmp_list_element_7);
            tmp_tuple_element_146 = mod_consts[157];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_146);
            tmp_tuple_element_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_146 == NULL)) {
                tmp_tuple_element_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_113;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_146);
            goto tuple_build_noexception_113;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_113:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_113:;
            PyList_SET_ITEM(tmp_assign_source_121, 32, tmp_list_element_7);
            tmp_tuple_element_147 = mod_consts[158];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_147);
            tmp_tuple_element_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_147 == NULL)) {
                tmp_tuple_element_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_114;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_147);
            goto tuple_build_noexception_114;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_114:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_114:;
            PyList_SET_ITEM(tmp_assign_source_121, 33, tmp_list_element_7);
            tmp_tuple_element_148 = mod_consts[159];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_148);
            tmp_tuple_element_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_148 == NULL)) {
                tmp_tuple_element_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_115;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_148);
            goto tuple_build_noexception_115;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_115:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_115:;
            PyList_SET_ITEM(tmp_assign_source_121, 34, tmp_list_element_7);
            tmp_tuple_element_149 = mod_consts[160];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_149);
            tmp_tuple_element_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_149 == NULL)) {
                tmp_tuple_element_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto tuple_build_exception_116;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_149);
            goto tuple_build_noexception_116;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_116:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_116:;
            PyList_SET_ITEM(tmp_assign_source_121, 35, tmp_list_element_7);
            tmp_tuple_element_150 = mod_consts[161];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_150);
            tmp_tuple_element_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_150 == NULL)) {
                tmp_tuple_element_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto tuple_build_exception_117;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_150);
            goto tuple_build_noexception_117;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_117:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_117:;
            PyList_SET_ITEM(tmp_assign_source_121, 36, tmp_list_element_7);
            tmp_tuple_element_151 = mod_consts[162];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_151);
            tmp_tuple_element_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_151 == NULL)) {
                tmp_tuple_element_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_118;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_151);
            goto tuple_build_noexception_118;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_118:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_118:;
            PyList_SET_ITEM(tmp_assign_source_121, 37, tmp_list_element_7);
            tmp_tuple_element_152 = mod_consts[163];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_152);
            tmp_tuple_element_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_152 == NULL)) {
                tmp_tuple_element_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_119;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_152);
            goto tuple_build_noexception_119;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_119:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_119:;
            PyList_SET_ITEM(tmp_assign_source_121, 38, tmp_list_element_7);
            tmp_tuple_element_153 = mod_consts[164];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_153);
            tmp_tuple_element_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_153 == NULL)) {
                tmp_tuple_element_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto tuple_build_exception_120;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_153);
            goto tuple_build_noexception_120;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_120:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_120:;
            PyList_SET_ITEM(tmp_assign_source_121, 39, tmp_list_element_7);
            tmp_tuple_element_154 = mod_consts[165];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_154);
            tmp_tuple_element_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_154 == NULL)) {
                tmp_tuple_element_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto tuple_build_exception_121;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_154);
            goto tuple_build_noexception_121;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_121:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_121:;
            PyList_SET_ITEM(tmp_assign_source_121, 40, tmp_list_element_7);
            tmp_tuple_element_155 = mod_consts[166];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_155);
            tmp_tuple_element_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_155 == NULL)) {
                tmp_tuple_element_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_122;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_155);
            goto tuple_build_noexception_122;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_122:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_122:;
            PyList_SET_ITEM(tmp_assign_source_121, 41, tmp_list_element_7);
            tmp_tuple_element_156 = mod_consts[167];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_156);
            tmp_tuple_element_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_156 == NULL)) {
                tmp_tuple_element_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_123;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_156);
            goto tuple_build_noexception_123;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_123:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_123:;
            PyList_SET_ITEM(tmp_assign_source_121, 42, tmp_list_element_7);
            tmp_tuple_element_157 = mod_consts[168];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_49;
                PyObject *tmp_args_element_value_32;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_157);
                tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_49 == NULL)) {
                    tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_124;
                }
                tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_32 == NULL)) {
                    tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_124;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 246;
                tmp_tuple_element_157 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_32);
                if (tmp_tuple_element_157 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_124;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_157);
            }
            goto tuple_build_noexception_124;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_124:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_124:;
            PyList_SET_ITEM(tmp_assign_source_121, 43, tmp_list_element_7);
            tmp_tuple_element_158 = mod_consts[96];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_158);
            tmp_tuple_element_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_158 == NULL)) {
                tmp_tuple_element_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_125;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_158);
            goto tuple_build_noexception_125;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_125:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_125:;
            PyList_SET_ITEM(tmp_assign_source_121, 44, tmp_list_element_7);
            tmp_tuple_element_159 = mod_consts[169];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_159);
            tmp_tuple_element_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_159 == NULL)) {
                tmp_tuple_element_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_126;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_159);
            goto tuple_build_noexception_126;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_126:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_126:;
            PyList_SET_ITEM(tmp_assign_source_121, 45, tmp_list_element_7);
            tmp_tuple_element_160 = mod_consts[170];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_160);
            tmp_tuple_element_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_160 == NULL)) {
                tmp_tuple_element_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_127;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_160);
            goto tuple_build_noexception_127;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_127:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_127:;
            PyList_SET_ITEM(tmp_assign_source_121, 46, tmp_list_element_7);
            tmp_tuple_element_161 = mod_consts[171];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_161);
            tmp_tuple_element_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_161 == NULL)) {
                tmp_tuple_element_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_128;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_161);
            goto tuple_build_noexception_128;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_128:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_128:;
            PyList_SET_ITEM(tmp_assign_source_121, 47, tmp_list_element_7);
            tmp_tuple_element_162 = mod_consts[172];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_162);
            tmp_tuple_element_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_162 == NULL)) {
                tmp_tuple_element_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_129;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_162);
            goto tuple_build_noexception_129;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_129:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_129:;
            PyList_SET_ITEM(tmp_assign_source_121, 48, tmp_list_element_7);
            tmp_tuple_element_163 = mod_consts[173];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_163);
            tmp_tuple_element_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_163 == NULL)) {
                tmp_tuple_element_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto tuple_build_exception_130;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_163);
            goto tuple_build_noexception_130;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_130:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_130:;
            PyList_SET_ITEM(tmp_assign_source_121, 49, tmp_list_element_7);
            tmp_tuple_element_164 = mod_consts[174];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_164);
            tmp_tuple_element_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_164 == NULL)) {
                tmp_tuple_element_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_131;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_164);
            goto tuple_build_noexception_131;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_131:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_131:;
            PyList_SET_ITEM(tmp_assign_source_121, 50, tmp_list_element_7);
            tmp_tuple_element_165 = mod_consts[175];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_165);
            tmp_tuple_element_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_165 == NULL)) {
                tmp_tuple_element_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto tuple_build_exception_132;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_165);
            goto tuple_build_noexception_132;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_132:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_132:;
            PyList_SET_ITEM(tmp_assign_source_121, 51, tmp_list_element_7);
            tmp_tuple_element_166 = mod_consts[176];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_166);
            tmp_tuple_element_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_166 == NULL)) {
                tmp_tuple_element_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_133;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_166);
            goto tuple_build_noexception_133;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_133:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_133:;
            PyList_SET_ITEM(tmp_assign_source_121, 52, tmp_list_element_7);
            tmp_tuple_element_167 = mod_consts[177];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_167);
            tmp_tuple_element_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_167 == NULL)) {
                tmp_tuple_element_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto tuple_build_exception_134;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_167);
            goto tuple_build_noexception_134;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_134:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_134:;
            PyList_SET_ITEM(tmp_assign_source_121, 53, tmp_list_element_7);
            tmp_tuple_element_168 = mod_consts[178];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_168);
            tmp_tuple_element_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_168 == NULL)) {
                tmp_tuple_element_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_168 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_135;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_168);
            goto tuple_build_noexception_135;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_135:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_135:;
            PyList_SET_ITEM(tmp_assign_source_121, 54, tmp_list_element_7);
            tmp_tuple_element_169 = mod_consts[179];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_169);
            tmp_tuple_element_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_169 == NULL)) {
                tmp_tuple_element_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_136;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_169);
            goto tuple_build_noexception_136;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_136:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_136:;
            PyList_SET_ITEM(tmp_assign_source_121, 55, tmp_list_element_7);
            tmp_tuple_element_170 = mod_consts[180];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_170);
            tmp_tuple_element_170 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_170 == NULL)) {
                tmp_tuple_element_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_137;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_170);
            goto tuple_build_noexception_137;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_137:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_137:;
            PyList_SET_ITEM(tmp_assign_source_121, 56, tmp_list_element_7);
            tmp_tuple_element_171 = mod_consts[181];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_171);
            tmp_tuple_element_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_171 == NULL)) {
                tmp_tuple_element_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_171 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_138;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_171);
            goto tuple_build_noexception_138;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_138:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_138:;
            PyList_SET_ITEM(tmp_assign_source_121, 57, tmp_list_element_7);
            tmp_tuple_element_172 = mod_consts[182];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_33;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_172);
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_139;
                }
                tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_args_element_value_33 == NULL)) {
                    tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_args_element_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_139;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 261;
                tmp_tuple_element_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_33);
                if (tmp_tuple_element_172 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_139;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_172);
            }
            goto tuple_build_noexception_139;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_139:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_139:;
            PyList_SET_ITEM(tmp_assign_source_121, 58, tmp_list_element_7);
            tmp_tuple_element_173 = mod_consts[183];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_51;
                PyObject *tmp_args_element_value_34;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_173);
                tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_51 == NULL)) {
                    tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto tuple_build_exception_140;
                }
                tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_args_element_value_34 == NULL)) {
                    tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_args_element_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto tuple_build_exception_140;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 262;
                tmp_tuple_element_173 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_34);
                if (tmp_tuple_element_173 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto tuple_build_exception_140;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_173);
            }
            goto tuple_build_noexception_140;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_140:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_140:;
            PyList_SET_ITEM(tmp_assign_source_121, 59, tmp_list_element_7);
            tmp_tuple_element_174 = mod_consts[184];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_174);
            tmp_tuple_element_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_174 == NULL)) {
                tmp_tuple_element_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_141;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_174);
            goto tuple_build_noexception_141;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_141:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_141:;
            PyList_SET_ITEM(tmp_assign_source_121, 60, tmp_list_element_7);
            tmp_tuple_element_175 = mod_consts[185];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_175);
            tmp_tuple_element_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_175 == NULL)) {
                tmp_tuple_element_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_142;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_175);
            goto tuple_build_noexception_142;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_142:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_142:;
            PyList_SET_ITEM(tmp_assign_source_121, 61, tmp_list_element_7);
            tmp_tuple_element_176 = mod_consts[186];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_176);
            tmp_tuple_element_176 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_176 == NULL)) {
                tmp_tuple_element_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_176 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_143;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_176);
            goto tuple_build_noexception_143;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_143:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_143:;
            PyList_SET_ITEM(tmp_assign_source_121, 62, tmp_list_element_7);
            tmp_tuple_element_177 = mod_consts[187];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_177);
            tmp_tuple_element_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_177 == NULL)) {
                tmp_tuple_element_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_144;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_177);
            goto tuple_build_noexception_144;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_144:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_144:;
            PyList_SET_ITEM(tmp_assign_source_121, 63, tmp_list_element_7);
            tmp_tuple_element_178 = mod_consts[188];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_178);
            tmp_tuple_element_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_178 == NULL)) {
                tmp_tuple_element_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_178 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_145;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_178);
            goto tuple_build_noexception_145;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_145:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_145:;
            PyList_SET_ITEM(tmp_assign_source_121, 64, tmp_list_element_7);
            tmp_tuple_element_179 = mod_consts[189];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_179);
            tmp_tuple_element_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_179 == NULL)) {
                tmp_tuple_element_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto tuple_build_exception_146;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_179);
            goto tuple_build_noexception_146;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_146:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_146:;
            PyList_SET_ITEM(tmp_assign_source_121, 65, tmp_list_element_7);
            tmp_tuple_element_180 = mod_consts[190];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_180);
            tmp_tuple_element_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_180 == NULL)) {
                tmp_tuple_element_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_180 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto tuple_build_exception_147;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_180);
            goto tuple_build_noexception_147;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_147:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_147:;
            PyList_SET_ITEM(tmp_assign_source_121, 66, tmp_list_element_7);
            tmp_tuple_element_181 = mod_consts[191];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_181);
            tmp_tuple_element_181 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_181 == NULL)) {
                tmp_tuple_element_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_181 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_148;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_181);
            goto tuple_build_noexception_148;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_148:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_148:;
            PyList_SET_ITEM(tmp_assign_source_121, 67, tmp_list_element_7);
            tmp_tuple_element_182 = mod_consts[192];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_182);
            tmp_tuple_element_182 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_182 == NULL)) {
                tmp_tuple_element_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_182 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_149;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_182);
            goto tuple_build_noexception_149;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_149:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_149:;
            PyList_SET_ITEM(tmp_assign_source_121, 68, tmp_list_element_7);
            tmp_tuple_element_183 = mod_consts[193];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_183);
            tmp_tuple_element_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_183 == NULL)) {
                tmp_tuple_element_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_150;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_183);
            goto tuple_build_noexception_150;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_150:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_150:;
            PyList_SET_ITEM(tmp_assign_source_121, 69, tmp_list_element_7);
            tmp_tuple_element_184 = mod_consts[194];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_184);
            tmp_tuple_element_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_184 == NULL)) {
                tmp_tuple_element_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_184 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto tuple_build_exception_151;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_184);
            goto tuple_build_noexception_151;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_151:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_151:;
            PyList_SET_ITEM(tmp_assign_source_121, 70, tmp_list_element_7);
            tmp_tuple_element_185 = mod_consts[195];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_185);
            tmp_tuple_element_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_185 == NULL)) {
                tmp_tuple_element_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_185 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto tuple_build_exception_152;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_185);
            goto tuple_build_noexception_152;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_152:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_152:;
            PyList_SET_ITEM(tmp_assign_source_121, 71, tmp_list_element_7);
            tmp_tuple_element_186 = mod_consts[196];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_186);
            tmp_tuple_element_186 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_186 == NULL)) {
                tmp_tuple_element_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto tuple_build_exception_153;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_186);
            goto tuple_build_noexception_153;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_153:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_153:;
            PyList_SET_ITEM(tmp_assign_source_121, 72, tmp_list_element_7);
            tmp_tuple_element_187 = mod_consts[197];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_187);
            tmp_tuple_element_187 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_187 == NULL)) {
                tmp_tuple_element_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_187 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto tuple_build_exception_154;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_187);
            goto tuple_build_noexception_154;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_154:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_154:;
            PyList_SET_ITEM(tmp_assign_source_121, 73, tmp_list_element_7);
            tmp_tuple_element_188 = mod_consts[198];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_188);
            tmp_tuple_element_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_188 == NULL)) {
                tmp_tuple_element_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_188 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_155;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_188);
            goto tuple_build_noexception_155;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_155:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_155:;
            PyList_SET_ITEM(tmp_assign_source_121, 74, tmp_list_element_7);
            tmp_tuple_element_189 = mod_consts[99];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_189);
            tmp_tuple_element_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_189 == NULL)) {
                tmp_tuple_element_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_189 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_156;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_189);
            goto tuple_build_noexception_156;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_156:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_156:;
            PyList_SET_ITEM(tmp_assign_source_121, 75, tmp_list_element_7);
            tmp_tuple_element_190 = mod_consts[100];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_190);
            tmp_tuple_element_190 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_190 == NULL)) {
                tmp_tuple_element_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_190 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_157;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_190);
            goto tuple_build_noexception_157;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_157:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_157:;
            PyList_SET_ITEM(tmp_assign_source_121, 76, tmp_list_element_7);
            tmp_tuple_element_191 = mod_consts[199];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_191);
            tmp_tuple_element_191 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_191 == NULL)) {
                tmp_tuple_element_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_191 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_158;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_191);
            goto tuple_build_noexception_158;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_158:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_158:;
            PyList_SET_ITEM(tmp_assign_source_121, 77, tmp_list_element_7);
            tmp_tuple_element_192 = mod_consts[98];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_192);
            tmp_tuple_element_192 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_192 == NULL)) {
                tmp_tuple_element_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_192 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_159;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_192);
            goto tuple_build_noexception_159;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_159:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_159:;
            PyList_SET_ITEM(tmp_assign_source_121, 78, tmp_list_element_7);
            tmp_tuple_element_193 = mod_consts[200];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_193);
            tmp_tuple_element_193 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_193 == NULL)) {
                tmp_tuple_element_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto tuple_build_exception_160;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_193);
            goto tuple_build_noexception_160;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_160:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_160:;
            PyList_SET_ITEM(tmp_assign_source_121, 79, tmp_list_element_7);
            tmp_tuple_element_194 = mod_consts[201];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_194);
            tmp_tuple_element_194 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_194 == NULL)) {
                tmp_tuple_element_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto tuple_build_exception_161;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_194);
            goto tuple_build_noexception_161;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_161:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_161:;
            PyList_SET_ITEM(tmp_assign_source_121, 80, tmp_list_element_7);
            tmp_tuple_element_195 = mod_consts[97];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_195);
            tmp_tuple_element_195 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_195 == NULL)) {
                tmp_tuple_element_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_162;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_195);
            goto tuple_build_noexception_162;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_162:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_162:;
            PyList_SET_ITEM(tmp_assign_source_121, 81, tmp_list_element_7);
            tmp_tuple_element_196 = mod_consts[106];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_196);
            tmp_tuple_element_196 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_196 == NULL)) {
                tmp_tuple_element_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_196 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto tuple_build_exception_163;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_196);
            goto tuple_build_noexception_163;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_163:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_163:;
            PyList_SET_ITEM(tmp_assign_source_121, 82, tmp_list_element_7);
            tmp_tuple_element_197 = mod_consts[105];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_197);
            tmp_tuple_element_197 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_197 == NULL)) {
                tmp_tuple_element_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_197 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_164;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_197);
            goto tuple_build_noexception_164;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_164:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_164:;
            PyList_SET_ITEM(tmp_assign_source_121, 83, tmp_list_element_7);
            tmp_tuple_element_198 = mod_consts[202];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_198);
            tmp_tuple_element_198 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_198 == NULL)) {
                tmp_tuple_element_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_198 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto tuple_build_exception_165;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_198);
            goto tuple_build_noexception_165;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_165:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_165:;
            PyList_SET_ITEM(tmp_assign_source_121, 84, tmp_list_element_7);
            tmp_tuple_element_199 = mod_consts[108];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_199);
            tmp_tuple_element_199 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_199 == NULL)) {
                tmp_tuple_element_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_199 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_166;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_199);
            goto tuple_build_noexception_166;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_166:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_166:;
            PyList_SET_ITEM(tmp_assign_source_121, 85, tmp_list_element_7);
            tmp_tuple_element_200 = mod_consts[203];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_200);
            tmp_tuple_element_200 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_200 == NULL)) {
                tmp_tuple_element_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_200 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_167;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_200);
            goto tuple_build_noexception_167;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_167:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_167:;
            PyList_SET_ITEM(tmp_assign_source_121, 86, tmp_list_element_7);
            tmp_tuple_element_201 = mod_consts[107];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_201);
            tmp_tuple_element_201 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_201 == NULL)) {
                tmp_tuple_element_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_201 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_168;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_201);
            goto tuple_build_noexception_168;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_168:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_168:;
            PyList_SET_ITEM(tmp_assign_source_121, 87, tmp_list_element_7);
            tmp_tuple_element_202 = mod_consts[204];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_202);
            tmp_tuple_element_202 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_202 == NULL)) {
                tmp_tuple_element_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_202 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_169;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_202);
            goto tuple_build_noexception_169;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_169:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_169:;
            PyList_SET_ITEM(tmp_assign_source_121, 88, tmp_list_element_7);
            tmp_tuple_element_203 = mod_consts[104];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_203);
            tmp_tuple_element_203 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_tuple_element_203 == NULL)) {
                tmp_tuple_element_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_tuple_element_203 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto tuple_build_exception_170;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_203);
            goto tuple_build_noexception_170;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_170:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_170:;
            PyList_SET_ITEM(tmp_assign_source_121, 89, tmp_list_element_7);
            tmp_tuple_element_204 = mod_consts[205];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_204);
            tmp_tuple_element_204 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_tuple_element_204 == NULL)) {
                tmp_tuple_element_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_tuple_element_204 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto tuple_build_exception_171;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_204);
            goto tuple_build_noexception_171;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_171:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_171:;
            PyList_SET_ITEM(tmp_assign_source_121, 90, tmp_list_element_7);
            tmp_tuple_element_205 = mod_consts[206];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_205);
            tmp_tuple_element_205 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_205 == NULL)) {
                tmp_tuple_element_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_205 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto tuple_build_exception_172;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_205);
            goto tuple_build_noexception_172;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_172:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_172:;
            PyList_SET_ITEM(tmp_assign_source_121, 91, tmp_list_element_7);
            tmp_tuple_element_206 = mod_consts[207];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_206);
            tmp_tuple_element_206 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_206 == NULL)) {
                tmp_tuple_element_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_206 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto tuple_build_exception_173;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_206);
            goto tuple_build_noexception_173;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_173:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_173:;
            PyList_SET_ITEM(tmp_assign_source_121, 92, tmp_list_element_7);
            tmp_tuple_element_207 = mod_consts[208];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_52;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_called_value_53;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_args_element_value_40;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_207);
                tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_52 == NULL)) {
                    tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_35 == NULL)) {
                    tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_53 == NULL)) {
                    tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_37 == NULL)) {
                    tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 296;
                tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_37);
                if (tmp_args_element_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_54 == NULL)) {
                    tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_36);

                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[133]);

                if (unlikely(tmp_args_element_value_39 == NULL)) {
                    tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
                }

                if (tmp_args_element_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_36);

                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 296;
                tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_39);
                if (tmp_args_element_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_36);

                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_40 == NULL)) {
                    tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_36);
                    Py_DECREF(tmp_args_element_value_38);

                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 296;
                {
                    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_38, tmp_args_element_value_40};
                    tmp_tuple_element_207 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_52, call_args);
                }

                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_38);
                if (tmp_tuple_element_207 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_174;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_207);
            }
            goto tuple_build_noexception_174;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_174:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_174:;
            PyList_SET_ITEM(tmp_assign_source_121, 93, tmp_list_element_7);
            tmp_tuple_element_208 = mod_consts[209];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_208);
            tmp_tuple_element_208 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_208 == NULL)) {
                tmp_tuple_element_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_208 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto tuple_build_exception_175;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_208);
            goto tuple_build_noexception_175;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_175:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_175:;
            PyList_SET_ITEM(tmp_assign_source_121, 94, tmp_list_element_7);
            tmp_tuple_element_209 = mod_consts[210];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_209);
            tmp_tuple_element_209 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_209 == NULL)) {
                tmp_tuple_element_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto tuple_build_exception_176;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_209);
            goto tuple_build_noexception_176;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_176:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_176:;
            PyList_SET_ITEM(tmp_assign_source_121, 95, tmp_list_element_7);
            tmp_tuple_element_210 = mod_consts[211];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_210);
            tmp_tuple_element_210 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_210 == NULL)) {
                tmp_tuple_element_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_210 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto tuple_build_exception_177;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_210);
            goto tuple_build_noexception_177;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_177:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_177:;
            PyList_SET_ITEM(tmp_assign_source_121, 96, tmp_list_element_7);
            tmp_tuple_element_211 = mod_consts[212];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_211);
            tmp_tuple_element_211 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_211 == NULL)) {
                tmp_tuple_element_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_211 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto tuple_build_exception_178;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_211);
            goto tuple_build_noexception_178;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_178:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_178:;
            PyList_SET_ITEM(tmp_assign_source_121, 97, tmp_list_element_7);
            tmp_tuple_element_212 = mod_consts[213];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_212);
            tmp_tuple_element_212 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_212 == NULL)) {
                tmp_tuple_element_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_212 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto tuple_build_exception_179;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_212);
            goto tuple_build_noexception_179;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_179:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_179:;
            PyList_SET_ITEM(tmp_assign_source_121, 98, tmp_list_element_7);
            tmp_tuple_element_213 = mod_consts[214];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_213);
            tmp_tuple_element_213 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_213 == NULL)) {
                tmp_tuple_element_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_213 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto tuple_build_exception_180;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_213);
            goto tuple_build_noexception_180;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_180:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_180:;
            PyList_SET_ITEM(tmp_assign_source_121, 99, tmp_list_element_7);
            tmp_tuple_element_214 = mod_consts[215];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_214);
            tmp_tuple_element_214 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_214 == NULL)) {
                tmp_tuple_element_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_214 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto tuple_build_exception_181;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_214);
            goto tuple_build_noexception_181;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_181:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_181:;
            PyList_SET_ITEM(tmp_assign_source_121, 100, tmp_list_element_7);
            tmp_tuple_element_215 = mod_consts[216];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_215);
            tmp_tuple_element_215 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_215 == NULL)) {
                tmp_tuple_element_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_215 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto tuple_build_exception_182;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_215);
            goto tuple_build_noexception_182;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_182:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_182:;
            PyList_SET_ITEM(tmp_assign_source_121, 101, tmp_list_element_7);
            tmp_tuple_element_216 = mod_consts[217];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_55;
                PyObject *tmp_args_element_value_41;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_216);
                tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_55 == NULL)) {
                    tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;

                    goto tuple_build_exception_183;
                }
                tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[130]);

                if (unlikely(tmp_args_element_value_41 == NULL)) {
                    tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
                }

                if (tmp_args_element_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;

                    goto tuple_build_exception_183;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 305;
                tmp_tuple_element_216 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_41);
                if (tmp_tuple_element_216 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;

                    goto tuple_build_exception_183;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_216);
            }
            goto tuple_build_noexception_183;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_183:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_183:;
            PyList_SET_ITEM(tmp_assign_source_121, 102, tmp_list_element_7);
            tmp_tuple_element_217 = mod_consts[218];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_217);
            tmp_tuple_element_217 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_217 == NULL)) {
                tmp_tuple_element_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto tuple_build_exception_184;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_217);
            goto tuple_build_noexception_184;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_184:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_184:;
            PyList_SET_ITEM(tmp_assign_source_121, 103, tmp_list_element_7);
            tmp_tuple_element_218 = mod_consts[219];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_218);
            tmp_tuple_element_218 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_218 == NULL)) {
                tmp_tuple_element_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_218 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto tuple_build_exception_185;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_218);
            goto tuple_build_noexception_185;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_185:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_185:;
            PyList_SET_ITEM(tmp_assign_source_121, 104, tmp_list_element_7);
            tmp_tuple_element_219 = mod_consts[220];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_219);
            tmp_tuple_element_219 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_219 == NULL)) {
                tmp_tuple_element_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_219 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto tuple_build_exception_186;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_219);
            goto tuple_build_noexception_186;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_186:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_186:;
            PyList_SET_ITEM(tmp_assign_source_121, 105, tmp_list_element_7);
            tmp_tuple_element_220 = mod_consts[221];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_220);
            tmp_tuple_element_220 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_220 == NULL)) {
                tmp_tuple_element_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_220 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_187;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_220);
            goto tuple_build_noexception_187;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_187:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_187:;
            PyList_SET_ITEM(tmp_assign_source_121, 106, tmp_list_element_7);
            tmp_tuple_element_221 = mod_consts[222];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_221);
            tmp_tuple_element_221 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_221 == NULL)) {
                tmp_tuple_element_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_221 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_188;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_221);
            goto tuple_build_noexception_188;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_188:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_188:;
            PyList_SET_ITEM(tmp_assign_source_121, 107, tmp_list_element_7);
            tmp_tuple_element_222 = mod_consts[223];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_222);
            tmp_tuple_element_222 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_222 == NULL)) {
                tmp_tuple_element_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_222 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto tuple_build_exception_189;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_222);
            goto tuple_build_noexception_189;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_189:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_189:;
            PyList_SET_ITEM(tmp_assign_source_121, 108, tmp_list_element_7);
            tmp_tuple_element_223 = mod_consts[224];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_223);
            tmp_tuple_element_223 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_223 == NULL)) {
                tmp_tuple_element_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_223 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto tuple_build_exception_190;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_223);
            goto tuple_build_noexception_190;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_190:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_190:;
            PyList_SET_ITEM(tmp_assign_source_121, 109, tmp_list_element_7);
            tmp_tuple_element_224 = mod_consts[225];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_224);
            tmp_tuple_element_224 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_224 == NULL)) {
                tmp_tuple_element_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_224 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;

                goto tuple_build_exception_191;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_224);
            goto tuple_build_noexception_191;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_191:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_191:;
            PyList_SET_ITEM(tmp_assign_source_121, 110, tmp_list_element_7);
            tmp_tuple_element_225 = mod_consts[226];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_225);
            tmp_tuple_element_225 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_225 == NULL)) {
                tmp_tuple_element_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto tuple_build_exception_192;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_225);
            goto tuple_build_noexception_192;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_192:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_192:;
            PyList_SET_ITEM(tmp_assign_source_121, 111, tmp_list_element_7);
            tmp_tuple_element_226 = mod_consts[227];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_226);
            tmp_tuple_element_226 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_226 == NULL)) {
                tmp_tuple_element_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_226 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto tuple_build_exception_193;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_226);
            goto tuple_build_noexception_193;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_193:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_193:;
            PyList_SET_ITEM(tmp_assign_source_121, 112, tmp_list_element_7);
            tmp_tuple_element_227 = mod_consts[228];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_227);
            tmp_tuple_element_227 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_227 == NULL)) {
                tmp_tuple_element_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_227 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_194;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_227);
            goto tuple_build_noexception_194;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_194:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_194:;
            PyList_SET_ITEM(tmp_assign_source_121, 113, tmp_list_element_7);
            tmp_tuple_element_228 = mod_consts[229];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_228);
            tmp_tuple_element_228 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_228 == NULL)) {
                tmp_tuple_element_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_228 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_195;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_228);
            goto tuple_build_noexception_195;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_195:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_195:;
            PyList_SET_ITEM(tmp_assign_source_121, 114, tmp_list_element_7);
            tmp_tuple_element_229 = mod_consts[230];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_229);
            tmp_tuple_element_229 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_229 == NULL)) {
                tmp_tuple_element_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_229 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_196;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_229);
            goto tuple_build_noexception_196;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_196:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_196:;
            PyList_SET_ITEM(tmp_assign_source_121, 115, tmp_list_element_7);
            tmp_tuple_element_230 = mod_consts[231];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_230);
            tmp_tuple_element_230 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_230 == NULL)) {
                tmp_tuple_element_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_230 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_197;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_230);
            goto tuple_build_noexception_197;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_197:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_197:;
            PyList_SET_ITEM(tmp_assign_source_121, 116, tmp_list_element_7);
            tmp_tuple_element_231 = mod_consts[232];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_231);
            tmp_tuple_element_231 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_231 == NULL)) {
                tmp_tuple_element_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_231 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_198;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_231);
            goto tuple_build_noexception_198;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_198:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_198:;
            PyList_SET_ITEM(tmp_assign_source_121, 117, tmp_list_element_7);
            tmp_tuple_element_232 = mod_consts[233];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_called_value_57;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_args_element_value_46;
                PyObject *tmp_args_element_value_47;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_232);
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;

                    goto tuple_build_exception_199;
                }
                tmp_args_element_value_42 = Py_None;
                tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_57 == NULL)) {
                    tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_44 == NULL)) {
                    tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 322;
                tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_44);
                if (tmp_args_element_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_45 == NULL)) {
                    tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_43);

                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_46 == NULL)) {
                    tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_43);

                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_47 == NULL)) {
                    tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_43);

                    exception_lineno = 322;

                    goto tuple_build_exception_199;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 321;
                {
                    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                    tmp_tuple_element_232 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_56, call_args);
                }

                Py_DECREF(tmp_args_element_value_43);
                if (tmp_tuple_element_232 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;

                    goto tuple_build_exception_199;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_232);
            }
            goto tuple_build_noexception_199;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_199:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_199:;
            PyList_SET_ITEM(tmp_assign_source_121, 118, tmp_list_element_7);
            tmp_tuple_element_233 = mod_consts[234];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_233);
            tmp_tuple_element_233 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_233 == NULL)) {
                tmp_tuple_element_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_233 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_200;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_233);
            goto tuple_build_noexception_200;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_200:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_200:;
            PyList_SET_ITEM(tmp_assign_source_121, 119, tmp_list_element_7);
            tmp_tuple_element_234 = mod_consts[235];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_234);
            tmp_tuple_element_234 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_234 == NULL)) {
                tmp_tuple_element_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_234 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto tuple_build_exception_201;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_234);
            goto tuple_build_noexception_201;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_201:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_201:;
            PyList_SET_ITEM(tmp_assign_source_121, 120, tmp_list_element_7);
            tmp_tuple_element_235 = mod_consts[236];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_235);
            tmp_tuple_element_235 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_235 == NULL)) {
                tmp_tuple_element_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_235 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto tuple_build_exception_202;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_235);
            goto tuple_build_noexception_202;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_202:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_202:;
            PyList_SET_ITEM(tmp_assign_source_121, 121, tmp_list_element_7);
            tmp_tuple_element_236 = mod_consts[237];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_236);
            tmp_tuple_element_236 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_236 == NULL)) {
                tmp_tuple_element_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_236 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto tuple_build_exception_203;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_236);
            goto tuple_build_noexception_203;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_203:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_203:;
            PyList_SET_ITEM(tmp_assign_source_121, 122, tmp_list_element_7);
            tmp_tuple_element_237 = mod_consts[238];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_237);
            tmp_tuple_element_237 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_237 == NULL)) {
                tmp_tuple_element_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_237 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto tuple_build_exception_204;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_237);
            goto tuple_build_noexception_204;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_204:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_204:;
            PyList_SET_ITEM(tmp_assign_source_121, 123, tmp_list_element_7);
            tmp_tuple_element_238 = mod_consts[239];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_238);
            tmp_tuple_element_238 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_238 == NULL)) {
                tmp_tuple_element_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_238 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto tuple_build_exception_205;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_238);
            goto tuple_build_noexception_205;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_205:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_205:;
            PyList_SET_ITEM(tmp_assign_source_121, 124, tmp_list_element_7);
            tmp_tuple_element_239 = mod_consts[240];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_239);
            tmp_tuple_element_239 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_239 == NULL)) {
                tmp_tuple_element_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_239 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto tuple_build_exception_206;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_239);
            goto tuple_build_noexception_206;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_206:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_206:;
            PyList_SET_ITEM(tmp_assign_source_121, 125, tmp_list_element_7);
            tmp_tuple_element_240 = mod_consts[241];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_240);
            tmp_tuple_element_240 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_240 == NULL)) {
                tmp_tuple_element_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_240 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto tuple_build_exception_207;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_240);
            goto tuple_build_noexception_207;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_207:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_207:;
            PyList_SET_ITEM(tmp_assign_source_121, 126, tmp_list_element_7);
            tmp_tuple_element_241 = mod_consts[242];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_241);
            tmp_tuple_element_241 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_241 == NULL)) {
                tmp_tuple_element_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_241 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto tuple_build_exception_208;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_241);
            goto tuple_build_noexception_208;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_208:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_208:;
            PyList_SET_ITEM(tmp_assign_source_121, 127, tmp_list_element_7);
            tmp_tuple_element_242 = mod_consts[243];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_242);
            tmp_tuple_element_242 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_242 == NULL)) {
                tmp_tuple_element_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_242 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto tuple_build_exception_209;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_242);
            goto tuple_build_noexception_209;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_209:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_209:;
            PyList_SET_ITEM(tmp_assign_source_121, 128, tmp_list_element_7);
            tmp_tuple_element_243 = mod_consts[244];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_243);
            tmp_tuple_element_243 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_243 == NULL)) {
                tmp_tuple_element_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_243 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto tuple_build_exception_210;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_243);
            goto tuple_build_noexception_210;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_210:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_210:;
            PyList_SET_ITEM(tmp_assign_source_121, 129, tmp_list_element_7);
            tmp_tuple_element_244 = mod_consts[245];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_244);
            tmp_tuple_element_244 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_244 == NULL)) {
                tmp_tuple_element_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_244 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_211;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_244);
            goto tuple_build_noexception_211;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_211:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_211:;
            PyList_SET_ITEM(tmp_assign_source_121, 130, tmp_list_element_7);
            tmp_tuple_element_245 = mod_consts[246];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_245);
            tmp_tuple_element_245 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_245 == NULL)) {
                tmp_tuple_element_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_245 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto tuple_build_exception_212;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_245);
            goto tuple_build_noexception_212;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_212:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_212:;
            PyList_SET_ITEM(tmp_assign_source_121, 131, tmp_list_element_7);
            tmp_tuple_element_246 = mod_consts[247];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_246);
            tmp_tuple_element_246 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_246 == NULL)) {
                tmp_tuple_element_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_246 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto tuple_build_exception_213;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_246);
            goto tuple_build_noexception_213;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_213:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_213:;
            PyList_SET_ITEM(tmp_assign_source_121, 132, tmp_list_element_7);
            tmp_tuple_element_247 = mod_consts[248];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_247);
            tmp_tuple_element_247 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_247 == NULL)) {
                tmp_tuple_element_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_247 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto tuple_build_exception_214;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_247);
            goto tuple_build_noexception_214;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_214:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_214:;
            PyList_SET_ITEM(tmp_assign_source_121, 133, tmp_list_element_7);
            tmp_tuple_element_248 = mod_consts[249];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_248);
            tmp_tuple_element_248 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_248 == NULL)) {
                tmp_tuple_element_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_248 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_215;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_248);
            goto tuple_build_noexception_215;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_215:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_215:;
            PyList_SET_ITEM(tmp_assign_source_121, 134, tmp_list_element_7);
            tmp_tuple_element_249 = mod_consts[250];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_249);
            tmp_tuple_element_249 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_249 == NULL)) {
                tmp_tuple_element_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_249 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto tuple_build_exception_216;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_249);
            goto tuple_build_noexception_216;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_216:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_216:;
            PyList_SET_ITEM(tmp_assign_source_121, 135, tmp_list_element_7);
            tmp_tuple_element_250 = mod_consts[251];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_250);
            tmp_tuple_element_250 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_250 == NULL)) {
                tmp_tuple_element_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_250 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;

                goto tuple_build_exception_217;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_250);
            goto tuple_build_noexception_217;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_217:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_217:;
            PyList_SET_ITEM(tmp_assign_source_121, 136, tmp_list_element_7);
            tmp_tuple_element_251 = mod_consts[252];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_58;
                PyObject *tmp_args_element_value_48;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_251);
                tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_58 == NULL)) {
                    tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;

                    goto tuple_build_exception_218;
                }
                tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[131]);

                if (unlikely(tmp_args_element_value_48 == NULL)) {
                    tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
                }

                if (tmp_args_element_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;

                    goto tuple_build_exception_218;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 341;
                tmp_tuple_element_251 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_48);
                if (tmp_tuple_element_251 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;

                    goto tuple_build_exception_218;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_251);
            }
            goto tuple_build_noexception_218;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_218:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_218:;
            PyList_SET_ITEM(tmp_assign_source_121, 137, tmp_list_element_7);
            tmp_tuple_element_252 = mod_consts[253];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_252);
            tmp_tuple_element_252 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_252 == NULL)) {
                tmp_tuple_element_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_252 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto tuple_build_exception_219;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_252);
            goto tuple_build_noexception_219;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_219:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_219:;
            PyList_SET_ITEM(tmp_assign_source_121, 138, tmp_list_element_7);
            tmp_tuple_element_253 = mod_consts[254];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_2;
                PyObject *tmp_mult_expr_right_2;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_253);
                tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

                if (unlikely(tmp_mult_expr_left_2 == NULL)) {
                    tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                }

                if (tmp_mult_expr_left_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;

                    goto tuple_build_exception_220;
                }
                tmp_mult_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[134]);

                if (unlikely(tmp_mult_expr_right_2 == NULL)) {
                    tmp_mult_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
                }

                if (tmp_mult_expr_right_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;

                    goto tuple_build_exception_220;
                }
                tmp_tuple_element_253 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                if (tmp_tuple_element_253 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;

                    goto tuple_build_exception_220;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_253);
            }
            goto tuple_build_noexception_220;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_220:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_220:;
            PyList_SET_ITEM(tmp_assign_source_121, 139, tmp_list_element_7);
            tmp_tuple_element_254 = mod_consts[255];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_254);
            tmp_tuple_element_254 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_254 == NULL)) {
                tmp_tuple_element_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_254 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto tuple_build_exception_221;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_254);
            goto tuple_build_noexception_221;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_221:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_221:;
            PyList_SET_ITEM(tmp_assign_source_121, 140, tmp_list_element_7);
            tmp_tuple_element_255 = mod_consts[256];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_255);
            tmp_tuple_element_255 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_255 == NULL)) {
                tmp_tuple_element_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_255 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto tuple_build_exception_222;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_255);
            goto tuple_build_noexception_222;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_222:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_222:;
            PyList_SET_ITEM(tmp_assign_source_121, 141, tmp_list_element_7);
            tmp_tuple_element_256 = mod_consts[90];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_256);
            tmp_tuple_element_256 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_256 == NULL)) {
                tmp_tuple_element_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_256 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto tuple_build_exception_223;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_256);
            goto tuple_build_noexception_223;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_223:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_223:;
            PyList_SET_ITEM(tmp_assign_source_121, 142, tmp_list_element_7);
            tmp_tuple_element_257 = mod_consts[91];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_257);
            tmp_tuple_element_257 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_257 == NULL)) {
                tmp_tuple_element_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_257 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;

                goto tuple_build_exception_224;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_257);
            goto tuple_build_noexception_224;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_224:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_224:;
            PyList_SET_ITEM(tmp_assign_source_121, 143, tmp_list_element_7);
            tmp_tuple_element_258 = mod_consts[257];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_258);
            tmp_tuple_element_258 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_258 == NULL)) {
                tmp_tuple_element_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_258 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto tuple_build_exception_225;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_258);
            goto tuple_build_noexception_225;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_225:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_225:;
            PyList_SET_ITEM(tmp_assign_source_121, 144, tmp_list_element_7);
            tmp_tuple_element_259 = mod_consts[258];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_args_element_value_49;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_259);
                tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_59 == NULL)) {
                    tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;

                    goto tuple_build_exception_226;
                }
                tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[133]);

                if (unlikely(tmp_args_element_value_49 == NULL)) {
                    tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
                }

                if (tmp_args_element_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;

                    goto tuple_build_exception_226;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 349;
                tmp_tuple_element_259 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_49);
                if (tmp_tuple_element_259 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;

                    goto tuple_build_exception_226;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_259);
            }
            goto tuple_build_noexception_226;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_226:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_226:;
            PyList_SET_ITEM(tmp_assign_source_121, 145, tmp_list_element_7);
            tmp_tuple_element_260 = mod_consts[259];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_260);
            tmp_tuple_element_260 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_260 == NULL)) {
                tmp_tuple_element_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_260 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_227;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_260);
            goto tuple_build_noexception_227;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_227:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_227:;
            PyList_SET_ITEM(tmp_assign_source_121, 146, tmp_list_element_7);
            tmp_tuple_element_261 = mod_consts[260];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_261);
            tmp_tuple_element_261 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_261 == NULL)) {
                tmp_tuple_element_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_261 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto tuple_build_exception_228;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_261);
            goto tuple_build_noexception_228;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_228:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_228:;
            PyList_SET_ITEM(tmp_assign_source_121, 147, tmp_list_element_7);
            tmp_tuple_element_262 = mod_consts[261];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_262);
            tmp_tuple_element_262 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_262 == NULL)) {
                tmp_tuple_element_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_262 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto tuple_build_exception_229;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_262);
            goto tuple_build_noexception_229;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_229:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_229:;
            PyList_SET_ITEM(tmp_assign_source_121, 148, tmp_list_element_7);
            tmp_tuple_element_263 = mod_consts[262];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_263);
            tmp_tuple_element_263 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_263 == NULL)) {
                tmp_tuple_element_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_263 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto tuple_build_exception_230;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_263);
            goto tuple_build_noexception_230;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_230:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_230:;
            PyList_SET_ITEM(tmp_assign_source_121, 149, tmp_list_element_7);
            tmp_tuple_element_264 = mod_consts[263];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_60;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_called_value_61;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_called_value_62;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_called_value_63;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_args_element_value_60;
                PyObject *tmp_args_element_value_61;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_264);
                tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_60 == NULL)) {
                    tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_50 == NULL)) {
                    tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_231;
                }
                tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_61 == NULL)) {
                    tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_52 == NULL)) {
                    tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;

                    goto tuple_build_exception_231;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 355;
                tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_52);
                if (tmp_args_element_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;

                    goto tuple_build_exception_231;
                }
                tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_62 == NULL)) {
                    tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_54 == NULL)) {
                    tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_63 == NULL)) {
                    tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_56 == NULL)) {
                    tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 356;
                tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_56);
                if (tmp_args_element_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_57 == NULL)) {
                    tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);
                    Py_DECREF(tmp_args_element_value_55);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 356;
                {
                    PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_57};
                    tmp_args_element_value_53 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_62, call_args);
                }

                Py_DECREF(tmp_args_element_value_55);
                if (tmp_args_element_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);

                    exception_lineno = 356;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_58 == NULL)) {
                    tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 357;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_59 == NULL)) {
                    tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 357;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_60 == NULL)) {
                    tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 357;

                    goto tuple_build_exception_231;
                }
                tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_61 == NULL)) {
                    tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_51);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 357;

                    goto tuple_build_exception_231;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 354;
                {
                    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_53, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
                    tmp_tuple_element_264 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_60, call_args);
                }

                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_53);
                if (tmp_tuple_element_264 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;

                    goto tuple_build_exception_231;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_264);
            }
            goto tuple_build_noexception_231;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_231:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_231:;
            PyList_SET_ITEM(tmp_assign_source_121, 150, tmp_list_element_7);
            tmp_tuple_element_265 = mod_consts[264];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_64;
                PyObject *tmp_args_element_value_62;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_called_value_65;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_called_value_66;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_called_value_67;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_args_element_value_74;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_265);
                tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_64 == NULL)) {
                    tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 358;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_62 == NULL)) {
                    tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 358;

                    goto tuple_build_exception_232;
                }
                tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_65 == NULL)) {
                    tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_64 == NULL)) {
                    tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;

                    goto tuple_build_exception_232;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 359;
                tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_64);
                if (tmp_args_element_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;

                    goto tuple_build_exception_232;
                }
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_66 == NULL)) {
                    tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_67 == NULL)) {
                    tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_args_element_value_68 == NULL)) {
                    tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
                }

                if (tmp_args_element_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 360;
                tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_68);
                if (tmp_args_element_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_69 == NULL)) {
                    tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_67);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_70 == NULL)) {
                    tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_67);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_71 == NULL)) {
                    tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_67);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 360;
                {
                    PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
                    tmp_args_element_value_65 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_66, call_args);
                }

                Py_DECREF(tmp_args_element_value_67);
                if (tmp_args_element_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);

                    exception_lineno = 360;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_72 == NULL)) {
                    tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_65);

                    exception_lineno = 361;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_73 == NULL)) {
                    tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_65);

                    exception_lineno = 361;

                    goto tuple_build_exception_232;
                }
                tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_args_element_value_74 == NULL)) {
                    tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_args_element_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_63);
                    Py_DECREF(tmp_args_element_value_65);

                    exception_lineno = 361;

                    goto tuple_build_exception_232;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 358;
                {
                    PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_65, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
                    tmp_tuple_element_265 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_64, call_args);
                }

                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_65);
                if (tmp_tuple_element_265 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 358;

                    goto tuple_build_exception_232;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_265);
            }
            goto tuple_build_noexception_232;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_232:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_232:;
            PyList_SET_ITEM(tmp_assign_source_121, 151, tmp_list_element_7);
            tmp_tuple_element_266 = mod_consts[265];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_266);
            tmp_tuple_element_266 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_266 == NULL)) {
                tmp_tuple_element_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_266 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto tuple_build_exception_233;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_266);
            goto tuple_build_noexception_233;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_233:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_233:;
            PyList_SET_ITEM(tmp_assign_source_121, 152, tmp_list_element_7);
            tmp_tuple_element_267 = mod_consts[92];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_267);
            tmp_tuple_element_267 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_267 == NULL)) {
                tmp_tuple_element_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_267 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto tuple_build_exception_234;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_267);
            goto tuple_build_noexception_234;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_234:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_234:;
            PyList_SET_ITEM(tmp_assign_source_121, 153, tmp_list_element_7);
            tmp_tuple_element_268 = mod_consts[93];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_268);
            tmp_tuple_element_268 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_268 == NULL)) {
                tmp_tuple_element_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_268 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto tuple_build_exception_235;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_268);
            goto tuple_build_noexception_235;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_235:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_235:;
            PyList_SET_ITEM(tmp_assign_source_121, 154, tmp_list_element_7);
            tmp_tuple_element_269 = mod_consts[266];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_269);
            tmp_tuple_element_269 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_269 == NULL)) {
                tmp_tuple_element_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_269 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto tuple_build_exception_236;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_269);
            goto tuple_build_noexception_236;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_236:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_236:;
            PyList_SET_ITEM(tmp_assign_source_121, 155, tmp_list_element_7);
            tmp_tuple_element_270 = mod_consts[267];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_270);
            tmp_tuple_element_270 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_270 == NULL)) {
                tmp_tuple_element_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_270 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;

                goto tuple_build_exception_237;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_270);
            goto tuple_build_noexception_237;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_237:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_237:;
            PyList_SET_ITEM(tmp_assign_source_121, 156, tmp_list_element_7);
            tmp_tuple_element_271 = mod_consts[268];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_271);
            tmp_tuple_element_271 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_271 == NULL)) {
                tmp_tuple_element_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_271 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto tuple_build_exception_238;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_271);
            goto tuple_build_noexception_238;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_238:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_238:;
            PyList_SET_ITEM(tmp_assign_source_121, 157, tmp_list_element_7);
            tmp_tuple_element_272 = mod_consts[269];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_68;
                PyObject *tmp_args_element_value_75;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_272);
                tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_68 == NULL)) {
                    tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;

                    goto tuple_build_exception_239;
                }
                tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_args_element_value_75 == NULL)) {
                    tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_args_element_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;

                    goto tuple_build_exception_239;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 368;
                tmp_tuple_element_272 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_75);
                if (tmp_tuple_element_272 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;

                    goto tuple_build_exception_239;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_272);
            }
            goto tuple_build_noexception_239;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_239:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_239:;
            PyList_SET_ITEM(tmp_assign_source_121, 158, tmp_list_element_7);
            tmp_tuple_element_273 = mod_consts[270];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_273);
            tmp_tuple_element_273 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_273 == NULL)) {
                tmp_tuple_element_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_273 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto tuple_build_exception_240;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_273);
            goto tuple_build_noexception_240;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_240:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_240:;
            PyList_SET_ITEM(tmp_assign_source_121, 159, tmp_list_element_7);
            tmp_tuple_element_274 = mod_consts[271];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_274);
            tmp_tuple_element_274 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_tuple_element_274 == NULL)) {
                tmp_tuple_element_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_tuple_element_274 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto tuple_build_exception_241;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_274);
            goto tuple_build_noexception_241;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_241:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_241:;
            PyList_SET_ITEM(tmp_assign_source_121, 160, tmp_list_element_7);
            tmp_tuple_element_275 = mod_consts[272];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_275);
            tmp_tuple_element_275 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_275 == NULL)) {
                tmp_tuple_element_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_275 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto tuple_build_exception_242;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_275);
            goto tuple_build_noexception_242;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_242:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_242:;
            PyList_SET_ITEM(tmp_assign_source_121, 161, tmp_list_element_7);
            tmp_tuple_element_276 = mod_consts[109];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_276);
            tmp_tuple_element_276 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_276 == NULL)) {
                tmp_tuple_element_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_276 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto tuple_build_exception_243;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_276);
            goto tuple_build_noexception_243;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_243:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_243:;
            PyList_SET_ITEM(tmp_assign_source_121, 162, tmp_list_element_7);
            tmp_tuple_element_277 = mod_consts[273];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_277);
            tmp_tuple_element_277 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_277 == NULL)) {
                tmp_tuple_element_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_277 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto tuple_build_exception_244;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_277);
            goto tuple_build_noexception_244;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_244:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_244:;
            PyList_SET_ITEM(tmp_assign_source_121, 163, tmp_list_element_7);
            tmp_tuple_element_278 = mod_consts[274];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_278);
            tmp_tuple_element_278 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_278 == NULL)) {
                tmp_tuple_element_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_278 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto tuple_build_exception_245;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_278);
            goto tuple_build_noexception_245;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_245:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_245:;
            PyList_SET_ITEM(tmp_assign_source_121, 164, tmp_list_element_7);
            tmp_tuple_element_279 = mod_consts[275];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_279);
            tmp_tuple_element_279 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_279 == NULL)) {
                tmp_tuple_element_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_279 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto tuple_build_exception_246;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_279);
            goto tuple_build_noexception_246;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_246:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_246:;
            PyList_SET_ITEM(tmp_assign_source_121, 165, tmp_list_element_7);
            tmp_tuple_element_280 = mod_consts[276];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_280);
            tmp_tuple_element_280 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_280 == NULL)) {
                tmp_tuple_element_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_280 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_247;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_280);
            goto tuple_build_noexception_247;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_247:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_247:;
            PyList_SET_ITEM(tmp_assign_source_121, 166, tmp_list_element_7);
            tmp_tuple_element_281 = mod_consts[277];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_281);
            tmp_tuple_element_281 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_281 == NULL)) {
                tmp_tuple_element_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_281 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_248;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_281);
            goto tuple_build_noexception_248;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_248:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_248:;
            PyList_SET_ITEM(tmp_assign_source_121, 167, tmp_list_element_7);
            tmp_tuple_element_282 = mod_consts[278];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_282);
            tmp_tuple_element_282 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_282 == NULL)) {
                tmp_tuple_element_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_282 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_249;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_282);
            goto tuple_build_noexception_249;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_249:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_249:;
            PyList_SET_ITEM(tmp_assign_source_121, 168, tmp_list_element_7);
            tmp_tuple_element_283 = mod_consts[279];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_283);
            tmp_tuple_element_283 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_283 == NULL)) {
                tmp_tuple_element_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_283 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;

                goto tuple_build_exception_250;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_283);
            goto tuple_build_noexception_250;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_250:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_250:;
            PyList_SET_ITEM(tmp_assign_source_121, 169, tmp_list_element_7);
            tmp_tuple_element_284 = mod_consts[280];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_284);
            tmp_tuple_element_284 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_284 == NULL)) {
                tmp_tuple_element_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_284 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto tuple_build_exception_251;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_284);
            goto tuple_build_noexception_251;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_251:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_251:;
            PyList_SET_ITEM(tmp_assign_source_121, 170, tmp_list_element_7);
            tmp_tuple_element_285 = mod_consts[281];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_285);
            tmp_tuple_element_285 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_285 == NULL)) {
                tmp_tuple_element_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_285 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto tuple_build_exception_252;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_285);
            goto tuple_build_noexception_252;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_252:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_252:;
            PyList_SET_ITEM(tmp_assign_source_121, 171, tmp_list_element_7);
            tmp_tuple_element_286 = mod_consts[282];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_286);
            tmp_tuple_element_286 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_286 == NULL)) {
                tmp_tuple_element_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_286 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto tuple_build_exception_253;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_286);
            goto tuple_build_noexception_253;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_253:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_253:;
            PyList_SET_ITEM(tmp_assign_source_121, 172, tmp_list_element_7);
            tmp_tuple_element_287 = mod_consts[283];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_287);
            tmp_tuple_element_287 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_287 == NULL)) {
                tmp_tuple_element_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_287 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto tuple_build_exception_254;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_287);
            goto tuple_build_noexception_254;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_254:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_254:;
            PyList_SET_ITEM(tmp_assign_source_121, 173, tmp_list_element_7);
            tmp_tuple_element_288 = mod_consts[111];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_288);
            tmp_tuple_element_288 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_288 == NULL)) {
                tmp_tuple_element_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_288 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto tuple_build_exception_255;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_288);
            goto tuple_build_noexception_255;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_255:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_255:;
            PyList_SET_ITEM(tmp_assign_source_121, 174, tmp_list_element_7);
            tmp_tuple_element_289 = mod_consts[284];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_289);
            tmp_tuple_element_289 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_289 == NULL)) {
                tmp_tuple_element_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_289 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto tuple_build_exception_256;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_289);
            goto tuple_build_noexception_256;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_256:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_256:;
            PyList_SET_ITEM(tmp_assign_source_121, 175, tmp_list_element_7);
            tmp_tuple_element_290 = mod_consts[285];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_69;
                PyObject *tmp_args_element_value_76;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_290);
                tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_69 == NULL)) {
                    tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 387;

                    goto tuple_build_exception_257;
                }
                tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_args_element_value_76 == NULL)) {
                    tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_args_element_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 387;

                    goto tuple_build_exception_257;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 387;
                tmp_tuple_element_290 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_76);
                if (tmp_tuple_element_290 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 387;

                    goto tuple_build_exception_257;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_290);
            }
            goto tuple_build_noexception_257;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_257:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_257:;
            PyList_SET_ITEM(tmp_assign_source_121, 176, tmp_list_element_7);
            tmp_tuple_element_291 = mod_consts[286];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_70;
                PyObject *tmp_args_element_value_77;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_291);
                tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_70 == NULL)) {
                    tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 388;

                    goto tuple_build_exception_258;
                }
                tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_args_element_value_77 == NULL)) {
                    tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_args_element_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 388;

                    goto tuple_build_exception_258;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 388;
                tmp_tuple_element_291 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_77);
                if (tmp_tuple_element_291 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 388;

                    goto tuple_build_exception_258;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_291);
            }
            goto tuple_build_noexception_258;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_258:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_258:;
            PyList_SET_ITEM(tmp_assign_source_121, 177, tmp_list_element_7);
            tmp_tuple_element_292 = mod_consts[287];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_292);
            tmp_tuple_element_292 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_tuple_element_292 == NULL)) {
                tmp_tuple_element_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_tuple_element_292 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto tuple_build_exception_259;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_292);
            goto tuple_build_noexception_259;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_259:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_259:;
            PyList_SET_ITEM(tmp_assign_source_121, 178, tmp_list_element_7);
            tmp_tuple_element_293 = mod_consts[288];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_293);
            tmp_tuple_element_293 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_tuple_element_293 == NULL)) {
                tmp_tuple_element_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_tuple_element_293 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;

                goto tuple_build_exception_260;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_293);
            goto tuple_build_noexception_260;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_260:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_260:;
            PyList_SET_ITEM(tmp_assign_source_121, 179, tmp_list_element_7);
            tmp_tuple_element_294 = mod_consts[289];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_71;
                PyObject *tmp_args_element_value_78;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_294);
                tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_71 == NULL)) {
                    tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;

                    goto tuple_build_exception_261;
                }
                tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[46]);

                if (unlikely(tmp_args_element_value_78 == NULL)) {
                    tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
                }

                if (tmp_args_element_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;

                    goto tuple_build_exception_261;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 391;
                tmp_tuple_element_294 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_78);
                if (tmp_tuple_element_294 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;

                    goto tuple_build_exception_261;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_294);
            }
            goto tuple_build_noexception_261;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_261:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_261:;
            PyList_SET_ITEM(tmp_assign_source_121, 180, tmp_list_element_7);
            tmp_tuple_element_295 = mod_consts[290];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_295);
            tmp_tuple_element_295 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_295 == NULL)) {
                tmp_tuple_element_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_295 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto tuple_build_exception_262;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_295);
            goto tuple_build_noexception_262;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_262:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_262:;
            PyList_SET_ITEM(tmp_assign_source_121, 181, tmp_list_element_7);
            tmp_tuple_element_296 = mod_consts[291];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_72;
                PyObject *tmp_args_element_value_79;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_296);
                tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_72 == NULL)) {
                    tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;

                    goto tuple_build_exception_263;
                }
                tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[59]);

                if (unlikely(tmp_args_element_value_79 == NULL)) {
                    tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                }

                if (tmp_args_element_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;

                    goto tuple_build_exception_263;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 393;
                tmp_tuple_element_296 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_79);
                if (tmp_tuple_element_296 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;

                    goto tuple_build_exception_263;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_296);
            }
            goto tuple_build_noexception_263;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_263:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_263:;
            PyList_SET_ITEM(tmp_assign_source_121, 182, tmp_list_element_7);
            tmp_tuple_element_297 = mod_consts[292];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_297);
            tmp_tuple_element_297 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_297 == NULL)) {
                tmp_tuple_element_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_297 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_264;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_297);
            goto tuple_build_noexception_264;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_264:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_264:;
            PyList_SET_ITEM(tmp_assign_source_121, 183, tmp_list_element_7);
            tmp_tuple_element_298 = mod_consts[110];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_298);
            tmp_tuple_element_298 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_298 == NULL)) {
                tmp_tuple_element_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_298 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto tuple_build_exception_265;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_298);
            goto tuple_build_noexception_265;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_265:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_265:;
            PyList_SET_ITEM(tmp_assign_source_121, 184, tmp_list_element_7);
            tmp_tuple_element_299 = mod_consts[293];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_299);
            tmp_tuple_element_299 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_tuple_element_299 == NULL)) {
                tmp_tuple_element_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_tuple_element_299 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto tuple_build_exception_266;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_299);
            goto tuple_build_noexception_266;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_266:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_266:;
            PyList_SET_ITEM(tmp_assign_source_121, 185, tmp_list_element_7);
            tmp_tuple_element_300 = mod_consts[294];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_73;
                PyObject *tmp_args_element_value_80;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_300);
                tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_called_value_73 == NULL)) {
                    tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_called_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;

                    goto tuple_build_exception_267;
                }
                tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[59]);

                if (unlikely(tmp_args_element_value_80 == NULL)) {
                    tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                }

                if (tmp_args_element_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;

                    goto tuple_build_exception_267;
                }
                frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 397;
                tmp_tuple_element_300 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_80);
                if (tmp_tuple_element_300 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;

                    goto tuple_build_exception_267;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_300);
            }
            goto tuple_build_noexception_267;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_267:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_267:;
            PyList_SET_ITEM(tmp_assign_source_121, 186, tmp_list_element_7);
            tmp_tuple_element_301 = mod_consts[295];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_301);
            tmp_tuple_element_301 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_301 == NULL)) {
                tmp_tuple_element_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_301 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto tuple_build_exception_268;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_301);
            goto tuple_build_noexception_268;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_268:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_268:;
            PyList_SET_ITEM(tmp_assign_source_121, 187, tmp_list_element_7);
            tmp_tuple_element_302 = mod_consts[296];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_302);
            tmp_tuple_element_302 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_302 == NULL)) {
                tmp_tuple_element_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_302 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;

                goto tuple_build_exception_269;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_302);
            goto tuple_build_noexception_269;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_269:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_269:;
            PyList_SET_ITEM(tmp_assign_source_121, 188, tmp_list_element_7);
            tmp_tuple_element_303 = mod_consts[297];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_303);
            tmp_tuple_element_303 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_tuple_element_303 == NULL)) {
                tmp_tuple_element_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_tuple_element_303 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto tuple_build_exception_270;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_303);
            goto tuple_build_noexception_270;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_270:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_270:;
            PyList_SET_ITEM(tmp_assign_source_121, 189, tmp_list_element_7);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assign_source_121);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_121);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_304;
        PyObject *tmp_kwargs_value_25;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[76]);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_304 = mod_consts[38];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_304);
        tmp_tuple_element_304 = mod_consts[77];
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_304);
        tmp_tuple_element_304 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_304 == NULL)) {
            tmp_tuple_element_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_tuple_element_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto tuple_build_exception_271;
        }
        PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_304);
        tmp_tuple_element_304 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[298]);

        if (unlikely(tmp_tuple_element_304 == NULL)) {
            tmp_tuple_element_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[298]);
        }

        if (tmp_tuple_element_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto tuple_build_exception_271;
        }
        PyTuple_SET_ITEM0(tmp_args_value_25, 3, tmp_tuple_element_304);
        goto tuple_build_noexception_271;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_271:;
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_271:;
        tmp_kwargs_value_25 = DICT_COPY(mod_consts[299]);
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 403;
        tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_value_25);
        Py_DECREF(tmp_kwargs_value_25);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_value_26;
        PyObject *tmp_tuple_element_305;
        PyObject *tmp_kwargs_value_26;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[76]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_305 = mod_consts[38];
        tmp_args_value_26 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_305);
        tmp_tuple_element_305 = mod_consts[79];
        PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_305);
        tmp_tuple_element_305 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_305 == NULL)) {
            tmp_tuple_element_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_tuple_element_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto tuple_build_exception_272;
        }
        PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_305);
        tmp_tuple_element_305 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[298]);

        if (unlikely(tmp_tuple_element_305 == NULL)) {
            tmp_tuple_element_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[298]);
        }

        if (tmp_tuple_element_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto tuple_build_exception_272;
        }
        PyTuple_SET_ITEM0(tmp_args_value_26, 3, tmp_tuple_element_305);
        goto tuple_build_noexception_272;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_272:;
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_272:;
        tmp_kwargs_value_26 = DICT_COPY(mod_consts[300]);
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 405;
        tmp_call_result_5 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_26, tmp_kwargs_value_26);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_26);
        Py_DECREF(tmp_kwargs_value_26);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_80;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 418;
        tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_81);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_4, 0, tmp_list_element_8);
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[305]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[306], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_81;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 419;
        tmp_args_element_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_83);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 419;
        tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_9);
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[307]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[306], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_82;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_84 == NULL)) {
            tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 420;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_84);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[308]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[40], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_83;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 421;
        tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_85);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_10);
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[308]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[306], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_84;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 422;
        tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_86);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_87;
            PyList_SET_ITEM(tmp_assattr_value_8, 0, tmp_list_element_11);
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto list_build_exception_8;
            }
            tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_87 == NULL)) {
                tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto list_build_exception_8;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 422;
            tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_87);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_8, 1, tmp_list_element_11);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[309]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[306], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_85;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_88 == NULL)) {
            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 423;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_88);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[310]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[40], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_86;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_10, 0, tmp_list_element_12);
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[310]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[306], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_expression_value_87;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[311]);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_88;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[312]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[40], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_13;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_89;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 427;
        tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_89);
        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_85;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_92;
            PyList_SET_ITEM(tmp_assattr_value_12, 0, tmp_list_element_13);
            tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_85 == NULL)) {
                tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto list_build_exception_9;
            }
            tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_args_element_value_90 == NULL)) {
                tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_args_element_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto list_build_exception_9;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 428;
            tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_90);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_12, 1, tmp_list_element_13);
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_9;
            }
            tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_87 == NULL)) {
                tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_9;
            }
            tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[311]);

            if (unlikely(tmp_args_element_value_92 == NULL)) {
                tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[311]);
            }

            if (tmp_args_element_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_9;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 429;
            tmp_args_element_value_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_92);
            if (tmp_args_element_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_9;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 429;
            tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_91);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_12, 2, tmp_list_element_13);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[312]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[306], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_90;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_94 == NULL)) {
            tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 430;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_94);
        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 430;
        tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_13, 0, tmp_list_element_14);
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[313]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[306], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_91;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_95 == NULL)) {
            tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 431;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_95);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[314]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[40], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_92;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_96 == NULL)) {
            tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 432;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_96);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_15, 0, tmp_list_element_15);
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[315]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[306], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_93;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[316]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[40], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_94;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 435;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_97);
        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_element_value_98;
            PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_16);
            tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_93 == NULL)) {
                tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto list_build_exception_10;
            }
            tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[133]);

            if (unlikely(tmp_args_element_value_98 == NULL)) {
                tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
            }

            if (tmp_args_element_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto list_build_exception_10;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 435;
            tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_98);
            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_17, 1, tmp_list_element_16);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[316]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[306], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_95;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[317]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[40], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_96;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 438;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_99);
        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_100;
            PyList_SET_ITEM(tmp_assattr_value_19, 0, tmp_list_element_17);
            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_95 == NULL)) {
                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;

                goto list_build_exception_11;
            }
            tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_100 == NULL)) {
                tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;

                goto list_build_exception_11;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 438;
            tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_100);
            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_19, 1, tmp_list_element_17);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[317]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[306], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_18;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_97;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_101 == NULL)) {
            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 440;
        tmp_list_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_101);
        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_20, 0, tmp_list_element_18);
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[318]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[306], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_98;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_102 == NULL)) {
            tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 441;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_102);
        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[319]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[40], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_19;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_99;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_103 == NULL)) {
            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_args_element_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 442;
        tmp_list_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_103);
        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_22, 0, tmp_list_element_19);
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[319]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[306], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_list_element_20;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_called_value_100;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_100;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_105 == NULL)) {
            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 443;
        tmp_args_element_value_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_105);
        if (tmp_args_element_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 443;
        tmp_list_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_104);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_23, 0, tmp_list_element_20);
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[313]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[306], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_101;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[320]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[40], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_list_element_21;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_102;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_106 == NULL)) {
            tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 445;
        tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_101, tmp_args_element_value_106);
        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_element_value_107;
            PyList_SET_ITEM(tmp_assattr_value_25, 0, tmp_list_element_21);
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_12;
            }
            tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_args_element_value_107 == NULL)) {
                tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            if (tmp_args_element_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_12;
            }
            frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 446;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_107);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_25, 1, tmp_list_element_21);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[320]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[306], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_103;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[321]);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[40], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_104;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_27, 0, tmp_list_element_22);
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[321]);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[306], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_105;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_108 == NULL)) {
            tmp_args_element_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_args_element_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame.f_lineno = 449;
        tmp_assattr_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_108);
        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[322]);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[40], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_106;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_29 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_29, 0, tmp_list_element_23);
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[322]);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[306], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bed2d3ee8c27ff13b57eb52a918f9e45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bed2d3ee8c27ff13b57eb52a918f9e45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bed2d3ee8c27ff13b57eb52a918f9e45, exception_lineno);
    }



    assertFrameObject(frame_bed2d3ee8c27ff13b57eb52a918f9e45);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = MAKE_LIST6(mod_consts[323]);
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_125);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.codecs.ffmpeg_lib.libavcodec", false);

    Py_INCREF(module_pyglet$media$codecs$ffmpeg_lib$libavcodec);
    return module_pyglet$media$codecs$ffmpeg_lib$libavcodec;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavcodec, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$codecs$ffmpeg_lib$libavcodec", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
