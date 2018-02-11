/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.jsail.DIS;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.DIS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: SignalPdu is a networked Protocol Data Unit (PDU) information node that communicates the transmission of voice, audio or other data modeled in a simulation.
 * <ul>
 *  <li> <i>Hint:</i> SignalPdu packets use the IEEE Distributed Interactive Simulation (DIS) protocol. </li> 
 *  <li> <i>Hint:</i> Savage Developers Guide on DIS <br> <a href="https://savage.nps.edu/Savage/developers.html#DIS" target="_blank">https://savage.nps.edu/Savage/developers.html#DIS</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='DIS' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/dis.html#SignalPdu" target="blank">X3D Abstract Specification: SignalPdu</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SignalPdu" target="_blank">X3D Tooltips: SignalPdu</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SignalPduObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.DIS.SignalPdu
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String address; // SFString

	private int applicationID; // SFInt32

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private ArrayList<Integer> data = new ArrayList<>(); // MFInt32

	private int dataLength; // SFInt32

	private boolean enabled; // SFBool

	private int encodingScheme; // SFInt32

	private int entityID; // SFInt32

	private double[] geoCoords; // SFVec3d

	private ArrayList<String> geoSystem = new ArrayList<>(); // MFString

	private boolean isActive; // SFBool

	private boolean isNetworkReader; // SFBool

	private boolean isNetworkWriter; // SFBool

	private boolean isRtpHeaderHeard; // SFBool

	private boolean isStandAlone; // SFBool

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String multicastRelayHost; // SFString

	private int multicastRelayPort; // SFInt32

	private String networkMode; // SFString

	private int port; // SFInt32

	private int radioID; // SFInt32

	private double readInterval; // SFTime

	private boolean rtpHeaderExpected; // SFBool

	private int sampleRate; // SFInt32

	private int samples; // SFInt32

	private int siteID; // SFInt32

	private int tdlType; // SFInt32

	private double timestamp; // SFTime

	private int whichGeometry; // SFInt32

	private double writeInterval; // SFTime

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>networkMode</i> can equal this enumeration value <i>"standAlone"</i> (Java syntax) or <i>standAlone</i> (XML syntax). */
	public static final String NETWORKMODE_STANDALONE = "standAlone";

	/** SFString field named <i>networkMode</i> can equal this enumeration value <i>"networkReader"</i> (Java syntax) or <i>networkReader</i> (XML syntax). */
	public static final String NETWORKMODE_NETWORKREADER = "networkReader";

	/** SFString field named <i>networkMode</i> can equal this enumeration value <i>"networkWriter"</i> (Java syntax) or <i>networkWriter</i> (XML syntax). */
	public static final String NETWORKMODE_NETWORKWRITER = "networkWriter";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>SignalPdu</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "SignalPdu";

	/** Provides name of this element: <i>SignalPdu</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>SignalPdu</i> element: <i>DIS</i> */
	public static final String COMPONENT = "DIS";

	/** Defines X3D component for the <i>SignalPdu</i> element: <i>DIS</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>DIS</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>address</i> has default value <i>"localhost"</i> (Java syntax) or <i>localhost</i> (XML syntax). */
	public static final String ADDRESS_DEFAULT_VALUE = "localhost";

	/** SFInt32 field named <i>applicationID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int APPLICATIONID_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>bboxCenter</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] BBOXCENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>bboxSize</i> has default value <i>{-1f,-1f,-1f}</i> (Java syntax) or <i>-1 -1 -1</i> (XML syntax). */
	public static final float[] BBOXSIZE_DEFAULT_VALUE = {-1f,-1f,-1f};

	/** SFInt32 field named <i>dataLength</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int DATALENGTH_DEFAULT_VALUE = 0;

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFInt32 field named <i>encodingScheme</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENCODINGSCHEME_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYID_DEFAULT_VALUE = 0;

	/** SFVec3d field named <i>geoCoords</i> has default value <i>{0,0,0}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final double[] GEOCOORDS_DEFAULT_VALUE = {0,0,0};

	/** MFString field named <i>geoSystem</i> has default quoted value <i>new String[] {"GD","WE"}</i> (Java syntax) or quoted value <i>"GD" "WE"</i> (XML syntax). */
	public static final ArrayList<String> GEOSYSTEM_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("GD","WE"));

	/** SFString field named <i>multicastRelayHost</i> has default value equal to an empty string. */
	public static final String MULTICASTRELAYHOST_DEFAULT_VALUE = "";

	/** SFInt32 field named <i>multicastRelayPort</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MULTICASTRELAYPORT_DEFAULT_VALUE = 0;

	/** SFString field named <i>networkMode</i> has default value <i>"standAlone"</i> (Java syntax) or <i>standAlone</i> (XML syntax). */
	public static final String NETWORKMODE_DEFAULT_VALUE = "standAlone";

	/** SFInt32 field named <i>port</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int PORT_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOID_DEFAULT_VALUE = 0;

	/** SFTime field named <i>readInterval</i> has default value <i>0.1</i> (Java syntax) or <i>0.1</i> (XML syntax). */
	public static final double READINTERVAL_DEFAULT_VALUE = 0.1;

	/** SFBool field named <i>rtpHeaderExpected</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean RTPHEADEREXPECTED_DEFAULT_VALUE = false;

	/** SFInt32 field named <i>sampleRate</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int SAMPLERATE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>samples</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int SAMPLES_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>siteID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int SITEID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>tdlType</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int TDLTYPE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>whichGeometry</i> has default value <i>1</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final int WHICHGEOMETRY_DEFAULT_VALUE = 1;

	/** SFTime field named <i>writeInterval</i> has default value <i>1.0</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final double WRITEINTERVAL_DEFAULT_VALUE = 1.0;

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */
	@Override		
	public String getFieldType(String fieldName)
	{
		String result;

		switch (fieldName)
		{
			// String constants for exact field type values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing type-matching checks
											
			case "containerField":
				result = "SFString";
				break;
			case "address":
				result = "SFString";
				break;
			case "applicationID":
				result = "SFInt32";
				break;
			case "bboxCenter":
				result = "SFVec3f";
				break;
			case "bboxSize":
				result = "SFVec3f";
				break;
			case "data":
				result = "MFInt32";
				break;
			case "dataLength":
				result = "SFInt32";
				break;
			case "enabled":
				result = "SFBool";
				break;
			case "encodingScheme":
				result = "SFInt32";
				break;
			case "entityID":
				result = "SFInt32";
				break;
			case "geoCoords":
				result = "SFVec3d";
				break;
			case "geoSystem":
				result = "MFString";
				break;
			case "isActive":
				result = "SFBool";
				break;
			case "isNetworkReader":
				result = "SFBool";
				break;
			case "isNetworkWriter":
				result = "SFBool";
				break;
			case "isRtpHeaderHeard":
				result = "SFBool";
				break;
			case "isStandAlone":
				result = "SFBool";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "multicastRelayHost":
				result = "SFString";
				break;
			case "multicastRelayPort":
				result = "SFInt32";
				break;
			case "networkMode":
				result = "SFString";
				break;
			case "port":
				result = "SFInt32";
				break;
			case "radioID":
				result = "SFInt32";
				break;
			case "readInterval":
				result = "SFTime";
				break;
			case "rtpHeaderExpected":
				result = "SFBool";
				break;
			case "sampleRate":
				result = "SFInt32";
				break;
			case "samples":
				result = "SFInt32";
				break;
			case "siteID":
				result = "SFInt32";
				break;
			case "tdlType":
				result = "SFInt32";
				break;
			case "timestamp":
				result = "SFTime";
				break;
			case "whichGeometry":
				result = "SFInt32";
				break;
			case "writeInterval":
				result = "SFTime";
				break;
			case "DEF":
				result = "SFString";
				break;
			case "USE":
				result = "SFString";
				break;
			case "class":
				result = "SFString";
				break;
			default:
			{
				// if fieldName has a prefix "set_" prepended (or a suffix "_changed" appended) then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getFieldType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getFieldType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_ACCESSTYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE if not recognized
	 */
	@Override
	public String getAccessType(String fieldName)
	{
		String result; // set by following checks
		switch (fieldName)
		{
			// String constants for field accessType values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing accessType-matching checks
			case "address":
				result = "inputOutput";
				break;
			case "applicationID":
				result = "inputOutput";
				break;
			case "bboxCenter":
				result = "initializeOnly";
				break;
			case "bboxSize":
				result = "initializeOnly";
				break;
			case "data":
				result = "inputOutput";
				break;
			case "dataLength":
				result = "inputOutput";
				break;
			case "enabled":
				result = "inputOutput";
				break;
			case "encodingScheme":
				result = "inputOutput";
				break;
			case "entityID":
				result = "inputOutput";
				break;
			case "geoCoords":
				result = "inputOutput";
				break;
			case "geoSystem":
				result = "initializeOnly";
				break;
			case "isActive":
				result = "outputOnly";
				break;
			case "isNetworkReader":
				result = "outputOnly";
				break;
			case "isNetworkWriter":
				result = "outputOnly";
				break;
			case "isRtpHeaderHeard":
				result = "outputOnly";
				break;
			case "isStandAlone":
				result = "outputOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "multicastRelayHost":
				result = "inputOutput";
				break;
			case "multicastRelayPort":
				result = "inputOutput";
				break;
			case "networkMode":
				result = "inputOutput";
				break;
			case "port":
				result = "inputOutput";
				break;
			case "radioID":
				result = "inputOutput";
				break;
			case "readInterval":
				result = "inputOutput";
				break;
			case "rtpHeaderExpected":
				result = "initializeOnly";
				break;
			case "sampleRate":
				result = "inputOutput";
				break;
			case "samples":
				result = "inputOutput";
				break;
			case "siteID":
				result = "inputOutput";
				break;
			case "tdlType":
				result = "inputOutput";
				break;
			case "timestamp":
				result = "outputOnly";
				break;
			case "whichGeometry":
				result = "inputOutput";
				break;
			case "writeInterval":
				result = "inputOutput";
				break;
			case "DEF":
				result = "inputOutput";
				break;
			case "USE":
				result = "inputOutput";
				break;
			case "class":
				result = "inputOutput";
				break;
			default:
			{
				// if user has added a prefix "set_" or suffix "_changed" then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getAccessType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getAccessType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** containerField describes typical field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API, default value is provided for informational purposes. */
	String containerField_DEFAULT_VALUE = "children";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFString field named <i>address</i>. */
	public static final String fromField_ADDRESS = "address";

	/** toField ROUTE name for SFString field named <i>address</i>. */
	public static final String toField_ADDRESS = "address";

	/** fromField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String fromField_APPLICATIONID = "applicationID";

	/** toField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String toField_APPLICATIONID = "applicationID";

	/** fromField ROUTE name for MFInt32 field named <i>data</i>. */
	public static final String fromField_DATA = "data";

	/** toField ROUTE name for MFInt32 field named <i>data</i>. */
	public static final String toField_DATA = "data";

	/** fromField ROUTE name for SFInt32 field named <i>dataLength</i>. */
	public static final String fromField_DATALENGTH = "dataLength";

	/** toField ROUTE name for SFInt32 field named <i>dataLength</i>. */
	public static final String toField_DATALENGTH = "dataLength";

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFInt32 field named <i>encodingScheme</i>. */
	public static final String fromField_ENCODINGSCHEME = "encodingScheme";

	/** toField ROUTE name for SFInt32 field named <i>encodingScheme</i>. */
	public static final String toField_ENCODINGSCHEME = "encodingScheme";

	/** fromField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String fromField_ENTITYID = "entityID";

	/** toField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String toField_ENTITYID = "entityID";

	/** fromField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String fromField_GEOCOORDS = "geoCoords";

	/** toField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String toField_GEOCOORDS = "geoCoords";

	/** fromField ROUTE name for SFBool field named <i>isActive</i>. */
	public static final String fromField_ISACTIVE = "isActive";

	/** fromField ROUTE name for SFBool field named <i>isNetworkReader</i>. */
	public static final String fromField_ISNETWORKREADER = "isNetworkReader";

	/** fromField ROUTE name for SFBool field named <i>isNetworkWriter</i>. */
	public static final String fromField_ISNETWORKWRITER = "isNetworkWriter";

	/** fromField ROUTE name for SFBool field named <i>isRtpHeaderHeard</i>. */
	public static final String fromField_ISRTPHEADERHEARD = "isRtpHeaderHeard";

	/** fromField ROUTE name for SFBool field named <i>isStandAlone</i>. */
	public static final String fromField_ISSTANDALONE = "isStandAlone";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFString field named <i>multicastRelayHost</i>. */
	public static final String fromField_MULTICASTRELAYHOST = "multicastRelayHost";

	/** toField ROUTE name for SFString field named <i>multicastRelayHost</i>. */
	public static final String toField_MULTICASTRELAYHOST = "multicastRelayHost";

	/** fromField ROUTE name for SFInt32 field named <i>multicastRelayPort</i>. */
	public static final String fromField_MULTICASTRELAYPORT = "multicastRelayPort";

	/** toField ROUTE name for SFInt32 field named <i>multicastRelayPort</i>. */
	public static final String toField_MULTICASTRELAYPORT = "multicastRelayPort";

	/** fromField ROUTE name for SFString field named <i>networkMode</i>. */
	public static final String fromField_NETWORKMODE = "networkMode";

	/** toField ROUTE name for SFString field named <i>networkMode</i>. */
	public static final String toField_NETWORKMODE = "networkMode";

	/** fromField ROUTE name for SFInt32 field named <i>port</i>. */
	public static final String fromField_PORT = "port";

	/** toField ROUTE name for SFInt32 field named <i>port</i>. */
	public static final String toField_PORT = "port";

	/** fromField ROUTE name for SFInt32 field named <i>radioID</i>. */
	public static final String fromField_RADIOID = "radioID";

	/** toField ROUTE name for SFInt32 field named <i>radioID</i>. */
	public static final String toField_RADIOID = "radioID";

	/** fromField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String fromField_READINTERVAL = "readInterval";

	/** toField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String toField_READINTERVAL = "readInterval";

	/** fromField ROUTE name for SFInt32 field named <i>sampleRate</i>. */
	public static final String fromField_SAMPLERATE = "sampleRate";

	/** toField ROUTE name for SFInt32 field named <i>sampleRate</i>. */
	public static final String toField_SAMPLERATE = "sampleRate";

	/** fromField ROUTE name for SFInt32 field named <i>samples</i>. */
	public static final String fromField_SAMPLES = "samples";

	/** toField ROUTE name for SFInt32 field named <i>samples</i>. */
	public static final String toField_SAMPLES = "samples";

	/** fromField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String fromField_SITEID = "siteID";

	/** toField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String toField_SITEID = "siteID";

	/** fromField ROUTE name for SFInt32 field named <i>tdlType</i>. */
	public static final String fromField_TDLTYPE = "tdlType";

	/** toField ROUTE name for SFInt32 field named <i>tdlType</i>. */
	public static final String toField_TDLTYPE = "tdlType";

	/** fromField ROUTE name for SFTime field named <i>timestamp</i>. */
	public static final String fromField_TIMESTAMP = "timestamp";

	/** fromField ROUTE name for SFInt32 field named <i>whichGeometry</i>. */
	public static final String fromField_WHICHGEOMETRY = "whichGeometry";

	/** toField ROUTE name for SFInt32 field named <i>whichGeometry</i>. */
	public static final String toField_WHICHGEOMETRY = "whichGeometry";

	/** fromField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String fromField_WRITEINTERVAL = "writeInterval";

	/** toField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String toField_WRITEINTERVAL = "writeInterval";

	/** Constructor for SignalPduObject to initialize member variables with default values. */
	public SignalPduObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "children" };

		address = ADDRESS_DEFAULT_VALUE;
		applicationID = APPLICATIONID_DEFAULT_VALUE;
		bboxCenter = BBOXCENTER_DEFAULT_VALUE;
		bboxSize = BBOXSIZE_DEFAULT_VALUE;
		data = new ArrayList<>();
		dataLength = DATALENGTH_DEFAULT_VALUE;
		enabled = ENABLED_DEFAULT_VALUE;
		encodingScheme = ENCODINGSCHEME_DEFAULT_VALUE;
		entityID = ENTITYID_DEFAULT_VALUE;
		geoCoords = GEOCOORDS_DEFAULT_VALUE;
		geoSystem = GEOSYSTEM_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		multicastRelayHost = MULTICASTRELAYHOST_DEFAULT_VALUE;
		multicastRelayPort = MULTICASTRELAYPORT_DEFAULT_VALUE;
		networkMode = NETWORKMODE_DEFAULT_VALUE;
		port = PORT_DEFAULT_VALUE;
		radioID = RADIOID_DEFAULT_VALUE;
		readInterval = READINTERVAL_DEFAULT_VALUE;
		rtpHeaderExpected = RTPHEADEREXPECTED_DEFAULT_VALUE;
		sampleRate = SAMPLERATE_DEFAULT_VALUE;
		samples = SAMPLES_DEFAULT_VALUE;
		siteID = SITEID_DEFAULT_VALUE;
		tdlType = TDLTYPE_DEFAULT_VALUE;
		whichGeometry = WHICHGEOMETRY_DEFAULT_VALUE;
		writeInterval = WRITEINTERVAL_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>address</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Multicast network address, or else "localhost" example: 224.2.181.145.  * <br>

	 * @return value of address field
	 */
	@Override
	public String getAddress()
	{
		return address;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>address</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Multicast network address, or else "localhost" example: 224.2.181.145.
	 * @param newValue is new value for the address field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setAddress(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		address = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString address field, similar to {@link #setAddress(String)}.
	 * @param newValue is new value for the address field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setAddress(SFStringObject newValue)
	{
		setAddress(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>applicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of applicationID field
	 */
	@Override
	public int getApplicationID()
	{
		return applicationID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>applicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setApplicationID(int newValue)
	{
		applicationID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 applicationID field, similar to {@link #setApplicationID(int)}.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setApplicationID(SFInt32Object newValue)
	{
		setApplicationID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxCenter field
	 */
	@Override
	public float[] getBboxCenter()
	{
		return bboxCenter;
	}

	/**
	 * Assign 3-tuple float array to initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setBboxCenter(float x, float y, float z)
	{
		setBboxCenter(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity), or default value [-1 -1 -1], from initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint.
 * <ul>
 *  <li> <i>Hint:</i> can be useful for collision computations or inverse-kinematics (IK) engines. </li> 
 *  <li> <i>Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxSize field
	 */
	@Override
	public float[] getBboxSize()
	{
		return bboxSize;
	}

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity), or default value [-1 -1 -1], to initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint. Hint: can be useful for collision computations or inverse-kinematics (IK) engines. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of Integer results from inputOutput MFInt32 field named <i>data</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Holds audio or digital data conveyed by the radio transmission. Interpretation of the field depends on values of encodingScheme and tdlType fields.  * <br>

	 * @return value of data field
	 */
	@Override
	public int[] getData()
	{
		final int[] valuesArray = new int[data.size()];
		int i = 0;
		for (Integer arrayElement : data) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 data field, similar to {@link #getData()}.

	 * @return value of data field
	 */
	public ArrayList<Integer> getDataList()
	{
		return data;
	}

	/**
	 * Assign Integer array to inputOutput MFInt32 field named <i>data</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Holds audio or digital data conveyed by the radio transmission. Interpretation of the field depends on values of encodingScheme and tdlType fields.
	 * @param newValue is new value for the data field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setData(int[] newValue)
	{
		if (newValue == null)
		{
			clearData(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		data.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			data.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 data field, similar to {@link #setData(int[])}.
	 * @param newValue is new value for the data field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setData(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearData(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setData(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 data field, similar to {@link #setData(int[])}.
	 * @param newValue is new value for the data field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setData(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearData(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		data = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of data field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SignalPduObject clearData()
	{
		data.clear(); // reset
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>dataLength</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  number of bits of digital voice audio or digital data being sent in the Signal PDU. If the Encoding Class is database index, then dataLength field is set to 96.  * <br>

	 * @return value of dataLength field
	 */
	@Override
	public int getDataLength()
	{
		return dataLength;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>dataLength</i>.
	 * <br><br>
	 * <i>Tooltip:</i> number of bits of digital voice audio or digital data being sent in the Signal PDU. If the Encoding Class is database index, then dataLength field is set to 96.
	 * @param newValue is new value for the dataLength field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setDataLength(int newValue)
	{
		dataLength = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 dataLength field, similar to {@link #setDataLength(int)}.
	 * @param newValue is new value for the dataLength field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setDataLength(SFInt32Object newValue)
	{
		setDataLength(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables the sensor node.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled()
	{
		return enabled;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables the sensor node.
	 * @param newValue is new value for the enabled field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>encodingScheme</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  designates both Encoding Class and Encoding Type. Encoding Class enumerated value (2 most significant bits): 0 = Encoded Voice; 1 = Raw Binary Data; 2 = Application-Specific Data; 3 = Database Index. Encoding Type enumerated value (14 least significant bits): 1 = 8-bit mu-law; 2 = CVSD per MIL-STD-188-113; 3 = ADPCM per CCITT G.721; 4 = 16-bit linear PCM; 5 = 8-bit linear PCM; 6 = Vector Quantization.  * <br>

	 * @return value of encodingScheme field
	 */
	@Override
	public int getEncodingScheme()
	{
		return encodingScheme;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>encodingScheme</i>.
	 * <br><br>
	 * <i>Tooltip:</i> designates both Encoding Class and Encoding Type. Encoding Class enumerated value (2 most significant bits): 0 = Encoded Voice; 1 = Raw Binary Data; 2 = Application-Specific Data; 3 = Database Index. Encoding Type enumerated value (14 least significant bits): 1 = 8-bit mu-law; 2 = CVSD per MIL-STD-188-113; 3 = ADPCM per CCITT G.721; 4 = 16-bit linear PCM; 5 = 8-bit linear PCM; 6 = Vector Quantization.
	 * @param newValue is new value for the encodingScheme field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setEncodingScheme(int newValue)
	{
		encodingScheme = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 encodingScheme field, similar to {@link #setEncodingScheme(int)}.
	 * @param newValue is new value for the encodingScheme field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setEncodingScheme(SFInt32Object newValue)
	{
		setEncodingScheme(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  EntityID unique ID for entity within that application.  * <br>

	 * @return value of entityID field
	 */
	@Override
	public int getEntityID()
	{
		return entityID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> EntityID unique ID for entity within that application.
	 * @param newValue is new value for the entityID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setEntityID(int newValue)
	{
		entityID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityID field, similar to {@link #setEntityID(int)}.
	 * @param newValue is new value for the entityID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setEntityID(SFInt32Object newValue)
	{
		setEntityID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple double results from inputOutput SFVec3d field named <i>geoCoords</i>.
	 * @return value of geoCoords field
	 */
	@Override
	public double[] getGeoCoords()
	{
		return geoCoords;
	}

	/**
	 * Assign 3-tuple double array to inputOutput SFVec3d field named <i>geoCoords</i>.
	 * @param newValue is new value for the geoCoords field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setGeoCoords(double[] newValue)
	{
		if (newValue == null)
			newValue = new double[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu geoCoords newValue=" + SFVec3dObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		geoCoords = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param newValue is new value for the geoCoords field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoCoords(SFVec3dObject newValue)
	{
		setGeoCoords(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param x first component
	 * @param y second component

	 * @param z third component

	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoCoords(double x, double y, double z)
	{
		setGeoCoords(new double[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.3 or later) Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type.
 * <ul>
 *  <li> <i>Hint:</i> see X3D Specification 25.2.2 Spatial reference frames <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes</a> </li> 
 *  <li> <i>Hint:</i> see X3D Specification 25.2.4 Specifying geospatial coordinates <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords</a> </li> 
 *  <li> <i>Hint:</i> UTM is Universal Transverse Mercator coordinate system <br> <a href="https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system" target="_blank">https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system</a> </li> 
 *  <li> <i>Warning:</i>  deprecated values are GDC (replaced by GD) and GCC (replaced by GC). </li> 
 * </ul>
	 * @return value of geoSystem field
	 */
	@Override
	public String[] getGeoSystem()
	{
		final String[] valuesArray = new String[geoSystem.size()];
		int i = 0;
		for (String arrayElement : geoSystem) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString geoSystem field, similar to {@link #getGeoSystem()}.

	 * @return value of geoSystem field
	 */
	public ArrayList<String> getGeoSystemList()
	{
		return geoSystem;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.3 or later) Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type. Hint: see X3D Specification 25.2.2 Spatial reference frames http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes Hint: see X3D Specification 25.2.4 Specifying geospatial coordinates http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords Hint: UTM is Universal Transverse Mercator coordinate system https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system Warning: deprecated values are GDC (replaced by GD) and GCC (replaced by GC).
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setGeoSystem(String[] newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			geoSystem.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoSystem(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoSystem(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoSystem(String newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear();
		geoSystem.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setGeoSystem(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of geoSystem field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SignalPduObject clearGeoSystem()
	{
		geoSystem.clear(); // reset
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Have we had a network update recently?.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive()
	{
		return isActive;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isNetworkReader</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="remote" (listen to network as copy of remote entity).  * <br>

	 * @return value of isNetworkReader field
	 */
	@Override
	public boolean getIsNetworkReader()
	{
		return isNetworkReader;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isNetworkWriter</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="master" (output to network as master entity at writeInterval).  * <br>

	 * @return value of isNetworkWriter field
	 */
	@Override
	public boolean getIsNetworkWriter()
	{
		return isNetworkWriter;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isRtpHeaderHeard</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether incoming DIS packets have an RTP header prepended.  * <br>

	 * @return value of isRtpHeaderHeard field
	 */
	@Override
	public boolean getIsRtpHeaderHeard()
	{
		return isRtpHeaderHeard;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isStandAlone</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="local" (ignore network but still respond to local events).  * <br>

	 * @return value of isStandAlone field
	 */
	@Override
	public boolean getIsStandAlone()
	{
		return isStandAlone;
	}
	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata()
	{
		return metadata;
	}

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see #setMetadata(ProtoInstanceObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setMetadata(X3DMetadataObject newValue)
	{
		metadata = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) metadata).setParentObject(this); // parentTest15
		}
		if (metadataProtoInstance != null)
		{
			metadataProtoInstance.setParentObject(null); // housekeeping, clear prior object
			metadataProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of metadata field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public SignalPduObject clearMetadata()
	{
		((X3DConcreteElement) metadata).clearParentObject(); // remove references to facilitate Java memory management
		metadata = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>metadata</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DMetadataObject.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the metadata field
	 * @see #setMetadata(X3DMetadataObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SignalPduObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
	{
		if (metadata != null)
		{
			((X3DConcreteElement) metadata).setParentObject(null); // housekeeping, clear prior object
			metadata = null;
		}
		metadataProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>metadata</i>, if available.
	 * @see #getMetadata()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getMetadataProtoInstance()
	{
		return metadataProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>metadata</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getMetadata()
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	public boolean hasMetadata()
	{
		return (metadata != null) || (metadataProtoInstance != null);
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>multicastRelayHost</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Fallback server address if multicast not available locally. For example: track.nps.edu.  * <br>

	 * @return value of multicastRelayHost field
	 */
	@Override
	public String getMulticastRelayHost()
	{
		return multicastRelayHost;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>multicastRelayHost</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Fallback server address if multicast not available locally. For example: track.nps.edu.
	 * @param newValue is new value for the multicastRelayHost field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setMulticastRelayHost(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		multicastRelayHost = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString multicastRelayHost field, similar to {@link #setMulticastRelayHost(String)}.
	 * @param newValue is new value for the multicastRelayHost field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setMulticastRelayHost(SFStringObject newValue)
	{
		setMulticastRelayHost(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>multicastRelayPort</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Fallback server port if multicast not available locally. For example: 8010.  * <br>

	 * @return value of multicastRelayPort field
	 */
	@Override
	public int getMulticastRelayPort()
	{
		return multicastRelayPort;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>multicastRelayPort</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Fallback server port if multicast not available locally. For example: 8010.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setMulticastRelayPort(int newValue)
	{
		multicastRelayPort = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 multicastRelayPort field, similar to {@link #setMulticastRelayPort(int)}.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setMulticastRelayPort(SFInt32Object newValue)
	{
		setMulticastRelayPort(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['standAlone'|'networkReader'|'networkWriter'] from inputOutput SFString field named <i>networkMode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether this entity is ignoring the network, sending DIS packets to the network, or receiving DIS packets from the network. (1) standAlone: ignore network but still respond to events in local scene. (2) networkReader: listen to network and read PDU packets at readInterval, act as remotely linked copy of entity. (3) networkWriter: send PDU packets to network at writeInterval, act as master entity. Default value "standAlone" ensures that DIS network activation within a scene as networkReader or networkWriter is intentional.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Warning:</i>  network activity may have associated security issues. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NETWORKMODE_STANDALONE STANDALONE}, {@link #NETWORKMODE_NETWORKREADER NETWORKREADER}, {@link #NETWORKMODE_NETWORKWRITER NETWORKWRITER}.
	 * @return value of networkMode field
	 */
	@Override
	public String getNetworkMode()
	{
		return networkMode;
	}

	/**
	 * Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") ['standAlone'|'networkReader'|'networkWriter'] to inputOutput SFString field named <i>networkMode</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #NETWORKMODE_STANDALONE STANDALONE}, {@link #NETWORKMODE_NETWORKREADER NETWORKREADER}, {@link #NETWORKMODE_NETWORKWRITER NETWORKWRITER}).
	 * <br><br>
	 * <i>Tooltip:</i> Whether this entity is ignoring the network, sending DIS packets to the network, or receiving DIS packets from the network. (1) standAlone: ignore network but still respond to events in local scene. (2) networkReader: listen to network and read PDU packets at readInterval, act as remotely linked copy of entity. (3) networkWriter: send PDU packets to network at writeInterval, act as master entity. Default value "standAlone" ensures that DIS network activation within a scene as networkReader or networkWriter is intentional. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Warning: network activity may have associated security issues.
	 * @param newValue is new value for the networkMode field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setNetworkMode(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(NETWORKMODE_STANDALONE) ||
			newValue.equals(NETWORKMODE_NETWORKREADER) ||
			newValue.equals(NETWORKMODE_NETWORKWRITER))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu networkMode newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		networkMode = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString networkMode field, similar to {@link #setNetworkMode(String)}.
	 * @param newValue is new value for the networkMode field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setNetworkMode(SFStringObject newValue)
	{
		setNetworkMode(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>port</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Multicast network port, for example: 62040.  * <br>

	 * @return value of port field
	 */
	@Override
	public int getPort()
	{
		return port;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>port</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Multicast network port, for example: 62040.
	 * @param newValue is new value for the port field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setPort(int newValue)
	{
		port = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 port field, similar to {@link #setPort(int)}.
	 * @param newValue is new value for the port field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setPort(SFInt32Object newValue)
	{
		setPort(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Identifies a particular radio within a given entity.  * <br>

	 * @return value of radioID field
	 */
	@Override
	public int getRadioID()
	{
		return radioID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies a particular radio within a given entity.
	 * @param newValue is new value for the radioID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setRadioID(int newValue)
	{
		radioID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioID field, similar to {@link #setRadioID(int)}.
	 * @param newValue is new value for the radioID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setRadioID(SFInt32Object newValue)
	{
		setRadioID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>readInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Seconds between read updates, 0 means no reading.  * <br>

	 * @return value of readInterval field
	 */
	@Override
	public double getReadInterval()
	{
		return readInterval;
	}

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>readInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Seconds between read updates, 0 means no reading.
	 * @param newValue is new value for the readInterval field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setReadInterval(double newValue)
	{
		readInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime readInterval field, similar to {@link #setReadInterval(double)}.
	 * @param newValue is new value for the readInterval field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setReadInterval(SFTimeObject newValue)
	{
		setReadInterval(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>rtpHeaderExpected</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether RTP headers are prepended to DIS PDUs.  * <br>

	 * @return value of rtpHeaderExpected field
	 */
	@Override
	public boolean getRtpHeaderExpected()
	{
		return rtpHeaderExpected;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>rtpHeaderExpected</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether RTP headers are prepended to DIS PDUs.
	 * @param newValue is new value for the rtpHeaderExpected field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setRtpHeaderExpected(boolean newValue)
	{
		rtpHeaderExpected = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool rtpHeaderExpected field, similar to {@link #setRtpHeaderExpected(boolean)}.
	 * @param newValue is new value for the rtpHeaderExpected field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setRtpHeaderExpected(SFBoolObject newValue)
	{
		setRtpHeaderExpected(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>sampleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  sampleRate gives either (1) sample rate in samples per second if Encoding Class is encoded audio, or (2) data rate in bits per second for data transmissions. If Encoding Class is database index, sampleRate is set to zero.  * <br>

	 * @return value of sampleRate field
	 */
	@Override
	public int getSampleRate()
	{
		return sampleRate;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>sampleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i> sampleRate gives either (1) sample rate in samples per second if Encoding Class is encoded audio, or (2) data rate in bits per second for data transmissions. If Encoding Class is database index, sampleRate is set to zero.
	 * @param newValue is new value for the sampleRate field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setSampleRate(int newValue)
	{
		sampleRate = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 sampleRate field, similar to {@link #setSampleRate(int)}.
	 * @param newValue is new value for the sampleRate field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setSampleRate(SFInt32Object newValue)
	{
		setSampleRate(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>samples</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of samples in the PDU if the Encoding Class is encoded voice, otherwise the field is set to zero.  * <br>

	 * @return value of samples field
	 */
	@Override
	public int getSamples()
	{
		return samples;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>samples</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of samples in the PDU if the Encoding Class is encoded voice, otherwise the field is set to zero.
	 * @param newValue is new value for the samples field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setSamples(int newValue)
	{
		samples = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 samples field, similar to {@link #setSamples(int)}.
	 * @param newValue is new value for the samples field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setSamples(SFInt32Object newValue)
	{
		setSamples(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>siteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise siteID of the participating LAN or organization.  * <br>

	 * @return value of siteID field
	 */
	@Override
	public int getSiteID()
	{
		return siteID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>siteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise siteID of the participating LAN or organization.
	 * @param newValue is new value for the siteID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setSiteID(int newValue)
	{
		siteID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 siteID field, similar to {@link #setSiteID(int)}.
	 * @param newValue is new value for the siteID field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setSiteID(SFInt32Object newValue)
	{
		setSiteID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>tdlType</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Tactical Data Link (TDL) type as an enumerated value when the Encoding Class is voice, raw binary, application-specific, or database index representation of a TDL message.  * <br>

	 * @return value of tdlType field
	 */
	@Override
	public int getTdlType()
	{
		return tdlType;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>tdlType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Tactical Data Link (TDL) type as an enumerated value when the Encoding Class is voice, raw binary, application-specific, or database index representation of a TDL message.
	 * @param newValue is new value for the tdlType field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setTdlType(int newValue)
	{
		tdlType = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 tdlType field, similar to {@link #setTdlType(int)}.
	 * @param newValue is new value for the tdlType field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setTdlType(SFInt32Object newValue)
	{
		setTdlType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>timestamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  DIS timestamp in X3D units (seconds since 1 January 1970).  * <br>

	 * @return value of timestamp field
	 */
	@Override
	public double getTimestamp()
	{
		return timestamp;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>whichGeometry</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Select geometry to render: -1 for no geometry, 0 for text trace, 1 for default geometry, (optional) higher values to render different states.  * <br>

	 * @return value of whichGeometry field
	 */
	@Override
	public int getWhichGeometry()
	{
		return whichGeometry;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>whichGeometry</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Select geometry to render: -1 for no geometry, 0 for text trace, 1 for default geometry, (optional) higher values to render different states.
	 * @param newValue is new value for the whichGeometry field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setWhichGeometry(int newValue)
	{
		whichGeometry = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 whichGeometry field, similar to {@link #setWhichGeometry(int)}.
	 * @param newValue is new value for the whichGeometry field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setWhichGeometry(SFInt32Object newValue)
	{
		setWhichGeometry(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>writeInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Seconds between write updates, 0 means no writing (sending).  * <br>

	 * @return value of writeInterval field
	 */
	@Override
	public double getWriteInterval()
	{
		return writeInterval;
	}

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>writeInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Seconds between write updates, 0 means no writing (sending).
	 * @param newValue is new value for the writeInterval field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setWriteInterval(double newValue)
	{
		writeInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime writeInterval field, similar to {@link #setWriteInterval(double)}.
	 * @param newValue is new value for the writeInterval field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setWriteInterval(SFTimeObject newValue)
	{
		setWriteInterval(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SignalPduObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to SignalPdu
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("SignalPdu DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setDEF(SFStringObject newValue)
	{
		setDEF(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint: USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SignalPduObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to SignalPdu
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SignalPdu USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("SignalPdu USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SignalPduObject setCssClass(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setCssClass(SFStringObject newValue)
	{
		setCssClass(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Assign field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @param newValue is new value for the description field.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SignalPduObject setIS(ISObject newValue)
	{
		if (IS != null)
			IS.setParentObject(null); // housekeeping, clear prior object
		IS = newValue;
		IS.setParentObject(this);
		return this;
	}
	/**
	 * Provide field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return current ISObject, if any.
	 */
	@Override
	public ISObject getIS()
	{
		return IS;
	}
	/**
	 * Assign a USE reference to another DEF node of same node type, similar to {@link #setUSE(String)}.
	 * <br ><br >
	 * <i>Warning:</i> note that the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.
	 * <br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param DEFnode must have a DEF value defined
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SignalPduObject setUSE(SignalPduObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on SignalPduObject" +
				" that has no DEF name defined, thus a copy cannot be referenced as a USE node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		setUSE(DEFnode.getDEF());
		return this;
	}
	/**
	 * Utility constructor that assigns DEF label after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 */
	public SignalPduObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SignalPduObject addComments (String newComment)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(\"" + newComment + "\")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SignalPduObject addComments (String[] newComments)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(" + Arrays.toString(newComments) + ")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link SignalPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SignalPduObject addComments (CommentsBlock newCommentsBlock)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(CommentsBlock) " +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(newCommentsBlock.toStringList());
		return this;
	}
		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		boolean hasAttributes = true; // TODO check for non-default attribute values
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<SignalPdu"); // start opening tag
		if (hasAttributes)
		{
			if (!getDEF().equals(DEF_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" DEF='").append(SFStringObject.toString(getDEF())).append("'");
			}
			
			if (!getUSE().equals(USE_DEFAULT_VALUE))
			{
				stringX3D.append(" USE='").append(SFStringObject.toString(getUSE())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if ((!getAddress().equals(ADDRESS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" address='").append(new SFStringObject(getAddress()).toStringX3D()).append("'");
			}
			if (((getApplicationID() != APPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" applicationID='").append(SFInt32Object.toString(getApplicationID())).append("'");
			}
			if ((!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxCenter='").append(SFVec3fObject.toString(getBboxCenter())).append("'");
			}
			if ((!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxSize='").append(SFVec3fObject.toString(getBboxSize())).append("'");
			}
			if (((getData().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" data='").append(MFInt32Object.toString(getData())).append("'");
			}
			if (((getDataLength() != DATALENGTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" dataLength='").append(SFInt32Object.toString(getDataLength())).append("'");
			}
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if (((getEncodingScheme() != ENCODINGSCHEME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" encodingScheme='").append(SFInt32Object.toString(getEncodingScheme())).append("'");
			}
			if (((getEntityID() != ENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityID='").append(SFInt32Object.toString(getEntityID())).append("'");
			}
			if ((!Arrays.equals(getGeoCoords(), GEOCOORDS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoCoords='").append(SFVec3dObject.toString(getGeoCoords())).append("'");
			}
			if (((getGeoSystem().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoSystem='").append(new MFStringObject(getGeoSystem()).toStringX3D()).append("'");
			}
			if ((!getMulticastRelayHost().equals(MULTICASTRELAYHOST_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" multicastRelayHost='").append(new SFStringObject(getMulticastRelayHost()).toStringX3D()).append("'");
			}
			if (((getMulticastRelayPort() != MULTICASTRELAYPORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" multicastRelayPort='").append(SFInt32Object.toString(getMulticastRelayPort())).append("'");
			}
			if ((!getNetworkMode().equals(NETWORKMODE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" networkMode='").append(new SFStringObject(getNetworkMode()).toStringX3D()).append("'");
			}
			if (((getPort() != PORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" port='").append(SFInt32Object.toString(getPort())).append("'");
			}
			if (((getRadioID() != RADIOID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioID='").append(SFInt32Object.toString(getRadioID())).append("'");
			}
			if (((getReadInterval() != READINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" readInterval='").append(SFTimeObject.toString(getReadInterval())).append("'");
			}
			if (((getRtpHeaderExpected() != RTPHEADEREXPECTED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rtpHeaderExpected='").append(SFBoolObject.toString(getRtpHeaderExpected())).append("'");
			}
			if (((getSampleRate() != SAMPLERATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" sampleRate='").append(SFInt32Object.toString(getSampleRate())).append("'");
			}
			if (((getSamples() != SAMPLES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" samples='").append(SFInt32Object.toString(getSamples())).append("'");
			}
			if (((getSiteID() != SITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" siteID='").append(SFInt32Object.toString(getSiteID())).append("'");
			}
			if (((getTdlType() != TDLTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" tdlType='").append(SFInt32Object.toString(getTdlType())).append("'");
			}
			if (((getWhichGeometry() != WHICHGEOMETRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" whichGeometry='").append(SFInt32Object.toString(getWhichGeometry())).append("'");
			}
			if (((getWriteInterval() != WRITEINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" writeInterval='").append(SFTimeObject.toString(getWriteInterval())).append("'");
			}
			if ((!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" class='").append(new SFStringObject(getCssClass()).toStringX3D()).append("'");
			}
		}
		if ((hasChild) && !isUSE()) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag

			if (getIS() != null)
				stringX3D.append(getIS().toStringX3D(indentLevel + indentIncrement));

			// recursively iterate over child element
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</SignalPdu>").append("\n"); // finish closing tag
		}
		else
		{
			stringX3D.append("/>").append("\n"); // otherwise finish singleton tag
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		boolean hasAttributes = true; // TODO further refinement
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
		if (isUSE())
		{
			hasAttributes = false;
			hasChild      = false; // USE nodes include no other fields
		}
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		if (!getDEF().equals(DEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("DEF ").append(SFStringObject.toString(getDEF())).append(" ");
		}
		if (!getUSE().equals(USE_DEFAULT_VALUE))
		{
			 stringClassicVRML.append("USE ").append(SFStringObject.toString(getUSE())).append("\n");
		}
		else // only have further output if not a USE node
		{
			stringClassicVRML.append("SignalPdu").append(" { "); // define node name, node content follows

			if (hasAttributes || hasChild)
			{
				stringClassicVRML.append("\n").append(indent).append(indentCharacter); // fields for this node follow
			}
			if (hasAttributes)
			{

				boolean hasISconnect = (getIS() != null) && !getIS().getConnectList().isEmpty();
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("address"))
						{
							stringClassicVRML.append(indentCharacter).append("address").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getAddress().equals(ADDRESS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("address ").append("\"").append(SFStringObject.toString(getAddress())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("applicationID"))
						{
							stringClassicVRML.append(indentCharacter).append("applicationID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getApplicationID() != APPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("applicationID ").append(SFInt32Object.toString(getApplicationID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("bboxCenter"))
						{
							stringClassicVRML.append(indentCharacter).append("bboxCenter").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("bboxCenter ").append(SFVec3fObject.toString(getBboxCenter())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("bboxSize"))
						{
							stringClassicVRML.append(indentCharacter).append("bboxSize").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("bboxSize ").append(SFVec3fObject.toString(getBboxSize())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("data"))
						{
							stringClassicVRML.append(indentCharacter).append("data").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getData().length > 0)
				{
					stringClassicVRML.append("data ").append("[ ").append(MFInt32Object.toString(getData())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("dataLength"))
						{
							stringClassicVRML.append(indentCharacter).append("dataLength").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDataLength() != DATALENGTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("dataLength ").append(SFInt32Object.toString(getDataLength())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("enabled"))
						{
							stringClassicVRML.append(indentCharacter).append("enabled").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("enabled ").append(SFBoolObject.toString(getEnabled())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("encodingScheme"))
						{
							stringClassicVRML.append(indentCharacter).append("encodingScheme").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEncodingScheme() != ENCODINGSCHEME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("encodingScheme ").append(SFInt32Object.toString(getEncodingScheme())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entityID"))
						{
							stringClassicVRML.append(indentCharacter).append("entityID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityID() != ENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityID ").append(SFInt32Object.toString(getEntityID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("geoCoords"))
						{
							stringClassicVRML.append(indentCharacter).append("geoCoords").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getGeoCoords(), GEOCOORDS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("geoCoords ").append(SFVec3dObject.toString(getGeoCoords())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("geoSystem"))
						{
							stringClassicVRML.append(indentCharacter).append("geoSystem").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getGeoSystem().length > 0)
				{
					stringClassicVRML.append("geoSystem ").append("[ ").append(MFStringObject.toString(getGeoSystem())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("multicastRelayHost"))
						{
							stringClassicVRML.append(indentCharacter).append("multicastRelayHost").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getMulticastRelayHost().equals(MULTICASTRELAYHOST_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("multicastRelayHost ").append("\"").append(SFStringObject.toString(getMulticastRelayHost())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("multicastRelayPort"))
						{
							stringClassicVRML.append(indentCharacter).append("multicastRelayPort").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMulticastRelayPort() != MULTICASTRELAYPORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("multicastRelayPort ").append(SFInt32Object.toString(getMulticastRelayPort())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("networkMode"))
						{
							stringClassicVRML.append(indentCharacter).append("networkMode").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getNetworkMode().equals(NETWORKMODE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("networkMode ").append("\"").append(SFStringObject.toString(getNetworkMode())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("port"))
						{
							stringClassicVRML.append(indentCharacter).append("port").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getPort() != PORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("port ").append(SFInt32Object.toString(getPort())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioID"))
						{
							stringClassicVRML.append(indentCharacter).append("radioID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioID() != RADIOID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioID ").append(SFInt32Object.toString(getRadioID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("readInterval"))
						{
							stringClassicVRML.append(indentCharacter).append("readInterval").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getReadInterval() != READINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("readInterval ").append(SFTimeObject.toString(getReadInterval())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("rtpHeaderExpected"))
						{
							stringClassicVRML.append(indentCharacter).append("rtpHeaderExpected").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRtpHeaderExpected() != RTPHEADEREXPECTED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("rtpHeaderExpected ").append(SFBoolObject.toString(getRtpHeaderExpected())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("sampleRate"))
						{
							stringClassicVRML.append(indentCharacter).append("sampleRate").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSampleRate() != SAMPLERATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("sampleRate ").append(SFInt32Object.toString(getSampleRate())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("samples"))
						{
							stringClassicVRML.append(indentCharacter).append("samples").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSamples() != SAMPLES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("samples ").append(SFInt32Object.toString(getSamples())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("siteID"))
						{
							stringClassicVRML.append(indentCharacter).append("siteID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSiteID() != SITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("siteID ").append(SFInt32Object.toString(getSiteID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("tdlType"))
						{
							stringClassicVRML.append(indentCharacter).append("tdlType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTdlType() != TDLTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("tdlType ").append(SFInt32Object.toString(getTdlType())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("whichGeometry"))
						{
							stringClassicVRML.append(indentCharacter).append("whichGeometry").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWhichGeometry() != WHICHGEOMETRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("whichGeometry ").append(SFInt32Object.toString(getWhichGeometry())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("writeInterval"))
						{
							stringClassicVRML.append(indentCharacter).append("writeInterval").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWriteInterval() != WRITEINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("writeInterval ").append(SFTimeObject.toString(getWriteInterval())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("class"))
						{
							stringClassicVRML.append(indentCharacter).append("class").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("# class ").append("\"").append(SFStringObject.toString(getCssClass())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
			}
		}
		if (hasChild) // has contained node(s), comment(s), IS/connect and/or source code
		{
			// recursively iterate over child element
			if (metadata != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadata).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (metadataProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadataProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
				stringClassicVRML.append(indent); // end SFNode
			}
		}
		if (hasAttributes || hasChild)
		{
			stringClassicVRML.append("}").append("\n"); // finish node content
		}
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel);
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		// no name field available for this element
		X3DConcreteElement referenceElement;
		if (metadata != null)
		{
			referenceElement = ((X3DConcreteElement) metadata).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (metadataProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) metadataProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		if (getDEF().equals(DEFvalue))
			return this;
		X3DConcreteNode referenceNode;
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		setAddress(getAddress()); // exercise field checks, simple types

		setApplicationID(getApplicationID()); // exercise field checks, simple types

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setData(getData()); // exercise field checks, simple types

		setDataLength(getDataLength()); // exercise field checks, simple types

		setEnabled(getEnabled()); // exercise field checks, simple types

		setEncodingScheme(getEncodingScheme()); // exercise field checks, simple types

		setEntityID(getEntityID()); // exercise field checks, simple types

		setGeoCoords(getGeoCoords()); // exercise field checks, simple types

		setGeoSystem(getGeoSystem()); // exercise field checks, simple types

		setMulticastRelayHost(getMulticastRelayHost()); // exercise field checks, simple types

		setMulticastRelayPort(getMulticastRelayPort()); // exercise field checks, simple types

		setNetworkMode(getNetworkMode()); // exercise field checks, simple types

		setPort(getPort()); // exercise field checks, simple types

		setRadioID(getRadioID()); // exercise field checks, simple types

		setReadInterval(getReadInterval()); // exercise field checks, simple types

		setRtpHeaderExpected(getRtpHeaderExpected()); // exercise field checks, simple types

		setSampleRate(getSampleRate()); // exercise field checks, simple types

		setSamples(getSamples()); // exercise field checks, simple types

		setSiteID(getSiteID()); // exercise field checks, simple types

		setTdlType(getTdlType()); // exercise field checks, simple types

		setWhichGeometry(getWhichGeometry()); // exercise field checks, simple types

		setWriteInterval(getWriteInterval()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (metadata != null)
		{
			setMetadata(getMetadata());
			((X3DConcreteElement) metadata).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadata).getValidationResult());
		}
		if (metadataProtoInstance != null)
		{
			setMetadata(getMetadataProtoInstance());
			((X3DConcreteElement) metadataProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadataProtoInstance).getValidationResult());
		}
		if ((metadata != null) && (metadataProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both metadata and metadataProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasMetadata()) // test USE restrictions
		{
			String errorNotice = "SignalPdu USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "SignalPdu USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (getIS() != null)
		{
			if (getIS().getConnectList().isEmpty())
			{
				String errorNotice = "IS statement present, but contains no connect statements";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}				
			// TODO also check that this node has ancestor ProtoBody, and that a field with same name also exists, so that IS is legal
		}
		if (!getContainerFieldOverride().isEmpty() &&
			!Arrays.asList(containerField_ALTERNATE_VALUES).contains(getContainerFieldOverride()))
		{
			String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
				": illegal value encountered, containerField='" + getContainerFieldOverride() +
				"' but allowed values are containerField_ALTERNATE_VALUES='" + 
				new MFStringObject(containerField_ALTERNATE_VALUES).toStringX3D() + "'.";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldException(errorNotice); // report error
		}

		// profile validation test, if connected to full scene
		if (findAncestorX3DObject() != null)
		{
			String     modelProfile = findAncestorX3DObject().getProfile();
			headObject modelHead    = findAncestorX3DObject().getHead();
			ArrayList<componentObject> sceneComponentsList = new ArrayList<>();
			if (modelHead != null) 
				sceneComponentsList = modelHead.getComponentList();
			boolean hasSatisfactoryComponent = false;
			for (componentObject nextComponent : sceneComponentsList)
			{
				if ( nextComponent.getName().equals("DIS") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='DIS' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"DIS\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
