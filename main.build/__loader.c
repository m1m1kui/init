
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 384 > 0
static unsigned char *bytecode_data[384];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFont(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$application(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$arcade_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$buffered_draw_commands(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$camera(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$color(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$context(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$csscolor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$draw_commands(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$drawing_support(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$earclip_module(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$easing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$emitter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$emitter_simple(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$experimental(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$experimental$bloom_filter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$experimental$crt_filter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$experimental$shadertoy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$experimental$texture_render_target(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$geometry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$geometry_generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$geometry_python(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$geometry_shapely(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$buffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$compute_shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$context(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$enums(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$framebuffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$geometry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$glsl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$program(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$query(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$texture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$uniform(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$gl$vertex_array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$hitbox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$isometric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$joysticks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$key(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$particle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$paths(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$paths_python(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$paths_shapely(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$perf_graph(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$perf_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$physics_engines(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$pymunk_physics_engine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$resources(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$scene(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sections(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sound(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sprite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sprite_list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sprite_list$spatial_hash(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$sprite_list$sprite_list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$text_pillow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$text_pyglet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$texture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$texture_atlas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$tilemap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$tilemap$tilemap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_arcade$window_commands(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_cmp(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_funcs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_make(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_next_gen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_version_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$converters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$setters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$validators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$app(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$app$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$app$cocoa(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$app$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$app$xlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$cocoa(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$headless(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$xlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$canvas$xlib_vidmoderestore(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$clock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$extlibs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$extlibs$png(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$directwrite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$fontconfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$freetype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$freetype_lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$quartz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$font$win32query(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$allocation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$shader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$vertexarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$vertexattribute(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$vertexbuffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$graphics$vertexdomain(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$animation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$atlas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$buffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$bmp(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$dds(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$gdiplus(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$gdkpixbuf2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$gif(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$pil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$png(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$quartz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$s3tc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$image$codecs$wic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$controller(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$controller_db(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$darwin_hid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$directinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$evdev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$evdev_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$wintab(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$x11_xinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$x11_xinput_tablet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$input$xinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin$cocoapy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin$cocoapy$cocoalibs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin$cocoapy$cocoatypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin$cocoapy$runtime(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$darwin$quartzkey(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$egl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$egl$egl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$egl$eglext(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$egl$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$com(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$dinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$libwintab(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$win32$winkey(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$cursorfont(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$xf86vmode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$xinerama(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$xinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$xlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$libs$x11$xsync(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$math(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$buffered_logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavcodec(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavformat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libavutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libswresample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$ffmpeg_lib$libswscale(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$gstreamer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$pyogg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$wave(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$codecs$wmf(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$devices(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$devices$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$devices$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$directsound(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$directsound$adaptation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$directsound$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$directsound$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$directsound$lib_dsound(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$listener(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$openal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$openal$adaptation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$openal$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$openal$lib_alc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$openal$lib_openal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$pulse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$pulse$adaptation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$pulse$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$pulse$lib_pulseaudio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$silent(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$silent$adaptation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$xaudio2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$xaudio2$adaptation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$xaudio2$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$drivers$xaudio2$lib_xaudio2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$mediathreads(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$player(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$media$synthesis(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$model(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$model$codecs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$model$codecs$obj(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$resource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$shapes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$sprite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$caret(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$document(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$formats(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$formats$attributed(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$formats$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$formats$plaintext(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$formats$structured(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$layout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$text$runlist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa$pyglet_delegate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa$pyglet_textview(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa$pyglet_view(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa$pyglet_window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$cocoa$systemcursor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$headless(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$key(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$mouse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyglet$window$xlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$_callbacks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$_chipmunk_cffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$_typing_attr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$arbiter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$autogeometry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$bb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$body(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$collision_handler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$constraints(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$contact_point_set(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$query_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$shape_filter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$shapes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$space(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$space_debug_draw_options(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$transform(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymunk$vec2d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$common_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$exception(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$layer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$layer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$tiled_map(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$tiled_object(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$tileset(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$json$wang_set(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$layer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$tiled_map(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$tiled_object(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$tileset(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$parsers$tmx$wang_set(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$tiled_map(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$tiled_object(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$tileset(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$wang_set(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytiled_parser$world(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FitsImagePlugin", modulecode_PIL$FitsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageDraw", modulecode_PIL$ImageDraw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageDraw2", modulecode_PIL$ImageDraw2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFont", modulecode_PIL$ImageFont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImagePath", modulecode_PIL$ImagePath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingcms", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingft", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._webp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade", modulecode_arcade, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.application", modulecode_arcade$application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.arcade_types", modulecode_arcade$arcade_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.buffered_draw_commands", modulecode_arcade$buffered_draw_commands, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.camera", modulecode_arcade$camera, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.color", modulecode_arcade$color, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.context", modulecode_arcade$context, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.csscolor", modulecode_arcade$csscolor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.draw_commands", modulecode_arcade$draw_commands, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.drawing_support", modulecode_arcade$drawing_support, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.earclip_module", modulecode_arcade$earclip_module, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.easing", modulecode_arcade$easing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.emitter", modulecode_arcade$emitter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.emitter_simple", modulecode_arcade$emitter_simple, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.experimental", modulecode_arcade$experimental, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.experimental.bloom_filter", modulecode_arcade$experimental$bloom_filter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.experimental.crt_filter", modulecode_arcade$experimental$crt_filter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.experimental.shadertoy", modulecode_arcade$experimental$shadertoy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.experimental.texture_render_target", modulecode_arcade$experimental$texture_render_target, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.geometry", modulecode_arcade$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.geometry_generic", modulecode_arcade$geometry_generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.geometry_python", modulecode_arcade$geometry_python, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.geometry_shapely", modulecode_arcade$geometry_shapely, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl", modulecode_arcade$gl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.buffer", modulecode_arcade$gl$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.compute_shader", modulecode_arcade$gl$compute_shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.context", modulecode_arcade$gl$context, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.enums", modulecode_arcade$gl$enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.exceptions", modulecode_arcade$gl$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.framebuffer", modulecode_arcade$gl$framebuffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.geometry", modulecode_arcade$gl$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.glsl", modulecode_arcade$gl$glsl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.program", modulecode_arcade$gl$program, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.query", modulecode_arcade$gl$query, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.texture", modulecode_arcade$gl$texture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.types", modulecode_arcade$gl$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.uniform", modulecode_arcade$gl$uniform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.utils", modulecode_arcade$gl$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.gl.vertex_array", modulecode_arcade$gl$vertex_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.hitbox", modulecode_arcade$hitbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.isometric", modulecode_arcade$isometric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.joysticks", modulecode_arcade$joysticks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.key", modulecode_arcade$key, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.particle", modulecode_arcade$particle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.paths", modulecode_arcade$paths, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.paths_python", modulecode_arcade$paths_python, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.paths_shapely", modulecode_arcade$paths_shapely, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.perf_graph", modulecode_arcade$perf_graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.perf_info", modulecode_arcade$perf_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.physics_engines", modulecode_arcade$physics_engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.pymunk_physics_engine", modulecode_arcade$pymunk_physics_engine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.resources", modulecode_arcade$resources, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.scene", modulecode_arcade$scene, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sections", modulecode_arcade$sections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sound", modulecode_arcade$sound, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sprite", modulecode_arcade$sprite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sprite_list", modulecode_arcade$sprite_list, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sprite_list.spatial_hash", modulecode_arcade$sprite_list$spatial_hash, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.sprite_list.sprite_list", modulecode_arcade$sprite_list$sprite_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.text_pillow", modulecode_arcade$text_pillow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.text_pyglet", modulecode_arcade$text_pyglet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.texture", modulecode_arcade$texture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.texture_atlas", modulecode_arcade$texture_atlas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.tilemap", modulecode_arcade$tilemap, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.tilemap.tilemap", modulecode_arcade$tilemap$tilemap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.utils", modulecode_arcade$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.version", modulecode_arcade$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"arcade.window_commands", modulecode_arcade$window_commands, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr", modulecode_attr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._cmp", modulecode_attr$_cmp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._compat", modulecode_attr$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._config", modulecode_attr$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._funcs", modulecode_attr$_funcs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._make", modulecode_attr$_make, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._next_gen", modulecode_attr$_next_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr._version_info", modulecode_attr$_version_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr.converters", modulecode_attr$converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr.exceptions", modulecode_attr$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr.filters", modulecode_attr$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr.setters", modulecode_attr$setters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"attr.validators", modulecode_attr$validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet", modulecode_pyglet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.app", modulecode_pyglet$app, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.app.base", modulecode_pyglet$app$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.app.cocoa", modulecode_pyglet$app$cocoa, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.app.win32", modulecode_pyglet$app$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.app.xlib", modulecode_pyglet$app$xlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas", modulecode_pyglet$canvas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.base", modulecode_pyglet$canvas$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.cocoa", modulecode_pyglet$canvas$cocoa, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.headless", modulecode_pyglet$canvas$headless, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.win32", modulecode_pyglet$canvas$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.xlib", modulecode_pyglet$canvas$xlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.canvas.xlib_vidmoderestore", modulecode_pyglet$canvas$xlib_vidmoderestore, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.clock", modulecode_pyglet$clock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.event", modulecode_pyglet$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.extlibs", modulecode_pyglet$extlibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.extlibs.png", modulecode_pyglet$extlibs$png, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font", modulecode_pyglet$font, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.base", modulecode_pyglet$font$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.directwrite", modulecode_pyglet$font$directwrite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.fontconfig", modulecode_pyglet$font$fontconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.freetype", modulecode_pyglet$font$freetype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.freetype_lib", modulecode_pyglet$font$freetype_lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.quartz", modulecode_pyglet$font$quartz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.win32", modulecode_pyglet$font$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.font.win32query", modulecode_pyglet$font$win32query, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics", modulecode_pyglet$graphics, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.allocation", modulecode_pyglet$graphics$allocation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.shader", modulecode_pyglet$graphics$shader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.vertexarray", modulecode_pyglet$graphics$vertexarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.vertexattribute", modulecode_pyglet$graphics$vertexattribute, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.vertexbuffer", modulecode_pyglet$graphics$vertexbuffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.graphics.vertexdomain", modulecode_pyglet$graphics$vertexdomain, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image", modulecode_pyglet$image, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.animation", modulecode_pyglet$image$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.atlas", modulecode_pyglet$image$atlas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.buffer", modulecode_pyglet$image$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs", modulecode_pyglet$image$codecs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.bmp", modulecode_pyglet$image$codecs$bmp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.dds", modulecode_pyglet$image$codecs$dds, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.gdiplus", modulecode_pyglet$image$codecs$gdiplus, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.gdkpixbuf2", modulecode_pyglet$image$codecs$gdkpixbuf2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.gif", modulecode_pyglet$image$codecs$gif, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.pil", modulecode_pyglet$image$codecs$pil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.png", modulecode_pyglet$image$codecs$png, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.quartz", modulecode_pyglet$image$codecs$quartz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.s3tc", modulecode_pyglet$image$codecs$s3tc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.image.codecs.wic", modulecode_pyglet$image$codecs$wic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input", modulecode_pyglet$input, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.base", modulecode_pyglet$input$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.controller", modulecode_pyglet$input$controller, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.controller_db", modulecode_pyglet$input$controller_db, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.darwin_hid", modulecode_pyglet$input$darwin_hid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.directinput", modulecode_pyglet$input$directinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.evdev", modulecode_pyglet$input$evdev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.evdev_constants", modulecode_pyglet$input$evdev_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.wintab", modulecode_pyglet$input$wintab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.x11_xinput", modulecode_pyglet$input$x11_xinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.x11_xinput_tablet", modulecode_pyglet$input$x11_xinput_tablet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.input.xinput", modulecode_pyglet$input$xinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.lib", modulecode_pyglet$lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs", modulecode_pyglet$libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin", modulecode_pyglet$libs$darwin, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin.cocoapy", modulecode_pyglet$libs$darwin$cocoapy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin.cocoapy.cocoalibs", modulecode_pyglet$libs$darwin$cocoapy$cocoalibs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin.cocoapy.cocoatypes", modulecode_pyglet$libs$darwin$cocoapy$cocoatypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin.cocoapy.runtime", modulecode_pyglet$libs$darwin$cocoapy$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.darwin.quartzkey", modulecode_pyglet$libs$darwin$quartzkey, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.egl", modulecode_pyglet$libs$egl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.egl.egl", modulecode_pyglet$libs$egl$egl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.egl.eglext", modulecode_pyglet$libs$egl$eglext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.egl.lib", modulecode_pyglet$libs$egl$lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32", modulecode_pyglet$libs$win32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.com", modulecode_pyglet$libs$win32$com, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.constants", modulecode_pyglet$libs$win32$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.dinput", modulecode_pyglet$libs$win32$dinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.libwintab", modulecode_pyglet$libs$win32$libwintab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.types", modulecode_pyglet$libs$win32$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.win32.winkey", modulecode_pyglet$libs$win32$winkey, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11", modulecode_pyglet$libs$x11, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.cursorfont", modulecode_pyglet$libs$x11$cursorfont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.xf86vmode", modulecode_pyglet$libs$x11$xf86vmode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.xinerama", modulecode_pyglet$libs$x11$xinerama, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.xinput", modulecode_pyglet$libs$x11$xinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.xlib", modulecode_pyglet$libs$x11$xlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.libs.x11.xsync", modulecode_pyglet$libs$x11$xsync, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.math", modulecode_pyglet$math, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media", modulecode_pyglet$media, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.buffered_logger", modulecode_pyglet$media$buffered_logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs", modulecode_pyglet$media$codecs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.base", modulecode_pyglet$media$codecs$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg", modulecode_pyglet$media$codecs$ffmpeg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib", modulecode_pyglet$media$codecs$ffmpeg_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.compat", modulecode_pyglet$media$codecs$ffmpeg_lib$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.libavcodec", modulecode_pyglet$media$codecs$ffmpeg_lib$libavcodec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.libavformat", modulecode_pyglet$media$codecs$ffmpeg_lib$libavformat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.libavutil", modulecode_pyglet$media$codecs$ffmpeg_lib$libavutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.libswresample", modulecode_pyglet$media$codecs$ffmpeg_lib$libswresample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.ffmpeg_lib.libswscale", modulecode_pyglet$media$codecs$ffmpeg_lib$libswscale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.gstreamer", modulecode_pyglet$media$codecs$gstreamer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.pyogg", modulecode_pyglet$media$codecs$pyogg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.wave", modulecode_pyglet$media$codecs$wave, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.codecs.wmf", modulecode_pyglet$media$codecs$wmf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.devices", modulecode_pyglet$media$devices, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.devices.base", modulecode_pyglet$media$devices$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.devices.win32", modulecode_pyglet$media$devices$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers", modulecode_pyglet$media$drivers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.base", modulecode_pyglet$media$drivers$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.directsound", modulecode_pyglet$media$drivers$directsound, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.directsound.adaptation", modulecode_pyglet$media$drivers$directsound$adaptation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.directsound.exceptions", modulecode_pyglet$media$drivers$directsound$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.directsound.interface", modulecode_pyglet$media$drivers$directsound$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.directsound.lib_dsound", modulecode_pyglet$media$drivers$directsound$lib_dsound, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.listener", modulecode_pyglet$media$drivers$listener, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.openal", modulecode_pyglet$media$drivers$openal, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.openal.adaptation", modulecode_pyglet$media$drivers$openal$adaptation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.openal.interface", modulecode_pyglet$media$drivers$openal$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.openal.lib_alc", modulecode_pyglet$media$drivers$openal$lib_alc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.openal.lib_openal", modulecode_pyglet$media$drivers$openal$lib_openal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.pulse", modulecode_pyglet$media$drivers$pulse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.pulse.adaptation", modulecode_pyglet$media$drivers$pulse$adaptation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.pulse.interface", modulecode_pyglet$media$drivers$pulse$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.pulse.lib_pulseaudio", modulecode_pyglet$media$drivers$pulse$lib_pulseaudio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.silent", modulecode_pyglet$media$drivers$silent, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.silent.adaptation", modulecode_pyglet$media$drivers$silent$adaptation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.xaudio2", modulecode_pyglet$media$drivers$xaudio2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.xaudio2.adaptation", modulecode_pyglet$media$drivers$xaudio2$adaptation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.xaudio2.interface", modulecode_pyglet$media$drivers$xaudio2$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.drivers.xaudio2.lib_xaudio2", modulecode_pyglet$media$drivers$xaudio2$lib_xaudio2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.exceptions", modulecode_pyglet$media$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.mediathreads", modulecode_pyglet$media$mediathreads, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.player", modulecode_pyglet$media$player, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.media.synthesis", modulecode_pyglet$media$synthesis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.model", modulecode_pyglet$model, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.model.codecs", modulecode_pyglet$model$codecs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.model.codecs.obj", modulecode_pyglet$model$codecs$obj, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.resource", modulecode_pyglet$resource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.shapes", modulecode_pyglet$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.sprite", modulecode_pyglet$sprite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text", modulecode_pyglet$text, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.caret", modulecode_pyglet$text$caret, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.document", modulecode_pyglet$text$document, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.formats", modulecode_pyglet$text$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.formats.attributed", modulecode_pyglet$text$formats$attributed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.formats.html", modulecode_pyglet$text$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.formats.plaintext", modulecode_pyglet$text$formats$plaintext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.formats.structured", modulecode_pyglet$text$formats$structured, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.layout", modulecode_pyglet$text$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.text.runlist", modulecode_pyglet$text$runlist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.util", modulecode_pyglet$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window", modulecode_pyglet$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa", modulecode_pyglet$window$cocoa, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa.pyglet_delegate", modulecode_pyglet$window$cocoa$pyglet_delegate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa.pyglet_textview", modulecode_pyglet$window$cocoa$pyglet_textview, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa.pyglet_view", modulecode_pyglet$window$cocoa$pyglet_view, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa.pyglet_window", modulecode_pyglet$window$cocoa$pyglet_window, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.cocoa.systemcursor", modulecode_pyglet$window$cocoa$systemcursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.event", modulecode_pyglet$window$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.headless", modulecode_pyglet$window$headless, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.key", modulecode_pyglet$window$key, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.mouse", modulecode_pyglet$window$mouse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.win32", modulecode_pyglet$window$win32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.window.xlib", modulecode_pyglet$window$xlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk", modulecode_pymunk, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._callbacks", modulecode_pymunk$_callbacks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._chipmunk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._chipmunk_cffi", modulecode_pymunk$_chipmunk_cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._pickle", modulecode_pymunk$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._typing_attr", modulecode_pymunk$_typing_attr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk._version", modulecode_pymunk$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.arbiter", modulecode_pymunk$arbiter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.autogeometry", modulecode_pymunk$autogeometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.bb", modulecode_pymunk$bb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.body", modulecode_pymunk$body, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.collision_handler", modulecode_pymunk$collision_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.constraints", modulecode_pymunk$constraints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.contact_point_set", modulecode_pymunk$contact_point_set, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.query_info", modulecode_pymunk$query_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.shape_filter", modulecode_pymunk$shape_filter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.shapes", modulecode_pymunk$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.space", modulecode_pymunk$space, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.space_debug_draw_options", modulecode_pymunk$space_debug_draw_options, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.transform", modulecode_pymunk$transform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pymunk.vec2d", modulecode_pymunk$vec2d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser", modulecode_pytiled_parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.common_types", modulecode_pytiled_parser$common_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.exception", modulecode_pytiled_parser$exception, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.layer", modulecode_pytiled_parser$layer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parser", modulecode_pytiled_parser$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers", modulecode_pytiled_parser$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json", modulecode_pytiled_parser$parsers$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.layer", modulecode_pytiled_parser$parsers$json$layer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.properties", modulecode_pytiled_parser$parsers$json$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.tiled_map", modulecode_pytiled_parser$parsers$json$tiled_map, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.tiled_object", modulecode_pytiled_parser$parsers$json$tiled_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.tileset", modulecode_pytiled_parser$parsers$json$tileset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.json.wang_set", modulecode_pytiled_parser$parsers$json$wang_set, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx", modulecode_pytiled_parser$parsers$tmx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.layer", modulecode_pytiled_parser$parsers$tmx$layer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.properties", modulecode_pytiled_parser$parsers$tmx$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.tiled_map", modulecode_pytiled_parser$parsers$tmx$tiled_map, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.tiled_object", modulecode_pytiled_parser$parsers$tmx$tiled_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.tileset", modulecode_pytiled_parser$parsers$tmx$tileset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.parsers.tmx.wang_set", modulecode_pytiled_parser$parsers$tmx$wang_set, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.properties", modulecode_pytiled_parser$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.tiled_map", modulecode_pytiled_parser$tiled_map, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.tiled_object", modulecode_pytiled_parser$tiled_object, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.tileset", modulecode_pytiled_parser$tileset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.util", modulecode_pytiled_parser$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.version", modulecode_pytiled_parser$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.wang_set", modulecode_pytiled_parser$wang_set, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytiled_parser.world", modulecode_pytiled_parser$world, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__future__", NULL, 0, 4097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_aix_support", NULL, 1, 2846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bootsubprocess", NULL, 2, 2258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_collections_abc", NULL, 3, 32786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compat_pickle", NULL, 4, 5836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compression", NULL, 5, 4477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_markupbase", NULL, 6, 7533, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_osx_support", NULL, 7, 11504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_py_abc", NULL, 8, 4653, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pydecimal", NULL, 9, 157864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyio", NULL, 10, 73748, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 11, 3511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_strptime", NULL, 12, 15919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_threading_local", NULL, 13, 6505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_weakrefset", NULL, 14, 7571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"abc", NULL, 15, 6719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"argparse", NULL, 16, 62777, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ast", NULL, 17, 55585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"base64", NULL, 18, 17134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"binhex", NULL, 19, 12834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bisect", NULL, 20, 2552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bz2", NULL, 21, 10977, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"calendar", NULL, 22, 26256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgi", NULL, 23, 26699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgitb", NULL, 24, 9963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chunk", NULL, 25, 4827, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cmd", NULL, 26, 12674, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"code", NULL, 27, 9923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codecs", NULL, 28, 33157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codeop", NULL, 29, 6585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections", NULL, 30, 48439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections.abc", NULL, 31, 202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorsys", NULL, 32, 3229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent", NULL, 33, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures", NULL, 34, 1062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 35, 21864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 36, 21057, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 37, 5786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"configparser", NULL, 38, 45452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextlib", NULL, 39, 20877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextvars", NULL, 40, 210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copy", NULL, 41, 6953, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copyreg", NULL, 42, 4652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"csv", NULL, 43, 11769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes", NULL, 44, 15840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._endian", NULL, 45, 1866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.util", NULL, 46, 8276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.wintypes", NULL, 47, 4822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataclasses", NULL, 48, 26448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"datetime", NULL, 49, 56561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"decimal", NULL, 50, 326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"difflib", NULL, 51, 58904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dis", NULL, 52, 15620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email", NULL, 53, 1519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._encoded_words", NULL, 54, 5680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 55, 77804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._parseaddr", NULL, 56, 12449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._policybase", NULL, 57, 14756, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.base64mime", NULL, 58, 3207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.charset", NULL, 59, 11542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.contentmanager", NULL, 60, 7353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.encoders", NULL, 61, 1591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.errors", NULL, 62, 5667, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.feedparser", NULL, 63, 10549, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.generator", NULL, 64, 12565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.header", NULL, 65, 16426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.headerregistry", NULL, 66, 21872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.iterators", NULL, 67, 1932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.message", NULL, 68, 37794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.parser", NULL, 69, 5641, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.policy", NULL, 70, 9622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.quoprimime", NULL, 71, 7595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.utils", NULL, 72, 9656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings", NULL, 73, 3863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.aliases", NULL, 74, 10885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ascii", NULL, 75, 1776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 76, 2211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5", NULL, 77, 1330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 78, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 79, 3050, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.charmap", NULL, 80, 2683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp037", NULL, 81, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 82, 2390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 83, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 84, 9255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 85, 2304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 86, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 87, 2338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 88, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 89, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 90, 2343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 91, 2362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 92, 2340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 93, 2348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 94, 2346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp273", NULL, 95, 2300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp424", NULL, 96, 2344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp437", NULL, 97, 8888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp500", NULL, 98, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp720", NULL, 99, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp737", NULL, 100, 9290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp775", NULL, 101, 8928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp850", NULL, 102, 8469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp852", NULL, 103, 8944, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp855", NULL, 104, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp856", NULL, 105, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp857", NULL, 106, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp858", NULL, 107, 8439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp860", NULL, 108, 8859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp861", NULL, 109, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp862", NULL, 110, 9117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp863", NULL, 111, 8880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp864", NULL, 112, 9027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp865", NULL, 113, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp866", NULL, 114, 9297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp869", NULL, 115, 8932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp874", NULL, 116, 2442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp875", NULL, 117, 2311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp932", NULL, 118, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp949", NULL, 119, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp950", NULL, 120, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 121, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 122, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 123, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 124, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 125, 1336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 126, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gbk", NULL, 127, 1328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 128, 2198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 129, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hz", NULL, 130, 1326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.idna", NULL, 131, 5573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 132, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 133, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 134, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 135, 1357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 136, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 137, 1355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 138, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 139, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 140, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 141, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 142, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 143, 2339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 144, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 145, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 146, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 147, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 148, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 149, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 150, 2358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 151, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 152, 2352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 153, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.johab", NULL, 154, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 155, 2365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 156, 2276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 157, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 158, 2328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 159, 1788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 160, 8774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 161, 2360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 162, 2350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 163, 2294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 164, 2334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 165, 2353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 166, 2494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 167, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 168, 2361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 169, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mbcs", NULL, 170, 1646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.oem", NULL, 171, 1459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.palmos", NULL, 172, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 173, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.punycode", NULL, 174, 6275, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 175, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 176, 1679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 177, 2955, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 178, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 179, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 180, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 181, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.undefined", NULL, 182, 1979, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 183, 1659, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 184, 4808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 185, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 186, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 187, 4701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 188, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 189, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 190, 1502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 191, 1561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 192, 4358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 193, 3150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 194, 2811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"enum", NULL, 195, 25803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"filecmp", NULL, 196, 8714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fileinput", NULL, 197, 14027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fnmatch", NULL, 198, 3994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fractions", NULL, 199, 18595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ftplib", NULL, 200, 28963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"functools", NULL, 201, 28031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"genericpath", NULL, 202, 3881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getopt", NULL, 203, 6303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getpass", NULL, 204, 4174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gettext", NULL, 205, 18072, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"glob", NULL, 206, 5818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"graphlib", NULL, 207, 7582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gzip", NULL, 208, 18661, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hashlib", NULL, 209, 6811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"heapq", NULL, 210, 13834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hmac", NULL, 211, 6941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html", NULL, 212, 3280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.entities", NULL, 213, 144394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.parser", NULL, 214, 10741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http", NULL, 215, 6371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.client", NULL, 216, 34986, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.cookiejar", NULL, 217, 53451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imaplib", NULL, 218, 42324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imghdr", NULL, 219, 3877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imp", NULL, 220, 9757, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib", NULL, 221, 3760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._abc", NULL, 222, 1937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._adapters", NULL, 223, 3621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 224, 30107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 225, 44207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._common", NULL, 226, 2908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.abc", NULL, 227, 15864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.machinery", NULL, 228, 909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata", NULL, 229, 35668, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._adapters", NULL, 230, 2310, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._collections", NULL, 231, 1483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._functools", NULL, 232, 2603, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._itertools", NULL, 233, 535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._meta", NULL, 234, 2228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._text", NULL, 235, 3025, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.readers", NULL, 236, 5147, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources", NULL, 237, 5335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.util", NULL, 238, 9299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"inspect", NULL, 239, 84661, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"io", NULL, 240, 3627, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ipaddress", NULL, 241, 61476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json", NULL, 242, 12273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.decoder", NULL, 243, 9732, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.encoder", NULL, 244, 11085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.scanner", NULL, 245, 1880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"keyword", NULL, 246, 891, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"linecache", NULL, 247, 4068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"locale", NULL, 248, 46140, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging", NULL, 249, 66643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lzma", NULL, 250, 12205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mailcap", NULL, 251, 6557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mimetypes", NULL, 252, 17602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modulefinder", NULL, 253, 16135, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing", NULL, 254, 624, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 255, 25621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 256, 12415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 257, 3823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 258, 2532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 259, 8395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 260, 7631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 261, 40749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 262, 25072, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 263, 3438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 264, 11039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 265, 10269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 266, 8267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 267, 5271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_tracker", NULL, 268, 5488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.shared_memory", NULL, 269, 14432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 270, 7068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 271, 6705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 272, 11291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 273, 11463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"netrc", NULL, 274, 3902, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ntpath", NULL, 275, 14712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"nturl2path", NULL, 276, 1711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numbers", NULL, 277, 11870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"opcode", NULL, 278, 5411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"operator", NULL, 279, 13520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"os", NULL, 280, 31532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib", NULL, 281, 42015, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickle", NULL, 282, 46838, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickletools", NULL, 283, 67749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pipes", NULL, 284, 7736, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkgutil", NULL, 285, 18325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"platform", NULL, 286, 27226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"poplib", NULL, 287, 13554, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"posixpath", NULL, 288, 10486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pprint", NULL, 289, 17845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pstats", NULL, 290, 23584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"py_compile", NULL, 291, 7127, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyclbr", NULL, 292, 9743, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser", NULL, 293, 2428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ast_transforms", NULL, 294, 3700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_ast", NULL, 295, 29458, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_lexer", NULL, 296, 12861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_parser", NULL, 297, 62866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.lextab", NULL, 298, 6534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply", NULL, 299, 142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply.lex", NULL, 300, 21309, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply.yacc", NULL, 301, 52570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.plyparser", NULL, 302, 4612, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.yacctab", NULL, 303, 177025, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl", NULL, 304, 5039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.base", NULL, 305, 12521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.cocoa", NULL, 306, 7316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.gl", NULL, 307, 111859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.gl_compat", NULL, 308, 148734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.gl_info", NULL, 309, 5945, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.glx", NULL, 310, 10652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.glx_info", NULL, 311, 3897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.glxext_arb", NULL, 312, 21834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.glxext_mesa", NULL, 313, 354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.headless", NULL, 314, 5320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.lib", NULL, 315, 3430, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.lib_agl", NULL, 316, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.lib_glx", NULL, 317, 1108, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.lib_wgl", NULL, 318, 2474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.wgl", NULL, 319, 6377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.wgl_info", NULL, 320, 1359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.wglext_arb", NULL, 321, 24687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.win32", NULL, 322, 9171, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyglet.gl.xlib", NULL, 323, 12200, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"queue", NULL, 324, 10745, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"quopri", NULL, 325, 5762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"random", NULL, 326, 22732, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re", NULL, 327, 14202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"reprlib", NULL, 328, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rlcompleter", NULL, 329, 5920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"runpy", NULL, 330, 8499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sched", NULL, 331, 6080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"secrets", NULL, 332, 2142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"selectors", NULL, 333, 17075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shlex", NULL, 334, 7766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shutil", NULL, 335, 37726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"signal", NULL, 336, 2716, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sndhdr", NULL, 337, 6927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socket", NULL, 338, 28931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socketserver", NULL, 339, 25314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_compile", NULL, 340, 15044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_constants", NULL, 341, 6302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_parse", NULL, 342, 21513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ssl", NULL, 343, 44804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stat", NULL, 344, 4248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"statistics", NULL, 345, 37104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"string", NULL, 346, 7067, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stringprep", NULL, 347, 17039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"struct", NULL, 348, 271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"subprocess", NULL, 349, 44411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symtable", NULL, 350, 12802, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sysconfig", NULL, 351, 17443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tarfile", NULL, 352, 63358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tempfile", NULL, 353, 23406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"textwrap", NULL, 354, 13788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"threading", NULL, 355, 44835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"timeit", NULL, 356, 11738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"token", NULL, 357, 2702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tokenize", NULL, 358, 17176, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"trace", NULL, 359, 19809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"traceback", NULL, 360, 21645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tracemalloc", NULL, 361, 17493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"types", NULL, 362, 9484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing", NULL, 363, 84202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib", NULL, 364, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.error", NULL, 365, 2785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.parse", NULL, 366, 33773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.request", NULL, 367, 71219, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.response", NULL, 368, 3431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uu", NULL, 369, 3652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"warnings", NULL, 370, 13621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wave", NULL, 371, 17558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"weakref", NULL, 372, 20311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"webbrowser", NULL, 373, 16962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xdrlib", NULL, 374, 7845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml", NULL, 375, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree", NULL, 376, 89, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementPath", NULL, 377, 9002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementTree", NULL, 378, 55869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers", NULL, 379, 263, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 380, 301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc", NULL, 381, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 382, 34215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile", NULL, 383, 60334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 3, 32786},
    {"abc", 15, 6719},
    {"ast", 17, 55585},
    {"codecs", 28, 33157},
    {"collections", 30, -48439},
    {"collections.abc", 31, 202},
    {"contextlib", 39, 20877},
    {"copyreg", 42, 4652},
    {"dis", 52, 15620},
    {"encodings", 73, -3863},
    {"encodings.aliases", 74, 10885},
    {"encodings.ascii", 75, 1776},
    {"encodings.big5", 77, 1330},
    {"encodings.big5hkscs", 78, 1340},
    {"encodings.charmap", 80, 2683},
    {"encodings.cp037", 81, 2314},
    {"encodings.cp1006", 82, 2390},
    {"encodings.cp1026", 83, 2318},
    {"encodings.cp1125", 84, 9255},
    {"encodings.cp1140", 85, 2304},
    {"encodings.cp1250", 86, 2341},
    {"encodings.cp1251", 87, 2338},
    {"encodings.cp1252", 88, 2341},
    {"encodings.cp1253", 89, 2354},
    {"encodings.cp1254", 90, 2343},
    {"encodings.cp1255", 91, 2362},
    {"encodings.cp1256", 92, 2340},
    {"encodings.cp1257", 93, 2348},
    {"encodings.cp1258", 94, 2346},
    {"encodings.cp273", 95, 2300},
    {"encodings.cp424", 96, 2344},
    {"encodings.cp437", 97, 8888},
    {"encodings.cp500", 98, 2314},
    {"encodings.cp720", 99, 2411},
    {"encodings.cp737", 100, 9290},
    {"encodings.cp775", 101, 8928},
    {"encodings.cp850", 102, 8469},
    {"encodings.cp852", 103, 8944},
    {"encodings.cp855", 104, 9257},
    {"encodings.cp856", 105, 2376},
    {"encodings.cp857", 106, 8368},
    {"encodings.cp858", 107, 8439},
    {"encodings.cp860", 108, 8859},
    {"encodings.cp861", 109, 8884},
    {"encodings.cp862", 110, 9117},
    {"encodings.cp863", 111, 8880},
    {"encodings.cp864", 112, 9027},
    {"encodings.cp865", 113, 8884},
    {"encodings.cp866", 114, 9297},
    {"encodings.cp869", 115, 8932},
    {"encodings.cp874", 116, 2442},
    {"encodings.cp875", 117, 2311},
    {"encodings.cp932", 118, 1332},
    {"encodings.cp949", 119, 1332},
    {"encodings.cp950", 120, 1332},
    {"encodings.euc_jis_2004", 121, 1346},
    {"encodings.euc_jisx0213", 122, 1346},
    {"encodings.euc_jp", 123, 1334},
    {"encodings.euc_kr", 124, 1334},
    {"encodings.gb18030", 125, 1336},
    {"encodings.gb2312", 126, 1334},
    {"encodings.gbk", 127, 1328},
    {"encodings.hp_roman8", 129, 2515},
    {"encodings.hz", 130, 1326},
    {"encodings.iso2022_jp", 132, 1347},
    {"encodings.iso2022_jp_1", 133, 1351},
    {"encodings.iso2022_jp_2", 134, 1351},
    {"encodings.iso2022_jp_2004", 135, 1357},
    {"encodings.iso2022_jp_3", 136, 1351},
    {"encodings.iso2022_jp_ext", 137, 1355},
    {"encodings.iso2022_kr", 138, 1347},
    {"encodings.iso8859_1", 139, 2313},
    {"encodings.iso8859_10", 140, 2318},
    {"encodings.iso8859_11", 141, 2412},
    {"encodings.iso8859_13", 142, 2321},
    {"encodings.iso8859_14", 143, 2339},
    {"encodings.iso8859_15", 144, 2318},
    {"encodings.iso8859_16", 145, 2320},
    {"encodings.iso8859_2", 146, 2313},
    {"encodings.iso8859_3", 147, 2320},
    {"encodings.iso8859_4", 148, 2313},
    {"encodings.iso8859_5", 149, 2314},
    {"encodings.iso8859_6", 150, 2358},
    {"encodings.iso8859_7", 151, 2321},
    {"encodings.iso8859_8", 152, 2352},
    {"encodings.iso8859_9", 153, 2313},
    {"encodings.johab", 154, 1332},
    {"encodings.koi8_r", 155, 2365},
    {"encodings.koi8_t", 156, 2276},
    {"encodings.koi8_u", 157, 2351},
    {"encodings.kz1048", 158, 2328},
    {"encodings.latin_1", 159, 1788},
    {"encodings.mac_arabic", 160, 8774},
    {"encodings.mac_croatian", 161, 2360},
    {"encodings.mac_cyrillic", 162, 2350},
    {"encodings.mac_farsi", 163, 2294},
    {"encodings.mac_greek", 164, 2334},
    {"encodings.mac_iceland", 165, 2353},
    {"encodings.mac_latin2", 166, 2494},
    {"encodings.mac_roman", 167, 2351},
    {"encodings.mac_romanian", 168, 2361},
    {"encodings.mac_turkish", 169, 2354},
    {"encodings.mbcs", 170, 1646},
    {"encodings.oem", 171, 1459},
    {"encodings.palmos", 172, 2341},
    {"encodings.ptcp154", 173, 2435},
    {"encodings.punycode", 174, 6275},
    {"encodings.quopri_codec", 175, 2281},
    {"encodings.raw_unicode_escape", 176, 1679},
    {"encodings.shift_jis", 178, 1340},
    {"encodings.shift_jis_2004", 179, 1350},
    {"encodings.shift_jisx0213", 180, 1350},
    {"encodings.tis_620", 181, 2403},
    {"encodings.undefined", 182, 1979},
    {"encodings.unicode_escape", 183, 1659},
    {"encodings.utf_16", 184, 4808},
    {"encodings.utf_16_be", 185, 1581},
    {"encodings.utf_16_le", 186, 1581},
    {"encodings.utf_32", 187, 4701},
    {"encodings.utf_32_be", 188, 1474},
    {"encodings.utf_32_le", 189, 1474},
    {"encodings.utf_7", 190, 1502},
    {"encodings.utf_8", 191, 1561},
    {"encodings.utf_8_sig", 192, 4358},
    {"encodings.uu_codec", 193, 3150},
    {"encodings.zlib_codec", 194, 2811},
    {"enum", 195, 25803},
    {"functools", 201, 28031},
    {"genericpath", 202, 3881},
    {"importlib", 221, -3760},
    {"importlib._bootstrap", 224, 30107},
    {"importlib._bootstrap_external", 225, 44207},
    {"importlib.machinery", 228, 909},
    {"inspect", 239, 84661},
    {"io", 240, 3627},
    {"keyword", 246, 891},
    {"linecache", 247, 4068},
    {"locale", 248, 46140},
    {"ntpath", 275, 14712},
    {"opcode", 278, 5411},
    {"operator", 279, 13520},
    {"os", 280, 31532},
    {"quopri", 325, 5762},
    {"re", 327, 14202},
    {"reprlib", 328, 5215},
    {"sre_compile", 340, 15044},
    {"sre_constants", 341, 6302},
    {"sre_parse", 342, 21513},
    {"stat", 344, 4248},
    {"token", 357, 2702},
    {"tokenize", 358, 17176},
    {"types", 362, 9484},
    {"warnings", 370, 13621},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

