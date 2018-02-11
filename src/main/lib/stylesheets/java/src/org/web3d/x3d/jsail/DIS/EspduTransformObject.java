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
import org.web3d.x3d.sai.DIS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.DIS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.DIS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: EspduTransform is a networked Transform node that can contain most nodes. If activated, EspduTransform can send or receive Entity State Protocol Data Unit (PDU) packets, also integrating functionality for the following DIS PDUs: EntityStatePdu, CollisionPdu, DetonatePdu, FirePdu, CreateEntity and RemoveEntity PDUs.
 * <ul>
 *  <li> <i>Hint:</i> these PDU packets use the IEEE Distributed Interactive Simulation (DIS) protocol. </li> 
 *  <li> <i>Hint:</i> Savage Developers Guide on DIS <br> <a href="https://savage.nps.edu/Savage/developers.html#DIS" target="_blank">https://savage.nps.edu/Savage/developers.html#DIS</a> </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='DIS' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/dis.html#EspduTransform" target="blank">X3D Abstract Specification: EspduTransform</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#EspduTransform" target="_blank">X3D Tooltips: EspduTransform</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class EspduTransformObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.DIS.EspduTransform
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String address; // SFString

	private int applicationID; // SFInt32

	private ArrayList<Float> articulationParameterArray = new ArrayList<>(); // MFFloat

	private ArrayList<Integer> articulationParameterChangeIndicatorArray = new ArrayList<>(); // MFInt32

	private int articulationParameterCount; // SFInt32

	private ArrayList<Integer> articulationParameterDesignatorArray = new ArrayList<>(); // MFInt32

	private ArrayList<Integer> articulationParameterIdPartAttachedToArray = new ArrayList<>(); // MFInt32

	private ArrayList<Integer> articulationParameterTypeArray = new ArrayList<>(); // MFInt32

	private float articulationParameterValue0; // SFFloat

	private float articulationParameterValue1; // SFFloat

	private float articulationParameterValue2; // SFFloat

	private float articulationParameterValue3; // SFFloat

	private float articulationParameterValue4; // SFFloat

	private float articulationParameterValue5; // SFFloat

	private float articulationParameterValue6; // SFFloat

	private float articulationParameterValue7; // SFFloat

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private float[] center; // SFVec3f

	private ArrayList<X3DChildNode> children = new ArrayList<>(); // MFNode acceptable node types: X3DChildNode

	private double collideTime; // SFTime

	private int collisionType; // SFInt32

	private int deadReckoning; // SFInt32

	private double detonateTime; // SFTime

	private float[] detonationLocation; // SFVec3f

	private float[] detonationRelativeLocation; // SFVec3f

	private int detonationResult; // SFInt32

	private boolean enabled; // SFBool

	private int entityCategory; // SFInt32

	private int entityCountry; // SFInt32

	private int entityDomain; // SFInt32

	private int entityExtra; // SFInt32

	private int entityID; // SFInt32

	private int entityKind; // SFInt32

	private int entitySpecific; // SFInt32

	private int entitySubcategory; // SFInt32

	private int eventApplicationID; // SFInt32

	private int eventEntityID; // SFInt32

	private int eventNumber; // SFInt32

	private int eventSiteID; // SFInt32

	private boolean fired1; // SFBool

	private boolean fired2; // SFBool

	private double firedTime; // SFTime

	private int fireMissionIndex; // SFInt32

	private float firingRange; // SFFloat

	private int firingRate; // SFInt32

	private int forceID; // SFInt32

	private int fuse; // SFInt32

	private double[] geoCoords; // SFVec3d

	private ArrayList<String> geoSystem = new ArrayList<>(); // MFString

	private boolean isActive; // SFBool

	private boolean isCollided; // SFBool

	private boolean isDetonated; // SFBool

	private boolean isNetworkReader; // SFBool

	private boolean isNetworkWriter; // SFBool

	private boolean isRtpHeaderHeard; // SFBool

	private boolean isStandAlone; // SFBool

	private float[] linearAcceleration; // SFVec3f

	private float[] linearVelocity; // SFVec3f

	private String marking; // SFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String multicastRelayHost; // SFString

	private int multicastRelayPort; // SFInt32

	private int munitionApplicationID; // SFInt32

	private float[] munitionEndPoint; // SFVec3f

	private int munitionEntityID; // SFInt32

	private int munitionQuantity; // SFInt32

	private int munitionSiteID; // SFInt32

	private float[] munitionStartPoint; // SFVec3f

	private String networkMode; // SFString

	private int port; // SFInt32

	private double readInterval; // SFTime

	private float[] rotation; // SFRotation

	private boolean rtpHeaderExpected; // SFBool

	private float[] scale; // SFVec3f

	private float[] scaleOrientation; // SFRotation

	private int siteID; // SFInt32

	private double timestamp; // SFTime

	private float[] translation; // SFVec3f

	private int warhead; // SFInt32

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

	/** String constant <i>NAME</i> provides name of this element: <i>EspduTransform</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "EspduTransform";

	/** Provides name of this element: <i>EspduTransform</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>EspduTransform</i> element: <i>DIS</i> */
	public static final String COMPONENT = "DIS";

	/** Defines X3D component for the <i>EspduTransform</i> element: <i>DIS</i>
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

	/** SFInt32 field named <i>articulationParameterCount</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ARTICULATIONPARAMETERCOUNT_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>bboxCenter</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] BBOXCENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>bboxSize</i> has default value <i>{-1f,-1f,-1f}</i> (Java syntax) or <i>-1 -1 -1</i> (XML syntax). */
	public static final float[] BBOXSIZE_DEFAULT_VALUE = {-1f,-1f,-1f};

	/** SFVec3f field named <i>center</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] CENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFInt32 field named <i>collisionType</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int COLLISIONTYPE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>deadReckoning</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int DEADRECKONING_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>detonationLocation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] DETONATIONLOCATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>detonationRelativeLocation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] DETONATIONRELATIVELOCATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFInt32 field named <i>detonationResult</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int DETONATIONRESULT_DEFAULT_VALUE = 0;

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFInt32 field named <i>entityCategory</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYCATEGORY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityCountry</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYCOUNTRY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityDomain</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYDOMAIN_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityExtra</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYEXTRA_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entityKind</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYKIND_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entitySpecific</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYSPECIFIC_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>entitySubcategory</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int ENTITYSUBCATEGORY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>eventApplicationID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int EVENTAPPLICATIONID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>eventEntityID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int EVENTENTITYID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>eventNumber</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int EVENTNUMBER_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>eventSiteID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int EVENTSITEID_DEFAULT_VALUE = 0;

	/** SFBool field named <i>fired1</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean FIRED1_DEFAULT_VALUE = false;

	/** SFBool field named <i>fired2</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean FIRED2_DEFAULT_VALUE = false;

	/** SFInt32 field named <i>fireMissionIndex</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int FIREMISSIONINDEX_DEFAULT_VALUE = 0;

	/** SFFloat field named <i>firingRange</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float FIRINGRANGE_DEFAULT_VALUE = 0f;

	/** SFInt32 field named <i>firingRate</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int FIRINGRATE_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>forceID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int FORCEID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>fuse</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int FUSE_DEFAULT_VALUE = 0;

	/** SFVec3d field named <i>geoCoords</i> has default value <i>{0,0,0}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final double[] GEOCOORDS_DEFAULT_VALUE = {0,0,0};

	/** MFString field named <i>geoSystem</i> has default quoted value <i>new String[] {"GD","WE"}</i> (Java syntax) or quoted value <i>"GD" "WE"</i> (XML syntax). */
	public static final ArrayList<String> GEOSYSTEM_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("GD","WE"));

	/** SFVec3f field named <i>linearAcceleration</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] LINEARACCELERATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>linearVelocity</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] LINEARVELOCITY_DEFAULT_VALUE = {0f,0f,0f};

	/** SFString field named <i>marking</i> has default value equal to an empty string. */
	public static final String MARKING_DEFAULT_VALUE = "";

	/** SFString field named <i>multicastRelayHost</i> has default value equal to an empty string. */
	public static final String MULTICASTRELAYHOST_DEFAULT_VALUE = "";

	/** SFInt32 field named <i>multicastRelayPort</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MULTICASTRELAYPORT_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>munitionApplicationID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MUNITIONAPPLICATIONID_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>munitionEndPoint</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] MUNITIONENDPOINT_DEFAULT_VALUE = {0f,0f,0f};

	/** SFInt32 field named <i>munitionEntityID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MUNITIONENTITYID_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>munitionQuantity</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MUNITIONQUANTITY_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>munitionSiteID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int MUNITIONSITEID_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>munitionStartPoint</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] MUNITIONSTARTPOINT_DEFAULT_VALUE = {0f,0f,0f};

	/** SFString field named <i>networkMode</i> has default value <i>"standAlone"</i> (Java syntax) or <i>standAlone</i> (XML syntax). */
	public static final String NETWORKMODE_DEFAULT_VALUE = "standAlone";

	/** SFInt32 field named <i>port</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int PORT_DEFAULT_VALUE = 0;

	/** SFTime field named <i>readInterval</i> has default value <i>0.1</i> (Java syntax) or <i>0.1</i> (XML syntax). */
	public static final double READINTERVAL_DEFAULT_VALUE = 0.1;

	/** SFRotation field named <i>rotation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] ROTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFBool field named <i>rtpHeaderExpected</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean RTPHEADEREXPECTED_DEFAULT_VALUE = false;

	/** SFVec3f field named <i>scale</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final float[] SCALE_DEFAULT_VALUE = {1f,1f,1f};

	/** SFRotation field named <i>scaleOrientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] SCALEORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFInt32 field named <i>siteID</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int SITEID_DEFAULT_VALUE = 0;

	/** SFVec3f field named <i>translation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] TRANSLATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFInt32 field named <i>warhead</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int WARHEAD_DEFAULT_VALUE = 0;

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
			case "addChildren":
				result = "MFNode";
				break;
			case "address":
				result = "SFString";
				break;
			case "applicationID":
				result = "SFInt32";
				break;
			case "articulationParameterArray":
				result = "MFFloat";
				break;
			case "articulationParameterChangeIndicatorArray":
				result = "MFInt32";
				break;
			case "articulationParameterCount":
				result = "SFInt32";
				break;
			case "articulationParameterDesignatorArray":
				result = "MFInt32";
				break;
			case "articulationParameterIdPartAttachedToArray":
				result = "MFInt32";
				break;
			case "articulationParameterTypeArray":
				result = "MFInt32";
				break;
			case "articulationParameterValue0":
				result = "SFFloat";
				break;
			case "articulationParameterValue1":
				result = "SFFloat";
				break;
			case "articulationParameterValue2":
				result = "SFFloat";
				break;
			case "articulationParameterValue3":
				result = "SFFloat";
				break;
			case "articulationParameterValue4":
				result = "SFFloat";
				break;
			case "articulationParameterValue5":
				result = "SFFloat";
				break;
			case "articulationParameterValue6":
				result = "SFFloat";
				break;
			case "articulationParameterValue7":
				result = "SFFloat";
				break;
			case "bboxCenter":
				result = "SFVec3f";
				break;
			case "bboxSize":
				result = "SFVec3f";
				break;
			case "center":
				result = "SFVec3f";
				break;
			case "children":
				result = "MFNode";
				break;
			case "collideTime":
				result = "SFTime";
				break;
			case "collisionType":
				result = "SFInt32";
				break;
			case "deadReckoning":
				result = "SFInt32";
				break;
			case "detonateTime":
				result = "SFTime";
				break;
			case "detonationLocation":
				result = "SFVec3f";
				break;
			case "detonationRelativeLocation":
				result = "SFVec3f";
				break;
			case "detonationResult":
				result = "SFInt32";
				break;
			case "enabled":
				result = "SFBool";
				break;
			case "entityCategory":
				result = "SFInt32";
				break;
			case "entityCountry":
				result = "SFInt32";
				break;
			case "entityDomain":
				result = "SFInt32";
				break;
			case "entityExtra":
				result = "SFInt32";
				break;
			case "entityID":
				result = "SFInt32";
				break;
			case "entityKind":
				result = "SFInt32";
				break;
			case "entitySpecific":
				result = "SFInt32";
				break;
			case "entitySubcategory":
				result = "SFInt32";
				break;
			case "eventApplicationID":
				result = "SFInt32";
				break;
			case "eventEntityID":
				result = "SFInt32";
				break;
			case "eventNumber":
				result = "SFInt32";
				break;
			case "eventSiteID":
				result = "SFInt32";
				break;
			case "fired1":
				result = "SFBool";
				break;
			case "fired2":
				result = "SFBool";
				break;
			case "firedTime":
				result = "SFTime";
				break;
			case "fireMissionIndex":
				result = "SFInt32";
				break;
			case "firingRange":
				result = "SFFloat";
				break;
			case "firingRate":
				result = "SFInt32";
				break;
			case "forceID":
				result = "SFInt32";
				break;
			case "fuse":
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
			case "isCollided":
				result = "SFBool";
				break;
			case "isDetonated":
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
			case "linearAcceleration":
				result = "SFVec3f";
				break;
			case "linearVelocity":
				result = "SFVec3f";
				break;
			case "marking":
				result = "SFString";
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
			case "munitionApplicationID":
				result = "SFInt32";
				break;
			case "munitionEndPoint":
				result = "SFVec3f";
				break;
			case "munitionEntityID":
				result = "SFInt32";
				break;
			case "munitionQuantity":
				result = "SFInt32";
				break;
			case "munitionSiteID":
				result = "SFInt32";
				break;
			case "munitionStartPoint":
				result = "SFVec3f";
				break;
			case "networkMode":
				result = "SFString";
				break;
			case "port":
				result = "SFInt32";
				break;
			case "readInterval":
				result = "SFTime";
				break;
			case "removeChildren":
				result = "MFNode";
				break;
			case "rotation":
				result = "SFRotation";
				break;
			case "rtpHeaderExpected":
				result = "SFBool";
				break;
			case "scale":
				result = "SFVec3f";
				break;
			case "scaleOrientation":
				result = "SFRotation";
				break;
			case "siteID":
				result = "SFInt32";
				break;
			case "timestamp":
				result = "SFTime";
				break;
			case "translation":
				result = "SFVec3f";
				break;
			case "warhead":
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
			case "addChildren":
				result = "inputOnly";
				break;
			case "address":
				result = "inputOutput";
				break;
			case "applicationID":
				result = "inputOutput";
				break;
			case "articulationParameterArray":
				result = "inputOutput";
				break;
			case "articulationParameterChangeIndicatorArray":
				result = "inputOutput";
				break;
			case "articulationParameterCount":
				result = "inputOutput";
				break;
			case "articulationParameterDesignatorArray":
				result = "inputOutput";
				break;
			case "articulationParameterIdPartAttachedToArray":
				result = "inputOutput";
				break;
			case "articulationParameterTypeArray":
				result = "inputOutput";
				break;
			case "articulationParameterValue0_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue1_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue2_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue3_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue4_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue5_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue6_changed":
				result = "outputOnly";
				break;
			case "articulationParameterValue7_changed":
				result = "outputOnly";
				break;
			case "bboxCenter":
				result = "initializeOnly";
				break;
			case "bboxSize":
				result = "initializeOnly";
				break;
			case "center":
				result = "inputOutput";
				break;
			case "children":
				result = "inputOutput";
				break;
			case "collideTime":
				result = "outputOnly";
				break;
			case "collisionType":
				result = "inputOutput";
				break;
			case "deadReckoning":
				result = "inputOutput";
				break;
			case "detonateTime":
				result = "outputOnly";
				break;
			case "detonationLocation":
				result = "inputOutput";
				break;
			case "detonationRelativeLocation":
				result = "inputOutput";
				break;
			case "detonationResult":
				result = "inputOutput";
				break;
			case "enabled":
				result = "inputOutput";
				break;
			case "entityCategory":
				result = "inputOutput";
				break;
			case "entityCountry":
				result = "inputOutput";
				break;
			case "entityDomain":
				result = "inputOutput";
				break;
			case "entityExtra":
				result = "inputOutput";
				break;
			case "entityID":
				result = "inputOutput";
				break;
			case "entityKind":
				result = "inputOutput";
				break;
			case "entitySpecific":
				result = "inputOutput";
				break;
			case "entitySubcategory":
				result = "inputOutput";
				break;
			case "eventApplicationID":
				result = "inputOutput";
				break;
			case "eventEntityID":
				result = "inputOutput";
				break;
			case "eventNumber":
				result = "inputOutput";
				break;
			case "eventSiteID":
				result = "inputOutput";
				break;
			case "fired1":
				result = "inputOutput";
				break;
			case "fired2":
				result = "inputOutput";
				break;
			case "firedTime":
				result = "outputOnly";
				break;
			case "fireMissionIndex":
				result = "inputOutput";
				break;
			case "firingRange":
				result = "inputOutput";
				break;
			case "firingRate":
				result = "inputOutput";
				break;
			case "forceID":
				result = "inputOutput";
				break;
			case "fuse":
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
			case "isCollided":
				result = "outputOnly";
				break;
			case "isDetonated":
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
			case "linearAcceleration":
				result = "inputOutput";
				break;
			case "linearVelocity":
				result = "inputOutput";
				break;
			case "marking":
				result = "inputOutput";
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
			case "munitionApplicationID":
				result = "inputOutput";
				break;
			case "munitionEndPoint":
				result = "inputOutput";
				break;
			case "munitionEntityID":
				result = "inputOutput";
				break;
			case "munitionQuantity":
				result = "inputOutput";
				break;
			case "munitionSiteID":
				result = "inputOutput";
				break;
			case "munitionStartPoint":
				result = "inputOutput";
				break;
			case "networkMode":
				result = "inputOutput";
				break;
			case "port":
				result = "inputOutput";
				break;
			case "readInterval":
				result = "inputOutput";
				break;
			case "removeChildren":
				result = "inputOnly";
				break;
			case "rotation":
				result = "inputOutput";
				break;
			case "rtpHeaderExpected":
				result = "initializeOnly";
				break;
			case "scale":
				result = "inputOutput";
				break;
			case "scaleOrientation":
				result = "inputOutput";
				break;
			case "set_articulationParameterValue0":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue1":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue2":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue3":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue4":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue5":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue6":
				result = "inputOnly";
				break;
			case "set_articulationParameterValue7":
				result = "inputOnly";
				break;
			case "siteID":
				result = "inputOutput";
				break;
			case "timestamp":
				result = "outputOnly";
				break;
			case "translation":
				result = "inputOutput";
				break;
			case "warhead":
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

	/** toField ROUTE name for MFNode field named <i>addChildren</i>. */
	public static final String toField_ADDCHILDREN = "addChildren";

	/** fromField ROUTE name for SFString field named <i>address</i>. */
	public static final String fromField_ADDRESS = "address";

	/** toField ROUTE name for SFString field named <i>address</i>. */
	public static final String toField_ADDRESS = "address";

	/** fromField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String fromField_APPLICATIONID = "applicationID";

	/** toField ROUTE name for SFInt32 field named <i>applicationID</i>. */
	public static final String toField_APPLICATIONID = "applicationID";

	/** fromField ROUTE name for MFFloat field named <i>articulationParameterArray</i>. */
	public static final String fromField_ARTICULATIONPARAMETERARRAY = "articulationParameterArray";

	/** toField ROUTE name for MFFloat field named <i>articulationParameterArray</i>. */
	public static final String toField_ARTICULATIONPARAMETERARRAY = "articulationParameterArray";

	/** fromField ROUTE name for MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>. */
	public static final String fromField_ARTICULATIONPARAMETERCHANGEINDICATORARRAY = "articulationParameterChangeIndicatorArray";

	/** toField ROUTE name for MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>. */
	public static final String toField_ARTICULATIONPARAMETERCHANGEINDICATORARRAY = "articulationParameterChangeIndicatorArray";

	/** fromField ROUTE name for SFInt32 field named <i>articulationParameterCount</i>. */
	public static final String fromField_ARTICULATIONPARAMETERCOUNT = "articulationParameterCount";

	/** toField ROUTE name for SFInt32 field named <i>articulationParameterCount</i>. */
	public static final String toField_ARTICULATIONPARAMETERCOUNT = "articulationParameterCount";

	/** fromField ROUTE name for MFInt32 field named <i>articulationParameterDesignatorArray</i>. */
	public static final String fromField_ARTICULATIONPARAMETERDESIGNATORARRAY = "articulationParameterDesignatorArray";

	/** toField ROUTE name for MFInt32 field named <i>articulationParameterDesignatorArray</i>. */
	public static final String toField_ARTICULATIONPARAMETERDESIGNATORARRAY = "articulationParameterDesignatorArray";

	/** fromField ROUTE name for MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>. */
	public static final String fromField_ARTICULATIONPARAMETERIDPARTATTACHEDTOARRAY = "articulationParameterIdPartAttachedToArray";

	/** toField ROUTE name for MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>. */
	public static final String toField_ARTICULATIONPARAMETERIDPARTATTACHEDTOARRAY = "articulationParameterIdPartAttachedToArray";

	/** fromField ROUTE name for MFInt32 field named <i>articulationParameterTypeArray</i>. */
	public static final String fromField_ARTICULATIONPARAMETERTYPEARRAY = "articulationParameterTypeArray";

	/** toField ROUTE name for MFInt32 field named <i>articulationParameterTypeArray</i>. */
	public static final String toField_ARTICULATIONPARAMETERTYPEARRAY = "articulationParameterTypeArray";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue0_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE0_CHANGED = "articulationParameterValue0_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue1_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE1_CHANGED = "articulationParameterValue1_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue2_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE2_CHANGED = "articulationParameterValue2_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue3_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE3_CHANGED = "articulationParameterValue3_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue4_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE4_CHANGED = "articulationParameterValue4_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue5_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE5_CHANGED = "articulationParameterValue5_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue6_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE6_CHANGED = "articulationParameterValue6_changed";

	/** fromField ROUTE name for SFFloat field named <i>articulationParameterValue7_changed</i>. */
	public static final String fromField_ARTICULATIONPARAMETERVALUE7_CHANGED = "articulationParameterValue7_changed";

	/** fromField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String fromField_CENTER = "center";

	/** toField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String toField_CENTER = "center";

	/** fromField ROUTE name for MFNode field named <i>children</i>. */
	public static final String fromField_CHILDREN = "children";

	/** toField ROUTE name for MFNode field named <i>children</i>. */
	public static final String toField_CHILDREN = "children";

	/** fromField ROUTE name for SFTime field named <i>collideTime</i>. */
	public static final String fromField_COLLIDETIME = "collideTime";

	/** fromField ROUTE name for SFInt32 field named <i>collisionType</i>. */
	public static final String fromField_COLLISIONTYPE = "collisionType";

	/** toField ROUTE name for SFInt32 field named <i>collisionType</i>. */
	public static final String toField_COLLISIONTYPE = "collisionType";

	/** fromField ROUTE name for SFInt32 field named <i>deadReckoning</i>. */
	public static final String fromField_DEADRECKONING = "deadReckoning";

	/** toField ROUTE name for SFInt32 field named <i>deadReckoning</i>. */
	public static final String toField_DEADRECKONING = "deadReckoning";

	/** fromField ROUTE name for SFTime field named <i>detonateTime</i>. */
	public static final String fromField_DETONATETIME = "detonateTime";

	/** fromField ROUTE name for SFVec3f field named <i>detonationLocation</i>. */
	public static final String fromField_DETONATIONLOCATION = "detonationLocation";

	/** toField ROUTE name for SFVec3f field named <i>detonationLocation</i>. */
	public static final String toField_DETONATIONLOCATION = "detonationLocation";

	/** fromField ROUTE name for SFVec3f field named <i>detonationRelativeLocation</i>. */
	public static final String fromField_DETONATIONRELATIVELOCATION = "detonationRelativeLocation";

	/** toField ROUTE name for SFVec3f field named <i>detonationRelativeLocation</i>. */
	public static final String toField_DETONATIONRELATIVELOCATION = "detonationRelativeLocation";

	/** fromField ROUTE name for SFInt32 field named <i>detonationResult</i>. */
	public static final String fromField_DETONATIONRESULT = "detonationResult";

	/** toField ROUTE name for SFInt32 field named <i>detonationResult</i>. */
	public static final String toField_DETONATIONRESULT = "detonationResult";

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFInt32 field named <i>entityCategory</i>. */
	public static final String fromField_ENTITYCATEGORY = "entityCategory";

	/** toField ROUTE name for SFInt32 field named <i>entityCategory</i>. */
	public static final String toField_ENTITYCATEGORY = "entityCategory";

	/** fromField ROUTE name for SFInt32 field named <i>entityCountry</i>. */
	public static final String fromField_ENTITYCOUNTRY = "entityCountry";

	/** toField ROUTE name for SFInt32 field named <i>entityCountry</i>. */
	public static final String toField_ENTITYCOUNTRY = "entityCountry";

	/** fromField ROUTE name for SFInt32 field named <i>entityDomain</i>. */
	public static final String fromField_ENTITYDOMAIN = "entityDomain";

	/** toField ROUTE name for SFInt32 field named <i>entityDomain</i>. */
	public static final String toField_ENTITYDOMAIN = "entityDomain";

	/** fromField ROUTE name for SFInt32 field named <i>entityExtra</i>. */
	public static final String fromField_ENTITYEXTRA = "entityExtra";

	/** toField ROUTE name for SFInt32 field named <i>entityExtra</i>. */
	public static final String toField_ENTITYEXTRA = "entityExtra";

	/** fromField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String fromField_ENTITYID = "entityID";

	/** toField ROUTE name for SFInt32 field named <i>entityID</i>. */
	public static final String toField_ENTITYID = "entityID";

	/** fromField ROUTE name for SFInt32 field named <i>entityKind</i>. */
	public static final String fromField_ENTITYKIND = "entityKind";

	/** toField ROUTE name for SFInt32 field named <i>entityKind</i>. */
	public static final String toField_ENTITYKIND = "entityKind";

	/** fromField ROUTE name for SFInt32 field named <i>entitySpecific</i>. */
	public static final String fromField_ENTITYSPECIFIC = "entitySpecific";

	/** toField ROUTE name for SFInt32 field named <i>entitySpecific</i>. */
	public static final String toField_ENTITYSPECIFIC = "entitySpecific";

	/** fromField ROUTE name for SFInt32 field named <i>entitySubcategory</i>. */
	public static final String fromField_ENTITYSUBCATEGORY = "entitySubcategory";

	/** toField ROUTE name for SFInt32 field named <i>entitySubcategory</i>. */
	public static final String toField_ENTITYSUBCATEGORY = "entitySubcategory";

	/** fromField ROUTE name for SFInt32 field named <i>eventApplicationID</i>. */
	public static final String fromField_EVENTAPPLICATIONID = "eventApplicationID";

	/** toField ROUTE name for SFInt32 field named <i>eventApplicationID</i>. */
	public static final String toField_EVENTAPPLICATIONID = "eventApplicationID";

	/** fromField ROUTE name for SFInt32 field named <i>eventEntityID</i>. */
	public static final String fromField_EVENTENTITYID = "eventEntityID";

	/** toField ROUTE name for SFInt32 field named <i>eventEntityID</i>. */
	public static final String toField_EVENTENTITYID = "eventEntityID";

	/** fromField ROUTE name for SFInt32 field named <i>eventNumber</i>. */
	public static final String fromField_EVENTNUMBER = "eventNumber";

	/** toField ROUTE name for SFInt32 field named <i>eventNumber</i>. */
	public static final String toField_EVENTNUMBER = "eventNumber";

	/** fromField ROUTE name for SFInt32 field named <i>eventSiteID</i>. */
	public static final String fromField_EVENTSITEID = "eventSiteID";

	/** toField ROUTE name for SFInt32 field named <i>eventSiteID</i>. */
	public static final String toField_EVENTSITEID = "eventSiteID";

	/** fromField ROUTE name for SFBool field named <i>fired1</i>. */
	public static final String fromField_FIRED1 = "fired1";

	/** toField ROUTE name for SFBool field named <i>fired1</i>. */
	public static final String toField_FIRED1 = "fired1";

	/** fromField ROUTE name for SFBool field named <i>fired2</i>. */
	public static final String fromField_FIRED2 = "fired2";

	/** toField ROUTE name for SFBool field named <i>fired2</i>. */
	public static final String toField_FIRED2 = "fired2";

	/** fromField ROUTE name for SFTime field named <i>firedTime</i>. */
	public static final String fromField_FIREDTIME = "firedTime";

	/** fromField ROUTE name for SFInt32 field named <i>fireMissionIndex</i>. */
	public static final String fromField_FIREMISSIONINDEX = "fireMissionIndex";

	/** toField ROUTE name for SFInt32 field named <i>fireMissionIndex</i>. */
	public static final String toField_FIREMISSIONINDEX = "fireMissionIndex";

	/** fromField ROUTE name for SFFloat field named <i>firingRange</i>. */
	public static final String fromField_FIRINGRANGE = "firingRange";

	/** toField ROUTE name for SFFloat field named <i>firingRange</i>. */
	public static final String toField_FIRINGRANGE = "firingRange";

	/** fromField ROUTE name for SFInt32 field named <i>firingRate</i>. */
	public static final String fromField_FIRINGRATE = "firingRate";

	/** toField ROUTE name for SFInt32 field named <i>firingRate</i>. */
	public static final String toField_FIRINGRATE = "firingRate";

	/** fromField ROUTE name for SFInt32 field named <i>forceID</i>. */
	public static final String fromField_FORCEID = "forceID";

	/** toField ROUTE name for SFInt32 field named <i>forceID</i>. */
	public static final String toField_FORCEID = "forceID";

	/** fromField ROUTE name for SFInt32 field named <i>fuse</i>. */
	public static final String fromField_FUSE = "fuse";

	/** toField ROUTE name for SFInt32 field named <i>fuse</i>. */
	public static final String toField_FUSE = "fuse";

	/** fromField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String fromField_GEOCOORDS = "geoCoords";

	/** toField ROUTE name for SFVec3d field named <i>geoCoords</i>. */
	public static final String toField_GEOCOORDS = "geoCoords";

	/** fromField ROUTE name for SFBool field named <i>isActive</i>. */
	public static final String fromField_ISACTIVE = "isActive";

	/** fromField ROUTE name for SFBool field named <i>isCollided</i>. */
	public static final String fromField_ISCOLLIDED = "isCollided";

	/** fromField ROUTE name for SFBool field named <i>isDetonated</i>. */
	public static final String fromField_ISDETONATED = "isDetonated";

	/** fromField ROUTE name for SFBool field named <i>isNetworkReader</i>. */
	public static final String fromField_ISNETWORKREADER = "isNetworkReader";

	/** fromField ROUTE name for SFBool field named <i>isNetworkWriter</i>. */
	public static final String fromField_ISNETWORKWRITER = "isNetworkWriter";

	/** fromField ROUTE name for SFBool field named <i>isRtpHeaderHeard</i>. */
	public static final String fromField_ISRTPHEADERHEARD = "isRtpHeaderHeard";

	/** fromField ROUTE name for SFBool field named <i>isStandAlone</i>. */
	public static final String fromField_ISSTANDALONE = "isStandAlone";

	/** fromField ROUTE name for SFVec3f field named <i>linearAcceleration</i>. */
	public static final String fromField_LINEARACCELERATION = "linearAcceleration";

	/** toField ROUTE name for SFVec3f field named <i>linearAcceleration</i>. */
	public static final String toField_LINEARACCELERATION = "linearAcceleration";

	/** fromField ROUTE name for SFVec3f field named <i>linearVelocity</i>. */
	public static final String fromField_LINEARVELOCITY = "linearVelocity";

	/** toField ROUTE name for SFVec3f field named <i>linearVelocity</i>. */
	public static final String toField_LINEARVELOCITY = "linearVelocity";

	/** fromField ROUTE name for SFString field named <i>marking</i>. */
	public static final String fromField_MARKING = "marking";

	/** toField ROUTE name for SFString field named <i>marking</i>. */
	public static final String toField_MARKING = "marking";

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

	/** fromField ROUTE name for SFInt32 field named <i>munitionApplicationID</i>. */
	public static final String fromField_MUNITIONAPPLICATIONID = "munitionApplicationID";

	/** toField ROUTE name for SFInt32 field named <i>munitionApplicationID</i>. */
	public static final String toField_MUNITIONAPPLICATIONID = "munitionApplicationID";

	/** fromField ROUTE name for SFVec3f field named <i>munitionEndPoint</i>. */
	public static final String fromField_MUNITIONENDPOINT = "munitionEndPoint";

	/** toField ROUTE name for SFVec3f field named <i>munitionEndPoint</i>. */
	public static final String toField_MUNITIONENDPOINT = "munitionEndPoint";

	/** fromField ROUTE name for SFInt32 field named <i>munitionEntityID</i>. */
	public static final String fromField_MUNITIONENTITYID = "munitionEntityID";

	/** toField ROUTE name for SFInt32 field named <i>munitionEntityID</i>. */
	public static final String toField_MUNITIONENTITYID = "munitionEntityID";

	/** fromField ROUTE name for SFInt32 field named <i>munitionQuantity</i>. */
	public static final String fromField_MUNITIONQUANTITY = "munitionQuantity";

	/** toField ROUTE name for SFInt32 field named <i>munitionQuantity</i>. */
	public static final String toField_MUNITIONQUANTITY = "munitionQuantity";

	/** fromField ROUTE name for SFInt32 field named <i>munitionSiteID</i>. */
	public static final String fromField_MUNITIONSITEID = "munitionSiteID";

	/** toField ROUTE name for SFInt32 field named <i>munitionSiteID</i>. */
	public static final String toField_MUNITIONSITEID = "munitionSiteID";

	/** fromField ROUTE name for SFVec3f field named <i>munitionStartPoint</i>. */
	public static final String fromField_MUNITIONSTARTPOINT = "munitionStartPoint";

	/** toField ROUTE name for SFVec3f field named <i>munitionStartPoint</i>. */
	public static final String toField_MUNITIONSTARTPOINT = "munitionStartPoint";

	/** fromField ROUTE name for SFString field named <i>networkMode</i>. */
	public static final String fromField_NETWORKMODE = "networkMode";

	/** toField ROUTE name for SFString field named <i>networkMode</i>. */
	public static final String toField_NETWORKMODE = "networkMode";

	/** fromField ROUTE name for SFInt32 field named <i>port</i>. */
	public static final String fromField_PORT = "port";

	/** toField ROUTE name for SFInt32 field named <i>port</i>. */
	public static final String toField_PORT = "port";

	/** fromField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String fromField_READINTERVAL = "readInterval";

	/** toField ROUTE name for SFTime field named <i>readInterval</i>. */
	public static final String toField_READINTERVAL = "readInterval";

	/** toField ROUTE name for MFNode field named <i>removeChildren</i>. */
	public static final String toField_REMOVECHILDREN = "removeChildren";

	/** fromField ROUTE name for SFRotation field named <i>rotation</i>. */
	public static final String fromField_ROTATION = "rotation";

	/** toField ROUTE name for SFRotation field named <i>rotation</i>. */
	public static final String toField_ROTATION = "rotation";

	/** fromField ROUTE name for SFVec3f field named <i>scale</i>. */
	public static final String fromField_SCALE = "scale";

	/** toField ROUTE name for SFVec3f field named <i>scale</i>. */
	public static final String toField_SCALE = "scale";

	/** fromField ROUTE name for SFRotation field named <i>scaleOrientation</i>. */
	public static final String fromField_SCALEORIENTATION = "scaleOrientation";

	/** toField ROUTE name for SFRotation field named <i>scaleOrientation</i>. */
	public static final String toField_SCALEORIENTATION = "scaleOrientation";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue0</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE0 = "set_articulationParameterValue0";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue1</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE1 = "set_articulationParameterValue1";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue2</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE2 = "set_articulationParameterValue2";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue3</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE3 = "set_articulationParameterValue3";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue4</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE4 = "set_articulationParameterValue4";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue5</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE5 = "set_articulationParameterValue5";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue6</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE6 = "set_articulationParameterValue6";

	/** toField ROUTE name for SFFloat field named <i>set_articulationParameterValue7</i>. */
	public static final String toField_SET_ARTICULATIONPARAMETERVALUE7 = "set_articulationParameterValue7";

	/** fromField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String fromField_SITEID = "siteID";

	/** toField ROUTE name for SFInt32 field named <i>siteID</i>. */
	public static final String toField_SITEID = "siteID";

	/** fromField ROUTE name for SFTime field named <i>timestamp</i>. */
	public static final String fromField_TIMESTAMP = "timestamp";

	/** fromField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String fromField_TRANSLATION = "translation";

	/** toField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String toField_TRANSLATION = "translation";

	/** fromField ROUTE name for SFInt32 field named <i>warhead</i>. */
	public static final String fromField_WARHEAD = "warhead";

	/** toField ROUTE name for SFInt32 field named <i>warhead</i>. */
	public static final String toField_WARHEAD = "warhead";

	/** fromField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String fromField_WRITEINTERVAL = "writeInterval";

	/** toField ROUTE name for SFTime field named <i>writeInterval</i>. */
	public static final String toField_WRITEINTERVAL = "writeInterval";

	/** Constructor for EspduTransformObject to initialize member variables with default values. */
	public EspduTransformObject()
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
		articulationParameterArray = new ArrayList<>();
		articulationParameterChangeIndicatorArray = new ArrayList<>();
		articulationParameterCount = ARTICULATIONPARAMETERCOUNT_DEFAULT_VALUE;
		articulationParameterDesignatorArray = new ArrayList<>();
		articulationParameterIdPartAttachedToArray = new ArrayList<>();
		articulationParameterTypeArray = new ArrayList<>();
		bboxCenter = BBOXCENTER_DEFAULT_VALUE;
		bboxSize = BBOXSIZE_DEFAULT_VALUE;
		center = CENTER_DEFAULT_VALUE;
		children = new ArrayList<>();
		collisionType = COLLISIONTYPE_DEFAULT_VALUE;
		deadReckoning = DEADRECKONING_DEFAULT_VALUE;
		detonationLocation = DETONATIONLOCATION_DEFAULT_VALUE;
		detonationRelativeLocation = DETONATIONRELATIVELOCATION_DEFAULT_VALUE;
		detonationResult = DETONATIONRESULT_DEFAULT_VALUE;
		enabled = ENABLED_DEFAULT_VALUE;
		entityCategory = ENTITYCATEGORY_DEFAULT_VALUE;
		entityCountry = ENTITYCOUNTRY_DEFAULT_VALUE;
		entityDomain = ENTITYDOMAIN_DEFAULT_VALUE;
		entityExtra = ENTITYEXTRA_DEFAULT_VALUE;
		entityID = ENTITYID_DEFAULT_VALUE;
		entityKind = ENTITYKIND_DEFAULT_VALUE;
		entitySpecific = ENTITYSPECIFIC_DEFAULT_VALUE;
		entitySubcategory = ENTITYSUBCATEGORY_DEFAULT_VALUE;
		eventApplicationID = EVENTAPPLICATIONID_DEFAULT_VALUE;
		eventEntityID = EVENTENTITYID_DEFAULT_VALUE;
		eventNumber = EVENTNUMBER_DEFAULT_VALUE;
		eventSiteID = EVENTSITEID_DEFAULT_VALUE;
		fired1 = FIRED1_DEFAULT_VALUE;
		fired2 = FIRED2_DEFAULT_VALUE;
		fireMissionIndex = FIREMISSIONINDEX_DEFAULT_VALUE;
		firingRange = FIRINGRANGE_DEFAULT_VALUE;
		firingRate = FIRINGRATE_DEFAULT_VALUE;
		forceID = FORCEID_DEFAULT_VALUE;
		fuse = FUSE_DEFAULT_VALUE;
		geoCoords = GEOCOORDS_DEFAULT_VALUE;
		geoSystem = GEOSYSTEM_DEFAULT_VALUE;
		linearAcceleration = LINEARACCELERATION_DEFAULT_VALUE;
		linearVelocity = LINEARVELOCITY_DEFAULT_VALUE;
		marking = MARKING_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		multicastRelayHost = MULTICASTRELAYHOST_DEFAULT_VALUE;
		multicastRelayPort = MULTICASTRELAYPORT_DEFAULT_VALUE;
		munitionApplicationID = MUNITIONAPPLICATIONID_DEFAULT_VALUE;
		munitionEndPoint = MUNITIONENDPOINT_DEFAULT_VALUE;
		munitionEntityID = MUNITIONENTITYID_DEFAULT_VALUE;
		munitionQuantity = MUNITIONQUANTITY_DEFAULT_VALUE;
		munitionSiteID = MUNITIONSITEID_DEFAULT_VALUE;
		munitionStartPoint = MUNITIONSTARTPOINT_DEFAULT_VALUE;
		networkMode = NETWORKMODE_DEFAULT_VALUE;
		port = PORT_DEFAULT_VALUE;
		readInterval = READINTERVAL_DEFAULT_VALUE;
		rotation = ROTATION_DEFAULT_VALUE;
		rtpHeaderExpected = RTPHEADEREXPECTED_DEFAULT_VALUE;
		scale = SCALE_DEFAULT_VALUE;
		scaleOrientation = SCALEORIENTATION_DEFAULT_VALUE;
		siteID = SITEID_DEFAULT_VALUE;
		translation = TRANSLATION_DEFAULT_VALUE;
		warhead = WARHEAD_DEFAULT_VALUE;
		writeInterval = WRITEINTERVAL_DEFAULT_VALUE;
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>address</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Multicast network address, or else "localhost" Example: 224.2.181.145.  * <br>

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
	 * <i>Tooltip:</i> Multicast network address, or else "localhost" Example: 224.2.181.145.
	 * @param newValue is new value for the address field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setAddress(String newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setAddress(SFStringObject newValue)
	{
		setAddress(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>applicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise applicationID is unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

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
	 * <i>Tooltip:</i> Simulation/exercise applicationID is unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setApplicationID(int newValue)
	{
		applicationID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 applicationID field, similar to {@link #setApplicationID(int)}.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setApplicationID(SFInt32Object newValue)
	{
		setApplicationID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Float results from inputOutput MFFloat field named <i>articulationParameterArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Information required for representation of the entity's visual appearance and position of its articulated parts.
 * <ul>
 *  <li> <i> Hint:</i>  renamed as Variable Parameter in IEEE DIS 2012 revised standard. </li> 
 * </ul>
	 * @return value of articulationParameterArray field
	 */
	@Override
	public float[] getArticulationParameterArray()
	{
		final float[] valuesArray = new float[articulationParameterArray.size()];
		int i = 0;
		for (Float arrayElement : articulationParameterArray) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat articulationParameterArray field, similar to {@link #getArticulationParameterArray()}.

	 * @return value of articulationParameterArray field
	 */
	public ArrayList<Float> getArticulationParameterArrayList()
	{
		return articulationParameterArray;
	}

	/**
	 * Assign Float array to inputOutput MFFloat field named <i>articulationParameterArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Information required for representation of the entity's visual appearance and position of its articulated parts. Hint: renamed as Variable Parameter in IEEE DIS 2012 revised standard.
	 * @param newValue is new value for the articulationParameterArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterArray(float[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterArray.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			articulationParameterArray.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat articulationParameterArray field, similar to {@link #setArticulationParameterArray(float[])}.
	 * @param newValue is new value for the articulationParameterArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterArray(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setArticulationParameterArray(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat articulationParameterArray field, similar to {@link #setArticulationParameterArray(float[])}.
	 * @param newValue is new value for the articulationParameterArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterArray(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterArray = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of articulationParameterArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearArticulationParameterArray()
	{
		articulationParameterArray.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat articulationParameterArray field, similar to {@link #setArticulationParameterArray(float[])}.
	 * @param newValue is new value for the articulationParameterArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterArray(int[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setArticulationParameterArray(holdArray);
		return this;
	}
	/**
	 * Provide array of Integer results from inputOutput MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of change counters, each incremented when an articulated parameter is updated.#IMPLIED] .  * <br>

	 * @return value of articulationParameterChangeIndicatorArray field
	 */
	@Override
	public int[] getArticulationParameterChangeIndicatorArray()
	{
		final int[] valuesArray = new int[articulationParameterChangeIndicatorArray.size()];
		int i = 0;
		for (Integer arrayElement : articulationParameterChangeIndicatorArray) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 articulationParameterChangeIndicatorArray field, similar to {@link #getArticulationParameterChangeIndicatorArray()}.

	 * @return value of articulationParameterChangeIndicatorArray field
	 */
	public ArrayList<Integer> getArticulationParameterChangeIndicatorArrayList()
	{
		return articulationParameterChangeIndicatorArray;
	}

	/**
	 * Assign Integer array to inputOutput MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of change counters, each incremented when an articulated parameter is updated.#IMPLIED] .
	 * @param newValue is new value for the articulationParameterChangeIndicatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterChangeIndicatorArray(int[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterChangeIndicatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterChangeIndicatorArray.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			articulationParameterChangeIndicatorArray.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 articulationParameterChangeIndicatorArray field, similar to {@link #setArticulationParameterChangeIndicatorArray(int[])}.
	 * @param newValue is new value for the articulationParameterChangeIndicatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterChangeIndicatorArray(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterChangeIndicatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setArticulationParameterChangeIndicatorArray(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 articulationParameterChangeIndicatorArray field, similar to {@link #setArticulationParameterChangeIndicatorArray(int[])}.
	 * @param newValue is new value for the articulationParameterChangeIndicatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterChangeIndicatorArray(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterChangeIndicatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterChangeIndicatorArray = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of articulationParameterChangeIndicatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearArticulationParameterChangeIndicatorArray()
	{
		articulationParameterChangeIndicatorArray.clear(); // reset
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>articulationParameterCount</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of articulated parameters attached to this entity state PDU.  * <br>

	 * @return value of articulationParameterCount field
	 */
	@Override
	public int getArticulationParameterCount()
	{
		return articulationParameterCount;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>articulationParameterCount</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of articulated parameters attached to this entity state PDU.
	 * @param newValue is new value for the articulationParameterCount field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterCount(int newValue)
	{
		articulationParameterCount = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 articulationParameterCount field, similar to {@link #setArticulationParameterCount(int)}.
	 * @param newValue is new value for the articulationParameterCount field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterCount(SFInt32Object newValue)
	{
		setArticulationParameterCount(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Integer results from inputOutput MFInt32 field named <i>articulationParameterDesignatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of designators for each articulated parameter.  * <br>

	 * @return value of articulationParameterDesignatorArray field
	 */
	@Override
	public int[] getArticulationParameterDesignatorArray()
	{
		final int[] valuesArray = new int[articulationParameterDesignatorArray.size()];
		int i = 0;
		for (Integer arrayElement : articulationParameterDesignatorArray) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 articulationParameterDesignatorArray field, similar to {@link #getArticulationParameterDesignatorArray()}.

	 * @return value of articulationParameterDesignatorArray field
	 */
	public ArrayList<Integer> getArticulationParameterDesignatorArrayList()
	{
		return articulationParameterDesignatorArray;
	}

	/**
	 * Assign Integer array to inputOutput MFInt32 field named <i>articulationParameterDesignatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of designators for each articulated parameter.
	 * @param newValue is new value for the articulationParameterDesignatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterDesignatorArray(int[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterDesignatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterDesignatorArray.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			articulationParameterDesignatorArray.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 articulationParameterDesignatorArray field, similar to {@link #setArticulationParameterDesignatorArray(int[])}.
	 * @param newValue is new value for the articulationParameterDesignatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterDesignatorArray(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterDesignatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setArticulationParameterDesignatorArray(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 articulationParameterDesignatorArray field, similar to {@link #setArticulationParameterDesignatorArray(int[])}.
	 * @param newValue is new value for the articulationParameterDesignatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterDesignatorArray(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterDesignatorArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterDesignatorArray = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of articulationParameterDesignatorArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearArticulationParameterDesignatorArray()
	{
		articulationParameterDesignatorArray.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Integer results from inputOutput MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of ID parts that each articulated parameter is attached to.  * <br>

	 * @return value of articulationParameterIdPartAttachedToArray field
	 */
	@Override
	public int[] getArticulationParameterIdPartAttachedToArray()
	{
		final int[] valuesArray = new int[articulationParameterIdPartAttachedToArray.size()];
		int i = 0;
		for (Integer arrayElement : articulationParameterIdPartAttachedToArray) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 articulationParameterIdPartAttachedToArray field, similar to {@link #getArticulationParameterIdPartAttachedToArray()}.

	 * @return value of articulationParameterIdPartAttachedToArray field
	 */
	public ArrayList<Integer> getArticulationParameterIdPartAttachedToArrayList()
	{
		return articulationParameterIdPartAttachedToArray;
	}

	/**
	 * Assign Integer array to inputOutput MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of ID parts that each articulated parameter is attached to.
	 * @param newValue is new value for the articulationParameterIdPartAttachedToArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterIdPartAttachedToArray(int[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterIdPartAttachedToArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterIdPartAttachedToArray.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			articulationParameterIdPartAttachedToArray.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 articulationParameterIdPartAttachedToArray field, similar to {@link #setArticulationParameterIdPartAttachedToArray(int[])}.
	 * @param newValue is new value for the articulationParameterIdPartAttachedToArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterIdPartAttachedToArray(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterIdPartAttachedToArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setArticulationParameterIdPartAttachedToArray(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 articulationParameterIdPartAttachedToArray field, similar to {@link #setArticulationParameterIdPartAttachedToArray(int[])}.
	 * @param newValue is new value for the articulationParameterIdPartAttachedToArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterIdPartAttachedToArray(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterIdPartAttachedToArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterIdPartAttachedToArray = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of articulationParameterIdPartAttachedToArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearArticulationParameterIdPartAttachedToArray()
	{
		articulationParameterIdPartAttachedToArray.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Integer results from inputOutput MFInt32 field named <i>articulationParameterTypeArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of type enumerations for each articulated parameter element.  * <br>

	 * @return value of articulationParameterTypeArray field
	 */
	@Override
	public int[] getArticulationParameterTypeArray()
	{
		final int[] valuesArray = new int[articulationParameterTypeArray.size()];
		int i = 0;
		for (Integer arrayElement : articulationParameterTypeArray) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 articulationParameterTypeArray field, similar to {@link #getArticulationParameterTypeArray()}.

	 * @return value of articulationParameterTypeArray field
	 */
	public ArrayList<Integer> getArticulationParameterTypeArrayList()
	{
		return articulationParameterTypeArray;
	}

	/**
	 * Assign Integer array to inputOutput MFInt32 field named <i>articulationParameterTypeArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of type enumerations for each articulated parameter element.
	 * @param newValue is new value for the articulationParameterTypeArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setArticulationParameterTypeArray(int[] newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterTypeArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterTypeArray.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			articulationParameterTypeArray.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 articulationParameterTypeArray field, similar to {@link #setArticulationParameterTypeArray(int[])}.
	 * @param newValue is new value for the articulationParameterTypeArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterTypeArray(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterTypeArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setArticulationParameterTypeArray(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 articulationParameterTypeArray field, similar to {@link #setArticulationParameterTypeArray(int[])}.
	 * @param newValue is new value for the articulationParameterTypeArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setArticulationParameterTypeArray(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearArticulationParameterTypeArray(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		articulationParameterTypeArray = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of articulationParameterTypeArray field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearArticulationParameterTypeArray()
	{
		articulationParameterTypeArray.clear(); // reset
		return this;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue0_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue0_changed field
	 */
	@Override
	public float getArticulationParameterValue0()
	{
		return articulationParameterValue0;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue1_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue1_changed field
	 */
	@Override
	public float getArticulationParameterValue1()
	{
		return articulationParameterValue1;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue2_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue2_changed field
	 */
	@Override
	public float getArticulationParameterValue2()
	{
		return articulationParameterValue2;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue3_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue3_changed field
	 */
	@Override
	public float getArticulationParameterValue3()
	{
		return articulationParameterValue3;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue4_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue4_changed field
	 */
	@Override
	public float getArticulationParameterValue4()
	{
		return articulationParameterValue4;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue5_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue5_changed field
	 */
	@Override
	public float getArticulationParameterValue5()
	{
		return articulationParameterValue5;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue6_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue6_changed field
	 */
	@Override
	public float getArticulationParameterValue6()
	{
		return articulationParameterValue6;
	}
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue7_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue7_changed field
	 */
	@Override
	public float getArticulationParameterValue7()
	{
		return articulationParameterValue7;
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Translation offset from origin of local coordinate system.  * <br>

	 * @return value of center field
	 */
	@Override
	public float[] getCenter()
	{
		return center;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system.
	 * @param newValue is new value for the center field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform center newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		center = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f center field, similar to {@link #setCenter(float[])}.
	 * @param newValue is new value for the center field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setCenter(SFVec3fObject newValue)
	{
		setCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f center field, similar to {@link #setCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setCenter(float x, float y, float z)
	{
		setCenter(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of X3DChildNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of children field
	 */
	@Override
	public X3DNode[] getChildren()
	{
		final X3DNode[] valuesArray = new X3DNode[children.size()];
		int i = 0;
		for (X3DChildNode arrayElement : children) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode children field, similar to {@link #getChildren()}.

	 * @return value of children field
	 */
	public ArrayList<X3DChildNode> getChildrenList()
	{
		return children;
	}

	/**
	 * Assign X3DChildNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value for the children field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setChildren(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		children.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DChildNode)
			{
				children.add((X3DChildNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DChildNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode children field, similar to {@link #setChildren(X3DNode[])}.
	 * @param newValue is new value for the children field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setChildren(ArrayList<X3DChildNode> newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		children = newValue;
		for (X3DChildNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single children node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value to be appended the children field.	 */
	public void addChildren(X3DChildNode newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
	}


	/**
	 * Utility method to add single child element to contained list of existing children nodes (if any).
	 * @param newValue is new node value to be appended the children field.	 
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	*/
	public EspduTransformObject addChild(X3DChildNode newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest3
		return this;
	}
	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value array to be appended the children field.
	 */
	@Override
	public void addChildren(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DChildNode)
			{
				children.add((X3DChildNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DChildNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DChildNode.
	 * @param newValue is new node for the children field (restricted to X3DChildNode)
	 */
	@Override
	public void setChildren(X3DNode newValue)
	{
		if (newValue == null)
		{
			children.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DChildNode)
		{
			for (X3DChildNode element : children)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			children.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			children.add((X3DChildNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DChildNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of children field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearChildren()
	{
		for (X3DChildNode element : children)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		children.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>children</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getChildren()
	 */
	public boolean hasChildren()
	{
		return (!children.isEmpty());
	}

	/**
	 * Add comment as CommentsBlock to children field
	 * @param newComment initial value
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public EspduTransformObject addComments (String newComment)
	{
		if (newComment == null) return this;
		children.add(new CommentsBlock (newComment));
		return this;
	}
	/**
	 * Add comments as String[] array to children field
	 * @param newComments array of comments
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public EspduTransformObject addComments (String[] newComments)
	{
		if (newComments == null) return this;
		children.add(new CommentsBlock (newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to children field
	 * @param newCommentsBlock block of comments to add
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public EspduTransformObject addComments (CommentsBlock newCommentsBlock)
	{
		if (newCommentsBlock == null) return this;
		children.add(newCommentsBlock);
		return this;
	}
											/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>collideTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When were we collided with?.  * <br>

	 * @return value of collideTime field
	 */
	@Override
	public double getCollideTime()
	{
		return collideTime;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>collisionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration for type of collision: ELASTIC or INELASTIC.  * <br>

	 * @return value of collisionType field
	 */
	@Override
	public int getCollisionType()
	{
		return collisionType;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>collisionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration for type of collision: ELASTIC or INELASTIC.
	 * @param newValue is new value for the collisionType field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setCollisionType(int newValue)
	{
		collisionType = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 collisionType field, similar to {@link #setCollisionType(int)}.
	 * @param newValue is new value for the collisionType field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setCollisionType(SFInt32Object newValue)
	{
		setCollisionType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>deadReckoning</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.  * <br>

	 * @return value of deadReckoning field
	 */
	@Override
	public int getDeadReckoning()
	{
		return deadReckoning;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>deadReckoning</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.
	 * @param newValue is new value for the deadReckoning field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setDeadReckoning(int newValue)
	{
		deadReckoning = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 deadReckoning field, similar to {@link #setDeadReckoning(int)}.
	 * @param newValue is new value for the deadReckoning field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDeadReckoning(SFInt32Object newValue)
	{
		setDeadReckoning(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>detonateTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When were we detonated?.  * <br>

	 * @return value of detonateTime field
	 */
	@Override
	public double getDetonateTime()
	{
		return detonateTime;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>detonationLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  World coordinates for detonationLocation.  * <br>

	 * @return value of detonationLocation field
	 */
	@Override
	public float[] getDetonationLocation()
	{
		return detonationLocation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>detonationLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> World coordinates for detonationLocation.
	 * @param newValue is new value for the detonationLocation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setDetonationLocation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform detonationLocation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		detonationLocation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f detonationLocation field, similar to {@link #setDetonationLocation(float[])}.
	 * @param newValue is new value for the detonationLocation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDetonationLocation(SFVec3fObject newValue)
	{
		setDetonationLocation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f detonationLocation field, similar to {@link #setDetonationLocation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDetonationLocation(float x, float y, float z)
	{
		setDetonationLocation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>detonationRelativeLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Relative coordinates for detonation location.  * <br>

	 * @return value of detonationRelativeLocation field
	 */
	@Override
	public float[] getDetonationRelativeLocation()
	{
		return detonationRelativeLocation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>detonationRelativeLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Relative coordinates for detonation location.
	 * @param newValue is new value for the detonationRelativeLocation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setDetonationRelativeLocation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform detonationRelativeLocation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		detonationRelativeLocation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f detonationRelativeLocation field, similar to {@link #setDetonationRelativeLocation(float[])}.
	 * @param newValue is new value for the detonationRelativeLocation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDetonationRelativeLocation(SFVec3fObject newValue)
	{
		setDetonationRelativeLocation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f detonationRelativeLocation field, similar to {@link #setDetonationRelativeLocation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDetonationRelativeLocation(float x, float y, float z)
	{
		setDetonationRelativeLocation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>detonationResult</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration for type of detonation and result that occurred., if any.  * <br>

	 * @return value of detonationResult field
	 */
	@Override
	public int getDetonationResult()
	{
		return detonationResult;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>detonationResult</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration for type of detonation and result that occurred., if any.
	 * @param newValue is new value for the detonationResult field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setDetonationResult(int newValue)
	{
		detonationResult = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 detonationResult field, similar to {@link #setDetonationResult(int)}.
	 * @param newValue is new value for the detonationResult field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDetonationResult(SFInt32Object newValue)
	{
		setDetonationResult(newValue.getPrimitiveValue());
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.  * <br>

	 * @return value of entityCategory field
	 */
	@Override
	public int getEntityCategory()
	{
		return entityCategory;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.
	 * @param newValue is new value for the entityCategory field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityCategory(int newValue)
	{
		entityCategory = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityCategory field, similar to {@link #setEntityCategory(int)}.
	 * @param newValue is new value for the entityCategory field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityCategory(SFInt32Object newValue)
	{
		setEntityCategory(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for country to which the design of the entity or its design specification is attributed.  * <br>

	 * @return value of entityCountry field
	 */
	@Override
	public int getEntityCountry()
	{
		return entityCountry;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for country to which the design of the entity or its design specification is attributed.
	 * @param newValue is new value for the entityCountry field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityCountry(int newValue)
	{
		entityCountry = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityCountry field, similar to {@link #setEntityCountry(int)}.
	 * @param newValue is new value for the entityCountry field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityCountry(SFInt32Object newValue)
	{
		setEntityCountry(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.  * <br>

	 * @return value of entityDomain field
	 */
	@Override
	public int getEntityDomain()
	{
		return entityDomain;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.
	 * @param newValue is new value for the entityDomain field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityDomain(int newValue)
	{
		entityDomain = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityDomain field, similar to {@link #setEntityDomain(int)}.
	 * @param newValue is new value for the entityDomain field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityDomain(SFInt32Object newValue)
	{
		setEntityDomain(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityExtra</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.  * <br>

	 * @return value of entityExtra field
	 */
	@Override
	public int getEntityExtra()
	{
		return entityExtra;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityExtra</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.
	 * @param newValue is new value for the entityExtra field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityExtra(int newValue)
	{
		entityExtra = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityExtra field, similar to {@link #setEntityExtra(int)}.
	 * @param newValue is new value for the entityExtra field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityExtra(SFInt32Object newValue)
	{
		setEntityExtra(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise entityID is a unique ID for a single entity within that application.  * <br>

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
	 * <i>Tooltip:</i> Simulation/exercise entityID is a unique ID for a single entity within that application.
	 * @param newValue is new value for the entityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityID(int newValue)
	{
		entityID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityID field, similar to {@link #setEntityID(int)}.
	 * @param newValue is new value for the entityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityID(SFInt32Object newValue)
	{
		setEntityID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.  * <br>

	 * @return value of entityKind field
	 */
	@Override
	public int getEntityKind()
	{
		return entityKind;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.
	 * @param newValue is new value for the entityKind field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntityKind(int newValue)
	{
		entityKind = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entityKind field, similar to {@link #setEntityKind(int)}.
	 * @param newValue is new value for the entityKind field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntityKind(SFInt32Object newValue)
	{
		setEntityKind(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entitySpecific</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Specific information about an entity based on the Subcategory field. See DIS Enumerations values.  * <br>

	 * @return value of entitySpecific field
	 */
	@Override
	public int getEntitySpecific()
	{
		return entitySpecific;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entitySpecific</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Specific information about an entity based on the Subcategory field. See DIS Enumerations values.
	 * @param newValue is new value for the entitySpecific field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntitySpecific(int newValue)
	{
		entitySpecific = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entitySpecific field, similar to {@link #setEntitySpecific(int)}.
	 * @param newValue is new value for the entitySpecific field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntitySpecific(SFInt32Object newValue)
	{
		setEntitySpecific(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entitySubcategory</i>.
	 * @return value of entitySubcategory field
	 */
	@Override
	public int getEntitySubcategory()
	{
		return entitySubcategory;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entitySubcategory</i>.
	 * @param newValue is new value for the entitySubcategory field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEntitySubcategory(int newValue)
	{
		entitySubcategory = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 entitySubcategory field, similar to {@link #setEntitySubcategory(int)}.
	 * @param newValue is new value for the entitySubcategory field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEntitySubcategory(SFInt32Object newValue)
	{
		setEntitySubcategory(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise eventApplicationID is unique for events generated from application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of eventApplicationID field
	 */
	@Override
	public int getEventApplicationID()
	{
		return eventApplicationID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise eventApplicationID is unique for events generated from application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the eventApplicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEventApplicationID(int newValue)
	{
		eventApplicationID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 eventApplicationID field, similar to {@link #setEventApplicationID(int)}.
	 * @param newValue is new value for the eventApplicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEventApplicationID(SFInt32Object newValue)
	{
		setEventApplicationID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  For a given event, simulation/exercise entityID is a unique ID for a single entity within that application.  * <br>

	 * @return value of eventEntityID field
	 */
	@Override
	public int getEventEntityID()
	{
		return eventEntityID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> For a given event, simulation/exercise entityID is a unique ID for a single entity within that application.
	 * @param newValue is new value for the eventEntityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEventEntityID(int newValue)
	{
		eventEntityID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 eventEntityID field, similar to {@link #setEventEntityID(int)}.
	 * @param newValue is new value for the eventEntityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEventEntityID(SFInt32Object newValue)
	{
		setEventEntityID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventNumber</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sequential number of each event issued by an application.
 * <ul>
 *  <li> <i> Warning:</i>  reuse of numbers may be necessary during long simulation exercises. </li> 
 * </ul>
	 * @return value of eventNumber field
	 */
	@Override
	public int getEventNumber()
	{
		return eventNumber;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventNumber</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sequential number of each event issued by an application. Warning: reuse of numbers may be necessary during long simulation exercises.
	 * @param newValue is new value for the eventNumber field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEventNumber(int newValue)
	{
		eventNumber = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 eventNumber field, similar to {@link #setEventNumber(int)}.
	 * @param newValue is new value for the eventNumber field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEventNumber(SFInt32Object newValue)
	{
		setEventNumber(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise siteID of the participating LAN or organization.  * <br>

	 * @return value of eventSiteID field
	 */
	@Override
	public int getEventSiteID()
	{
		return eventSiteID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise siteID of the participating LAN or organization.
	 * @param newValue is new value for the eventSiteID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setEventSiteID(int newValue)
	{
		eventSiteID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 eventSiteID field, similar to {@link #setEventSiteID(int)}.
	 * @param newValue is new value for the eventSiteID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setEventSiteID(SFInt32Object newValue)
	{
		setEventSiteID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fired1</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has the primary weapon (Fire PDU) been fired?.  * <br>

	 * @return value of fired1 field
	 */
	@Override
	public boolean getFired1()
	{
		return fired1;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fired1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Has the primary weapon (Fire PDU) been fired?.
	 * @param newValue is new value for the fired1 field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFired1(boolean newValue)
	{
		fired1 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool fired1 field, similar to {@link #setFired1(boolean)}.
	 * @param newValue is new value for the fired1 field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFired1(SFBoolObject newValue)
	{
		setFired1(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fired2</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has the secondary weapon (Fire PDU) been fired?.  * <br>

	 * @return value of fired2 field
	 */
	@Override
	public boolean getFired2()
	{
		return fired2;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fired2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Has the secondary weapon (Fire PDU) been fired?.
	 * @param newValue is new value for the fired2 field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFired2(boolean newValue)
	{
		fired2 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool fired2 field, similar to {@link #setFired2(boolean)}.
	 * @param newValue is new value for the fired2 field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFired2(SFBoolObject newValue)
	{
		setFired2(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>firedTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When did we shoot a weapon (Fire PDU)?.  * <br>

	 * @return value of firedTime field
	 */
	@Override
	public double getFiredTime()
	{
		return firedTime;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>fireMissionIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  .  * <br>

	 * @return value of fireMissionIndex field
	 */
	@Override
	public int getFireMissionIndex()
	{
		return fireMissionIndex;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>fireMissionIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> .
	 * @param newValue is new value for the fireMissionIndex field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFireMissionIndex(int newValue)
	{
		fireMissionIndex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 fireMissionIndex field, similar to {@link #setFireMissionIndex(int)}.
	 * @param newValue is new value for the fireMissionIndex field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFireMissionIndex(SFInt32Object newValue)
	{
		setFireMissionIndex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>firingRange</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Range (three dimension, straight-line distance) that the firing entity's fire control system has assumed for computing the fire control solution if a weapon and if the value is known.  * <br>

	 * @return value of firingRange field
	 */
	@Override
	public float getFiringRange()
	{
		return firingRange;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>firingRange</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Range (three dimension, straight-line distance) that the firing entity's fire control system has assumed for computing the fire control solution if a weapon and if the value is known.
	 * @param newValue is new value for the firingRange field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFiringRange(float newValue)
	{
		firingRange = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat firingRange field, similar to {@link #setFiringRange(float)}.
	 * @param newValue is new value for the firingRange field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFiringRange(SFFloatObject newValue)
	{
		setFiringRange(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>firingRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Rate at which munitions are fired.  * <br>

	 * @return value of firingRate field
	 */
	@Override
	public int getFiringRate()
	{
		return firingRate;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>firingRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Rate at which munitions are fired.
	 * @param newValue is new value for the firingRate field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFiringRate(int newValue)
	{
		firingRate = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 firingRate field, similar to {@link #setFiringRate(int)}.
	 * @param newValue is new value for the firingRate field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFiringRate(SFInt32Object newValue)
	{
		setFiringRate(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>forceID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forceID determines the team membership of the issuing entity, and whether FRIENDLY OPPOSING or NEUTRAL or OTHER.  * <br>

	 * @return value of forceID field
	 */
	@Override
	public int getForceID()
	{
		return forceID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>forceID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> forceID determines the team membership of the issuing entity, and whether FRIENDLY OPPOSING or NEUTRAL or OTHER.
	 * @param newValue is new value for the forceID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setForceID(int newValue)
	{
		forceID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 forceID field, similar to {@link #setForceID(int)}.
	 * @param newValue is new value for the forceID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setForceID(SFInt32Object newValue)
	{
		setForceID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>fuse</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for type of fuse on the munition.  * <br>

	 * @return value of fuse field
	 */
	@Override
	public int getFuse()
	{
		return fuse;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>fuse</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for type of fuse on the munition.
	 * @param newValue is new value for the fuse field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setFuse(int newValue)
	{
		fuse = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 fuse field, similar to {@link #setFuse(int)}.
	 * @param newValue is new value for the fuse field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setFuse(SFInt32Object newValue)
	{
		setFuse(newValue.getPrimitiveValue());
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setGeoCoords(double[] newValue)
	{
		if (newValue == null)
			newValue = new double[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform geoCoords newValue=" + SFVec3dObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		geoCoords = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param newValue is new value for the geoCoords field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoCoords(SFVec3dObject newValue)
	{
		setGeoCoords(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3d geoCoords field, similar to {@link #setGeoCoords(double[])}.
	 * @param x first component
	 * @param y second component

	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoCoords(double x, double y, double z)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setGeoSystem(String[] newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoSystem(MFStringObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoSystem(SFStringObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoSystem(String newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setGeoSystem(ArrayList<String> newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject clearGeoSystem()
	{
		geoSystem.clear(); // reset
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Have we received a network update recently?.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive()
	{
		return isActive;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isCollided</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has a matching CollisionPDU reported a collision?.  * <br>

	 * @return value of isCollided field
	 */
	@Override
	public boolean getIsCollided()
	{
		return isCollided;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isDetonated</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has a matching DetonationPDU reported a detonation?.  * <br>

	 * @return value of isDetonated field
	 */
	@Override
	public boolean getIsDetonated()
	{
		return isDetonated;
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
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearAcceleration</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Acceleration of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.  * <br>

	 * @return value of linearAcceleration field
	 */
	@Override
	public float[] getLinearAcceleration()
	{
		return linearAcceleration;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearAcceleration</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Acceleration of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.
	 * @param newValue is new value for the linearAcceleration field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setLinearAcceleration(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform linearAcceleration newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		linearAcceleration = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f linearAcceleration field, similar to {@link #setLinearAcceleration(float[])}.
	 * @param newValue is new value for the linearAcceleration field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setLinearAcceleration(SFVec3fObject newValue)
	{
		setLinearAcceleration(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f linearAcceleration field, similar to {@link #setLinearAcceleration(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setLinearAcceleration(float x, float y, float z)
	{
		setLinearAcceleration(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Velocity of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.  * <br>

	 * @return value of linearVelocity field
	 */
	@Override
	public float[] getLinearVelocity()
	{
		return linearVelocity;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Velocity of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setLinearVelocity(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform linearVelocity newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		linearVelocity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f linearVelocity field, similar to {@link #setLinearVelocity(float[])}.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setLinearVelocity(SFVec3fObject newValue)
	{
		setLinearVelocity(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f linearVelocity field, similar to {@link #setLinearVelocity(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setLinearVelocity(float x, float y, float z)
	{
		setLinearVelocity(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>marking</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Maximum of 11 characters for simple entity label.  * <br>

	 * @return value of marking field
	 */
	@Override
	public String getMarking()
	{
		return marking;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>marking</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Maximum of 11 characters for simple entity label.
	 * @param newValue is new value for the marking field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMarking(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		marking = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString marking field, similar to {@link #setMarking(String)}.
	 * @param newValue is new value for the marking field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMarking(SFStringObject newValue)
	{
		setMarking(newValue.getPrimitiveValue());
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public EspduTransformObject clearMetadata()
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public EspduTransformObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * <i>Tooltip:</i>  Fallback server address if multicast not available locally. Example: track.nps.edu.  * <br>

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
	 * <i>Tooltip:</i> Fallback server address if multicast not available locally. Example: track.nps.edu.
	 * @param newValue is new value for the multicastRelayHost field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMulticastRelayHost(String newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMulticastRelayHost(SFStringObject newValue)
	{
		setMulticastRelayHost(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>multicastRelayPort</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Fallback server port if multicast not available locally. Example: 8010.  * <br>

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
	 * <i>Tooltip:</i> Fallback server port if multicast not available locally. Example: 8010.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMulticastRelayPort(int newValue)
	{
		multicastRelayPort = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 multicastRelayPort field, similar to {@link #setMulticastRelayPort(int)}.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMulticastRelayPort(SFInt32Object newValue)
	{
		setMulticastRelayPort(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  munitionApplicationID, unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of munitionApplicationID field
	 */
	@Override
	public int getMunitionApplicationID()
	{
		return munitionApplicationID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> munitionApplicationID, unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the munitionApplicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionApplicationID(int newValue)
	{
		munitionApplicationID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 munitionApplicationID field, similar to {@link #setMunitionApplicationID(int)}.
	 * @param newValue is new value for the munitionApplicationID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionApplicationID(SFInt32Object newValue)
	{
		setMunitionApplicationID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>munitionEndPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Final point of the munition path from firing weapon to detonation or impact, in exercise coordinates.  * <br>

	 * @return value of munitionEndPoint field
	 */
	@Override
	public float[] getMunitionEndPoint()
	{
		return munitionEndPoint;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>munitionEndPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Final point of the munition path from firing weapon to detonation or impact, in exercise coordinates.
	 * @param newValue is new value for the munitionEndPoint field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionEndPoint(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform munitionEndPoint newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		munitionEndPoint = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f munitionEndPoint field, similar to {@link #setMunitionEndPoint(float[])}.
	 * @param newValue is new value for the munitionEndPoint field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionEndPoint(SFVec3fObject newValue)
	{
		setMunitionEndPoint(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f munitionEndPoint field, similar to {@link #setMunitionEndPoint(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionEndPoint(float x, float y, float z)
	{
		setMunitionEndPoint(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  munitionEntityID is unique ID for entity firing munition within that application.  * <br>

	 * @return value of munitionEntityID field
	 */
	@Override
	public int getMunitionEntityID()
	{
		return munitionEntityID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> munitionEntityID is unique ID for entity firing munition within that application.
	 * @param newValue is new value for the munitionEntityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionEntityID(int newValue)
	{
		munitionEntityID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 munitionEntityID field, similar to {@link #setMunitionEntityID(int)}.
	 * @param newValue is new value for the munitionEntityID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionEntityID(SFInt32Object newValue)
	{
		setMunitionEntityID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionQuantity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Quantity of munitions fired.  * <br>

	 * @return value of munitionQuantity field
	 */
	@Override
	public int getMunitionQuantity()
	{
		return munitionQuantity;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionQuantity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Quantity of munitions fired.
	 * @param newValue is new value for the munitionQuantity field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionQuantity(int newValue)
	{
		munitionQuantity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 munitionQuantity field, similar to {@link #setMunitionQuantity(int)}.
	 * @param newValue is new value for the munitionQuantity field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionQuantity(SFInt32Object newValue)
	{
		setMunitionQuantity(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Munition siteID of the participating LAN or organization.  * <br>

	 * @return value of munitionSiteID field
	 */
	@Override
	public int getMunitionSiteID()
	{
		return munitionSiteID;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Munition siteID of the participating LAN or organization.
	 * @param newValue is new value for the munitionSiteID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionSiteID(int newValue)
	{
		munitionSiteID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 munitionSiteID field, similar to {@link #setMunitionSiteID(int)}.
	 * @param newValue is new value for the munitionSiteID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionSiteID(SFInt32Object newValue)
	{
		setMunitionSiteID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>munitionStartPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial point of the munition path from firing weapon to detonation or impact, in exercise coordinates.  * <br>

	 * @return value of munitionStartPoint field
	 */
	@Override
	public float[] getMunitionStartPoint()
	{
		return munitionStartPoint;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>munitionStartPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial point of the munition path from firing weapon to detonation or impact, in exercise coordinates.
	 * @param newValue is new value for the munitionStartPoint field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setMunitionStartPoint(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform munitionStartPoint newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		munitionStartPoint = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f munitionStartPoint field, similar to {@link #setMunitionStartPoint(float[])}.
	 * @param newValue is new value for the munitionStartPoint field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionStartPoint(SFVec3fObject newValue)
	{
		setMunitionStartPoint(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f munitionStartPoint field, similar to {@link #setMunitionStartPoint(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setMunitionStartPoint(float x, float y, float z)
	{
		setMunitionStartPoint(new float[] {x, y, z});
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setNetworkMode(String newValue)
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
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform networkMode newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setNetworkMode(SFStringObject newValue)
	{
		setNetworkMode(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>port</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Network connection port number (EXAMPLE 62040) for sending or receiving DIS messages. Example: 62040.  * <br>

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
	 * <i>Tooltip:</i> Network connection port number (EXAMPLE 62040) for sending or receiving DIS messages. Example: 62040.
	 * @param newValue is new value for the port field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setPort(int newValue)
	{
		port = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 port field, similar to {@link #setPort(int)}.
	 * @param newValue is new value for the port field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setPort(SFInt32Object newValue)
	{
		setPort(newValue.getPrimitiveValue());
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setReadInterval(double newValue)
	{
		readInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime readInterval field, similar to {@link #setReadInterval(double)}.
	 * @param newValue is new value for the readInterval field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setReadInterval(SFTimeObject newValue)
	{
		setReadInterval(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.  * <br>

	 * @return value of rotation field
	 */
	@Override
	public float[] getRotation()
	{
		return rotation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
	 * @param newValue is new value for the rotation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setRotation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform rotation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		rotation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation rotation field, similar to {@link #setRotation(float[])}.
	 * @param newValue is new value for the rotation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setRotation(SFRotationObject newValue)
	{
		setRotation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation rotation field, similar to {@link #setRotation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setRotation(float x, float y, float z, float angleRadians)
	{
		setRotation(new float[] {x, y, z, angleRadians});
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setRtpHeaderExpected(boolean newValue)
	{
		rtpHeaderExpected = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool rtpHeaderExpected field, similar to {@link #setRtpHeaderExpected(boolean)}.
	 * @param newValue is new value for the rtpHeaderExpected field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setRtpHeaderExpected(SFBoolObject newValue)
	{
		setRtpHeaderExpected(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.  * <br>

	 * @return value of scale field
	 */
	@Override
	public float[] getScale()
	{
		return scale;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
	 * @param newValue is new value for the scale field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setScale(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform scale newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		scale = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f scale field, similar to {@link #setScale(float[])}.
	 * @param newValue is new value for the scale field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setScale(SFVec3fObject newValue)
	{
		setScale(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f scale field, similar to {@link #setScale(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setScale(float x, float y, float z)
	{
		setScale(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).  * <br>

	 * @return value of scaleOrientation field
	 */
	@Override
	public float[] getScaleOrientation()
	{
		return scaleOrientation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setScaleOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform scaleOrientation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		scaleOrientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation scaleOrientation field, similar to {@link #setScaleOrientation(float[])}.
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setScaleOrientation(SFRotationObject newValue)
	{
		setScaleOrientation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation scaleOrientation field, similar to {@link #setScaleOrientation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setScaleOrientation(float x, float y, float z, float angleRadians)
	{
		setScaleOrientation(new float[] {x, y, z, angleRadians});
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setSiteID(int newValue)
	{
		siteID = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 siteID field, similar to {@link #setSiteID(int)}.
	 * @param newValue is new value for the siteID field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setSiteID(SFInt32Object newValue)
	{
		setSiteID(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>timestamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  DIS timestamp in VRML time units from latest update.  * <br>

	 * @return value of timestamp field
	 */
	@Override
	public double getTimestamp()
	{
		return timestamp;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Position of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.  * <br>

	 * @return value of translation field
	 */
	@Override
	public float[] getTranslation()
	{
		return translation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
	 * @param newValue is new value for the translation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setTranslation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform translation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		translation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f translation field, similar to {@link #setTranslation(float[])}.
	 * @param newValue is new value for the translation field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setTranslation(SFVec3fObject newValue)
	{
		setTranslation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f translation field, similar to {@link #setTranslation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setTranslation(float x, float y, float z)
	{
		setTranslation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>warhead</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for type of warhead on the munition.  * <br>

	 * @return value of warhead field
	 */
	@Override
	public int getWarhead()
	{
		return warhead;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>warhead</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for type of warhead on the munition.
	 * @param newValue is new value for the warhead field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setWarhead(int newValue)
	{
		warhead = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 warhead field, similar to {@link #setWarhead(int)}.
	 * @param newValue is new value for the warhead field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setWarhead(SFInt32Object newValue)
	{
		setWarhead(newValue.getPrimitiveValue());
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setWriteInterval(double newValue)
	{
		writeInterval = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime writeInterval field, similar to {@link #setWriteInterval(double)}.
	 * @param newValue is new value for the writeInterval field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setWriteInterval(SFTimeObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final EspduTransformObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to EspduTransform
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("EspduTransform DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setDEF(SFStringObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final EspduTransformObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to EspduTransform
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("EspduTransform USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("EspduTransform USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final EspduTransformObject setCssClass(String newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setCssClass(SFStringObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransformObject setIS(ISObject newValue)
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
	 * @return {@link EspduTransformObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransformObject setUSE(EspduTransformObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on EspduTransformObject" +
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
	public EspduTransformObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<EspduTransform"); // start opening tag
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
			if (((getArticulationParameterArray().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterArray='").append(MFFloatObject.toString(getArticulationParameterArray())).append("'");
			}
			if (((getArticulationParameterChangeIndicatorArray().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterChangeIndicatorArray='").append(MFInt32Object.toString(getArticulationParameterChangeIndicatorArray())).append("'");
			}
			if (((getArticulationParameterCount() != ARTICULATIONPARAMETERCOUNT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterCount='").append(SFInt32Object.toString(getArticulationParameterCount())).append("'");
			}
			if (((getArticulationParameterDesignatorArray().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterDesignatorArray='").append(MFInt32Object.toString(getArticulationParameterDesignatorArray())).append("'");
			}
			if (((getArticulationParameterIdPartAttachedToArray().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterIdPartAttachedToArray='").append(MFInt32Object.toString(getArticulationParameterIdPartAttachedToArray())).append("'");
			}
			if (((getArticulationParameterTypeArray().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" articulationParameterTypeArray='").append(MFInt32Object.toString(getArticulationParameterTypeArray())).append("'");
			}
			if ((!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxCenter='").append(SFVec3fObject.toString(getBboxCenter())).append("'");
			}
			if ((!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxSize='").append(SFVec3fObject.toString(getBboxSize())).append("'");
			}
			if ((!Arrays.equals(getCenter(), CENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" center='").append(SFVec3fObject.toString(getCenter())).append("'");
			}
			if (((getCollisionType() != COLLISIONTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" collisionType='").append(SFInt32Object.toString(getCollisionType())).append("'");
			}
			if (((getDeadReckoning() != DEADRECKONING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" deadReckoning='").append(SFInt32Object.toString(getDeadReckoning())).append("'");
			}
			if ((!Arrays.equals(getDetonationLocation(), DETONATIONLOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" detonationLocation='").append(SFVec3fObject.toString(getDetonationLocation())).append("'");
			}
			if ((!Arrays.equals(getDetonationRelativeLocation(), DETONATIONRELATIVELOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" detonationRelativeLocation='").append(SFVec3fObject.toString(getDetonationRelativeLocation())).append("'");
			}
			if (((getDetonationResult() != DETONATIONRESULT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" detonationResult='").append(SFInt32Object.toString(getDetonationResult())).append("'");
			}
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if (((getEntityCategory() != ENTITYCATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityCategory='").append(SFInt32Object.toString(getEntityCategory())).append("'");
			}
			if (((getEntityCountry() != ENTITYCOUNTRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityCountry='").append(SFInt32Object.toString(getEntityCountry())).append("'");
			}
			if (((getEntityDomain() != ENTITYDOMAIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityDomain='").append(SFInt32Object.toString(getEntityDomain())).append("'");
			}
			if (((getEntityExtra() != ENTITYEXTRA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityExtra='").append(SFInt32Object.toString(getEntityExtra())).append("'");
			}
			if (((getEntityID() != ENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityID='").append(SFInt32Object.toString(getEntityID())).append("'");
			}
			if (((getEntityKind() != ENTITYKIND_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entityKind='").append(SFInt32Object.toString(getEntityKind())).append("'");
			}
			if (((getEntitySpecific() != ENTITYSPECIFIC_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entitySpecific='").append(SFInt32Object.toString(getEntitySpecific())).append("'");
			}
			if (((getEntitySubcategory() != ENTITYSUBCATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" entitySubcategory='").append(SFInt32Object.toString(getEntitySubcategory())).append("'");
			}
			if (((getEventApplicationID() != EVENTAPPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" eventApplicationID='").append(SFInt32Object.toString(getEventApplicationID())).append("'");
			}
			if (((getEventEntityID() != EVENTENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" eventEntityID='").append(SFInt32Object.toString(getEventEntityID())).append("'");
			}
			if (((getEventNumber() != EVENTNUMBER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" eventNumber='").append(SFInt32Object.toString(getEventNumber())).append("'");
			}
			if (((getEventSiteID() != EVENTSITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" eventSiteID='").append(SFInt32Object.toString(getEventSiteID())).append("'");
			}
			if (((getFired1() != FIRED1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" fired1='").append(SFBoolObject.toString(getFired1())).append("'");
			}
			if (((getFired2() != FIRED2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" fired2='").append(SFBoolObject.toString(getFired2())).append("'");
			}
			if (((getFireMissionIndex() != FIREMISSIONINDEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" fireMissionIndex='").append(SFInt32Object.toString(getFireMissionIndex())).append("'");
			}
			if (((getFiringRange() != FIRINGRANGE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" firingRange='").append(SFFloatObject.toString(getFiringRange())).append("'");
			}
			if (((getFiringRate() != FIRINGRATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" firingRate='").append(SFInt32Object.toString(getFiringRate())).append("'");
			}
			if (((getForceID() != FORCEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" forceID='").append(SFInt32Object.toString(getForceID())).append("'");
			}
			if (((getFuse() != FUSE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" fuse='").append(SFInt32Object.toString(getFuse())).append("'");
			}
			if ((!Arrays.equals(getGeoCoords(), GEOCOORDS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoCoords='").append(SFVec3dObject.toString(getGeoCoords())).append("'");
			}
			if (((getGeoSystem().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoSystem='").append(new MFStringObject(getGeoSystem()).toStringX3D()).append("'");
			}
			if ((!Arrays.equals(getLinearAcceleration(), LINEARACCELERATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" linearAcceleration='").append(SFVec3fObject.toString(getLinearAcceleration())).append("'");
			}
			if ((!Arrays.equals(getLinearVelocity(), LINEARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" linearVelocity='").append(SFVec3fObject.toString(getLinearVelocity())).append("'");
			}
			if ((!getMarking().equals(MARKING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" marking='").append(new SFStringObject(getMarking()).toStringX3D()).append("'");
			}
			if ((!getMulticastRelayHost().equals(MULTICASTRELAYHOST_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" multicastRelayHost='").append(new SFStringObject(getMulticastRelayHost()).toStringX3D()).append("'");
			}
			if (((getMulticastRelayPort() != MULTICASTRELAYPORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" multicastRelayPort='").append(SFInt32Object.toString(getMulticastRelayPort())).append("'");
			}
			if (((getMunitionApplicationID() != MUNITIONAPPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionApplicationID='").append(SFInt32Object.toString(getMunitionApplicationID())).append("'");
			}
			if ((!Arrays.equals(getMunitionEndPoint(), MUNITIONENDPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionEndPoint='").append(SFVec3fObject.toString(getMunitionEndPoint())).append("'");
			}
			if (((getMunitionEntityID() != MUNITIONENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionEntityID='").append(SFInt32Object.toString(getMunitionEntityID())).append("'");
			}
			if (((getMunitionQuantity() != MUNITIONQUANTITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionQuantity='").append(SFInt32Object.toString(getMunitionQuantity())).append("'");
			}
			if (((getMunitionSiteID() != MUNITIONSITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionSiteID='").append(SFInt32Object.toString(getMunitionSiteID())).append("'");
			}
			if ((!Arrays.equals(getMunitionStartPoint(), MUNITIONSTARTPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" munitionStartPoint='").append(SFVec3fObject.toString(getMunitionStartPoint())).append("'");
			}
			if ((!getNetworkMode().equals(NETWORKMODE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" networkMode='").append(new SFStringObject(getNetworkMode()).toStringX3D()).append("'");
			}
			if (((getPort() != PORT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" port='").append(SFInt32Object.toString(getPort())).append("'");
			}
			if (((getReadInterval() != READINTERVAL_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" readInterval='").append(SFTimeObject.toString(getReadInterval())).append("'");
			}
			if ((!Arrays.equals(getRotation(), ROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rotation='").append(SFRotationObject.toString(getRotation())).append("'");
			}
			if (((getRtpHeaderExpected() != RTPHEADEREXPECTED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rtpHeaderExpected='").append(SFBoolObject.toString(getRtpHeaderExpected())).append("'");
			}
			if ((!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scale='").append(SFVec3fObject.toString(getScale())).append("'");
			}
			if ((!Arrays.equals(getScaleOrientation(), SCALEORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scaleOrientation='").append(SFRotationObject.toString(getScaleOrientation())).append("'");
			}
			if (((getSiteID() != SITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" siteID='").append(SFInt32Object.toString(getSiteID())).append("'");
			}
			if ((!Arrays.equals(getTranslation(), TRANSLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" translation='").append(SFVec3fObject.toString(getTranslation())).append("'");
			}
			if (((getWarhead() != WARHEAD_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" warhead='").append(SFInt32Object.toString(getWarhead())).append("'");
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

			// recursively iterate over child elements
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DChildNode element : children)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</EspduTransform>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);
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
			stringClassicVRML.append("EspduTransform").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("articulationParameterArray"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterArray").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getArticulationParameterArray().length > 0)
				{
					stringClassicVRML.append("articulationParameterArray ").append("[ ").append(MFFloatObject.toString(getArticulationParameterArray())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("articulationParameterChangeIndicatorArray"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterChangeIndicatorArray").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getArticulationParameterChangeIndicatorArray().length > 0)
				{
					stringClassicVRML.append("articulationParameterChangeIndicatorArray ").append("[ ").append(MFInt32Object.toString(getArticulationParameterChangeIndicatorArray())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("articulationParameterCount"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterCount").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getArticulationParameterCount() != ARTICULATIONPARAMETERCOUNT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("articulationParameterCount ").append(SFInt32Object.toString(getArticulationParameterCount())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("articulationParameterDesignatorArray"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterDesignatorArray").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getArticulationParameterDesignatorArray().length > 0)
				{
					stringClassicVRML.append("articulationParameterDesignatorArray ").append("[ ").append(MFInt32Object.toString(getArticulationParameterDesignatorArray())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("articulationParameterIdPartAttachedToArray"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterIdPartAttachedToArray").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getArticulationParameterIdPartAttachedToArray().length > 0)
				{
					stringClassicVRML.append("articulationParameterIdPartAttachedToArray ").append("[ ").append(MFInt32Object.toString(getArticulationParameterIdPartAttachedToArray())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("articulationParameterTypeArray"))
						{
							stringClassicVRML.append(indentCharacter).append("articulationParameterTypeArray").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getArticulationParameterTypeArray().length > 0)
				{
					stringClassicVRML.append("articulationParameterTypeArray ").append("[ ").append(MFInt32Object.toString(getArticulationParameterTypeArray())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("center"))
						{
							stringClassicVRML.append(indentCharacter).append("center").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getCenter(), CENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("center ").append(SFVec3fObject.toString(getCenter())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("collisionType"))
						{
							stringClassicVRML.append(indentCharacter).append("collisionType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCollisionType() != COLLISIONTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("collisionType ").append(SFInt32Object.toString(getCollisionType())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("deadReckoning"))
						{
							stringClassicVRML.append(indentCharacter).append("deadReckoning").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDeadReckoning() != DEADRECKONING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("deadReckoning ").append(SFInt32Object.toString(getDeadReckoning())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("detonationLocation"))
						{
							stringClassicVRML.append(indentCharacter).append("detonationLocation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getDetonationLocation(), DETONATIONLOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("detonationLocation ").append(SFVec3fObject.toString(getDetonationLocation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("detonationRelativeLocation"))
						{
							stringClassicVRML.append(indentCharacter).append("detonationRelativeLocation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getDetonationRelativeLocation(), DETONATIONRELATIVELOCATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("detonationRelativeLocation ").append(SFVec3fObject.toString(getDetonationRelativeLocation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("detonationResult"))
						{
							stringClassicVRML.append(indentCharacter).append("detonationResult").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDetonationResult() != DETONATIONRESULT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("detonationResult ").append(SFInt32Object.toString(getDetonationResult())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("entityCategory"))
						{
							stringClassicVRML.append(indentCharacter).append("entityCategory").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityCategory() != ENTITYCATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityCategory ").append(SFInt32Object.toString(getEntityCategory())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entityCountry"))
						{
							stringClassicVRML.append(indentCharacter).append("entityCountry").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityCountry() != ENTITYCOUNTRY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityCountry ").append(SFInt32Object.toString(getEntityCountry())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entityDomain"))
						{
							stringClassicVRML.append(indentCharacter).append("entityDomain").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityDomain() != ENTITYDOMAIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityDomain ").append(SFInt32Object.toString(getEntityDomain())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entityExtra"))
						{
							stringClassicVRML.append(indentCharacter).append("entityExtra").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityExtra() != ENTITYEXTRA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityExtra ").append(SFInt32Object.toString(getEntityExtra())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("entityKind"))
						{
							stringClassicVRML.append(indentCharacter).append("entityKind").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntityKind() != ENTITYKIND_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entityKind ").append(SFInt32Object.toString(getEntityKind())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entitySpecific"))
						{
							stringClassicVRML.append(indentCharacter).append("entitySpecific").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntitySpecific() != ENTITYSPECIFIC_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entitySpecific ").append(SFInt32Object.toString(getEntitySpecific())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("entitySubcategory"))
						{
							stringClassicVRML.append(indentCharacter).append("entitySubcategory").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEntitySubcategory() != ENTITYSUBCATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("entitySubcategory ").append(SFInt32Object.toString(getEntitySubcategory())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("eventApplicationID"))
						{
							stringClassicVRML.append(indentCharacter).append("eventApplicationID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEventApplicationID() != EVENTAPPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("eventApplicationID ").append(SFInt32Object.toString(getEventApplicationID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("eventEntityID"))
						{
							stringClassicVRML.append(indentCharacter).append("eventEntityID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEventEntityID() != EVENTENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("eventEntityID ").append(SFInt32Object.toString(getEventEntityID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("eventNumber"))
						{
							stringClassicVRML.append(indentCharacter).append("eventNumber").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEventNumber() != EVENTNUMBER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("eventNumber ").append(SFInt32Object.toString(getEventNumber())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("eventSiteID"))
						{
							stringClassicVRML.append(indentCharacter).append("eventSiteID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEventSiteID() != EVENTSITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("eventSiteID ").append(SFInt32Object.toString(getEventSiteID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("fired1"))
						{
							stringClassicVRML.append(indentCharacter).append("fired1").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFired1() != FIRED1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("fired1 ").append(SFBoolObject.toString(getFired1())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("fired2"))
						{
							stringClassicVRML.append(indentCharacter).append("fired2").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFired2() != FIRED2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("fired2 ").append(SFBoolObject.toString(getFired2())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("fireMissionIndex"))
						{
							stringClassicVRML.append(indentCharacter).append("fireMissionIndex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFireMissionIndex() != FIREMISSIONINDEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("fireMissionIndex ").append(SFInt32Object.toString(getFireMissionIndex())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("firingRange"))
						{
							stringClassicVRML.append(indentCharacter).append("firingRange").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFiringRange() != FIRINGRANGE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("firingRange ").append(SFFloatObject.toString(getFiringRange())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("firingRate"))
						{
							stringClassicVRML.append(indentCharacter).append("firingRate").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFiringRate() != FIRINGRATE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("firingRate ").append(SFInt32Object.toString(getFiringRate())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("forceID"))
						{
							stringClassicVRML.append(indentCharacter).append("forceID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getForceID() != FORCEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("forceID ").append(SFInt32Object.toString(getForceID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("fuse"))
						{
							stringClassicVRML.append(indentCharacter).append("fuse").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFuse() != FUSE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("fuse ").append(SFInt32Object.toString(getFuse())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("linearAcceleration"))
						{
							stringClassicVRML.append(indentCharacter).append("linearAcceleration").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getLinearAcceleration(), LINEARACCELERATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("linearAcceleration ").append(SFVec3fObject.toString(getLinearAcceleration())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("linearVelocity"))
						{
							stringClassicVRML.append(indentCharacter).append("linearVelocity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getLinearVelocity(), LINEARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("linearVelocity ").append(SFVec3fObject.toString(getLinearVelocity())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("marking"))
						{
							stringClassicVRML.append(indentCharacter).append("marking").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getMarking().equals(MARKING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("marking ").append("\"").append(SFStringObject.toString(getMarking())).append("\"").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("munitionApplicationID"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionApplicationID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMunitionApplicationID() != MUNITIONAPPLICATIONID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionApplicationID ").append(SFInt32Object.toString(getMunitionApplicationID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("munitionEndPoint"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionEndPoint").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getMunitionEndPoint(), MUNITIONENDPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionEndPoint ").append(SFVec3fObject.toString(getMunitionEndPoint())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("munitionEntityID"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionEntityID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMunitionEntityID() != MUNITIONENTITYID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionEntityID ").append(SFInt32Object.toString(getMunitionEntityID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("munitionQuantity"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionQuantity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMunitionQuantity() != MUNITIONQUANTITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionQuantity ").append(SFInt32Object.toString(getMunitionQuantity())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("munitionSiteID"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionSiteID").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMunitionSiteID() != MUNITIONSITEID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionSiteID ").append(SFInt32Object.toString(getMunitionSiteID())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("munitionStartPoint"))
						{
							stringClassicVRML.append(indentCharacter).append("munitionStartPoint").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getMunitionStartPoint(), MUNITIONSTARTPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("munitionStartPoint ").append(SFVec3fObject.toString(getMunitionStartPoint())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("rotation"))
						{
							stringClassicVRML.append(indentCharacter).append("rotation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getRotation(), ROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("rotation ").append(SFRotationObject.toString(getRotation())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("scale"))
						{
							stringClassicVRML.append(indentCharacter).append("scale").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("scale ").append(SFVec3fObject.toString(getScale())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("scaleOrientation"))
						{
							stringClassicVRML.append(indentCharacter).append("scaleOrientation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getScaleOrientation(), SCALEORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("scaleOrientation ").append(SFRotationObject.toString(getScaleOrientation())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("translation"))
						{
							stringClassicVRML.append(indentCharacter).append("translation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getTranslation(), TRANSLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("translation ").append(SFVec3fObject.toString(getTranslation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("warhead"))
						{
							stringClassicVRML.append(indentCharacter).append("warhead").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWarhead() != WARHEAD_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("warhead ").append(SFInt32Object.toString(getWarhead())).append("\n").append(indent).append(indentCharacter);
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
			// recursively iterate over child elements
			if (children.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("children").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DChildNode element : children)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

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
		for (X3DChildNode element : children) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
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
		for (X3DChildNode element : children) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
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

		setArticulationParameterArray(getArticulationParameterArray()); // exercise field checks, simple types

		setArticulationParameterChangeIndicatorArray(getArticulationParameterChangeIndicatorArray()); // exercise field checks, simple types

		setArticulationParameterCount(getArticulationParameterCount()); // exercise field checks, simple types

		setArticulationParameterDesignatorArray(getArticulationParameterDesignatorArray()); // exercise field checks, simple types

		setArticulationParameterIdPartAttachedToArray(getArticulationParameterIdPartAttachedToArray()); // exercise field checks, simple types

		setArticulationParameterTypeArray(getArticulationParameterTypeArray()); // exercise field checks, simple types

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setCenter(getCenter()); // exercise field checks, simple types

		setCollisionType(getCollisionType()); // exercise field checks, simple types

		setDeadReckoning(getDeadReckoning()); // exercise field checks, simple types

		setDetonationLocation(getDetonationLocation()); // exercise field checks, simple types

		setDetonationRelativeLocation(getDetonationRelativeLocation()); // exercise field checks, simple types

		setDetonationResult(getDetonationResult()); // exercise field checks, simple types

		setEnabled(getEnabled()); // exercise field checks, simple types

		setEntityCategory(getEntityCategory()); // exercise field checks, simple types

		setEntityCountry(getEntityCountry()); // exercise field checks, simple types

		setEntityDomain(getEntityDomain()); // exercise field checks, simple types

		setEntityExtra(getEntityExtra()); // exercise field checks, simple types

		setEntityID(getEntityID()); // exercise field checks, simple types

		setEntityKind(getEntityKind()); // exercise field checks, simple types

		setEntitySpecific(getEntitySpecific()); // exercise field checks, simple types

		setEntitySubcategory(getEntitySubcategory()); // exercise field checks, simple types

		setEventApplicationID(getEventApplicationID()); // exercise field checks, simple types

		setEventEntityID(getEventEntityID()); // exercise field checks, simple types

		setEventNumber(getEventNumber()); // exercise field checks, simple types

		setEventSiteID(getEventSiteID()); // exercise field checks, simple types

		setFired1(getFired1()); // exercise field checks, simple types

		setFired2(getFired2()); // exercise field checks, simple types

		setFireMissionIndex(getFireMissionIndex()); // exercise field checks, simple types

		setFiringRange(getFiringRange()); // exercise field checks, simple types

		setFiringRate(getFiringRate()); // exercise field checks, simple types

		setForceID(getForceID()); // exercise field checks, simple types

		setFuse(getFuse()); // exercise field checks, simple types

		setGeoCoords(getGeoCoords()); // exercise field checks, simple types

		setGeoSystem(getGeoSystem()); // exercise field checks, simple types

		setLinearAcceleration(getLinearAcceleration()); // exercise field checks, simple types

		setLinearVelocity(getLinearVelocity()); // exercise field checks, simple types

		setMarking(getMarking()); // exercise field checks, simple types

		setMulticastRelayHost(getMulticastRelayHost()); // exercise field checks, simple types

		setMulticastRelayPort(getMulticastRelayPort()); // exercise field checks, simple types

		setMunitionApplicationID(getMunitionApplicationID()); // exercise field checks, simple types

		setMunitionEndPoint(getMunitionEndPoint()); // exercise field checks, simple types

		setMunitionEntityID(getMunitionEntityID()); // exercise field checks, simple types

		setMunitionQuantity(getMunitionQuantity()); // exercise field checks, simple types

		setMunitionSiteID(getMunitionSiteID()); // exercise field checks, simple types

		setMunitionStartPoint(getMunitionStartPoint()); // exercise field checks, simple types

		setNetworkMode(getNetworkMode()); // exercise field checks, simple types

		setPort(getPort()); // exercise field checks, simple types

		setReadInterval(getReadInterval()); // exercise field checks, simple types

		setRotation(getRotation()); // exercise field checks, simple types

		setRtpHeaderExpected(getRtpHeaderExpected()); // exercise field checks, simple types

		setScale(getScale()); // exercise field checks, simple types

		setScaleOrientation(getScaleOrientation()); // exercise field checks, simple types

		setSiteID(getSiteID()); // exercise field checks, simple types

		setTranslation(getTranslation()); // exercise field checks, simple types

		setWarhead(getWarhead()); // exercise field checks, simple types

		setWriteInterval(getWriteInterval()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (X3DChildNode element : children) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setChildren(getChildren()); // also test getter/setter validation

		if (isUSE() && hasChildren()) // test USE restrictions
		{
			String errorNotice = "EspduTransform USE='" + getUSE() + "' is not allowed to have contained MFNode children";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
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
			String errorNotice = "EspduTransform USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
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
