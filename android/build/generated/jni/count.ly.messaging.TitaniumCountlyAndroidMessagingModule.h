/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace count {
		namespace ly {
		namespace messaging {


class TitaniumCountlyAndroidMessagingModule : public titanium::Proxy
{
public:
	explicit TitaniumCountlyAndroidMessagingModule(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> startCrashReporting(const v8::Arguments&);
	static v8::Handle<v8::Value> sendQueuedNotification(const v8::Arguments&);
	static v8::Handle<v8::Value> startMessagingTest(const v8::Arguments&);
	static v8::Handle<v8::Value> sendNotification(const v8::Arguments&);
	static v8::Handle<v8::Value> stopCount(const v8::Arguments&);
	static v8::Handle<v8::Value> userData(const v8::Arguments&);
	static v8::Handle<v8::Value> addCrashLog(const v8::Arguments&);
	static v8::Handle<v8::Value> startCrashReportingWithSegments(const v8::Arguments&);
	static v8::Handle<v8::Value> setLocation(const v8::Arguments&);
	static v8::Handle<v8::Value> recordPushAction(const v8::Arguments&);
	static v8::Handle<v8::Value> startMessaging(const v8::Arguments&);
	static v8::Handle<v8::Value> start(const v8::Arguments&);
	static v8::Handle<v8::Value> event(const v8::Arguments&);
	static v8::Handle<v8::Value> recordHandledException(const v8::Arguments&);
	static v8::Handle<v8::Value> enableDebug(const v8::Arguments&);
	static v8::Handle<v8::Value> recordUncaughtException(const v8::Arguments&);
	static v8::Handle<v8::Value> crashTest(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------

};

		} // messaging
		} // ly
		} // count
