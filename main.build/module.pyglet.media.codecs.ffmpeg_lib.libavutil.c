/* Generated code for Python module 'pyglet.media.codecs.ffmpeg_lib.libavutil'
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

/* The "module_pyglet$media$codecs$ffmpeg_lib$libavutil" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$codecs$ffmpeg_lib$libavutil;
PyDictObject *moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.codecs.ffmpeg_lib.libavutil"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
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
void checkModuleConstants_pyglet$media$codecs$ffmpeg_lib$libavutil(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a62757bac58fe2b022f6b4fb7ea0f91f;
static PyCodeObject *codeobj_b29b1097e2276656770e21e072fcfab0;
static PyCodeObject *codeobj_cad3ffcef96f6110f7faf0fe62a52054;
static PyCodeObject *codeobj_d871472312a37854c2888c3288dfd57d;
static PyCodeObject *codeobj_6cf2884d2a79fb722189c9a79daf25a7;
static PyCodeObject *codeobj_db4265624a7896589b5b935d3a4e160c;
static PyCodeObject *codeobj_108583b929bb7d7270c9c97688935213;
static PyCodeObject *codeobj_d2432529eac1a7f820f8889a3c54722d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[194]); CHECK_OBJECT(module_filename_obj);
    codeobj_a62757bac58fe2b022f6b4fb7ea0f91f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[195], mod_consts[195], NULL, NULL, 0, 0, 0);
    codeobj_b29b1097e2276656770e21e072fcfab0 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[196], NULL, 0, 0, 0);
    codeobj_cad3ffcef96f6110f7faf0fe62a52054 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[196], NULL, 0, 0, 0);
    codeobj_d871472312a37854c2888c3288dfd57d = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[196], NULL, 0, 0, 0);
    codeobj_6cf2884d2a79fb722189c9a79daf25a7 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[196], NULL, 0, 0, 0);
    codeobj_db4265624a7896589b5b935d3a4e160c = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[196], NULL, 0, 0, 0);
    codeobj_108583b929bb7d7270c9c97688935213 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[196], NULL, 0, 0, 0);
    codeobj_d2432529eac1a7f820f8889a3c54722d = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[197], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__();


// The module function definitions.
static PyObject *impl_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d2432529eac1a7f820f8889a3c54722d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2432529eac1a7f820f8889a3c54722d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2432529eac1a7f820f8889a3c54722d)) {
        Py_XDECREF(cache_frame_d2432529eac1a7f820f8889a3c54722d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2432529eac1a7f820f8889a3c54722d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2432529eac1a7f820f8889a3c54722d = MAKE_FUNCTION_FRAME(tstate, codeobj_d2432529eac1a7f820f8889a3c54722d, module_pyglet$media$codecs$ffmpeg_lib$libavutil, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d2432529eac1a7f820f8889a3c54722d->m_type_description == NULL);
    frame_d2432529eac1a7f820f8889a3c54722d = cache_frame_d2432529eac1a7f820f8889a3c54722d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d2432529eac1a7f820f8889a3c54722d);
    assert(Py_REFCNT(frame_d2432529eac1a7f820f8889a3c54722d) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[3];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2432529eac1a7f820f8889a3c54722d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2432529eac1a7f820f8889a3c54722d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2432529eac1a7f820f8889a3c54722d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2432529eac1a7f820f8889a3c54722d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d2432529eac1a7f820f8889a3c54722d == cache_frame_d2432529eac1a7f820f8889a3c54722d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d2432529eac1a7f820f8889a3c54722d);
        cache_frame_d2432529eac1a7f820f8889a3c54722d = NULL;
    }

    assertFrameObject(frame_d2432529eac1a7f820f8889a3c54722d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_d2432529eac1a7f820f8889a3c54722d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$codecs$ffmpeg_lib$libavutil,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_pyglet$media$codecs$ffmpeg_lib$libavutil[] = {
    impl_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__,
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

    function_impl_code *current = functable_pyglet$media$codecs$ffmpeg_lib$libavutil;
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

    if (offset > sizeof(functable_pyglet$media$codecs$ffmpeg_lib$libavutil) || offset < 0) {
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
        functable_pyglet$media$codecs$ffmpeg_lib$libavutil[offset],
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
        module_pyglet$media$codecs$ffmpeg_lib$libavutil,
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
PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavutil(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.codecs.ffmpeg_lib.libavutil");

    // Store the module for future use.
    module_pyglet$media$codecs$ffmpeg_lib$libavutil = module;

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
        PRINT_STRING("pyglet.media.codecs.ffmpeg_lib.libavutil: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.codecs.ffmpeg_lib.libavutil: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$codecs$ffmpeg_lib$libavutil\n");

    moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil = MODULE_DICT(module_pyglet$media$codecs$ffmpeg_lib$libavutil);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$codecs$ffmpeg_lib$libavutil);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$codecs$ffmpeg_lib$libavutil);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_a62757bac58fe2b022f6b4fb7ea0f91f;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d871472312a37854c2888c3288dfd57d_2;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90 = NULL;
    struct Nuitka_FrameObject *frame_b29b1097e2276656770e21e072fcfab0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98 = NULL;
    struct Nuitka_FrameObject *frame_cad3ffcef96f6110f7faf0fe62a52054_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106 = NULL;
    struct Nuitka_FrameObject *frame_db4265624a7896589b5b935d3a4e160c_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113 = NULL;
    struct Nuitka_FrameObject *frame_6cf2884d2a79fb722189c9a79daf25a7_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124 = NULL;
    struct Nuitka_FrameObject *frame_108583b929bb7d7270c9c97688935213_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134 = NULL;
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
    PyObject *locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_2);
    }
    frame_a62757bac58fe2b022f6b4fb7ea0f91f = MAKE_MODULE_FRAME(codeobj_a62757bac58fe2b022f6b4fb7ea0f91f, module_pyglet$media$codecs$ffmpeg_lib$libavutil);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a62757bac58fe2b022f6b4fb7ea0f91f);
    assert(Py_REFCNT(frame_a62757bac58fe2b022f6b4fb7ea0f91f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[13],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[13]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[15],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[16],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[16]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[17],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[17]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[18],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[18]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[19],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[19]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[20],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[20]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_13 == NULL));
        assert(tmp_import_from_3__module == NULL);
        Py_INCREF(tmp_assign_source_13);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[21],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[21]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[22],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[22]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[23],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[23]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_16);
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
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[24],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[24]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 41;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        tmp_level_value_2 = mod_consts[14];
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 42;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[29],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[2];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[30];
        tmp_level_value_3 = mod_consts[31];
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 43;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil,
                mod_consts[32],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 45;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[33]);

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 47;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[37], 0), mod_consts[38]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[41], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

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
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[39];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 54;
        tmp_rshift_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[40]);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[43];
        tmp_args_element_value_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assign_source_46 == NULL)) {
            tmp_assign_source_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_46);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
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


            exception_lineno = 84;

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
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

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
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[81]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[82];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 84;
        tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

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
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_4 = mod_consts[85];
        tmp_default_value_1 = mod_consts[86];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_4, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[85]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

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


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 84;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_52;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        frame_d871472312a37854c2888c3288dfd57d_2 = MAKE_CLASS_FRAME(tstate, codeobj_d871472312a37854c2888c3288dfd57d, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d871472312a37854c2888c3288dfd57d_2);
        assert(Py_REFCNT(frame_d871472312a37854c2888c3288dfd57d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[90];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[18]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[91];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[18]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
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
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d871472312a37854c2888c3288dfd57d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d871472312a37854c2888c3288dfd57d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d871472312a37854c2888c3288dfd57d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d871472312a37854c2888c3288dfd57d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d871472312a37854c2888c3288dfd57d_2);

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


                exception_lineno = 84;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[82];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 84;
            tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_53 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__1_AVChannelLayout_84 = NULL;
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
        exception_lineno = 84;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_53);
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
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
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


            exception_lineno = 90;

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
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[81]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[94];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 90;
        tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_name_value_5 = mod_consts[85];
        tmp_default_value_2 = mod_consts[86];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_5, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[85]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 90;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_60;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_9;
        }
        frame_b29b1097e2276656770e21e072fcfab0_3 = MAKE_CLASS_FRAME(tstate, codeobj_b29b1097e2276656770e21e072fcfab0, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b29b1097e2276656770e21e072fcfab0_3);
        assert(Py_REFCNT(frame_b29b1097e2276656770e21e072fcfab0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_10;
            tmp_tuple_element_10 = mod_consts[95];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_7;
                PyObject *tmp_args_element_value_3;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
                tmp_called_value_7 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[16]);

                if (tmp_called_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_7 == NULL)) {
                            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_called_value_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_3 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[21]);

                if (tmp_args_element_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_args_element_value_3 == NULL)) {
                            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_args_element_value_3 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_7);

                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_3);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_b29b1097e2276656770e21e072fcfab0_3->m_frame.f_lineno = 92;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_11;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_11 = mod_consts[96];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[18]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b29b1097e2276656770e21e072fcfab0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b29b1097e2276656770e21e072fcfab0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b29b1097e2276656770e21e072fcfab0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b29b1097e2276656770e21e072fcfab0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_b29b1097e2276656770e21e072fcfab0_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
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


                exception_lineno = 90;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_12 = mod_consts[94];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_12 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 90;
            tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_61 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__2_AVBuffer_90 = NULL;
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
        exception_lineno = 90;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_61);
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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        tmp_assign_source_63 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_64 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
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


            exception_lineno = 98;

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
        tmp_subscript_value_3 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

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
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[81]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[97];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_14 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 98;
        tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_20 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

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
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_name_value_6 = mod_consts[85];
        tmp_default_value_3 = mod_consts[86];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_6, tmp_default_value_3);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[85]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 98;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_68;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_12;
        }
        frame_cad3ffcef96f6110f7faf0fe62a52054_4 = MAKE_CLASS_FRAME(tstate, codeobj_cad3ffcef96f6110f7faf0fe62a52054, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_cad3ffcef96f6110f7faf0fe62a52054_4);
        assert(Py_REFCNT(frame_cad3ffcef96f6110f7faf0fe62a52054_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = mod_consts[98];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_4;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_16);
                tmp_called_value_10 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[16]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_args_element_value_4 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[94]);

                if (tmp_args_element_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_args_element_value_4 == NULL)) {
                            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
                        }

                        if (tmp_args_element_value_4 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_10);

                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_args_element_value_4);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_cad3ffcef96f6110f7faf0fe62a52054_4->m_frame.f_lineno = 100;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_4);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_4);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_tuple_element_18;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_17 = mod_consts[95];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_11;
                    PyObject *tmp_args_element_value_5;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_17);
                    tmp_called_value_11 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[16]);

                    if (tmp_called_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                            if (unlikely(tmp_called_value_11 == NULL)) {
                                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                            }

                            if (tmp_called_value_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 101;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_value_11);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_args_element_value_5 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[21]);

                    if (tmp_args_element_value_5 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_5 == NULL)) {
                                tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_5 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_11);

                                exception_lineno = 101;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_args_element_value_5);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_cad3ffcef96f6110f7faf0fe62a52054_4->m_frame.f_lineno = 101;
                    tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_5);
                    Py_DECREF(tmp_called_value_11);
                    Py_DECREF(tmp_args_element_value_5);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_18 = mod_consts[96];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[18]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_18);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cad3ffcef96f6110f7faf0fe62a52054_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cad3ffcef96f6110f7faf0fe62a52054_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cad3ffcef96f6110f7faf0fe62a52054_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cad3ffcef96f6110f7faf0fe62a52054_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_cad3ffcef96f6110f7faf0fe62a52054_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
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


                exception_lineno = 98;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_19 = mod_consts[97];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_19 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 98;
            tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_69 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__3_AVBufferRef_98 = NULL;
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
        exception_lineno = 98;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_69);
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
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        tmp_assign_source_71 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_72 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
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


            exception_lineno = 106;

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
        tmp_subscript_value_4 = mod_consts[14];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_25 = tmp_class_creation_4__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[81]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        tmp_tuple_element_21 = mod_consts[99];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_21 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 106;
        tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_26 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

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
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_name_value_7 = mod_consts[85];
        tmp_default_value_4 = mod_consts[86];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_7, tmp_default_value_4);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[85]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 106;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_76;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_15;
        }
        frame_db4265624a7896589b5b935d3a4e160c_5 = MAKE_CLASS_FRAME(tstate, codeobj_db4265624a7896589b5b935d3a4e160c, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_db4265624a7896589b5b935d3a4e160c_5);
        assert(Py_REFCNT(frame_db4265624a7896589b5b935d3a4e160c_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_23;
            tmp_tuple_element_23 = mod_consts[100];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[13]);

            if (tmp_tuple_element_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_tuple_element_23 == NULL)) {
                        tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                    }

                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    Py_INCREF(tmp_tuple_element_23);
                } else {
                    goto tuple_build_exception_12;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_23);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_24;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_24 = mod_consts[101];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[13]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_db4265624a7896589b5b935d3a4e160c_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_db4265624a7896589b5b935d3a4e160c_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_db4265624a7896589b5b935d3a4e160c_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_db4265624a7896589b5b935d3a4e160c_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_db4265624a7896589b5b935d3a4e160c_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
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


                exception_lineno = 106;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_25 = mod_consts[99];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_25 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 106;
            tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_77 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__4_AVDictionaryEntry_106 = NULL;
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
        exception_lineno = 106;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_77);
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
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_26;
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        tmp_assign_source_79 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_26);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_80 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
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


            exception_lineno = 113;

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
        tmp_subscript_value_5 = mod_consts[14];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

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
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_31 = tmp_class_creation_5__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[81]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        tmp_tuple_element_27 = mod_consts[102];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_27 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 113;
        tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_32 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

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
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_33 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[85];
        tmp_default_value_5 = mod_consts[86];
        tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_8, tmp_default_value_5);
        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_34 == NULL));
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[85]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 113;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_84;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_18;
        }
        frame_6cf2884d2a79fb722189c9a79daf25a7_6 = MAKE_CLASS_FRAME(tstate, codeobj_6cf2884d2a79fb722189c9a79daf25a7, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6cf2884d2a79fb722189c9a79daf25a7_6);
        assert(Py_REFCNT(frame_6cf2884d2a79fb722189c9a79daf25a7_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_29;
            tmp_tuple_element_29 = mod_consts[103];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[18]);

            if (tmp_tuple_element_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_tuple_element_29 == NULL)) {
                        tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_29);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_29);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_30;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_30 = mod_consts[104];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_16;
                    PyObject *tmp_args_element_value_6;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_30);
                    tmp_called_value_16 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[16]);

                    if (tmp_called_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                            if (unlikely(tmp_called_value_16 == NULL)) {
                                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                            }

                            if (tmp_called_value_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 116;
                                type_description_2 = "o";
                                goto tuple_build_exception_16;
                            }
                            Py_INCREF(tmp_called_value_16);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    tmp_args_element_value_6 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[99]);

                    if (tmp_args_element_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[99]);

                            if (unlikely(tmp_args_element_value_6 == NULL)) {
                                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                            }

                            if (tmp_args_element_value_6 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_16);

                                exception_lineno = 116;
                                type_description_2 = "o";
                                goto tuple_build_exception_16;
                            }
                            Py_INCREF(tmp_args_element_value_6);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    frame_6cf2884d2a79fb722189c9a79daf25a7_6->m_frame.f_lineno = 116;
                    tmp_tuple_element_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_6);
                    Py_DECREF(tmp_called_value_16);
                    Py_DECREF(tmp_args_element_value_6);
                    if (tmp_tuple_element_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_30);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6cf2884d2a79fb722189c9a79daf25a7_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6cf2884d2a79fb722189c9a79daf25a7_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6cf2884d2a79fb722189c9a79daf25a7_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6cf2884d2a79fb722189c9a79daf25a7_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_6cf2884d2a79fb722189c9a79daf25a7_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
        skip_nested_handling_5:;
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


                exception_lineno = 113;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_17 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_31 = mod_consts[102];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_31 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 113;
            tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_85 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__5_AVDictionary_113 = NULL;
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
        exception_lineno = 113;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_85);
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
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_32;
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_assign_source_87 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_32);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_88 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
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


            exception_lineno = 120;

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
        tmp_subscript_value_6 = mod_consts[14];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_36 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

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
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_37 = tmp_class_creation_6__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[81]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_tuple_element_33 = mod_consts[105];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_33 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 120;
        tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_38 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

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
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_39 = tmp_class_creation_6__metaclass;
        tmp_name_value_9 = mod_consts[85];
        tmp_default_value_6 = mod_consts[86];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_9, tmp_default_value_6);
        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[85]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 120;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_92;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
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


                exception_lineno = 120;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_19 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_35 = mod_consts[105];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_35 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 120;
            tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_21;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_93 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__6_AVClass_120 = NULL;
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
        exception_lineno = 120;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_93);
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
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_36;
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        tmp_assign_source_95 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_36);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
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


            exception_lineno = 124;

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
        tmp_subscript_value_7 = mod_consts[14];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_42 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

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
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_43 = tmp_class_creation_7__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[81]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        tmp_tuple_element_37 = mod_consts[106];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_37 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 124;
        tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_44 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

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
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_45 = tmp_class_creation_7__metaclass;
        tmp_name_value_10 = mod_consts[85];
        tmp_default_value_7 = mod_consts[86];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_10, tmp_default_value_7);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[85]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 124;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_100;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_24;
        }
        frame_108583b929bb7d7270c9c97688935213_7 = MAKE_CLASS_FRAME(tstate, codeobj_108583b929bb7d7270c9c97688935213, module_pyglet$media$codecs$ffmpeg_lib$libavutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_108583b929bb7d7270c9c97688935213_7);
        assert(Py_REFCNT(frame_108583b929bb7d7270c9c97688935213_7) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_39;
            tmp_tuple_element_39 = mod_consts[1];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[18]);

            if (tmp_tuple_element_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_tuple_element_39 == NULL)) {
                        tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    Py_INCREF(tmp_tuple_element_39);
                } else {
                    goto tuple_build_exception_19;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_39);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_40;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_40 = mod_consts[4];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_40);
                tmp_tuple_element_40 = PyObject_GetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[18]);

                if (tmp_tuple_element_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_tuple_element_40 == NULL)) {
                            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_tuple_element_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_40);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_40);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$codecs$ffmpeg_lib$libavutil$$$function__1___repr__();

        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_108583b929bb7d7270c9c97688935213_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_108583b929bb7d7270c9c97688935213_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_108583b929bb7d7270c9c97688935213_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_108583b929bb7d7270c9c97688935213_7,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_108583b929bb7d7270c9c97688935213_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_24;
        skip_nested_handling_6:;
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


                exception_lineno = 124;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_24;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_21 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_41 = mod_consts[106];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_41 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 124;
            tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto try_except_handler_24;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_101 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__7_AVRational_124 = NULL;
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
        exception_lineno = 124;
        goto try_except_handler_22;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_101);
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
        PyObject *tmp_assign_source_103;
        PyObject *tmp_tuple_element_42;
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_42 == NULL)) {
            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        tmp_assign_source_103 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_42);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_104 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
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


            exception_lineno = 134;

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
        tmp_subscript_value_8 = mod_consts[14];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_106 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_48 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

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
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_49 = tmp_class_creation_8__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[81]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        tmp_tuple_element_43 = mod_consts[109];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_43 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 134;
        tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_50 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

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
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_51 = tmp_class_creation_8__metaclass;
        tmp_name_value_11 = mod_consts[85];
        tmp_default_value_8 = mod_consts[86];
        tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_11, tmp_default_value_8);
        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[85]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 134;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_108;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_109;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

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


                exception_lineno = 134;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_27;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_23 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_45 = mod_consts[109];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_45 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 134;
            tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_27;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_110;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_109 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_109);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__8_AVFrameSideData_134 = NULL;
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
        exception_lineno = 134;
        goto try_except_handler_25;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_109);
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
        PyObject *tmp_assign_source_111;
        PyObject *tmp_tuple_element_46;
        tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_46 == NULL)) {
            tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        tmp_assign_source_111 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_111, 0, tmp_tuple_element_46);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_112 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
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


            exception_lineno = 138;

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
        tmp_subscript_value_9 = mod_consts[14];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_114 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_114;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_54 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

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
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_55 = tmp_class_creation_9__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[81]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        tmp_tuple_element_47 = mod_consts[110];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_47 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 138;
        tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_115;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_56 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

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
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_57 = tmp_class_creation_9__metaclass;
        tmp_name_value_12 = mod_consts[85];
        tmp_default_value_9 = mod_consts[86];
        tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_12, tmp_default_value_9);
        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_58 == NULL));
            tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[85]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 138;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_116;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_117;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

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


                exception_lineno = 138;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_30;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_118;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_25 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_49 = mod_consts[110];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_49 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_49);
            tmp_tuple_element_49 = locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 138;
            tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_30;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_118;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_117 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_117);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138 = NULL;
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

        Py_DECREF(locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138);
        locals_pyglet$media$codecs$ffmpeg_lib$libavutil$$$class__9_AVFrame_138 = NULL;
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
        exception_lineno = 138;
        goto try_except_handler_28;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_117);
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
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_list_element_7;
        PyObject *tmp_tuple_element_50;
        tmp_tuple_element_50 = mod_consts[95];
        tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_7;
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_50);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_23;
            }
            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_args_element_value_7 == NULL)) {
                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_23;
            }
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 142;
            tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_7);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_23;
            }
            tmp_mult_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_mult_expr_right_1 == NULL)) {
                tmp_mult_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            if (tmp_mult_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_mult_expr_left_1);

                exception_lineno = 142;

                goto tuple_build_exception_23;
            }
            tmp_tuple_element_50 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_list_element_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_assign_source_119 = MAKE_LIST_EMPTY(55);
        {
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
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
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
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
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
            PyObject *tmp_tuple_element_101;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_tuple_element_104;
            PyList_SET_ITEM(tmp_assign_source_119, 0, tmp_list_element_7);
            tmp_tuple_element_51 = mod_consts[111];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_2;
                PyObject *tmp_mult_expr_right_2;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_51);
                tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_mult_expr_left_2 == NULL)) {
                    tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_mult_expr_left_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto tuple_build_exception_24;
                }
                tmp_mult_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[74]);

                if (unlikely(tmp_mult_expr_right_2 == NULL)) {
                    tmp_mult_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                }

                if (tmp_mult_expr_right_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto tuple_build_exception_24;
                }
                tmp_tuple_element_51 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                if (tmp_tuple_element_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_51);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            PyList_SET_ITEM(tmp_assign_source_119, 1, tmp_list_element_7);
            tmp_tuple_element_52 = mod_consts[112];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_27;
                PyObject *tmp_args_element_value_8;
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_element_value_9;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_52);
                tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_27 == NULL)) {
                    tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_25;
                }
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_25;
                }
                tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_args_element_value_9 == NULL)) {
                    tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                }

                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_25;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 144;
                tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_9);
                if (tmp_args_element_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_25;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 144;
                tmp_tuple_element_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_8);
                if (tmp_tuple_element_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;

                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_52);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyList_SET_ITEM(tmp_assign_source_119, 2, tmp_list_element_7);
            tmp_tuple_element_53 = mod_consts[113];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_53);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            PyList_SET_ITEM(tmp_assign_source_119, 3, tmp_list_element_7);
            tmp_tuple_element_54 = mod_consts[114];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyList_SET_ITEM(tmp_assign_source_119, 4, tmp_list_element_7);
            tmp_tuple_element_55 = mod_consts[115];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_55);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            PyList_SET_ITEM(tmp_assign_source_119, 5, tmp_list_element_7);
            tmp_tuple_element_56 = mod_consts[116];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            PyList_SET_ITEM(tmp_assign_source_119, 6, tmp_list_element_7);
            tmp_tuple_element_57 = mod_consts[117];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_57);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            PyList_SET_ITEM(tmp_assign_source_119, 7, tmp_list_element_7);
            tmp_tuple_element_58 = mod_consts[118];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_58);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyList_SET_ITEM(tmp_assign_source_119, 8, tmp_list_element_7);
            tmp_tuple_element_59 = mod_consts[119];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_59);
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            PyList_SET_ITEM(tmp_assign_source_119, 9, tmp_list_element_7);
            tmp_tuple_element_60 = mod_consts[120];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_60);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyList_SET_ITEM(tmp_assign_source_119, 10, tmp_list_element_7);
            tmp_tuple_element_61 = mod_consts[121];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_61);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            PyList_SET_ITEM(tmp_assign_source_119, 11, tmp_list_element_7);
            tmp_tuple_element_62 = mod_consts[122];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_62);
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyList_SET_ITEM(tmp_assign_source_119, 12, tmp_list_element_7);
            tmp_tuple_element_63 = mod_consts[123];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_63);
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            PyList_SET_ITEM(tmp_assign_source_119, 13, tmp_list_element_7);
            tmp_tuple_element_64 = mod_consts[124];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_64);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_assign_source_119, 14, tmp_list_element_7);
            tmp_tuple_element_65 = mod_consts[125];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_65);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_assign_source_119, 15, tmp_list_element_7);
            tmp_tuple_element_66 = mod_consts[126];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_66);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_assign_source_119, 16, tmp_list_element_7);
            tmp_tuple_element_67 = mod_consts[127];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_assign_source_119, 17, tmp_list_element_7);
            tmp_tuple_element_68 = mod_consts[128];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_3;
                PyObject *tmp_mult_expr_right_3;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_68);
                tmp_mult_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_mult_expr_left_3 == NULL)) {
                    tmp_mult_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                }

                if (tmp_mult_expr_left_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;

                    goto tuple_build_exception_41;
                }
                tmp_mult_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[74]);

                if (unlikely(tmp_mult_expr_right_3 == NULL)) {
                    tmp_mult_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                }

                if (tmp_mult_expr_right_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;

                    goto tuple_build_exception_41;
                }
                tmp_tuple_element_68 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
                if (tmp_tuple_element_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_68);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_assign_source_119, 18, tmp_list_element_7);
            tmp_tuple_element_69 = mod_consts[129];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            PyList_SET_ITEM(tmp_assign_source_119, 19, tmp_list_element_7);
            tmp_tuple_element_70 = mod_consts[130];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_70);
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            PyList_SET_ITEM(tmp_assign_source_119, 20, tmp_list_element_7);
            tmp_tuple_element_71 = mod_consts[131];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_71);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_assign_source_119, 21, tmp_list_element_7);
            tmp_tuple_element_72 = mod_consts[132];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_72);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            PyList_SET_ITEM(tmp_assign_source_119, 22, tmp_list_element_7);
            tmp_tuple_element_73 = mod_consts[133];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_73);
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyList_SET_ITEM(tmp_assign_source_119, 23, tmp_list_element_7);
            tmp_tuple_element_74 = mod_consts[134];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_74);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_assign_source_119, 24, tmp_list_element_7);
            tmp_tuple_element_75 = mod_consts[135];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_75);
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_assign_source_119, 25, tmp_list_element_7);
            tmp_tuple_element_76 = mod_consts[136];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_4;
                PyObject *tmp_mult_expr_right_4;
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_10;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_76);
                tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_29 == NULL)) {
                    tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_49;
                }
                tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_10 == NULL)) {
                    tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_49;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 168;
                tmp_mult_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_10);
                if (tmp_mult_expr_left_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_49;
                }
                tmp_mult_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[74]);

                if (unlikely(tmp_mult_expr_right_4 == NULL)) {
                    tmp_mult_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                }

                if (tmp_mult_expr_right_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_mult_expr_left_4);

                    exception_lineno = 168;

                    goto tuple_build_exception_49;
                }
                tmp_tuple_element_76 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
                Py_DECREF(tmp_mult_expr_left_4);
                if (tmp_tuple_element_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_49;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_76);
            }
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_assign_source_119, 26, tmp_list_element_7);
            tmp_tuple_element_77 = mod_consts[137];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_12;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_77);
                tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_30 == NULL)) {
                    tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_50;
                }
                tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_31 == NULL)) {
                    tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_50;
                }
                tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_12 == NULL)) {
                    tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_50;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 169;
                tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_12);
                if (tmp_args_element_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_50;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 169;
                tmp_tuple_element_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_tuple_element_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_50;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_77);
            }
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_assign_source_119, 27, tmp_list_element_7);
            tmp_tuple_element_78 = mod_consts[138];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_78);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            PyList_SET_ITEM(tmp_assign_source_119, 28, tmp_list_element_7);
            tmp_tuple_element_79 = mod_consts[139];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_called_value_33;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_79);
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_52;
                }
                tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_33 == NULL)) {
                    tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_52;
                }
                tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_14 == NULL)) {
                    tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_52;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 171;
                tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_14);
                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_52;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 171;
                tmp_tuple_element_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_tuple_element_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto tuple_build_exception_52;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_79);
            }
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            PyList_SET_ITEM(tmp_assign_source_119, 29, tmp_list_element_7);
            tmp_tuple_element_80 = mod_consts[140];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_80);
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_53:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            PyList_SET_ITEM(tmp_assign_source_119, 30, tmp_list_element_7);
            tmp_tuple_element_81 = mod_consts[141];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_81);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_81);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            PyList_SET_ITEM(tmp_assign_source_119, 31, tmp_list_element_7);
            tmp_tuple_element_82 = mod_consts[142];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_82);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyList_SET_ITEM(tmp_assign_source_119, 32, tmp_list_element_7);
            tmp_tuple_element_83 = mod_consts[143];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_83);
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            PyList_SET_ITEM(tmp_assign_source_119, 33, tmp_list_element_7);
            tmp_tuple_element_84 = mod_consts[144];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_84);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            PyList_SET_ITEM(tmp_assign_source_119, 34, tmp_list_element_7);
            tmp_tuple_element_85 = mod_consts[145];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_85);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            PyList_SET_ITEM(tmp_assign_source_119, 35, tmp_list_element_7);
            tmp_tuple_element_86 = mod_consts[146];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_86);
            tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_86 == NULL)) {
                tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_86);
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            PyList_SET_ITEM(tmp_assign_source_119, 36, tmp_list_element_7);
            tmp_tuple_element_87 = mod_consts[147];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_87);
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_87);
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            PyList_SET_ITEM(tmp_assign_source_119, 37, tmp_list_element_7);
            tmp_tuple_element_88 = mod_consts[148];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_88);
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            PyList_SET_ITEM(tmp_assign_source_119, 38, tmp_list_element_7);
            tmp_tuple_element_89 = mod_consts[149];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_89);
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            PyList_SET_ITEM(tmp_assign_source_119, 39, tmp_list_element_7);
            tmp_tuple_element_90 = mod_consts[150];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_34;
                PyObject *tmp_args_element_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_90);
                tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_34 == NULL)) {
                    tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 183;

                    goto tuple_build_exception_63;
                }
                tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[102]);

                if (unlikely(tmp_args_element_value_15 == NULL)) {
                    tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
                }

                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 183;

                    goto tuple_build_exception_63;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 183;
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_15);
                if (tmp_tuple_element_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 183;

                    goto tuple_build_exception_63;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_90);
            }
            goto tuple_build_noexception_63;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_63:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_63:;
            PyList_SET_ITEM(tmp_assign_source_119, 40, tmp_list_element_7);
            tmp_tuple_element_91 = mod_consts[151];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_91);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_91);
            goto tuple_build_noexception_64;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_64:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_64:;
            PyList_SET_ITEM(tmp_assign_source_119, 41, tmp_list_element_7);
            tmp_tuple_element_92 = mod_consts[152];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_92);
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_92);
            goto tuple_build_noexception_65;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_65:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_65:;
            PyList_SET_ITEM(tmp_assign_source_119, 42, tmp_list_element_7);
            tmp_tuple_element_93 = mod_consts[153];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_93);
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_93);
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            PyList_SET_ITEM(tmp_assign_source_119, 43, tmp_list_element_7);
            tmp_tuple_element_94 = mod_consts[154];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_element_value_16;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_94);
                tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_35 == NULL)) {
                    tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;

                    goto tuple_build_exception_67;
                }
                tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_args_element_value_16 == NULL)) {
                    tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                }

                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;

                    goto tuple_build_exception_67;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 187;
                tmp_tuple_element_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_16);
                if (tmp_tuple_element_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;

                    goto tuple_build_exception_67;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_94);
            }
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            PyList_SET_ITEM(tmp_assign_source_119, 44, tmp_list_element_7);
            tmp_tuple_element_95 = mod_consts[155];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_95);
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_95);
            goto tuple_build_noexception_68;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_68:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_68:;
            PyList_SET_ITEM(tmp_assign_source_119, 45, tmp_list_element_7);
            tmp_tuple_element_96 = mod_consts[156];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_96);
            tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_tuple_element_96 == NULL)) {
                tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_tuple_element_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_96);
            goto tuple_build_noexception_69;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_69:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_69:;
            PyList_SET_ITEM(tmp_assign_source_119, 46, tmp_list_element_7);
            tmp_tuple_element_97 = mod_consts[157];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_36;
                PyObject *tmp_args_element_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_97);
                tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_36 == NULL)) {
                    tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;

                    goto tuple_build_exception_70;
                }
                tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_17 == NULL)) {
                    tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;

                    goto tuple_build_exception_70;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 190;
                tmp_tuple_element_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_17);
                if (tmp_tuple_element_97 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;

                    goto tuple_build_exception_70;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_97);
            }
            goto tuple_build_noexception_70;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_70:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_70:;
            PyList_SET_ITEM(tmp_assign_source_119, 47, tmp_list_element_7);
            tmp_tuple_element_98 = mod_consts[158];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_37;
                PyObject *tmp_args_element_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_98);
                tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_37 == NULL)) {
                    tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;

                    goto tuple_build_exception_71;
                }
                tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_18 == NULL)) {
                    tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;

                    goto tuple_build_exception_71;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 191;
                tmp_tuple_element_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_18);
                if (tmp_tuple_element_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;

                    goto tuple_build_exception_71;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_98);
            }
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_71:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            PyList_SET_ITEM(tmp_assign_source_119, 48, tmp_list_element_7);
            tmp_tuple_element_99 = mod_consts[159];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_38;
                PyObject *tmp_args_element_value_19;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_99);
                tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_38 == NULL)) {
                    tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_72;
                }
                tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_19 == NULL)) {
                    tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_72;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 192;
                tmp_tuple_element_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_19);
                if (tmp_tuple_element_99 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_72;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_99);
            }
            goto tuple_build_noexception_72;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_72:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_72:;
            PyList_SET_ITEM(tmp_assign_source_119, 49, tmp_list_element_7);
            tmp_tuple_element_100 = mod_consts[160];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_100);
            tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_tuple_element_100 == NULL)) {
                tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_tuple_element_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_100);
            goto tuple_build_noexception_73;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_73:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_73:;
            PyList_SET_ITEM(tmp_assign_source_119, 50, tmp_list_element_7);
            tmp_tuple_element_101 = mod_consts[161];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_101);
            tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_tuple_element_101 == NULL)) {
                tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_101);
            goto tuple_build_noexception_74;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_74:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_74:;
            PyList_SET_ITEM(tmp_assign_source_119, 51, tmp_list_element_7);
            tmp_tuple_element_102 = mod_consts[162];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_102);
            tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_tuple_element_102 == NULL)) {
                tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_102);
            goto tuple_build_noexception_75;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_75:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_75:;
            PyList_SET_ITEM(tmp_assign_source_119, 52, tmp_list_element_7);
            tmp_tuple_element_103 = mod_consts[163];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_103);
            tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_tuple_element_103 == NULL)) {
                tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_tuple_element_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_103);
            goto tuple_build_noexception_76;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_76:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_76:;
            PyList_SET_ITEM(tmp_assign_source_119, 53, tmp_list_element_7);
            tmp_tuple_element_104 = mod_consts[164];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_39;
                PyObject *tmp_args_element_value_20;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_104);
                tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_value_39 == NULL)) {
                    tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_called_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;

                    goto tuple_build_exception_77;
                }
                tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_20 == NULL)) {
                    tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;

                    goto tuple_build_exception_77;
                }
                frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 197;
                tmp_tuple_element_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_20);
                if (tmp_tuple_element_104 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;

                    goto tuple_build_exception_77;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_104);
            }
            goto tuple_build_noexception_77;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_77:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_77:;
            PyList_SET_ITEM(tmp_assign_source_119, 54, tmp_list_element_7);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assign_source_119);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_119);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_105;
        PyObject *tmp_kwargs_value_19;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[166]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_105 = mod_consts[39];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_105);
        tmp_tuple_element_105 = mod_consts[167];
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_105);
        tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_105 == NULL)) {
            tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_tuple_element_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto tuple_build_exception_78;
        }
        PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_105);
        tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_tuple_element_105 == NULL)) {
            tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_tuple_element_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto tuple_build_exception_78;
        }
        PyTuple_SET_ITEM0(tmp_args_value_19, 3, tmp_tuple_element_105);
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_kwargs_value_19 = DICT_COPY(mod_consts[168]);
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 200;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_19);
        Py_DECREF(tmp_kwargs_value_19);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_106;
        PyObject *tmp_kwargs_value_20;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[166]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_106 = mod_consts[39];
        tmp_args_value_20 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_106);
        tmp_tuple_element_106 = mod_consts[169];
        PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_106);
        tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_106 == NULL)) {
            tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_tuple_element_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto tuple_build_exception_79;
        }
        PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_106);
        tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_tuple_element_106 == NULL)) {
            tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_tuple_element_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto tuple_build_exception_79;
        }
        PyTuple_SET_ITEM0(tmp_args_value_20, 3, tmp_tuple_element_106);
        goto tuple_build_noexception_79;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_79:;
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_79:;
        tmp_kwargs_value_20 = DICT_COPY(mod_consts[170]);
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 203;
        tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_20, tmp_kwargs_value_20);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_20);
        Py_DECREF(tmp_kwargs_value_20);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[31];
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        assert(!(tmp_args_element_value_22 == NULL));
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_61;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[176]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[41], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_62;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 211;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_23);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[177]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[41], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_63;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 212;
        tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_24);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_25;
            PyList_SET_ITEM(tmp_assattr_value_6, 0, tmp_list_element_8);
            tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_list_element_8 == NULL)) {
                tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_6, 1, tmp_list_element_8);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto list_build_exception_8;
            }
            tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_args_element_value_25 == NULL)) {
                tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto list_build_exception_8;
            }
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 213;
            tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_25);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_6, 2, tmp_list_element_8);
            tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_list_element_8 == NULL)) {
                tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_6, 3, tmp_list_element_8);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[177]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[178], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_64;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[179]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[41], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_65;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_8, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_value_8, 1, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_value_8, 2, tmp_list_element_9);
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[179]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[178], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_66;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[180]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[41], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_67;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 218;
        tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_26);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM(tmp_assattr_value_10, 0, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_10, 1, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_10, 2, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_10, 3, tmp_list_element_10);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[180]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[178], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_68;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 220;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_27);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[181]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[41], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_69;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 221;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 221;
        tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_12, 0, tmp_list_element_11);
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[182]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[178], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_70;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[183]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[41], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_71;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_14, 0, tmp_list_element_12);
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[183]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[178], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_72;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[184]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[41], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_73;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_16, 0, tmp_list_element_13);
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[184]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[178], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_74;
        tmp_assattr_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_17 == NULL)) {
            tmp_assattr_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[185]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[41], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_75;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_18, 0, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_18, 1, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_18, 2, tmp_list_element_14);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[185]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[178], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_76;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[186]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[41], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_15;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_77;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 230;
        tmp_mult_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_30);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_5 = mod_consts[52];
        tmp_list_element_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(7);
        {
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_31;
            PyList_SET_ITEM(tmp_assattr_value_20, 0, tmp_list_element_15);
            tmp_mult_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_mult_expr_left_6 == NULL)) {
                tmp_mult_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_mult_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto list_build_exception_12;
            }
            tmp_mult_expr_right_6 = mod_consts[52];
            tmp_list_element_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_20, 1, tmp_list_element_15);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 231;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_31);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_20, 2, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_assattr_value_20, 3, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_assattr_value_20, 4, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_assattr_value_20, 5, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_assattr_value_20, 6, tmp_list_element_15);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[186]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[178], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_78;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[187]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[41], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_79;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 233;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 233;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM(tmp_assattr_value_22, 0, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_22, 1, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_22, 2, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_22, 3, tmp_list_element_16);
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[187]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[178], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_80;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 235;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_35);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame.f_lineno = 235;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_23, 0, tmp_list_element_17);
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[188]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[178], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_81;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[189]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[41], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_82;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_25, 0, tmp_list_element_18);
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[189]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[178], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_83;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[190]);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[41], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_84;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_27, 0, tmp_list_element_19);
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[190]);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[178], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_85;
        tmp_assattr_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_value_28 == NULL)) {
            tmp_assattr_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[191]);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[41], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_86;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_29 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_29, 0, tmp_list_element_20);
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[191]);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[178], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a62757bac58fe2b022f6b4fb7ea0f91f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a62757bac58fe2b022f6b4fb7ea0f91f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a62757bac58fe2b022f6b4fb7ea0f91f, exception_lineno);
    }



    assertFrameObject(frame_a62757bac58fe2b022f6b4fb7ea0f91f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = LIST_COPY(mod_consts[192]);
        UPDATE_STRING_DICT1(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_123);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.codecs.ffmpeg_lib.libavutil", false);

    Py_INCREF(module_pyglet$media$codecs$ffmpeg_lib$libavutil);
    return module_pyglet$media$codecs$ffmpeg_lib$libavutil;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$codecs$ffmpeg_lib$libavutil, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$codecs$ffmpeg_lib$libavutil", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
