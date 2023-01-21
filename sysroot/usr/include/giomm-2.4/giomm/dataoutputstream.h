// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GIOMM_DATAOUTPUTSTREAM_H
#define _GIOMM_DATAOUTPUTSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <giomm/bufferedoutputstream.h>
#include <giomm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GDataOutputStream = struct _GDataOutputStream;
using GDataOutputStreamClass = struct _GDataOutputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class DataOutputStream_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/**
 * An implementation of BufferedOutputStream that allows for high-level data
 * manipulation of arbitrary data (including binary operations).
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class DataOutputStream : public Gio::BufferedOutputStream
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = DataOutputStream;
  using CppClassType = DataOutputStream_Class;
  using BaseObjectType = GDataOutputStream;
  using BaseClassType = GDataOutputStreamClass;

  // noncopyable
  DataOutputStream(const DataOutputStream&) = delete;
  DataOutputStream& operator=(const DataOutputStream&) = delete;

private:  friend class DataOutputStream_Class;
  static CppClassType dataoutputstream_class_;

protected:
  explicit DataOutputStream(const Glib::ConstructParams& construct_params);
  explicit DataOutputStream(GDataOutputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  DataOutputStream(DataOutputStream&& src) noexcept;
  DataOutputStream& operator=(DataOutputStream&& src) noexcept;

  ~DataOutputStream() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDataOutputStream*       gobj()       { return reinterpret_cast<GDataOutputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDataOutputStream* gobj() const { return reinterpret_cast<GDataOutputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDataOutputStream* gobj_copy();

private:


protected:
    explicit DataOutputStream(const Glib::RefPtr<OutputStream>& base_stream);


public:

  
  static Glib::RefPtr<DataOutputStream> create(const Glib::RefPtr<OutputStream>& base_stream);


  /** Sets the byte order of the data output stream to @a order.
   * 
   * @param order A DataStreamByteOrder.
   */
  void set_byte_order(DataStreamByteOrder order);
  
  /** Gets the byte order for the stream.
   * 
   * @return The DataStreamByteOrder for the @a stream.
   */
  DataStreamByteOrder get_byte_order() const;

  
  /** Puts a byte into the output stream.
   * 
   * @param data A #guchar.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_byte(guchar data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_byte() convenience overload.
  bool put_byte(guchar data);

  
  /** Puts a signed 16-bit integer into the output stream.
   * 
   * @param data A #gint16.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_int16(gint16 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_int16() convenience overload.
  bool put_int16(gint16 data);

  
  /** Puts an unsigned 16-bit integer into the output stream.
   * 
   * @param data A #guint16.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_uint16(guint16 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_uint16() convenience overload.
  bool put_uint16(guint16 data);

  
  /** Puts a signed 32-bit integer into the output stream.
   * 
   * @param data A #gint32.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_int32(gint32 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_int32() convenience overload.
  bool put_int32(gint32 data);

  
  /** Puts an unsigned 32-bit integer into the stream.
   * 
   * @param data A #guint32.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_uint32(guint32 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_uint32() convenience overload.
  bool put_uint32(guint32 data);

  
  /** Puts a signed 64-bit integer into the stream.
   * 
   * @param data A #gint64.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_int64(gint64 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_int64() convenience overload.
  bool put_int64(gint64 data);

  
  /** Puts an unsigned 64-bit integer into the stream.
   * 
   * @param data A #guint64.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a data was successfully added to the @a stream.
   */
  bool put_uint64(guint64 data, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_uint64() convenience overload.
  bool put_uint64(guint64 data);

  
  /** Puts a string into the output stream.
   * 
   * @param str A string.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return <tt>true</tt> if @a string was successfully added to the @a stream.
   */
  bool put_string(std::string str, const Glib::RefPtr<Cancellable>& cancellable);

  /// A put_string() convenience overload.
  bool put_string(std::string str);

  /** Determines the byte ordering that is used when writing 
   * multi-byte entities (such as integers) to the stream.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< DataStreamByteOrder > property_byte_order() ;

/** Determines the byte ordering that is used when writing 
   * multi-byte entities (such as integers) to the stream.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< DataStreamByteOrder > property_byte_order() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::DataOutputStream
   */
  Glib::RefPtr<Gio::DataOutputStream> wrap(GDataOutputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_DATAOUTPUTSTREAM_H */

