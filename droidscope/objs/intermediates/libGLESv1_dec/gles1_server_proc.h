// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __gles1_server_proc_t_h
#define __gles1_server_proc_t_h



#include "gles1_types.h"
#ifndef gles1_APIENTRY
#define gles1_APIENTRY 
#endif
typedef void (gles1_APIENTRY *glAlphaFunc_server_proc_t) (GLenum, GLclampf);
typedef void (gles1_APIENTRY *glClearColor_server_proc_t) (GLclampf, GLclampf, GLclampf, GLclampf);
typedef void (gles1_APIENTRY *glClearDepthf_server_proc_t) (GLclampf);
typedef void (gles1_APIENTRY *glClipPlanef_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glColor4f_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glDepthRangef_server_proc_t) (GLclampf, GLclampf);
typedef void (gles1_APIENTRY *glFogf_server_proc_t) (GLenum, GLfloat);
typedef void (gles1_APIENTRY *glFogfv_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glFrustumf_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glGetClipPlanef_server_proc_t) (GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetFloatv_server_proc_t) (GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetLightfv_server_proc_t) (GLenum, GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetMaterialfv_server_proc_t) (GLenum, GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetTexEnvfv_server_proc_t) (GLenum, GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetTexParameterfv_server_proc_t) (GLenum, GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glLightModelf_server_proc_t) (GLenum, GLfloat);
typedef void (gles1_APIENTRY *glLightModelfv_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glLightf_server_proc_t) (GLenum, GLenum, GLfloat);
typedef void (gles1_APIENTRY *glLightfv_server_proc_t) (GLenum, GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glLineWidth_server_proc_t) (GLfloat);
typedef void (gles1_APIENTRY *glLoadMatrixf_server_proc_t) (const GLfloat*);
typedef void (gles1_APIENTRY *glMaterialf_server_proc_t) (GLenum, GLenum, GLfloat);
typedef void (gles1_APIENTRY *glMaterialfv_server_proc_t) (GLenum, GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glMultMatrixf_server_proc_t) (const GLfloat*);
typedef void (gles1_APIENTRY *glMultiTexCoord4f_server_proc_t) (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glNormal3f_server_proc_t) (GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glOrthof_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glPointParameterf_server_proc_t) (GLenum, GLfloat);
typedef void (gles1_APIENTRY *glPointParameterfv_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glPointSize_server_proc_t) (GLfloat);
typedef void (gles1_APIENTRY *glPolygonOffset_server_proc_t) (GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glRotatef_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glScalef_server_proc_t) (GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glTexEnvf_server_proc_t) (GLenum, GLenum, GLfloat);
typedef void (gles1_APIENTRY *glTexEnvfv_server_proc_t) (GLenum, GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glTexParameterf_server_proc_t) (GLenum, GLenum, GLfloat);
typedef void (gles1_APIENTRY *glTexParameterfv_server_proc_t) (GLenum, GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glTranslatef_server_proc_t) (GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glActiveTexture_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glAlphaFuncx_server_proc_t) (GLenum, GLclampx);
typedef void (gles1_APIENTRY *glBindBuffer_server_proc_t) (GLenum, GLuint);
typedef void (gles1_APIENTRY *glBindTexture_server_proc_t) (GLenum, GLuint);
typedef void (gles1_APIENTRY *glBlendFunc_server_proc_t) (GLenum, GLenum);
typedef void (gles1_APIENTRY *glBufferData_server_proc_t) (GLenum, GLsizeiptr, const GLvoid*, GLenum);
typedef void (gles1_APIENTRY *glBufferSubData_server_proc_t) (GLenum, GLintptr, GLsizeiptr, const GLvoid*);
typedef void (gles1_APIENTRY *glClear_server_proc_t) (GLbitfield);
typedef void (gles1_APIENTRY *glClearColorx_server_proc_t) (GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (gles1_APIENTRY *glClearDepthx_server_proc_t) (GLclampx);
typedef void (gles1_APIENTRY *glClearStencil_server_proc_t) (GLint);
typedef void (gles1_APIENTRY *glClientActiveTexture_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glColor4ub_server_proc_t) (GLubyte, GLubyte, GLubyte, GLubyte);
typedef void (gles1_APIENTRY *glColor4x_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glColorMask_server_proc_t) (GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (gles1_APIENTRY *glColorPointer_server_proc_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glCompressedTexImage2D_server_proc_t) (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glCompressedTexSubImage2D_server_proc_t) (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glCopyTexImage2D_server_proc_t) (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
typedef void (gles1_APIENTRY *glCopyTexSubImage2D_server_proc_t) (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
typedef void (gles1_APIENTRY *glCullFace_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glDeleteBuffers_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glDeleteTextures_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glDepthFunc_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glDepthMask_server_proc_t) (GLboolean);
typedef void (gles1_APIENTRY *glDepthRangex_server_proc_t) (GLclampx, GLclampx);
typedef void (gles1_APIENTRY *glDisable_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glDisableClientState_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glDrawArrays_server_proc_t) (GLenum, GLint, GLsizei);
typedef void (gles1_APIENTRY *glDrawElements_server_proc_t) (GLenum, GLsizei, GLenum, const GLvoid*);
typedef void (gles1_APIENTRY *glEnable_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glEnableClientState_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glFinish_server_proc_t) ();
typedef void (gles1_APIENTRY *glFlush_server_proc_t) ();
typedef void (gles1_APIENTRY *glFogx_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glFogxv_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glFrontFace_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glFrustumx_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glGetBooleanv_server_proc_t) (GLenum, GLboolean*);
typedef void (gles1_APIENTRY *glGetBufferParameteriv_server_proc_t) (GLenum, GLenum, GLint*);
typedef void (gles1_APIENTRY *glClipPlanex_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glGenBuffers_server_proc_t) (GLsizei, GLuint*);
typedef void (gles1_APIENTRY *glGenTextures_server_proc_t) (GLsizei, GLuint*);
typedef GLenum (gles1_APIENTRY *glGetError_server_proc_t) ();
typedef void (gles1_APIENTRY *glGetFixedv_server_proc_t) (GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetIntegerv_server_proc_t) (GLenum, GLint*);
typedef void (gles1_APIENTRY *glGetLightxv_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetMaterialxv_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetPointerv_server_proc_t) (GLenum, GLvoid**);
typedef const GLubyte* (gles1_APIENTRY *glGetString_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glGetTexEnviv_server_proc_t) (GLenum, GLenum, GLint*);
typedef void (gles1_APIENTRY *glGetTexEnvxv_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetTexParameteriv_server_proc_t) (GLenum, GLenum, GLint*);
typedef void (gles1_APIENTRY *glGetTexParameterxv_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glHint_server_proc_t) (GLenum, GLenum);
typedef GLboolean (gles1_APIENTRY *glIsBuffer_server_proc_t) (GLuint);
typedef GLboolean (gles1_APIENTRY *glIsEnabled_server_proc_t) (GLenum);
typedef GLboolean (gles1_APIENTRY *glIsTexture_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glLightModelx_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glLightModelxv_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glLightx_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glLightxv_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glLineWidthx_server_proc_t) (GLfixed);
typedef void (gles1_APIENTRY *glLoadIdentity_server_proc_t) ();
typedef void (gles1_APIENTRY *glLoadMatrixx_server_proc_t) (const GLfixed*);
typedef void (gles1_APIENTRY *glLogicOp_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glMaterialx_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glMaterialxv_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glMatrixMode_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glMultMatrixx_server_proc_t) (const GLfixed*);
typedef void (gles1_APIENTRY *glMultiTexCoord4x_server_proc_t) (GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glNormal3x_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glNormalPointer_server_proc_t) (GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glOrthox_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glPixelStorei_server_proc_t) (GLenum, GLint);
typedef void (gles1_APIENTRY *glPointParameterx_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glPointParameterxv_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glPointSizex_server_proc_t) (GLfixed);
typedef void (gles1_APIENTRY *glPolygonOffsetx_server_proc_t) (GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glPopMatrix_server_proc_t) ();
typedef void (gles1_APIENTRY *glPushMatrix_server_proc_t) ();
typedef void (gles1_APIENTRY *glReadPixels_server_proc_t) (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (gles1_APIENTRY *glRotatex_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glSampleCoverage_server_proc_t) (GLclampf, GLboolean);
typedef void (gles1_APIENTRY *glSampleCoveragex_server_proc_t) (GLclampx, GLboolean);
typedef void (gles1_APIENTRY *glScalex_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glScissor_server_proc_t) (GLint, GLint, GLsizei, GLsizei);
typedef void (gles1_APIENTRY *glShadeModel_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glStencilFunc_server_proc_t) (GLenum, GLint, GLuint);
typedef void (gles1_APIENTRY *glStencilMask_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glStencilOp_server_proc_t) (GLenum, GLenum, GLenum);
typedef void (gles1_APIENTRY *glTexCoordPointer_server_proc_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glTexEnvi_server_proc_t) (GLenum, GLenum, GLint);
typedef void (gles1_APIENTRY *glTexEnvx_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glTexEnviv_server_proc_t) (GLenum, GLenum, const GLint*);
typedef void (gles1_APIENTRY *glTexEnvxv_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glTexImage2D_server_proc_t) (GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
typedef void (gles1_APIENTRY *glTexParameteri_server_proc_t) (GLenum, GLenum, GLint);
typedef void (gles1_APIENTRY *glTexParameterx_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glTexParameteriv_server_proc_t) (GLenum, GLenum, const GLint*);
typedef void (gles1_APIENTRY *glTexParameterxv_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glTexSubImage2D_server_proc_t) (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*);
typedef void (gles1_APIENTRY *glTranslatex_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glVertexPointer_server_proc_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glViewport_server_proc_t) (GLint, GLint, GLsizei, GLsizei);
typedef void (gles1_APIENTRY *glPointSizePointerOES_server_proc_t) (GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glVertexPointerOffset_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glColorPointerOffset_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glNormalPointerOffset_server_proc_t) (void *ctx, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glPointSizePointerOffset_server_proc_t) (void *ctx, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glTexCoordPointerOffset_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glWeightPointerOffset_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glMatrixIndexPointerOffset_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, GLuint);
typedef void (gles1_APIENTRY *glVertexPointerData_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glColorPointerData_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glNormalPointerData_server_proc_t) (void *ctx, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glTexCoordPointerData_server_proc_t) (void *ctx, GLint, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glPointSizePointerData_server_proc_t) (void *ctx, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glWeightPointerData_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glMatrixIndexPointerData_server_proc_t) (void *ctx, GLint, GLenum, GLsizei, void*, GLuint);
typedef void (gles1_APIENTRY *glDrawElementsOffset_server_proc_t) (void *ctx, GLenum, GLsizei, GLenum, GLuint);
typedef void (gles1_APIENTRY *glDrawElementsData_server_proc_t) (void *ctx, GLenum, GLsizei, GLenum, void*, GLuint);
typedef void (gles1_APIENTRY *glGetCompressedTextureFormats_server_proc_t) (void *ctx, int, GLint*);
typedef int (gles1_APIENTRY *glFinishRoundTrip_server_proc_t) (void *ctx);
typedef void (gles1_APIENTRY *glBlendEquationSeparateOES_server_proc_t) (GLenum, GLenum);
typedef void (gles1_APIENTRY *glBlendFuncSeparateOES_server_proc_t) (GLenum, GLenum, GLenum, GLenum);
typedef void (gles1_APIENTRY *glBlendEquationOES_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glDrawTexsOES_server_proc_t) (GLshort, GLshort, GLshort, GLshort, GLshort);
typedef void (gles1_APIENTRY *glDrawTexiOES_server_proc_t) (GLint, GLint, GLint, GLint, GLint);
typedef void (gles1_APIENTRY *glDrawTexxOES_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glDrawTexsvOES_server_proc_t) (const GLshort*);
typedef void (gles1_APIENTRY *glDrawTexivOES_server_proc_t) (const GLint*);
typedef void (gles1_APIENTRY *glDrawTexxvOES_server_proc_t) (const GLfixed*);
typedef void (gles1_APIENTRY *glDrawTexfOES_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glDrawTexfvOES_server_proc_t) (const GLfloat*);
typedef void (gles1_APIENTRY *glEGLImageTargetTexture2DOES_server_proc_t) (GLenum, GLeglImageOES);
typedef void (gles1_APIENTRY *glEGLImageTargetRenderbufferStorageOES_server_proc_t) (GLenum, GLeglImageOES);
typedef void (gles1_APIENTRY *glAlphaFuncxOES_server_proc_t) (GLenum, GLclampx);
typedef void (gles1_APIENTRY *glClearColorxOES_server_proc_t) (GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (gles1_APIENTRY *glClearDepthxOES_server_proc_t) (GLclampx);
typedef void (gles1_APIENTRY *glClipPlanexOES_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glClipPlanexIMG_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glColor4xOES_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glDepthRangexOES_server_proc_t) (GLclampx, GLclampx);
typedef void (gles1_APIENTRY *glFogxOES_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glFogxvOES_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glFrustumxOES_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glGetClipPlanexOES_server_proc_t) (GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetClipPlanex_server_proc_t) (GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetFixedvOES_server_proc_t) (GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetLightxvOES_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetMaterialxvOES_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetTexEnvxvOES_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glGetTexParameterxvOES_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glLightModelxOES_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glLightModelxvOES_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glLightxOES_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glLightxvOES_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glLineWidthxOES_server_proc_t) (GLfixed);
typedef void (gles1_APIENTRY *glLoadMatrixxOES_server_proc_t) (const GLfixed*);
typedef void (gles1_APIENTRY *glMaterialxOES_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glMaterialxvOES_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glMultMatrixxOES_server_proc_t) (const GLfixed*);
typedef void (gles1_APIENTRY *glMultiTexCoord4xOES_server_proc_t) (GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glNormal3xOES_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glOrthoxOES_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glPointParameterxOES_server_proc_t) (GLenum, GLfixed);
typedef void (gles1_APIENTRY *glPointParameterxvOES_server_proc_t) (GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glPointSizexOES_server_proc_t) (GLfixed);
typedef void (gles1_APIENTRY *glPolygonOffsetxOES_server_proc_t) (GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glRotatexOES_server_proc_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glSampleCoveragexOES_server_proc_t) (GLclampx, GLboolean);
typedef void (gles1_APIENTRY *glScalexOES_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef void (gles1_APIENTRY *glTexEnvxOES_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glTexEnvxvOES_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glTexParameterxOES_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glTexParameterxvOES_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glTranslatexOES_server_proc_t) (GLfixed, GLfixed, GLfixed);
typedef GLboolean (gles1_APIENTRY *glIsRenderbufferOES_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glBindRenderbufferOES_server_proc_t) (GLenum, GLuint);
typedef void (gles1_APIENTRY *glDeleteRenderbuffersOES_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glGenRenderbuffersOES_server_proc_t) (GLsizei, GLuint*);
typedef void (gles1_APIENTRY *glRenderbufferStorageOES_server_proc_t) (GLenum, GLenum, GLsizei, GLsizei);
typedef void (gles1_APIENTRY *glGetRenderbufferParameterivOES_server_proc_t) (GLenum, GLenum, GLint*);
typedef GLboolean (gles1_APIENTRY *glIsFramebufferOES_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glBindFramebufferOES_server_proc_t) (GLenum, GLuint);
typedef void (gles1_APIENTRY *glDeleteFramebuffersOES_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glGenFramebuffersOES_server_proc_t) (GLsizei, GLuint*);
typedef GLenum (gles1_APIENTRY *glCheckFramebufferStatusOES_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glFramebufferRenderbufferOES_server_proc_t) (GLenum, GLenum, GLenum, GLuint);
typedef void (gles1_APIENTRY *glFramebufferTexture2DOES_server_proc_t) (GLenum, GLenum, GLenum, GLuint, GLint);
typedef void (gles1_APIENTRY *glGetFramebufferAttachmentParameterivOES_server_proc_t) (GLenum, GLenum, GLenum, GLint*);
typedef void (gles1_APIENTRY *glGenerateMipmapOES_server_proc_t) (GLenum);
typedef void* (gles1_APIENTRY *glMapBufferOES_server_proc_t) (GLenum, GLenum);
typedef GLboolean (gles1_APIENTRY *glUnmapBufferOES_server_proc_t) (GLenum);
typedef void (gles1_APIENTRY *glGetBufferPointervOES_server_proc_t) (GLenum, GLenum, GLvoid**);
typedef void (gles1_APIENTRY *glCurrentPaletteMatrixOES_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glLoadPaletteFromModelViewMatrixOES_server_proc_t) ();
typedef void (gles1_APIENTRY *glMatrixIndexPointerOES_server_proc_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (gles1_APIENTRY *glWeightPointerOES_server_proc_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef GLbitfield (gles1_APIENTRY *glQueryMatrixxOES_server_proc_t) (GLfixed*, GLint*);
typedef void (gles1_APIENTRY *glDepthRangefOES_server_proc_t) (GLclampf, GLclampf);
typedef void (gles1_APIENTRY *glFrustumfOES_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glOrthofOES_server_proc_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (gles1_APIENTRY *glClipPlanefOES_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glClipPlanefIMG_server_proc_t) (GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glGetClipPlanefOES_server_proc_t) (GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glClearDepthfOES_server_proc_t) (GLclampf);
typedef void (gles1_APIENTRY *glTexGenfOES_server_proc_t) (GLenum, GLenum, GLfloat);
typedef void (gles1_APIENTRY *glTexGenfvOES_server_proc_t) (GLenum, GLenum, const GLfloat*);
typedef void (gles1_APIENTRY *glTexGeniOES_server_proc_t) (GLenum, GLenum, GLint);
typedef void (gles1_APIENTRY *glTexGenivOES_server_proc_t) (GLenum, GLenum, const GLint*);
typedef void (gles1_APIENTRY *glTexGenxOES_server_proc_t) (GLenum, GLenum, GLfixed);
typedef void (gles1_APIENTRY *glTexGenxvOES_server_proc_t) (GLenum, GLenum, const GLfixed*);
typedef void (gles1_APIENTRY *glGetTexGenfvOES_server_proc_t) (GLenum, GLenum, GLfloat*);
typedef void (gles1_APIENTRY *glGetTexGenivOES_server_proc_t) (GLenum, GLenum, GLint*);
typedef void (gles1_APIENTRY *glGetTexGenxvOES_server_proc_t) (GLenum, GLenum, GLfixed*);
typedef void (gles1_APIENTRY *glBindVertexArrayOES_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glDeleteVertexArraysOES_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glGenVertexArraysOES_server_proc_t) (GLsizei, GLuint*);
typedef GLboolean (gles1_APIENTRY *glIsVertexArrayOES_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glDiscardFramebufferEXT_server_proc_t) (GLenum, GLsizei, const GLenum*);
typedef void (gles1_APIENTRY *glMultiDrawArraysEXT_server_proc_t) (GLenum, const GLint*, const GLsizei*, GLsizei);
typedef void (gles1_APIENTRY *glMultiDrawElementsEXT_server_proc_t) (GLenum, const GLsizei*, GLenum, const GLvoid* const*, GLsizei);
typedef void (gles1_APIENTRY *glMultiDrawArraysSUN_server_proc_t) (GLenum, GLint*, GLsizei*, GLsizei);
typedef void (gles1_APIENTRY *glMultiDrawElementsSUN_server_proc_t) (GLenum, const GLsizei*, GLenum, const GLvoid**, GLsizei);
typedef void (gles1_APIENTRY *glRenderbufferStorageMultisampleIMG_server_proc_t) (GLenum, GLsizei, GLenum, GLsizei, GLsizei);
typedef void (gles1_APIENTRY *glFramebufferTexture2DMultisampleIMG_server_proc_t) (GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
typedef void (gles1_APIENTRY *glDeleteFencesNV_server_proc_t) (GLsizei, const GLuint*);
typedef void (gles1_APIENTRY *glGenFencesNV_server_proc_t) (GLsizei, GLuint*);
typedef GLboolean (gles1_APIENTRY *glIsFenceNV_server_proc_t) (GLuint);
typedef GLboolean (gles1_APIENTRY *glTestFenceNV_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glGetFenceivNV_server_proc_t) (GLuint, GLenum, GLint*);
typedef void (gles1_APIENTRY *glFinishFenceNV_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glSetFenceNV_server_proc_t) (GLuint, GLenum);
typedef void (gles1_APIENTRY *glGetDriverControlsQCOM_server_proc_t) (GLint*, GLsizei, GLuint*);
typedef void (gles1_APIENTRY *glGetDriverControlStringQCOM_server_proc_t) (GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (gles1_APIENTRY *glEnableDriverControlQCOM_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glDisableDriverControlQCOM_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glExtGetTexturesQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef void (gles1_APIENTRY *glExtGetBuffersQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef void (gles1_APIENTRY *glExtGetRenderbuffersQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef void (gles1_APIENTRY *glExtGetFramebuffersQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef void (gles1_APIENTRY *glExtGetTexLevelParameterivQCOM_server_proc_t) (GLuint, GLenum, GLint, GLenum, GLint*);
typedef void (gles1_APIENTRY *glExtTexObjectStateOverrideiQCOM_server_proc_t) (GLenum, GLenum, GLint);
typedef void (gles1_APIENTRY *glExtGetTexSubImageQCOM_server_proc_t) (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (gles1_APIENTRY *glExtGetBufferPointervQCOM_server_proc_t) (GLenum, GLvoid**);
typedef void (gles1_APIENTRY *glExtGetShadersQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef void (gles1_APIENTRY *glExtGetProgramsQCOM_server_proc_t) (GLuint*, GLint, GLint*);
typedef GLboolean (gles1_APIENTRY *glExtIsProgramBinaryQCOM_server_proc_t) (GLuint);
typedef void (gles1_APIENTRY *glExtGetProgramBinarySourceQCOM_server_proc_t) (GLuint, GLenum, GLchar*, GLint*);
typedef void (gles1_APIENTRY *glStartTilingQCOM_server_proc_t) (GLuint, GLuint, GLuint, GLuint, GLbitfield);
typedef void (gles1_APIENTRY *glEndTilingQCOM_server_proc_t) (GLbitfield);


#endif