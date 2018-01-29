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
 * <i>X3D node tooltip</i>: TransmitterPdu is a networked Protocol Data Unit (PDU) information node that provides detailed information about a radio transmitter modeled in a simulation.
 * <ul>
 *  <li> <i>Hint:</i> TransmitterPdu packets use the IEEE Distributed Interactive Simulation (DIS) protocol. </li> 
 *  <li> <i>Hint:</i> Savage Developers Guide on DIS <br> <a href="https://savage.nps.edu/Savage/developers.html#DIS" target="_blank">https://savage.nps.edu/Savage/developers.html#DIS</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='DIS' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/dis.html#TransmitterPdu" target="blank">X3D Abstract Specification: TransmitterPdu</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TransmitterPdu" target="_blank">X3D Tooltips: TransmitterPdu</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class TransmitterPduObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.DIS.TransmitterPdu
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String address; // SFString

	private float[] antennaLocation; // SFVec3f

	private int antennaPatternLength; // SFInt32

	private int antennaPatternType; // SFInt32

	private int applicationID; // SFInt32

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private int cryptoKeyID; // SFInt32

	private int cryptoSystem; // SFInt32

	private boolean enabled; // SFBool

	private int entityID; // SFInt32

	private int frequency; // SFInt32

	private double[] geoCoords; // SFVec3d

	private ArrayList<String> geoSystem = new ArrayList<>(); // MFString

	private int inputSource; // SFInt32

	private boolean isActive; // SFBool

	private boolean isNetworkReader; // SFBool

	private boolean isNetworkWriter; // SFBool

	private boolean isRtpHeaderHeard; // SFBool

	private boolean isStandAlone; // SFBool

	private int lengthOfModulationParameters; // SFInt32

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private int modulationTypeDetail; // SFInt32

	private int modulationTypeMajor; // SFInt32

	private int modulationTypeSpreadSpectrum; // SFInt32

	private int modulationTypeSystem; // SFInt32

	private String multicastRelayHost; // SFString

	private int multicastRelayPort; // SFInt32

	private String networkMode; // SFString

	private int port; // SFInt32

	private float power; // SFFloat

	private int radioEntityTypeCategory; // SFInt32

	private int radioEntityTypeCountry; // SFInt32

	private int radioEntityTypeDomain; // SFInt32

	private int radioEntityTypeKind; // SFInt32

	private int radioEntityTypeNomenclature; // SFInt32

	private int radioEntityTypeNomenclatureVersion; // SFInt32

	private int radioID; // SFInt32

	private double readInterval; // SFTime

	private float[] relativeAntennaLocation; // SFVec3f

	private boolean rtpHeaderExpected; // SFBool

	private int siteID; // SFInt32

	private double timestamp; // SFTime

	private float transmitFrequencyBandwidth; // SFFloat

	private int transmitState; // SFInt32

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

	/** String constant <i>NAME</i> provides name of this element: <i>TransmitterPdu</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "TransmitterPdu";

	/** Provides name of this element: <i>TransmitterPdu</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>TransmitterPdu</i> element: <i>DIS</i> */
	public static final String COMPONENT = "DIS";

	/** Defines X3D component for the <i>TransmitterPdu</i> element: <i>DIS</i>
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

	/** SFVec3f field named <i>antennaLocation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] ANTENNALOCATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFInt32 field named <i>antennaPatternLength</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ANTENNAPATTERNLENGTH_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>antennaPatternType</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ANTENNAPATTERNTYPE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>applicationID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int APPLICATIONID_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>bboxCenter</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] BBOXCENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>bboxSize</i> has default value <i>{-1f,-1f,-1f}</i> (Java syntax) or <i>-1 -1 -1</i> (XML syntax). */
	public static final float[] BBOXSIZE_DEFAULT_VALUE = {-1f,-1f,-1f};

	/** SFInt32 field named <i>cryptoKeyID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int CRYPTOKEYID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>cryptoSystem</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int CRYPTOSYSTEM_DEFAULT_VALUE = 0;

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFInt32 field named <i>entityID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>frequency</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int FREQUENCY_DEFAULT_VALUE = 0;

	/** SFVec3d field named <i>geoCoords</i> has default value <i>{0,0,0}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final double[] GEOCOORDS_DEFAULT_VALUE = {0,0,0};

	/** MFString field named <i>geoSystem</i> has default quoted value <i>new String[] {"GD","WE"}</i> (Java syntax) or quoted value <i>"GD" "WE"</i> (XML syntax). */
	public static final ArrayList<String> GEOSYSTEM_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("GD","WE"));

	/** SFInt32 field named <i>inputSource</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int INPUTSOURCE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>lengthOfModulationParameters</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int LENGTHOFMODULATIONPARAMETERS_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>modulationTypeDetail</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MODULATIONTYPEDETAIL_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>modulationTypeMajor</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MODULATIONTYPEMAJOR_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>modulationTypeSpreadSpectrum</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MODULATIONTYPESPREADSPECTRUM_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>modulationTypeSystem</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MODULATIONTYPESYSTEM_DEFAULT_VALUE = 0;

	/** SFString field named <i>multicastRelayHost</i> has default value equal to an empty string. */
	public static final String MULTICASTRELAYHOST_DEFAULT_VALUE = "";

	/** SFInt32 field named <i>multicastRelayPort</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MULTICASTRELAYPORT_DEFAULT_VALUE = 0;

	/** SFString field named <i>networkMode</i> has default value <i>"standAlone"</i> (Java syntax) or <i>standAlone</i> (XML syntax). */
	public static final String NETWORKMODE_DEFAULT_VALUE = "standAlone";

	/** SFInt32 field named <i>port</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int PORT_DEFAULT_VALUE = 0;

	/** SFFloat field named <i>power</i> has default value <i>0.0f</i> (Java syntax) or <i>0.0</i> (XML syntax). */
	public static final float POWER_DEFAULT_VALUE = 0.0f;

	/** SFInt32 field named <i>radioEntityTypeCategory</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPECATEGORY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioEntityTypeCountry</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPECOUNTRY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioEntityTypeDomain</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPEDOMAIN_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioEntityTypeKind</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPEKIND_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioEntityTypeNomenclature</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPENOMENCLATURE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioEntityTypeNomenclatureVersion</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOENTITYTYPENOMENCLATUREVERSION_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>radioID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int RADIOID_DEFAULT_VALUE = 0;

	/** SFTime field named <i>readInterval</i> has default value <i>0.1</i> (Java syntax) or <i>0.1</i> (XML syntax). */
	public static final double READINTERVAL_DEFAULT_VALUE = 0.1;

	/** SFVec3f field named <i>relativeAntennaLocation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] RELATIVEANTENNALOCATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFBool field named <i>rtpHeaderExpected</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean RTPHEADEREXPECTED_DEFAULT_VALUE = false;

	/** SFInt32 field named <i>siteID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int SITEID_DEFAULT_VALUE = 0;

	/** SFFloat field named <i>transmitFrequencyBandwidth</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float TRANSMITFREQUENCYBANDWIDTH_DEFAULT_VALUE = 0f;

	/** SFInt32 field named <i>transmitState</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int TRANSMITSTATE_DEFAULT_VALUE = 0;

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
			case "antennaLocation":
				result = "SFVec3f";
				break;
			case "antennaPatternLength":
				result = "SFInt32";
				break;
			case "antennaPatternType":
				result = "SFInt32";
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
			case "cryptoKeyID":
				result = "SFInt32";
				break;
			case "cryptoSystem":
				result = "SFInt32";
				break;
			case "enabled":
				result = "SFBool";
				break;
			case "entityID":
				result = "SFInt32";
				break;
			case "frequency":
				result = "SFInt32";
				break;
			case "geoCoords":
				result = "SFVec3d";
				break;
			case "geoSystem":
				result = "MFString";
				break;
			case "inputSource":
				result = "SFInt32";
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
			case "lengthOfModulationParameters":
				result = "SFInt32";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "modulationTypeDetail":
				result = "SFInt32";
				break;
			case "modulationTypeMajor":
				result = "SFInt32";
				break;
			case "modulationTypeSpreadSpectrum":
				result = "SFInt32";
				break;
			case "modulationTypeSystem":
				result = "SFInt32";
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
			case "power":
				result = "SFFloat";
				break;
			case "radioEntityTypeCategory":
				result = "SFInt32";
				break;
			case "radioEntityTypeCountry":
				result = "SFInt32";
				break;
			case "radioEntityTypeDomain":
				result = "SFInt32";
				break;
			case "radioEntityTypeKind":
				result = "SFInt32";
				break;
			case "radioEntityTypeNomenclature":
				result = "SFInt32";
				break;
			case "radioEntityTypeNomenclatureVersion":
				result = "SFInt32";
				break;
			case "radioID":
				result = "SFInt32";
				break;
			case "readInterval":
				result = "SFTime";
				break;
			case "relativeAntennaLocation":
				result = "SFVec3f";
				break;
			case "rtpHeaderExpected":
				result = "SFBool";
				break;
			case "siteID":
				result = "SFInt32";
				break;
			case "timestamp":
				result = "SFTime";
				break;
			case "transmitFrequencyBandwidth":
				result = "SFFloat";
				break;
			case "transmitState":
				result = "SFInt32";
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
			case "antennaLocation":
				result = "inputOutput";
				break;
			case "antennaPatternLength":
				result = "inputOutput";
				break;
			case "antennaPatternType":
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
			case "cryptoKeyID":
				result = "inputOutput";
				break;
			case "cryptoSystem":
				result = "inputOutput";
				break;
			case "enabled":
				result = "inputOutput";
				break;
			case "entityID":
				result = "inputOutput";
				break;
			case "frequency":
				result = "inputOutput";
				break;
			case "geoCoords":
				result = "inputOutput";
				break;
			case "geoSystem":
				result = "initializeOnly";
				break;
			case "inputSource":
				result = "inputOutput";
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
			case "lengthOfModulationParameters":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "modulationTypeDetail":
				result = "inputOutput";
				break;
			case "modulationTypeMajor":
				result = "inputOutput";
				break;
			case "modulationTypeSpreadSpectrum":
				result = "inputOutput";
				break;
			case "modulationTypeSystem":
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
			case "power":
				result = "inputOutput";
				break;
			case "radioEntityTypeCategory":
				result = "inputOutput";
				break;
			case "radioEntityTypeCountry":
				result = "inputOutput";
				break;
			case "radioEntityTypeDomain":
				result = "inputOutput";
				break;
			case "radioEntityTypeKind":
				result = "inputOutput";
				break;
			case "radioEntityTypeNomenclature":
				result = "inputOutput";
				break;
			case "radioEntityTypeNomenclatureVersion":
				result = "inputOutput";
				break;
			case "radioID":
				result = "inputOutput";
				break;
			case "readInterval":
				result = "inputOutput";
				break;
			case "relativeAntennaLocation":
				result = "inputOutput";
				break;
			case "rtpHeaderExpected":
				result = "initializeOnly";
				break;
			case "siteID":
				result = "inputOutput";
				break;
			case "timestamp":
				result = "outputOnly";
				break;
			case "transmitFrequencyBandwidth":
				result = "inputOutput";
				break;
			case "transmitState":
				result = "inputOutput";
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

	/** fromField ROUTE name for SFVec3f field named <i>antennaLocation</i>. */
	public static final String fromField_ANTENNALOCATION = "antennaLocation";

	/** toField ROUTE name for SFVec3f field named <i>antennaLocation</i>. */
	public static final String toField_ANTENNALOCATION = "antennaLocation";

	/** fromField ROUTE name for SFInt32 field named <i>antennaPatternLength</i>. */
	public static final String fromField_ANTENNAPATTERNLENGTH = "antennaPatternLength";

	/** toField ROUTE name for SFInt32 field named <i>antennaPatternLength</i>. */
	public static final String toField_ANTENNAPATTERNLENGTH = "antennaPatternLength";

	/** fromField ROUTE name for SFInt32 field named <i>antennaPatternType</i>. */
	public static final String fromField_ANTENNAPATTERNTYPE = "antennaPatternType";

	/** toField ROUTE name for SFInt32 field named <i>antennaPatternType</i>. */
	public static final String toField_ANTENNAPATTERNTYPE = "antennaPatternType";

	/** fromField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String fromField_APPLICATIONID = "applicationID";

	/** toField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String toField_APPLICATIONID = "applicationID";

	/** fromField ROUTE name for SFInt32 field named <i>cryptoKeyID</i>. */
	public static final String fromField_CRYPTOKEYID = "cryptoKeyID";

	/** toField ROUTE name for SFInt32 field named <i>cryptoKeyID</i>. */
	public static final String toField_CRYPTOKEYID = "cryptoKeyID";

	/** fromField ROUTE name for SFInt32 field named <i>cryptoSystem</i>. */
	public static final String fromField_CRYPTOSYSTEM = "cryptoSystem";

	/** toField ROUTE name for SFInt32 field named <i>cryptoSystem</i>. */
	public static final String toField_CRYPTOSYSTEM = "cryptoSystem";

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String fromField_ENTITYID = "entityID";

	/** toField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String toField_ENTITYID = "entityID";

	/** fromField ROUTE name for SFInt32 field named <i>frequency</i>. */
	public static final String fromField_FREQUENCY = "frequency";

	/** toField ROUTE name for SFInt32 field named <i>frequency</i>. */
	public static final String toField_FREQUENCY = "frequency";

	/** fromField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String fromField_GEOCOORDS = "geoCoords";

	/** toField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String toField_GEOCOORDS = "geoCoords";

	/** fromField ROUTE name for SFInt32 field named <i>inputSource</i>. */
	public static final String fromField_INPUTSOURCE = "inputSource";

	/** toField ROUTE name for SFInt32 field named <i>inputSource</i>. */
	public static final String toField_INPUTSOURCE = "inputSource";

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

	/** fromField ROUTE name for SFInt32 field named <i>lengthOfModulationParameters</i>. */
	public static final String fromField_LENGTHOFMODULATIONPARAMETERS = "lengthOfModulationParameters";

	/** toField ROUTE name for SFInt32 field named <i>lengthOfModulationParameters</i>. */
	public static final String toField_LENGTHOFMODULATIONPARAMETERS = "lengthOfModulationParameters";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFInt32 field named <i>modulationTypeDetail</i>. */
	public static final String fromField_MODULATIONTYPEDETAIL = "modulationTypeDetail";

	/** toField ROUTE name for SFInt32 field named <i>modulationTypeDetail</i>. */
	public static final String toField_MODULATIONTYPEDETAIL = "modulationTypeDetail";

	/** fromField ROUTE name for SFInt32 field named <i>modulationTypeMajor</i>. */
	public static final String fromField_MODULATIONTYPEMAJOR = "modulationTypeMajor";

	/** toField ROUTE name for SFInt32 field named <i>modulationTypeMajor</i>. */
	public static final String toField_MODULATIONTYPEMAJOR = "modulationTypeMajor";

	/** fromField ROUTE name for SFInt32 field named <i>modulationTypeSpreadSpectrum</i>. */
	public static final String fromField_MODULATIONTYPESPREADSPECTRUM = "modulationTypeSpreadSpectrum";

	/** toField ROUTE name for SFInt32 field named <i>modulationTypeSpreadSpectrum</i>. */
	public static final String toField_MODULATIONTYPESPREADSPECTRUM = "modulationTypeSpreadSpectrum";

	/** fromField ROUTE name for SFInt32 field named <i>modulationTypeSystem</i>. */
	public static final String fromField_MODULATIONTYPESYSTEM = "modulationTypeSystem";

	/** toField ROUTE name for SFInt32 field named <i>modulationTypeSystem</i>. */
	public static final String toField_MODULATIONTYPESYSTEM = "modulationTypeSystem";

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

	/** fromField ROUTE name for SFFloat field named <i>power</i>. */
	public static final String fromField_POWER = "power";

	/** toField ROUTE name for SFFloat field named <i>power</i>. */
	public static final String toField_POWER = "power";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeCategory</i>. */
	public static final String fromField_RADIOENTITYTYPECATEGORY = "radioEntityTypeCategory";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeCategory</i>. */
	public static final String toField_RADIOENTITYTYPECATEGORY = "radioEntityTypeCategory";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeCountry</i>. */
	public static final String fromField_RADIOENTITYTYPECOUNTRY = "radioEntityTypeCountry";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeCountry</i>. */
	public static final String toField_RADIOENTITYTYPECOUNTRY = "radioEntityTypeCountry";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeDomain</i>. */
	public static final String fromField_RADIOENTITYTYPEDOMAIN = "radioEntityTypeDomain";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeDomain</i>. */
	public static final String toField_RADIOENTITYTYPEDOMAIN = "radioEntityTypeDomain";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeKind</i>. */
	public static final String fromField_RADIOENTITYTYPEKIND = "radioEntityTypeKind";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeKind</i>. */
	public static final String toField_RADIOENTITYTYPEKIND = "radioEntityTypeKind";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeNomenclature</i>. */
	public static final String fromField_RADIOENTITYTYPENOMENCLATURE = "radioEntityTypeNomenclature";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeNomenclature</i>. */
	public static final String toField_RADIOENTITYTYPENOMENCLATURE = "radioEntityTypeNomenclature";

	/** fromField ROUTE name for SFInt32 field named <i>radioEntityTypeNomenclatureVersion</i>. */
	public static final String fromField_RADIOENTITYTYPENOMENCLATUREVERSION = "radioEntityTypeNomenclatureVersion";

	/** toField ROUTE name for SFInt32 field named <i>radioEntityTypeNomenclatureVersion</i>. */
	public static final String toField_RADIOENTITYTYPENOMENCLATUREVERSION = "radioEntityTypeNomenclatureVersion";

	/** fromField ROUTE name for SFInt32 field named <i>radioID</i>. */
	public static final String fromField_RADIOID = "radioID";

	/** toField ROUTE name for SFInt32 field named <i>radioID</i>. */
	public static final String toField_RADIOID = "radioID";

	/** fromField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String fromField_READINTERVAL = "readInterval";

	/** toField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String toField_READINTERVAL = "readInterval";

	/** fromField ROUTE name for SFVec3f field named <i>relativeAntennaLocation</i>. */
	public static final String fromField_RELATIVEANTENNALOCATION = "relativeAntennaLocation";

	/** toField ROUTE name for SFVec3f field named <i>relativeAntennaLocation</i>. */
	public static final String toField_RELATIVEANTENNALOCATION = "relativeAntennaLocation";

	/** fromField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String fromField_SITEID = "siteID";

	/** toField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String toField_SITEID = "siteID";

	/** fromField ROUTE name for SFTime field named <i>timestamp</i>. */
	public static final String fromField_TIMESTAMP = "timestamp";

	/** fromField ROUTE name for SFFloat field named <i>transmitFrequencyBandwidth</i>. */
	public static final String fromField_TRANSMITFREQUENCYBANDWIDTH = "transmitFrequencyBandwidth";

	/** toField ROUTE name for SFFloat field named <i>transmitFrequencyBandwidth</i>. */
	public static final String toField_TRANSMITFREQUENCYBANDWIDTH = "transmitFrequencyBandwidth";

	/** fromField ROUTE name for SFInt32 field named <i>transmitState</i>. */
	public static final String fromField_TRANSMITSTATE = "transmitState";

	/** toField ROUTE name for SFInt32 field named <i>transmitState</i>. */
	public static final String toField_TRANSMITSTATE = "transmitState";

	/** fromField ROUTE name for SFInt32 field named <i>whichGeometry</i>. */
	public static final String fromField_WHICHGEOMETRY = "whichGeometry";

	/** toField ROUTE name for SFInt32 field named <i>whichGeometry</i>. */
	public static final String toField_WHICHGEOMETRY = "whichGeometry";

	/** fromField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String fromField_WRITEINTERVAL = "writeInterval";

	/** toField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String toField_WRITEINTERVAL = "writeInterval";

	/** Constructor for TransmitterPduObject to initialize member variables with default values. */
	public TransmitterPduObject()
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
		antennaLocation = ANTENNALOCATION_DEFAULT_VALUE;
		antennaPatternLength = ANTENNAPATTERNLENGTH_DEFAULT_VALUE;
		antennaPatternType = ANTENNAPATTERNTYPE_DEFAULT_VALUE;
		applicationID = APPLICATIONID_DEFAULT_VALUE;
		bboxCenter = BBOXCENTER_DEFAULT_VALUE;
		bboxSize = BBOXSIZE_DEFAULT_VALUE;
		cryptoKeyID = CRYPTOKEYID_DEFAULT_VALUE;
		cryptoSystem = CRYPTOSYSTEM_DEFAULT_VALUE;
		enabled = ENABLED_DEFAULT_VALUE;
		entityID = ENTITYID_DEFAULT_VALUE;
		frequency = FREQUENCY_DEFAULT_VALUE;
		geoCoords = GEOCOORDS_DEFAULT_VALUE;
		geoSystem = GEOSYSTEM_DEFAULT_VALUE;
		inputSource = INPUTSOURCE_DEFAULT_VALUE;
		lengthOfModulationParameters = LENGTHOFMODULATIONPARAMETERS_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		modulationTypeDetail = MODULATIONTYPEDETAIL_DEFAULT_VALUE;
		modulationTypeMajor = MODULATIONTYPEMAJOR_DEFAULT_VALUE;
		modulationTypeSpreadSpectrum = MODULATIONTYPESPREADSPECTRUM_DEFAULT_VALUE;
		modulationTypeSystem = MODULATIONTYPESYSTEM_DEFAULT_VALUE;
		multicastRelayHost = MULTICASTRELAYHOST_DEFAULT_VALUE;
		multicastRelayPort = MULTICASTRELAYPORT_DEFAULT_VALUE;
		networkMode = NETWORKMODE_DEFAULT_VALUE;
		port = PORT_DEFAULT_VALUE;
		power = POWER_DEFAULT_VALUE;
		radioEntityTypeCategory = RADIOENTITYTYPECATEGORY_DEFAULT_VALUE;
		radioEntityTypeCountry = RADIOENTITYTYPECOUNTRY_DEFAULT_VALUE;
		radioEntityTypeDomain = RADIOENTITYTYPEDOMAIN_DEFAULT_VALUE;
		radioEntityTypeKind = RADIOENTITYTYPEKIND_DEFAULT_VALUE;
		radioEntityTypeNomenclature = RADIOENTITYTYPENOMENCLATURE_DEFAULT_VALUE;
		radioEntityTypeNomenclatureVersion = RADIOENTITYTYPENOMENCLATUREVERSION_DEFAULT_VALUE;
		radioID = RADIOID_DEFAULT_VALUE;
		readInterval = READINTERVAL_DEFAULT_VALUE;
		relativeAntennaLocation = RELATIVEANTENNALOCATION_DEFAULT_VALUE;
		rtpHeaderExpected = RTPHEADEREXPECTED_DEFAULT_VALUE;
		siteID = SITEID_DEFAULT_VALUE;
		transmitFrequencyBandwidth = TRANSMITFREQUENCYBANDWIDTH_DEFAULT_VALUE;
		transmitState = TRANSMITSTATE_DEFAULT_VALUE;
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setAddress(String newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setAddress(SFStringObject newValue)
	{
		setAddress(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>antennaLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  World coordinates for antenna location.  * <br>

	 * @return value of antennaLocation field
	 */
	@Override
	public float[] getAntennaLocation()
	{
		return antennaLocation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>antennaLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> World coordinates for antenna location.
	 * @param newValue is new value for the antennaLocation field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setAntennaLocation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu antennaLocation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		antennaLocation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f antennaLocation field, similar to {@link #setAntennaLocation(float[])}.
	 * @param newValue is new value for the antennaLocation field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setAntennaLocation(SFVec3fObject newValue)
	{
		setAntennaLocation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f antennaLocation field, similar to {@link #setAntennaLocation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setAntennaLocation(float x, float y, float z)
	{
		setAntennaLocation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>antennaPatternLength</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  .  * <br>

	 * @return value of antennaPatternLength field
	 */
	@Override
	public int getAntennaPatternLength()
	{
		return antennaPatternLength;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>antennaPatternLength</i>.
	 * <br><br>
	 * <i>Tooltip:</i> .
	 * @param newValue is new value for the antennaPatternLength field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setAntennaPatternLength(int newValue)
	{
		antennaPatternLength = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 antennaPatternLength field, similar to {@link #setAntennaPatternLength(int)}.
	 * @param newValue is new value for the antennaPatternLength field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setAntennaPatternLength(SFInt32Object newValue)
	{
		setAntennaPatternLength(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>antennaPatternType</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Antenna shape pattern: 0 for omnidirectional, 1 for beam, 2 for spherical harmonic (deprecated), or optional higher value.  * <br>

	 * @return value of antennaPatternType field
	 */
	@Override
	public int getAntennaPatternType()
	{
		return antennaPatternType;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>antennaPatternType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Antenna shape pattern: 0 for omnidirectional, 1 for beam, 2 for spherical harmonic (deprecated), or optional higher value.
	 * @param newValue is new value for the antennaPatternType field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setAntennaPatternType(int newValue)
	{
		antennaPatternType = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 antennaPatternType field, similar to {@link #setAntennaPatternType(int)}.
	 * @param newValue is new value for the antennaPatternType field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setAntennaPatternType(SFInt32Object newValue)
	{
		setAntennaPatternType(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setApplicationID(int newValue)
	{
		applicationID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 applicationID field, similar to {@link #setApplicationID(int)}.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setApplicationID(SFInt32Object newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>cryptoKeyID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Nonzero value corresponding to the simulated cryptographic key. Enumerations value 0 indicates plain (unencrypted) communications.  * <br>

	 * @return value of cryptoKeyID field
	 */
	@Override
	public int getCryptoKeyID()
	{
		return cryptoKeyID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>cryptoKeyID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Nonzero value corresponding to the simulated cryptographic key. Enumerations value 0 indicates plain (unencrypted) communications.
	 * @param newValue is new value for the cryptoKeyID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setCryptoKeyID(int newValue)
	{
		cryptoKeyID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 cryptoKeyID field, similar to {@link #setCryptoKeyID(int)}.
	 * @param newValue is new value for the cryptoKeyID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setCryptoKeyID(SFInt32Object newValue)
	{
		setCryptoKeyID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>cryptoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Indicates type of crypto system being used, even if the encryption equipment is not keyed. Value 0 for No Encryption Device, higher enumerations values correspond to other specific equipment..  * <br>

	 * @return value of cryptoSystem field
	 */
	@Override
	public int getCryptoSystem()
	{
		return cryptoSystem;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>cryptoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Indicates type of crypto system being used, even if the encryption equipment is not keyed. Value 0 for No Encryption Device, higher enumerations values correspond to other specific equipment..
	 * @param newValue is new value for the cryptoSystem field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setCryptoSystem(int newValue)
	{
		cryptoSystem = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 cryptoSystem field, similar to {@link #setCryptoSystem(int)}.
	 * @param newValue is new value for the cryptoSystem field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setCryptoSystem(SFInt32Object newValue)
	{
		setCryptoSystem(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setEntityID(int newValue)
	{
		entityID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityID field, similar to {@link #setEntityID(int)}.
	 * @param newValue is new value for the entityID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setEntityID(SFInt32Object newValue)
	{
		setEntityID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>frequency</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Transmission frequency in Hz. If the radio is in frequency hopping mode, this field may be set to the center of the frequency hopping band currently in use, or to some other appropriate value.  * <br>

	 * @return value of frequency field
	 */
	@Override
	public int getFrequency()
	{
		return frequency;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>frequency</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Transmission frequency in Hz. If the radio is in frequency hopping mode, this field may be set to the center of the frequency hopping band currently in use, or to some other appropriate value.
	 * @param newValue is new value for the frequency field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setFrequency(int newValue)
	{
		frequency = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 frequency field, similar to {@link #setFrequency(int)}.
	 * @param newValue is new value for the frequency field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setFrequency(SFInt32Object newValue)
	{
		setFrequency(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setGeoCoords(double[] newValue)
	{
		if (newValue == null)
			newValue = new double[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu geoCoords newValue=" + SFVec3dObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		geoCoords = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param newValue is new value for the geoCoords field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoCoords(SFVec3dObject newValue)
	{
		setGeoCoords(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param x first component
	 * @param y second component

	 * @param z third component

	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoCoords(double x, double y, double z)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setGeoSystem(String[] newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoSystem(MFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoSystem(SFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoSystem(String newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setGeoSystem(ArrayList<String> newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TransmitterPduObject clearGeoSystem()
	{
		geoSystem.clear(); // reset
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>inputSource</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Source of transmission input. Enumerations value 0 for Other, 1 for Pilot, 2 for Copilot, 3 for First Officer, 4 for Driver, 5 for Loader, 6 for Gunner, 7 for Commander, 8 for Digital Data Device, 9 for Intercom, 10 for Audio Jammer, 11 for Data Jammer, 12 for GPS Jammer, 13 for GPS Meaconer (masking beacon).  * <br>

	 * @return value of inputSource field
	 */
	@Override
	public int getInputSource()
	{
		return inputSource;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>inputSource</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Source of transmission input. Enumerations value 0 for Other, 1 for Pilot, 2 for Copilot, 3 for First Officer, 4 for Driver, 5 for Loader, 6 for Gunner, 7 for Commander, 8 for Digital Data Device, 9 for Intercom, 10 for Audio Jammer, 11 for Data Jammer, 12 for GPS Jammer, 13 for GPS Meaconer (masking beacon).
	 * @param newValue is new value for the inputSource field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setInputSource(int newValue)
	{
		inputSource = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 inputSource field, similar to {@link #setInputSource(int)}.
	 * @param newValue is new value for the inputSource field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setInputSource(SFInt32Object newValue)
	{
		setInputSource(newValue.getPrimitiveValue());
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
	 * Provide int value from inputOutput SFInt32 field named <i>lengthOfModulationParameters</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  .  * <br>

	 * @return value of lengthOfModulationParameters field
	 */
	@Override
	public int getLengthOfModulationParameters()
	{
		return lengthOfModulationParameters;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>lengthOfModulationParameters</i>.
	 * <br><br>
	 * <i>Tooltip:</i> .
	 * @param newValue is new value for the lengthOfModulationParameters field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setLengthOfModulationParameters(int newValue)
	{
		lengthOfModulationParameters = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 lengthOfModulationParameters field, similar to {@link #setLengthOfModulationParameters(int)}.
	 * @param newValue is new value for the lengthOfModulationParameters field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setLengthOfModulationParameters(SFInt32Object newValue)
	{
		setLengthOfModulationParameters(newValue.getPrimitiveValue());
		return this;
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public TransmitterPduObject clearMetadata()
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TransmitterPduObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide int value from inputOutput SFInt32 field named <i>modulationTypeDetail</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration containing detailed information depending on the major modulation type.  * <br>

	 * @return value of modulationTypeDetail field
	 */
	@Override
	public int getModulationTypeDetail()
	{
		return modulationTypeDetail;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>modulationTypeDetail</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration containing detailed information depending on the major modulation type.
	 * @param newValue is new value for the modulationTypeDetail field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setModulationTypeDetail(int newValue)
	{
		modulationTypeDetail = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 modulationTypeDetail field, similar to {@link #setModulationTypeDetail(int)}.
	 * @param newValue is new value for the modulationTypeDetail field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setModulationTypeDetail(SFInt32Object newValue)
	{
		setModulationTypeDetail(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>modulationTypeMajor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration containing major classification of the modulation type. Enumerations value 0 for No Statement, 1 for Amplitude, 2 for Amplitude and Angle, 3 for Angle, 4 for Combination, 5 for Pulse, 6 for Unmodulated, 7 for Carrier Phase Shift Modulation (CPSM).  * <br>

	 * @return value of modulationTypeMajor field
	 */
	@Override
	public int getModulationTypeMajor()
	{
		return modulationTypeMajor;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>modulationTypeMajor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration containing major classification of the modulation type. Enumerations value 0 for No Statement, 1 for Amplitude, 2 for Amplitude and Angle, 3 for Angle, 4 for Combination, 5 for Pulse, 6 for Unmodulated, 7 for Carrier Phase Shift Modulation (CPSM).
	 * @param newValue is new value for the modulationTypeMajor field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setModulationTypeMajor(int newValue)
	{
		modulationTypeMajor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 modulationTypeMajor field, similar to {@link #setModulationTypeMajor(int)}.
	 * @param newValue is new value for the modulationTypeMajor field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setModulationTypeMajor(SFInt32Object newValue)
	{
		setModulationTypeMajor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>modulationTypeSpreadSpectrum</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Indicates the spread spectrum technique or combination of spread spectrum techniques in use.  * <br>

	 * @return value of modulationTypeSpreadSpectrum field
	 */
	@Override
	public int getModulationTypeSpreadSpectrum()
	{
		return modulationTypeSpreadSpectrum;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>modulationTypeSpreadSpectrum</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Indicates the spread spectrum technique or combination of spread spectrum techniques in use.
	 * @param newValue is new value for the modulationTypeSpreadSpectrum field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setModulationTypeSpreadSpectrum(int newValue)
	{
		modulationTypeSpreadSpectrum = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 modulationTypeSpreadSpectrum field, similar to {@link #setModulationTypeSpreadSpectrum(int)}.
	 * @param newValue is new value for the modulationTypeSpreadSpectrum field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setModulationTypeSpreadSpectrum(SFInt32Object newValue)
	{
		setModulationTypeSpreadSpectrum(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>modulationTypeSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Specifies radio system associated with this Transmitter PDU and used to interpret other fields whose values depend on a specific radio system.  * <br>

	 * @return value of modulationTypeSystem field
	 */
	@Override
	public int getModulationTypeSystem()
	{
		return modulationTypeSystem;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>modulationTypeSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Specifies radio system associated with this Transmitter PDU and used to interpret other fields whose values depend on a specific radio system.
	 * @param newValue is new value for the modulationTypeSystem field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setModulationTypeSystem(int newValue)
	{
		modulationTypeSystem = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 modulationTypeSystem field, similar to {@link #setModulationTypeSystem(int)}.
	 * @param newValue is new value for the modulationTypeSystem field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setModulationTypeSystem(SFInt32Object newValue)
	{
		setModulationTypeSystem(newValue.getPrimitiveValue());
		return this;
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setMulticastRelayHost(String newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setMulticastRelayHost(SFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setMulticastRelayPort(int newValue)
	{
		multicastRelayPort = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 multicastRelayPort field, similar to {@link #setMulticastRelayPort(int)}.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setMulticastRelayPort(SFInt32Object newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setNetworkMode(String newValue)
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
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu networkMode newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setNetworkMode(SFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setPort(int newValue)
	{
		port = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 port field, similar to {@link #setPort(int)}.
	 * @param newValue is new value for the port field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setPort(SFInt32Object newValue)
	{
		setPort(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>power</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Power that radio would be capable of outputting if on and transmitting, independent of actual transmit state of the radio.  * <br>

	 * @return value of power field
	 */
	@Override
	public float getPower()
	{
		return power;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>power</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Power that radio would be capable of outputting if on and transmitting, independent of actual transmit state of the radio.
	 * @param newValue is new value for the power field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setPower(float newValue)
	{
		power = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat power field, similar to {@link #setPower(float)}.
	 * @param newValue is new value for the power field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setPower(SFFloatObject newValue)
	{
		setPower(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration containing EntityType of transmitter radio. Enumerations value: 0 for Other, 1 for Generic Radio or Simple Intercom, 2 for HAVE QUICK, 3 for HAVE QUICK II, 4 for HAVE QUICK IIA, 5 for SINCGARS, 6 for CCTT SINCGARS, 7 for EPLRS (Enhanced Position Location Reporting System), 8 for JTIDS/MIDS, 9 for Link 11, 10 for Link 11B, 11 for L-Band SATCOM, 12 for Enhanced SINCGARS 7.3, 13 for Navigation Aid.  * <br>

	 * @return value of radioEntityTypeCategory field
	 */
	@Override
	public int getRadioEntityTypeCategory()
	{
		return radioEntityTypeCategory;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration containing EntityType of transmitter radio. Enumerations value: 0 for Other, 1 for Generic Radio or Simple Intercom, 2 for HAVE QUICK, 3 for HAVE QUICK II, 4 for HAVE QUICK IIA, 5 for SINCGARS, 6 for CCTT SINCGARS, 7 for EPLRS (Enhanced Position Location Reporting System), 8 for JTIDS/MIDS, 9 for Link 11, 10 for Link 11B, 11 for L-Band SATCOM, 12 for Enhanced SINCGARS 7.3, 13 for Navigation Aid.
	 * @param newValue is new value for the radioEntityTypeCategory field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeCategory(int newValue)
	{
		radioEntityTypeCategory = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeCategory field, similar to {@link #setRadioEntityTypeCategory(int)}.
	 * @param newValue is new value for the radioEntityTypeCategory field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeCategory(SFInt32Object newValue)
	{
		setRadioEntityTypeCategory(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for country to which the design of the entity or its design specification is attributed.  * <br>

	 * @return value of radioEntityTypeCountry field
	 */
	@Override
	public int getRadioEntityTypeCountry()
	{
		return radioEntityTypeCountry;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for country to which the design of the entity or its design specification is attributed.
	 * @param newValue is new value for the radioEntityTypeCountry field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeCountry(int newValue)
	{
		radioEntityTypeCountry = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeCountry field, similar to {@link #setRadioEntityTypeCountry(int)}.
	 * @param newValue is new value for the radioEntityTypeCountry field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeCountry(SFInt32Object newValue)
	{
		setRadioEntityTypeCountry(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.  * <br>

	 * @return value of radioEntityTypeDomain field
	 */
	@Override
	public int getRadioEntityTypeDomain()
	{
		return radioEntityTypeDomain;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.
	 * @param newValue is new value for the radioEntityTypeDomain field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeDomain(int newValue)
	{
		radioEntityTypeDomain = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeDomain field, similar to {@link #setRadioEntityTypeDomain(int)}.
	 * @param newValue is new value for the radioEntityTypeDomain field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeDomain(SFInt32Object newValue)
	{
		setRadioEntityTypeDomain(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.  * <br>

	 * @return value of radioEntityTypeKind field
	 */
	@Override
	public int getRadioEntityTypeKind()
	{
		return radioEntityTypeKind;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.
	 * @param newValue is new value for the radioEntityTypeKind field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeKind(int newValue)
	{
		radioEntityTypeKind = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeKind field, similar to {@link #setRadioEntityTypeKind(int)}.
	 * @param newValue is new value for the radioEntityTypeKind field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeKind(SFInt32Object newValue)
	{
		setRadioEntityTypeKind(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeNomenclature</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value indicating nomenclature (name) for a particular emitter. See DIS enumerations reference for value/name pairs.  * <br>

	 * @return value of radioEntityTypeNomenclature field
	 */
	@Override
	public int getRadioEntityTypeNomenclature()
	{
		return radioEntityTypeNomenclature;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeNomenclature</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value indicating nomenclature (name) for a particular emitter. See DIS enumerations reference for value/name pairs.
	 * @param newValue is new value for the radioEntityTypeNomenclature field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeNomenclature(int newValue)
	{
		radioEntityTypeNomenclature = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeNomenclature field, similar to {@link #setRadioEntityTypeNomenclature(int)}.
	 * @param newValue is new value for the radioEntityTypeNomenclature field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeNomenclature(SFInt32Object newValue)
	{
		setRadioEntityTypeNomenclature(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>radioEntityTypeNomenclatureVersion</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Named equipment version number.  * <br>

	 * @return value of radioEntityTypeNomenclatureVersion field
	 */
	@Override
	public int getRadioEntityTypeNomenclatureVersion()
	{
		return radioEntityTypeNomenclatureVersion;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>radioEntityTypeNomenclatureVersion</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Named equipment version number.
	 * @param newValue is new value for the radioEntityTypeNomenclatureVersion field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioEntityTypeNomenclatureVersion(int newValue)
	{
		radioEntityTypeNomenclatureVersion = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioEntityTypeNomenclatureVersion field, similar to {@link #setRadioEntityTypeNomenclatureVersion(int)}.
	 * @param newValue is new value for the radioEntityTypeNomenclatureVersion field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioEntityTypeNomenclatureVersion(SFInt32Object newValue)
	{
		setRadioEntityTypeNomenclatureVersion(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRadioID(int newValue)
	{
		radioID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 radioID field, similar to {@link #setRadioID(int)}.
	 * @param newValue is new value for the radioID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRadioID(SFInt32Object newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setReadInterval(double newValue)
	{
		readInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime readInterval field, similar to {@link #setReadInterval(double)}.
	 * @param newValue is new value for the readInterval field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setReadInterval(SFTimeObject newValue)
	{
		setReadInterval(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>relativeAntennaLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Relative coordinates for antenna location.  * <br>

	 * @return value of relativeAntennaLocation field
	 */
	@Override
	public float[] getRelativeAntennaLocation()
	{
		return relativeAntennaLocation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>relativeAntennaLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Relative coordinates for antenna location.
	 * @param newValue is new value for the relativeAntennaLocation field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRelativeAntennaLocation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu relativeAntennaLocation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		relativeAntennaLocation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f relativeAntennaLocation field, similar to {@link #setRelativeAntennaLocation(float[])}.
	 * @param newValue is new value for the relativeAntennaLocation field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRelativeAntennaLocation(SFVec3fObject newValue)
	{
		setRelativeAntennaLocation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f relativeAntennaLocation field, similar to {@link #setRelativeAntennaLocation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRelativeAntennaLocation(float x, float y, float z)
	{
		setRelativeAntennaLocation(new float[] {x, y, z});
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setRtpHeaderExpected(boolean newValue)
	{
		rtpHeaderExpected = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool rtpHeaderExpected field, similar to {@link #setRtpHeaderExpected(boolean)}.
	 * @param newValue is new value for the rtpHeaderExpected field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setRtpHeaderExpected(SFBoolObject newValue)
	{
		setRtpHeaderExpected(newValue.getPrimitiveValue());
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setSiteID(int newValue)
	{
		siteID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 siteID field, similar to {@link #setSiteID(int)}.
	 * @param newValue is new value for the siteID field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setSiteID(SFInt32Object newValue)
	{
		setSiteID(newValue.getPrimitiveValue());
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
	 * Provide float value from inputOutput SFFloat field named <i>transmitFrequencyBandwidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Bandwidth of the particular transmitter measured between the half-power (-3 dB) points (this value represents total bandwidth, not the deviation from the center frequency).  * <br>

	 * @return value of transmitFrequencyBandwidth field
	 */
	@Override
	public float getTransmitFrequencyBandwidth()
	{
		return transmitFrequencyBandwidth;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>transmitFrequencyBandwidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bandwidth of the particular transmitter measured between the half-power (-3 dB) points (this value represents total bandwidth, not the deviation from the center frequency).
	 * @param newValue is new value for the transmitFrequencyBandwidth field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setTransmitFrequencyBandwidth(float newValue)
	{
		transmitFrequencyBandwidth = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat transmitFrequencyBandwidth field, similar to {@link #setTransmitFrequencyBandwidth(float)}.
	 * @param newValue is new value for the transmitFrequencyBandwidth field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setTransmitFrequencyBandwidth(SFFloatObject newValue)
	{
		setTransmitFrequencyBandwidth(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>transmitState</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Specify radio transmission state where enumerations value 0 is for off, value 1 for powered but not transmitting, or value 1 is for powered and transmitting,.  * <br>

	 * @return value of transmitState field
	 */
	@Override
	public int getTransmitState()
	{
		return transmitState;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>transmitState</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Specify radio transmission state where enumerations value 0 is for off, value 1 for powered but not transmitting, or value 1 is for powered and transmitting,.
	 * @param newValue is new value for the transmitState field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setTransmitState(int newValue)
	{
		transmitState = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 transmitState field, similar to {@link #setTransmitState(int)}.
	 * @param newValue is new value for the transmitState field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setTransmitState(SFInt32Object newValue)
	{
		setTransmitState(newValue.getPrimitiveValue());
		return this;
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setWhichGeometry(int newValue)
	{
		whichGeometry = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 whichGeometry field, similar to {@link #setWhichGeometry(int)}.
	 * @param newValue is new value for the whichGeometry field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setWhichGeometry(SFInt32Object newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setWriteInterval(double newValue)
	{
		writeInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime writeInterval field, similar to {@link #setWriteInterval(double)}.
	 * @param newValue is new value for the writeInterval field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setWriteInterval(SFTimeObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TransmitterPduObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to TransmitterPdu
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("TransmitterPdu DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setDEF(SFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TransmitterPduObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to TransmitterPdu
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TransmitterPdu USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("TransmitterPdu USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TransmitterPduObject setCssClass(String newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setCssClass(SFStringObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TransmitterPduObject setIS(ISObject newValue)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TransmitterPduObject setUSE(TransmitterPduObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on TransmitterPduObject" +
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
	public TransmitterPduObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TransmitterPduObject addComments (String newComment)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TransmitterPduObject addComments (String[] newComments)
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
	 * @return {@link TransmitterPduObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TransmitterPduObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<TransmitterPdu"); // start opening tag
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
			if ((!Arrays.equals(getAntennaLocation(), ANTENNALOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" antennaLocation='").append(SFVec3fObject.toString(getAntennaLocation())).append("'");
			}
			if (((getAntennaPatternLength() != ANTENNAPATTERNLENGTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" antennaPatternLength='").append(SFInt32Object.toString(getAntennaPatternLength())).append("'");
			}
			if (((getAntennaPatternType() != ANTENNAPATTERNTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" antennaPatternType='").append(SFInt32Object.toString(getAntennaPatternType())).append("'");
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
			if (((getCryptoKeyID() != CRYPTOKEYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" cryptoKeyID='").append(SFInt32Object.toString(getCryptoKeyID())).append("'");
			}
			if (((getCryptoSystem() != CRYPTOSYSTEM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" cryptoSystem='").append(SFInt32Object.toString(getCryptoSystem())).append("'");
			}
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if (((getEntityID() != ENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityID='").append(SFInt32Object.toString(getEntityID())).append("'");
			}
			if (((getFrequency() != FREQUENCY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" frequency='").append(SFInt32Object.toString(getFrequency())).append("'");
			}
			if ((!Arrays.equals(getGeoCoords(), GEOCOORDS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoCoords='").append(SFVec3dObject.toString(getGeoCoords())).append("'");
			}
			if (((getGeoSystem().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoSystem='").append(new MFStringObject(getGeoSystem()).toStringX3D()).append("'");
			}
			if (((getInputSource() != INPUTSOURCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" inputSource='").append(SFInt32Object.toString(getInputSource())).append("'");
			}
			if (((getLengthOfModulationParameters() != LENGTHOFMODULATIONPARAMETERS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" lengthOfModulationParameters='").append(SFInt32Object.toString(getLengthOfModulationParameters())).append("'");
			}
			if (((getModulationTypeDetail() != MODULATIONTYPEDETAIL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" modulationTypeDetail='").append(SFInt32Object.toString(getModulationTypeDetail())).append("'");
			}
			if (((getModulationTypeMajor() != MODULATIONTYPEMAJOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" modulationTypeMajor='").append(SFInt32Object.toString(getModulationTypeMajor())).append("'");
			}
			if (((getModulationTypeSpreadSpectrum() != MODULATIONTYPESPREADSPECTRUM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" modulationTypeSpreadSpectrum='").append(SFInt32Object.toString(getModulationTypeSpreadSpectrum())).append("'");
			}
			if (((getModulationTypeSystem() != MODULATIONTYPESYSTEM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" modulationTypeSystem='").append(SFInt32Object.toString(getModulationTypeSystem())).append("'");
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
			if (((getPower() != POWER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" power='").append(SFFloatObject.toString(getPower())).append("'");
			}
			if (((getRadioEntityTypeCategory() != RADIOENTITYTYPECATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeCategory='").append(SFInt32Object.toString(getRadioEntityTypeCategory())).append("'");
			}
			if (((getRadioEntityTypeCountry() != RADIOENTITYTYPECOUNTRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeCountry='").append(SFInt32Object.toString(getRadioEntityTypeCountry())).append("'");
			}
			if (((getRadioEntityTypeDomain() != RADIOENTITYTYPEDOMAIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeDomain='").append(SFInt32Object.toString(getRadioEntityTypeDomain())).append("'");
			}
			if (((getRadioEntityTypeKind() != RADIOENTITYTYPEKIND_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeKind='").append(SFInt32Object.toString(getRadioEntityTypeKind())).append("'");
			}
			if (((getRadioEntityTypeNomenclature() != RADIOENTITYTYPENOMENCLATURE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeNomenclature='").append(SFInt32Object.toString(getRadioEntityTypeNomenclature())).append("'");
			}
			if (((getRadioEntityTypeNomenclatureVersion() != RADIOENTITYTYPENOMENCLATUREVERSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioEntityTypeNomenclatureVersion='").append(SFInt32Object.toString(getRadioEntityTypeNomenclatureVersion())).append("'");
			}
			if (((getRadioID() != RADIOID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" radioID='").append(SFInt32Object.toString(getRadioID())).append("'");
			}
			if (((getReadInterval() != READINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" readInterval='").append(SFTimeObject.toString(getReadInterval())).append("'");
			}
			if ((!Arrays.equals(getRelativeAntennaLocation(), RELATIVEANTENNALOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" relativeAntennaLocation='").append(SFVec3fObject.toString(getRelativeAntennaLocation())).append("'");
			}
			if (((getRtpHeaderExpected() != RTPHEADEREXPECTED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rtpHeaderExpected='").append(SFBoolObject.toString(getRtpHeaderExpected())).append("'");
			}
			if (((getSiteID() != SITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" siteID='").append(SFInt32Object.toString(getSiteID())).append("'");
			}
			if (((getTransmitFrequencyBandwidth() != TRANSMITFREQUENCYBANDWIDTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" transmitFrequencyBandwidth='").append(SFFloatObject.toString(getTransmitFrequencyBandwidth())).append("'");
			}
			if (((getTransmitState() != TRANSMITSTATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" transmitState='").append(SFInt32Object.toString(getTransmitState())).append("'");
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
			stringX3D.append(indent).append("</TransmitterPdu>").append("\n"); // finish closing tag
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
			stringClassicVRML.append("TransmitterPdu").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("antennaLocation"))
						{
							stringClassicVRML.append(indentCharacter).append("antennaLocation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getAntennaLocation(), ANTENNALOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("antennaLocation ").append(SFVec3fObject.toString(getAntennaLocation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("antennaPatternLength"))
						{
							stringClassicVRML.append(indentCharacter).append("antennaPatternLength").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAntennaPatternLength() != ANTENNAPATTERNLENGTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("antennaPatternLength ").append(SFInt32Object.toString(getAntennaPatternLength())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("antennaPatternType"))
						{
							stringClassicVRML.append(indentCharacter).append("antennaPatternType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAntennaPatternType() != ANTENNAPATTERNTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("antennaPatternType ").append(SFInt32Object.toString(getAntennaPatternType())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("cryptoKeyID"))
						{
							stringClassicVRML.append(indentCharacter).append("cryptoKeyID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCryptoKeyID() != CRYPTOKEYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("cryptoKeyID ").append(SFInt32Object.toString(getCryptoKeyID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("cryptoSystem"))
						{
							stringClassicVRML.append(indentCharacter).append("cryptoSystem").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCryptoSystem() != CRYPTOSYSTEM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("cryptoSystem ").append(SFInt32Object.toString(getCryptoSystem())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("frequency"))
						{
							stringClassicVRML.append(indentCharacter).append("frequency").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFrequency() != FREQUENCY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("frequency ").append(SFInt32Object.toString(getFrequency())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("inputSource"))
						{
							stringClassicVRML.append(indentCharacter).append("inputSource").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getInputSource() != INPUTSOURCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("inputSource ").append(SFInt32Object.toString(getInputSource())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("lengthOfModulationParameters"))
						{
							stringClassicVRML.append(indentCharacter).append("lengthOfModulationParameters").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getLengthOfModulationParameters() != LENGTHOFMODULATIONPARAMETERS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("lengthOfModulationParameters ").append(SFInt32Object.toString(getLengthOfModulationParameters())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("modulationTypeDetail"))
						{
							stringClassicVRML.append(indentCharacter).append("modulationTypeDetail").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getModulationTypeDetail() != MODULATIONTYPEDETAIL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("modulationTypeDetail ").append(SFInt32Object.toString(getModulationTypeDetail())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("modulationTypeMajor"))
						{
							stringClassicVRML.append(indentCharacter).append("modulationTypeMajor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getModulationTypeMajor() != MODULATIONTYPEMAJOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("modulationTypeMajor ").append(SFInt32Object.toString(getModulationTypeMajor())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("modulationTypeSpreadSpectrum"))
						{
							stringClassicVRML.append(indentCharacter).append("modulationTypeSpreadSpectrum").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getModulationTypeSpreadSpectrum() != MODULATIONTYPESPREADSPECTRUM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("modulationTypeSpreadSpectrum ").append(SFInt32Object.toString(getModulationTypeSpreadSpectrum())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("modulationTypeSystem"))
						{
							stringClassicVRML.append(indentCharacter).append("modulationTypeSystem").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getModulationTypeSystem() != MODULATIONTYPESYSTEM_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("modulationTypeSystem ").append(SFInt32Object.toString(getModulationTypeSystem())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("power"))
						{
							stringClassicVRML.append(indentCharacter).append("power").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getPower() != POWER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("power ").append(SFFloatObject.toString(getPower())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeCategory"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeCategory").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeCategory() != RADIOENTITYTYPECATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeCategory ").append(SFInt32Object.toString(getRadioEntityTypeCategory())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeCountry"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeCountry").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeCountry() != RADIOENTITYTYPECOUNTRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeCountry ").append(SFInt32Object.toString(getRadioEntityTypeCountry())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeDomain"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeDomain").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeDomain() != RADIOENTITYTYPEDOMAIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeDomain ").append(SFInt32Object.toString(getRadioEntityTypeDomain())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeKind"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeKind").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeKind() != RADIOENTITYTYPEKIND_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeKind ").append(SFInt32Object.toString(getRadioEntityTypeKind())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeNomenclature"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeNomenclature").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeNomenclature() != RADIOENTITYTYPENOMENCLATURE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeNomenclature ").append(SFInt32Object.toString(getRadioEntityTypeNomenclature())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("radioEntityTypeNomenclatureVersion"))
						{
							stringClassicVRML.append(indentCharacter).append("radioEntityTypeNomenclatureVersion").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRadioEntityTypeNomenclatureVersion() != RADIOENTITYTYPENOMENCLATUREVERSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("radioEntityTypeNomenclatureVersion ").append(SFInt32Object.toString(getRadioEntityTypeNomenclatureVersion())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("relativeAntennaLocation"))
						{
							stringClassicVRML.append(indentCharacter).append("relativeAntennaLocation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getRelativeAntennaLocation(), RELATIVEANTENNALOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("relativeAntennaLocation ").append(SFVec3fObject.toString(getRelativeAntennaLocation())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("transmitFrequencyBandwidth"))
						{
							stringClassicVRML.append(indentCharacter).append("transmitFrequencyBandwidth").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTransmitFrequencyBandwidth() != TRANSMITFREQUENCYBANDWIDTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("transmitFrequencyBandwidth ").append(SFFloatObject.toString(getTransmitFrequencyBandwidth())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("transmitState"))
						{
							stringClassicVRML.append(indentCharacter).append("transmitState").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTransmitState() != TRANSMITSTATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("transmitState ").append(SFInt32Object.toString(getTransmitState())).append("\n").append(indent).append(indentCharacter);
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

		setAntennaLocation(getAntennaLocation()); // exercise field checks, simple types

		setAntennaPatternLength(getAntennaPatternLength()); // exercise field checks, simple types

		setAntennaPatternType(getAntennaPatternType()); // exercise field checks, simple types

		setApplicationID(getApplicationID()); // exercise field checks, simple types

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setCryptoKeyID(getCryptoKeyID()); // exercise field checks, simple types

		setCryptoSystem(getCryptoSystem()); // exercise field checks, simple types

		setEnabled(getEnabled()); // exercise field checks, simple types

		setEntityID(getEntityID()); // exercise field checks, simple types

		setFrequency(getFrequency()); // exercise field checks, simple types

		setGeoCoords(getGeoCoords()); // exercise field checks, simple types

		setGeoSystem(getGeoSystem()); // exercise field checks, simple types

		setInputSource(getInputSource()); // exercise field checks, simple types

		setLengthOfModulationParameters(getLengthOfModulationParameters()); // exercise field checks, simple types

		setModulationTypeDetail(getModulationTypeDetail()); // exercise field checks, simple types

		setModulationTypeMajor(getModulationTypeMajor()); // exercise field checks, simple types

		setModulationTypeSpreadSpectrum(getModulationTypeSpreadSpectrum()); // exercise field checks, simple types

		setModulationTypeSystem(getModulationTypeSystem()); // exercise field checks, simple types

		setMulticastRelayHost(getMulticastRelayHost()); // exercise field checks, simple types

		setMulticastRelayPort(getMulticastRelayPort()); // exercise field checks, simple types

		setNetworkMode(getNetworkMode()); // exercise field checks, simple types

		setPort(getPort()); // exercise field checks, simple types

		setPower(getPower()); // exercise field checks, simple types

		setRadioEntityTypeCategory(getRadioEntityTypeCategory()); // exercise field checks, simple types

		setRadioEntityTypeCountry(getRadioEntityTypeCountry()); // exercise field checks, simple types

		setRadioEntityTypeDomain(getRadioEntityTypeDomain()); // exercise field checks, simple types

		setRadioEntityTypeKind(getRadioEntityTypeKind()); // exercise field checks, simple types

		setRadioEntityTypeNomenclature(getRadioEntityTypeNomenclature()); // exercise field checks, simple types

		setRadioEntityTypeNomenclatureVersion(getRadioEntityTypeNomenclatureVersion()); // exercise field checks, simple types

		setRadioID(getRadioID()); // exercise field checks, simple types

		setReadInterval(getReadInterval()); // exercise field checks, simple types

		setRelativeAntennaLocation(getRelativeAntennaLocation()); // exercise field checks, simple types

		setRtpHeaderExpected(getRtpHeaderExpected()); // exercise field checks, simple types

		setSiteID(getSiteID()); // exercise field checks, simple types

		setTransmitFrequencyBandwidth(getTransmitFrequencyBandwidth()); // exercise field checks, simple types

		setTransmitState(getTransmitState()); // exercise field checks, simple types

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
			String errorNotice = "TransmitterPdu USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "TransmitterPdu USE='" + getUSE() + "' is not allowed to have contained comments";
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
