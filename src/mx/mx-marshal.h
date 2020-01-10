
#ifndef ___mx_marshal_MARSHAL_H__
#define ___mx_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:OBJECT (./mx-marshal.list:1) */
#define _mx_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT

/* VOID:VOID (./mx-marshal.list:2) */
#define _mx_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:PARAM (./mx-marshal.list:3) */
#define _mx_marshal_VOID__PARAM	g_cclosure_marshal_VOID__PARAM

/* VOID:POINTER (./mx-marshal.list:4) */
#define _mx_marshal_VOID__POINTER	g_cclosure_marshal_VOID__POINTER

/* VOID:UINT (./mx-marshal.list:5) */
#define _mx_marshal_VOID__UINT	g_cclosure_marshal_VOID__UINT

/* VOID:ULONG (./mx-marshal.list:6) */
#define _mx_marshal_VOID__ULONG	g_cclosure_marshal_VOID__ULONG

/* VOID:FLAGS (./mx-marshal.list:7) */
#define _mx_marshal_VOID__FLAGS	g_cclosure_marshal_VOID__FLAGS

/* VOID:BOXED (./mx-marshal.list:8) */
#define _mx_marshal_VOID__BOXED	g_cclosure_marshal_VOID__BOXED

/* VOID:UINT,UINT (./mx-marshal.list:9) */
extern void _mx_marshal_VOID__UINT_UINT (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* VOID:UINT,OBJECT (./mx-marshal.list:10) */
extern void _mx_marshal_VOID__UINT_OBJECT (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* VOID:ULONG,BOXED (./mx-marshal.list:11) */
extern void _mx_marshal_VOID__ULONG_BOXED (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* VOID:ULONG,OBJECT (./mx-marshal.list:12) */
extern void _mx_marshal_VOID__ULONG_OBJECT (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* VOID:ULONG,OBJECT,OBJECT (./mx-marshal.list:13) */
extern void _mx_marshal_VOID__ULONG_OBJECT_OBJECT (GClosure     *closure,
                                                   GValue       *return_value,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint,
                                                   gpointer      marshal_data);

/* VOID:OBJECT,OBJECT (./mx-marshal.list:14) */
extern void _mx_marshal_VOID__OBJECT_OBJECT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

/* VOID:STRING,OBJECT (./mx-marshal.list:15) */
extern void _mx_marshal_VOID__STRING_OBJECT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

/* VOID:OBJECT,OBJECT,INT,INT (./mx-marshal.list:16) */
extern void _mx_marshal_VOID__OBJECT_OBJECT_INT_INT (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);

/* VOID:OBJECT,FLOAT,FLOAT,INT,ENUM (./mx-marshal.list:17) */
extern void _mx_marshal_VOID__OBJECT_FLOAT_FLOAT_INT_ENUM (GClosure     *closure,
                                                           GValue       *return_value,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint,
                                                           gpointer      marshal_data);

/* VOID:FLOAT,FLOAT,INT,ENUM (./mx-marshal.list:18) */
extern void _mx_marshal_VOID__FLOAT_FLOAT_INT_ENUM (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

/* VOID:FLOAT,FLOAT (./mx-marshal.list:19) */
extern void _mx_marshal_VOID__FLOAT_FLOAT (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* BOOL:FLOAT,FLOAT,ENUM (./mx-marshal.list:20) */
extern void _mx_marshal_BOOLEAN__FLOAT_FLOAT_ENUM (GClosure     *closure,
                                                   GValue       *return_value,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint,
                                                   gpointer      marshal_data);
#define _mx_marshal_BOOL__FLOAT_FLOAT_ENUM	_mx_marshal_BOOLEAN__FLOAT_FLOAT_ENUM

/* BOOL:VOID (./mx-marshal.list:21) */
extern void _mx_marshal_BOOLEAN__VOID (GClosure     *closure,
                                       GValue       *return_value,
                                       guint         n_param_values,
                                       const GValue *param_values,
                                       gpointer      invocation_hint,
                                       gpointer      marshal_data);
#define _mx_marshal_BOOL__VOID	_mx_marshal_BOOLEAN__VOID

G_END_DECLS

#endif /* ___mx_marshal_MARSHAL_H__ */

