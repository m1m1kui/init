/* Generated code for Python module 'pyglet.libs.darwin.quartzkey'
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

/* The "module_pyglet$libs$darwin$quartzkey" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$darwin$quartzkey;
PyDictObject *moduledict_pyglet$libs$darwin$quartzkey;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[410];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[410];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.darwin.quartzkey"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 410; i++) {
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
void checkModuleConstants_pyglet$libs$darwin$quartzkey(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 410; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ff461e429043be19f0c2e5a99d9005c5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[407]); CHECK_OBJECT(module_filename_obj);
    codeobj_ff461e429043be19f0c2e5a99d9005c5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[408], mod_consts[408], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


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

function_impl_code functable_pyglet$libs$darwin$quartzkey[] = {

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

    function_impl_code *current = functable_pyglet$libs$darwin$quartzkey;
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

    if (offset > sizeof(functable_pyglet$libs$darwin$quartzkey) || offset < 0) {
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
        functable_pyglet$libs$darwin$quartzkey[offset],
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
        module_pyglet$libs$darwin$quartzkey,
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
PyObject *modulecode_pyglet$libs$darwin$quartzkey(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.darwin.quartzkey");

    // Store the module for future use.
    module_pyglet$libs$darwin$quartzkey = module;

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
        PRINT_STRING("pyglet.libs.darwin.quartzkey: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.darwin.quartzkey: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$darwin$quartzkey\n");

    moduledict_pyglet$libs$darwin$quartzkey = MODULE_DICT(module_pyglet$libs$darwin$quartzkey);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$darwin$quartzkey,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$darwin$quartzkey,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[409]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$darwin$quartzkey,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$darwin$quartzkey,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$darwin$quartzkey,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$darwin$quartzkey);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$darwin$quartzkey);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ff461e429043be19f0c2e5a99d9005c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_ff461e429043be19f0c2e5a99d9005c5 = MAKE_MODULE_FRAME(codeobj_ff461e429043be19f0c2e5a99d9005c5, module_pyglet$libs$darwin$quartzkey);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ff461e429043be19f0c2e5a99d9005c5);
    assert(Py_REFCNT(frame_ff461e429043be19f0c2e5a99d9005c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$darwin$quartzkey;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_ff461e429043be19f0c2e5a99d9005c5->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$libs$darwin$quartzkey,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[229]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = _PyDict_NewPresized( 64 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[230]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[231]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[232]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[233]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[234]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[235]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[236]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[237]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[238]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[239]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[240]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[241]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[242]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[243]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[244]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[245]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[246]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[247]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[248]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[249]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[250]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_1;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[251]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[252]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[253]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[254]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[89]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[255]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[256]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[257]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[95]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_1;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[258]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_1;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[259]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_1;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[260]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[261]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[127]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[262]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[263]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[264]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[133]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[265]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[135]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[266]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_1;
            }
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[267]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[268]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[269]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[164]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[270]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[166]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[271]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[168]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[272]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[170]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[273]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[192]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_1;
            }
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[274]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[194]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_1;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[275]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_1;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[276]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_1;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[277]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_1;
            }
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[278]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_1;
            }
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[279]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_1;
            }
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[280]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[206]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_1;
            }
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[281]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[208]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_1;
            }
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[282]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[210]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[283]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[212]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[212]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[284]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[214]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[285]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[286]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[218]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[287]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[288]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[222]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[222]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_1;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[289]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[224]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[290]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[226]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[291]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[228]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[228]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[292]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_115, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_115);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_65;
        tmp_dict_key_2 = mod_consts[294];
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[283]);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_116 = _PyDict_NewPresized( 71 );
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[295];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[296]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[297];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[298]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[299];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[300]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[299];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[301]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[302];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[303]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[304];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[305]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[306];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[307]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[308];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[309]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[310];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[311]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[312];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[313]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[314];
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[315]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[316];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[317]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[318];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[319]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[320];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[321]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[322];
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[323]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[324];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[325]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[326];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[327]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[328];
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[329]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[330];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[331]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[332];
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[333]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[334];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[335]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[336];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[337]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[338];
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[339]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[340];
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[341]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[342];
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[343]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[344];
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[345]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[346];
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[347]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[348];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[349]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[350];
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[351]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[352];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[353]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[354];
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[355]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[356];
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[357]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[358];
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[359]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[360];
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[361]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[362];
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[259]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[363];
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[364]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[365];
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[366]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[367];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[368]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[369];
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[370]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[369];
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[371]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[372];
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[372]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[373];
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[373]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[374];
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[374]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[375];
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[375]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[376];
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[376]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[377];
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[377]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[378];
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[378]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[379];
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[379]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[380];
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[380]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[381];
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[381]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[382];
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[382]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[383];
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[383]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[384];
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[384]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[385];
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[385]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[386];
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[386]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[387];
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[387]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[388];
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[388]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[389];
            tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_123 == NULL)) {
                tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[389]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[390];
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[390]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[391];
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[391]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[392];
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[392]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[393];
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[393]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[394];
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[394]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[395];
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[395]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[396];
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[396]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[397];
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[397]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[398];
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[399]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[400];
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[401]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[402];
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[403]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[404];
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[405]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_116, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_116);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_116);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff461e429043be19f0c2e5a99d9005c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff461e429043be19f0c2e5a99d9005c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff461e429043be19f0c2e5a99d9005c5, exception_lineno);
    }



    assertFrameObject(frame_ff461e429043be19f0c2e5a99d9005c5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.darwin.quartzkey", false);

    Py_INCREF(module_pyglet$libs$darwin$quartzkey);
    return module_pyglet$libs$darwin$quartzkey;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$quartzkey, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$darwin$quartzkey", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
