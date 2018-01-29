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

package org.web3d.x3d.jsail.HAnim;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: Each body segment is stored in an HAnimSegment node. HAnimSegment contains Coordinate|CoordinateDouble with containerField='coord', HAnimDisplacer with containerField='displacers' and Shape or grouping nodes with containerField='children'.
 * <ul>
 *  <li> <i>Hint:</i> HAnimSegment displays geometry between parent HAnimJoint and sibling HAnimJoint nodes. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Segment <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Segment" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Segment</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  the number of contained &amp;lt;HAnimSegment USE='*' containerField='segments'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimSegment" target="blank">X3D Abstract Specification: HAnimSegment</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimSegment" target="_blank">X3D Tooltips: HAnimSegment</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class HAnimSegmentObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.HAnim.HAnimSegment
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private float[] centerOfMass; // SFVec3f

	private ArrayList<X3DChildNode> children = new ArrayList<>(); // MFNode acceptable node types: X3DChildNode

	private X3DCoordinateNode coord; // SFNode acceptable node types: X3DCoordinateNode
	private ProtoInstanceObject coordProtoInstance; // allowed alternative for coord field

	private ArrayList<HAnimDisplacer> displacers = new ArrayList<>(); // MFNode acceptable node types: HAnimDisplacer

	private float mass; // SFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private ArrayList<Float> momentsOfInertia = new ArrayList<>(); // MFFloat

	private String name; // SFString

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>name</i> can equal this enumeration value <i>"sacrum"</i> (Java syntax) or <i>sacrum</i> (XML syntax). */
	public static final String NAME_SACRUM = "sacrum";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"pelvis"</i> (Java syntax) or <i>pelvis</i> (XML syntax). */
	public static final String NAME_PELVIS = "pelvis";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thigh"</i> (Java syntax) or <i>l_thigh</i> (XML syntax). */
	public static final String NAME_L_THIGH = "l_thigh";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_calf"</i> (Java syntax) or <i>l_calf</i> (XML syntax). */
	public static final String NAME_L_CALF = "l_calf";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_hindfoot"</i> (Java syntax) or <i>l_hindfoot</i> (XML syntax). */
	public static final String NAME_L_HINDFOOT = "l_hindfoot";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_midproximal"</i> (Java syntax) or <i>l_midproximal</i> (XML syntax). */
	public static final String NAME_L_MIDPROXIMAL = "l_midproximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middistal"</i> (Java syntax) or <i>l_middistal</i> (XML syntax). */
	public static final String NAME_L_MIDDISTAL = "l_middistal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_forefoot"</i> (Java syntax) or <i>l_forefoot</i> (XML syntax). */
	public static final String NAME_L_FOREFOOT = "l_forefoot";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thigh"</i> (Java syntax) or <i>r_thigh</i> (XML syntax). */
	public static final String NAME_R_THIGH = "r_thigh";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_calf"</i> (Java syntax) or <i>r_calf</i> (XML syntax). */
	public static final String NAME_R_CALF = "r_calf";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_hindfoot"</i> (Java syntax) or <i>r_hindfoot</i> (XML syntax). */
	public static final String NAME_R_HINDFOOT = "r_hindfoot";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_midproximal"</i> (Java syntax) or <i>r_midproximal</i> (XML syntax). */
	public static final String NAME_R_MIDPROXIMAL = "r_midproximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middistal"</i> (Java syntax) or <i>r_middistal</i> (XML syntax). */
	public static final String NAME_R_MIDDISTAL = "r_middistal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_forefoot"</i> (Java syntax) or <i>r_forefoot</i> (XML syntax). */
	public static final String NAME_R_FOREFOOT = "r_forefoot";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l5"</i> (Java syntax) or <i>l5</i> (XML syntax). */
	public static final String NAME_L5 = "l5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l4"</i> (Java syntax) or <i>l4</i> (XML syntax). */
	public static final String NAME_L4 = "l4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l3"</i> (Java syntax) or <i>l3</i> (XML syntax). */
	public static final String NAME_L3 = "l3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l2"</i> (Java syntax) or <i>l2</i> (XML syntax). */
	public static final String NAME_L2 = "l2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l1"</i> (Java syntax) or <i>l1</i> (XML syntax). */
	public static final String NAME_L1 = "l1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t12"</i> (Java syntax) or <i>t12</i> (XML syntax). */
	public static final String NAME_T12 = "t12";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t11"</i> (Java syntax) or <i>t11</i> (XML syntax). */
	public static final String NAME_T11 = "t11";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t10"</i> (Java syntax) or <i>t10</i> (XML syntax). */
	public static final String NAME_T10 = "t10";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t9"</i> (Java syntax) or <i>t9</i> (XML syntax). */
	public static final String NAME_T9 = "t9";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t8"</i> (Java syntax) or <i>t8</i> (XML syntax). */
	public static final String NAME_T8 = "t8";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t7"</i> (Java syntax) or <i>t7</i> (XML syntax). */
	public static final String NAME_T7 = "t7";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t6"</i> (Java syntax) or <i>t6</i> (XML syntax). */
	public static final String NAME_T6 = "t6";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t5"</i> (Java syntax) or <i>t5</i> (XML syntax). */
	public static final String NAME_T5 = "t5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t4"</i> (Java syntax) or <i>t4</i> (XML syntax). */
	public static final String NAME_T4 = "t4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t3"</i> (Java syntax) or <i>t3</i> (XML syntax). */
	public static final String NAME_T3 = "t3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t2"</i> (Java syntax) or <i>t2</i> (XML syntax). */
	public static final String NAME_T2 = "t2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"t1"</i> (Java syntax) or <i>t1</i> (XML syntax). */
	public static final String NAME_T1 = "t1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c7"</i> (Java syntax) or <i>c7</i> (XML syntax). */
	public static final String NAME_C7 = "c7";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c6"</i> (Java syntax) or <i>c6</i> (XML syntax). */
	public static final String NAME_C6 = "c6";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c5"</i> (Java syntax) or <i>c5</i> (XML syntax). */
	public static final String NAME_C5 = "c5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c4"</i> (Java syntax) or <i>c4</i> (XML syntax). */
	public static final String NAME_C4 = "c4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c3"</i> (Java syntax) or <i>c3</i> (XML syntax). */
	public static final String NAME_C3 = "c3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c2"</i> (Java syntax) or <i>c2</i> (XML syntax). */
	public static final String NAME_C2 = "c2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"c1"</i> (Java syntax) or <i>c1</i> (XML syntax). */
	public static final String NAME_C1 = "c1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"skull"</i> (Java syntax) or <i>skull</i> (XML syntax). */
	public static final String NAME_SKULL = "skull";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyelid"</i> (Java syntax) or <i>l_eyelid</i> (XML syntax). */
	public static final String NAME_L_EYELID = "l_eyelid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyelid"</i> (Java syntax) or <i>r_eyelid</i> (XML syntax). */
	public static final String NAME_R_EYELID = "r_eyelid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyeball"</i> (Java syntax) or <i>l_eyeball</i> (XML syntax). */
	public static final String NAME_L_EYEBALL = "l_eyeball";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyeball"</i> (Java syntax) or <i>r_eyeball</i> (XML syntax). */
	public static final String NAME_R_EYEBALL = "r_eyeball";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyebrow"</i> (Java syntax) or <i>l_eyebrow</i> (XML syntax). */
	public static final String NAME_L_EYEBROW = "l_eyebrow";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyebrow"</i> (Java syntax) or <i>r_eyebrow</i> (XML syntax). */
	public static final String NAME_R_EYEBROW = "r_eyebrow";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"jaw"</i> (Java syntax) or <i>jaw</i> (XML syntax). */
	public static final String NAME_JAW = "jaw";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_clavicle"</i> (Java syntax) or <i>l_clavicle</i> (XML syntax). */
	public static final String NAME_L_CLAVICLE = "l_clavicle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_scapula"</i> (Java syntax) or <i>l_scapula</i> (XML syntax). */
	public static final String NAME_L_SCAPULA = "l_scapula";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_upperarm"</i> (Java syntax) or <i>l_upperarm</i> (XML syntax). */
	public static final String NAME_L_UPPERARM = "l_upperarm";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_forearm"</i> (Java syntax) or <i>l_forearm</i> (XML syntax). */
	public static final String NAME_L_FOREARM = "l_forearm";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_hand"</i> (Java syntax) or <i>l_hand</i> (XML syntax). */
	public static final String NAME_L_HAND = "l_hand";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb_metacarpal"</i> (Java syntax) or <i>l_thumb_metacarpal</i> (XML syntax). */
	public static final String NAME_L_THUMB_METACARPAL = "l_thumb_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb_proximal"</i> (Java syntax) or <i>l_thumb_proximal</i> (XML syntax). */
	public static final String NAME_L_THUMB_PROXIMAL = "l_thumb_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb_distal"</i> (Java syntax) or <i>l_thumb_distal</i> (XML syntax). */
	public static final String NAME_L_THUMB_DISTAL = "l_thumb_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index_metacarpal"</i> (Java syntax) or <i>l_index_metacarpal</i> (XML syntax). */
	public static final String NAME_L_INDEX_METACARPAL = "l_index_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index_proximal"</i> (Java syntax) or <i>l_index_proximal</i> (XML syntax). */
	public static final String NAME_L_INDEX_PROXIMAL = "l_index_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index_middle"</i> (Java syntax) or <i>l_index_middle</i> (XML syntax). */
	public static final String NAME_L_INDEX_MIDDLE = "l_index_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index_distal"</i> (Java syntax) or <i>l_index_distal</i> (XML syntax). */
	public static final String NAME_L_INDEX_DISTAL = "l_index_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle_metacarpal"</i> (Java syntax) or <i>l_middle_metacarpal</i> (XML syntax). */
	public static final String NAME_L_MIDDLE_METACARPAL = "l_middle_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle_proximal"</i> (Java syntax) or <i>l_middle_proximal</i> (XML syntax). */
	public static final String NAME_L_MIDDLE_PROXIMAL = "l_middle_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle_middle"</i> (Java syntax) or <i>l_middle_middle</i> (XML syntax). */
	public static final String NAME_L_MIDDLE_MIDDLE = "l_middle_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle_distal"</i> (Java syntax) or <i>l_middle_distal</i> (XML syntax). */
	public static final String NAME_L_MIDDLE_DISTAL = "l_middle_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring_metacarpal"</i> (Java syntax) or <i>l_ring_metacarpal</i> (XML syntax). */
	public static final String NAME_L_RING_METACARPAL = "l_ring_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring_proximal"</i> (Java syntax) or <i>l_ring_proximal</i> (XML syntax). */
	public static final String NAME_L_RING_PROXIMAL = "l_ring_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring_middle"</i> (Java syntax) or <i>l_ring_middle</i> (XML syntax). */
	public static final String NAME_L_RING_MIDDLE = "l_ring_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring_distal"</i> (Java syntax) or <i>l_ring_distal</i> (XML syntax). */
	public static final String NAME_L_RING_DISTAL = "l_ring_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky_metacarpal"</i> (Java syntax) or <i>l_pinky_metacarpal</i> (XML syntax). */
	public static final String NAME_L_PINKY_METACARPAL = "l_pinky_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky_proximal"</i> (Java syntax) or <i>l_pinky_proximal</i> (XML syntax). */
	public static final String NAME_L_PINKY_PROXIMAL = "l_pinky_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky_middle"</i> (Java syntax) or <i>l_pinky_middle</i> (XML syntax). */
	public static final String NAME_L_PINKY_MIDDLE = "l_pinky_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky_distal"</i> (Java syntax) or <i>l_pinky_distal</i> (XML syntax). */
	public static final String NAME_L_PINKY_DISTAL = "l_pinky_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_clavicle"</i> (Java syntax) or <i>r_clavicle</i> (XML syntax). */
	public static final String NAME_R_CLAVICLE = "r_clavicle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_scapula"</i> (Java syntax) or <i>r_scapula</i> (XML syntax). */
	public static final String NAME_R_SCAPULA = "r_scapula";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_upperarm"</i> (Java syntax) or <i>r_upperarm</i> (XML syntax). */
	public static final String NAME_R_UPPERARM = "r_upperarm";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_forearm"</i> (Java syntax) or <i>r_forearm</i> (XML syntax). */
	public static final String NAME_R_FOREARM = "r_forearm";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_hand"</i> (Java syntax) or <i>r_hand</i> (XML syntax). */
	public static final String NAME_R_HAND = "r_hand";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb_metacarpal"</i> (Java syntax) or <i>r_thumb_metacarpal</i> (XML syntax). */
	public static final String NAME_R_THUMB_METACARPAL = "r_thumb_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb_proximal"</i> (Java syntax) or <i>r_thumb_proximal</i> (XML syntax). */
	public static final String NAME_R_THUMB_PROXIMAL = "r_thumb_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb_distal"</i> (Java syntax) or <i>r_thumb_distal</i> (XML syntax). */
	public static final String NAME_R_THUMB_DISTAL = "r_thumb_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index_metacarpal"</i> (Java syntax) or <i>r_index_metacarpal</i> (XML syntax). */
	public static final String NAME_R_INDEX_METACARPAL = "r_index_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index_proximal"</i> (Java syntax) or <i>r_index_proximal</i> (XML syntax). */
	public static final String NAME_R_INDEX_PROXIMAL = "r_index_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index_middle"</i> (Java syntax) or <i>r_index_middle</i> (XML syntax). */
	public static final String NAME_R_INDEX_MIDDLE = "r_index_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index_distal"</i> (Java syntax) or <i>r_index_distal</i> (XML syntax). */
	public static final String NAME_R_INDEX_DISTAL = "r_index_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle_metacarpal"</i> (Java syntax) or <i>r_middle_metacarpal</i> (XML syntax). */
	public static final String NAME_R_MIDDLE_METACARPAL = "r_middle_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle_proximal"</i> (Java syntax) or <i>r_middle_proximal</i> (XML syntax). */
	public static final String NAME_R_MIDDLE_PROXIMAL = "r_middle_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle_middle"</i> (Java syntax) or <i>r_middle_middle</i> (XML syntax). */
	public static final String NAME_R_MIDDLE_MIDDLE = "r_middle_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle_distal"</i> (Java syntax) or <i>r_middle_distal</i> (XML syntax). */
	public static final String NAME_R_MIDDLE_DISTAL = "r_middle_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring_metacarpal"</i> (Java syntax) or <i>r_ring_metacarpal</i> (XML syntax). */
	public static final String NAME_R_RING_METACARPAL = "r_ring_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring_proximal"</i> (Java syntax) or <i>r_ring_proximal</i> (XML syntax). */
	public static final String NAME_R_RING_PROXIMAL = "r_ring_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring_middle"</i> (Java syntax) or <i>r_ring_middle</i> (XML syntax). */
	public static final String NAME_R_RING_MIDDLE = "r_ring_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring_distal"</i> (Java syntax) or <i>r_ring_distal</i> (XML syntax). */
	public static final String NAME_R_RING_DISTAL = "r_ring_distal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky_metacarpal"</i> (Java syntax) or <i>r_pinky_metacarpal</i> (XML syntax). */
	public static final String NAME_R_PINKY_METACARPAL = "r_pinky_metacarpal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky_proximal"</i> (Java syntax) or <i>r_pinky_proximal</i> (XML syntax). */
	public static final String NAME_R_PINKY_PROXIMAL = "r_pinky_proximal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky_middle"</i> (Java syntax) or <i>r_pinky_middle</i> (XML syntax). */
	public static final String NAME_R_PINKY_MIDDLE = "r_pinky_middle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky_distal"</i> (Java syntax) or <i>r_pinky_distal</i> (XML syntax). */
	public static final String NAME_R_PINKY_DISTAL = "r_pinky_distal";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>HAnimSegment</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "HAnimSegment";

	/** Provides name of this element: <i>HAnimSegment</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>HAnimSegment</i> element: <i>H-Anim</i> */
	public static final String COMPONENT = "H-Anim";

	/** Defines X3D component for the <i>HAnimSegment</i> element: <i>H-Anim</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>H-Anim</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFVec3f field named <i>bboxCenter</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] BBOXCENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>bboxSize</i> has default value <i>{-1f,-1f,-1f}</i> (Java syntax) or <i>-1 -1 -1</i> (XML syntax). */
	public static final float[] BBOXSIZE_DEFAULT_VALUE = {-1f,-1f,-1f};

	/** SFVec3f field named <i>centerOfMass</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] CENTEROFMASS_DEFAULT_VALUE = {0f,0f,0f};

	/** SFFloat field named <i>mass</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float MASS_DEFAULT_VALUE = 0f;

	/** MFFloat field named <i>momentsOfInertia</i> has default value <i>{0f,0f,0f,0f,0f,0f,0f,0f,0f}</i> (Java syntax) or <i>0 0 0 0 0 0 0 0 0</i> (XML syntax). */
	public static final ArrayList<Float> MOMENTSOFINERTIA_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(0f,0f,0f,0f,0f,0f,0f,0f,0f));

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

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
			case "bboxCenter":
				result = "SFVec3f";
				break;
			case "bboxSize":
				result = "SFVec3f";
				break;
			case "centerOfMass":
				result = "SFVec3f";
				break;
			case "children":
				result = "MFNode";
				break;
			case "coord":
				result = "SFNode";
				break;
			case "displacers":
				result = "MFNode";
				break;
			case "mass":
				result = "SFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "momentsOfInertia":
				result = "MFFloat";
				break;
			case "name":
				result = "SFString";
				break;
			case "removeChildren":
				result = "MFNode";
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
			case "bboxCenter":
				result = "initializeOnly";
				break;
			case "bboxSize":
				result = "initializeOnly";
				break;
			case "centerOfMass":
				result = "inputOutput";
				break;
			case "children":
				result = "inputOutput";
				break;
			case "coord":
				result = "inputOutput";
				break;
			case "displacers":
				result = "inputOutput";
				break;
			case "mass":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "momentsOfInertia":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "removeChildren":
				result = "inputOnly";
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

	/** fromField ROUTE name for SFVec3f field named <i>centerOfMass</i>. */
	public static final String fromField_CENTEROFMASS = "centerOfMass";

	/** toField ROUTE name for SFVec3f field named <i>centerOfMass</i>. */
	public static final String toField_CENTEROFMASS = "centerOfMass";

	/** fromField ROUTE name for MFNode field named <i>children</i>. */
	public static final String fromField_CHILDREN = "children";

	/** toField ROUTE name for MFNode field named <i>children</i>. */
	public static final String toField_CHILDREN = "children";

	/** fromField ROUTE name for SFNode field named <i>coord</i>. */
	public static final String fromField_COORD = "coord";

	/** toField ROUTE name for SFNode field named <i>coord</i>. */
	public static final String toField_COORD = "coord";

	/** fromField ROUTE name for MFNode field named <i>displacers</i>. */
	public static final String fromField_DISPLACERS = "displacers";

	/** toField ROUTE name for MFNode field named <i>displacers</i>. */
	public static final String toField_DISPLACERS = "displacers";

	/** fromField ROUTE name for SFFloat field named <i>mass</i>. */
	public static final String fromField_MASS = "mass";

	/** toField ROUTE name for SFFloat field named <i>mass</i>. */
	public static final String toField_MASS = "mass";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFFloat field named <i>momentsOfInertia</i>. */
	public static final String fromField_MOMENTSOFINERTIA = "momentsOfInertia";

	/** toField ROUTE name for MFFloat field named <i>momentsOfInertia</i>. */
	public static final String toField_MOMENTSOFINERTIA = "momentsOfInertia";

	/** fromField ROUTE name for SFString field named <i>name</i>. */
	public static final String fromField_NAME = "name";

	/** toField ROUTE name for SFString field named <i>name</i>. */
	public static final String toField_NAME = "name";

	/** toField ROUTE name for MFNode field named <i>removeChildren</i>. */
	public static final String toField_REMOVECHILDREN = "removeChildren";

	/** Constructor for HAnimSegmentObject to initialize member variables with default values. */
	public HAnimSegmentObject()
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

		bboxCenter = BBOXCENTER_DEFAULT_VALUE;
		bboxSize = BBOXSIZE_DEFAULT_VALUE;
		centerOfMass = CENTEROFMASS_DEFAULT_VALUE;
		children = new ArrayList<>();
		coord = null; // clear out any prior node
		displacers = new ArrayList<>();
		mass = MASS_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		momentsOfInertia = MOMENTSOFINERTIA_DEFAULT_VALUE;
		name = NAME_DEFAULT_VALUE;
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Location within segment of center of mass.  * <br>

	 * @return value of centerOfMass field
	 */
	@Override
	public float[] getCenterOfMass()
	{
		return centerOfMass;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location within segment of center of mass.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setCenterOfMass(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment centerOfMass newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		centerOfMass = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f centerOfMass field, similar to {@link #setCenterOfMass(float[])}.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setCenterOfMass(SFVec3fObject newValue)
	{
		setCenterOfMass(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f centerOfMass field, similar to {@link #setCenterOfMass(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setCenterOfMass(float x, float y, float z)
	{
		setCenterOfMass(new float[] {x, y, z});
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setChildren(X3DNode[] newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setChildren(ArrayList<X3DChildNode> newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	*/
	public HAnimSegmentObject addChild(X3DChildNode newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimSegmentObject clearChildren()
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimSegmentObject addComments (String newComment)
	{
		if (newComment == null) return this;
		children.add(new CommentsBlock (newComment));
		return this;
	}
	/**
	 * Add comments as String[] array to children field
	 * @param newComments array of comments
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimSegmentObject addComments (String[] newComments)
	{
		if (newComments == null) return this;
		children.add(new CommentsBlock (newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to children field
	 * @param newCommentsBlock block of comments to add
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimSegmentObject addComments (CommentsBlock newCommentsBlock)
	{
		if (newCommentsBlock == null) return this;
		children.add(newCommentsBlock);
		return this;
	}
											/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>coord</i>.
	 * @see #getCoordProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] the coord field is used for HAnimSegment objects that have deformable meshes and shall contain coordinates referenced from the IndexedFaceSet for the paarent HAnimSegment object. The coordinates are given the same name as the HAnim Segment object, but with "_coords" appended to the name (e.g., "skull_coords").
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of coord field
	 */
	@Override
	public X3DCoordinateNode getCoord()
	{
		return coord;
	}

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>coord</i>.
	 * @see #setCoord(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] the coord field is used for HAnimSegment objects that have deformable meshes and shall contain coordinates referenced from the IndexedFaceSet for the paarent HAnimSegment object. The coordinates are given the same name as the HAnim Segment object, but with "_coords" appended to the name (e.g., "skull_coords"). Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the coord field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setCoord(X3DCoordinateNode newValue)
	{
		coord = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) coord).setParentObject(this); // parentTest15
		}
		if (coordProtoInstance != null)
		{
			coordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			coordProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of coord field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimSegmentObject clearCoord()
	{
		((X3DConcreteElement) coord).clearParentObject(); // remove references to facilitate Java memory management
		coord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>coord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DCoordinateNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the coord field
	 * @see #setCoord(X3DCoordinateNode)
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimSegmentObject setCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (coord != null)
		{
			((X3DConcreteElement) coord).setParentObject(null); // housekeeping, clear prior object
			coord = null;
		}
		coordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>coord</i>, if available.
	 * @see #getCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getCoordProtoInstance()
	{
		return coordProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>coord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getCoord()
	 * @see #getCoordProtoInstance()
	 */
	public boolean hasCoord()
	{
		return (coord != null) || (coordProtoInstance != null);
	}
	/**
	 * Provide array of HAnimDisplacer results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimDisplacer] the displacers field stores the Displacer objects for a particular Segment object.
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimDisplacerObject
	 * @return value of displacers field
	 */
	@Override
	public X3DNode[] getDisplacers()
	{
		final X3DNode[] valuesArray = new X3DNode[displacers.size()];
		int i = 0;
		for (HAnimDisplacer arrayElement : displacers) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode displacers field, similar to {@link #getDisplacers()}.

	 * @return value of displacers field
	 */
	public ArrayList<HAnimDisplacer> getDisplacersList()
	{
		return displacers;
	}

	/**
	 * Assign HAnimDisplacer array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimDisplacer] the displacers field stores the Displacer objects for a particular Segment object. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value for the displacers field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setDisplacers(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearDisplacers(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		displacers.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimDisplacer)
			{
				displacers.add((HAnimDisplacer)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimDisplacer; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode displacers field, similar to {@link #setDisplacers(X3DNode[])}.
	 * @param newValue is new value for the displacers field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setDisplacers(ArrayList<HAnimDisplacer> newValue)
	{
		if (newValue == null)
		{
			clearDisplacers(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		displacers = newValue;
		for (HAnimDisplacer element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child displacers node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value to be appended the displacers field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimSegmentObject addDisplacers(HAnimDisplacerObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		displacers.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child displacers nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value array to be appended the displacers field.
	 */
	@Override
	public void addDisplacers(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimDisplacer)
			{
				displacers.add((HAnimDisplacer)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimDisplacer; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child displacers node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimDisplacer.
	 * @param newValue is new node for the displacers field (restricted to HAnimDisplacer)
	 */
	@Override
	public void setDisplacers(X3DNode newValue)
	{
		if (newValue == null)
		{
			displacers.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof HAnimDisplacer)
		{
			for (HAnimDisplacer element : displacers)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			displacers.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			displacers.add((HAnimDisplacer)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof HAnimDisplacer; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of displacers field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimSegmentObject clearDisplacers()
	{
		for (HAnimDisplacer element : displacers)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		displacers.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>displacers</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getDisplacers()
	 */
	public boolean hasDisplacers()
	{
		return (!displacers.isEmpty());
	}
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Total mass of the segment, 0 if not available.  * <br>

	 * @return value of mass field
	 */
	@Override
	public float getMass()
	{
		return mass;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Total mass of the segment, 0 if not available.
	 * @param newValue is new value for the mass field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setMass(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment mass newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		mass = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat mass field, similar to {@link #setMass(float)}.
	 * @param newValue is new value for the mass field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setMass(SFFloatObject newValue)
	{
		setMass(newValue.getPrimitiveValue());
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimSegmentObject clearMetadata()
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimSegmentObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of Float results within allowed range of [0,infinity) from inputOutput MFFloat field named <i>momentsOfInertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  3x3 moments of inertia matrix. default: 0 0 0 0 0 0 0 0 0.  * <br>

	 * @return value of momentsOfInertia field
	 */
	@Override
	public float[] getMomentsOfInertia()
	{
		final float[] valuesArray = new float[momentsOfInertia.size()];
		int i = 0;
		for (Float arrayElement : momentsOfInertia) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat momentsOfInertia field, similar to {@link #getMomentsOfInertia()}.

	 * @return value of momentsOfInertia field
	 */
	public ArrayList<Float> getMomentsOfInertiaList()
	{
		return momentsOfInertia;
	}

	/**
	 * Assign Float array within allowed range of [0,infinity) to inputOutput MFFloat field named <i>momentsOfInertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> 3x3 moments of inertia matrix. default: 0 0 0 0 0 0 0 0 0.
	 * @param newValue is new value for the momentsOfInertia field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setMomentsOfInertia(float[] newValue)
	{
		if (newValue == null)
		{
			clearMomentsOfInertia(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		momentsOfInertia.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			momentsOfInertia.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat momentsOfInertia field, similar to {@link #setMomentsOfInertia(float[])}.
	 * @param newValue is new value for the momentsOfInertia field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setMomentsOfInertia(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearMomentsOfInertia(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setMomentsOfInertia(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat momentsOfInertia field, similar to {@link #setMomentsOfInertia(float[])}.
	 * @param newValue is new value for the momentsOfInertia field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setMomentsOfInertia(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearMomentsOfInertia(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		momentsOfInertia = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of momentsOfInertia field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimSegmentObject clearMomentsOfInertia()
	{
		momentsOfInertia.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat momentsOfInertia field, similar to {@link #setMomentsOfInertia(float[])}.
	 * @param newValue is new value for the momentsOfInertia field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setMomentsOfInertia(int[] newValue)
	{
		if (newValue == null)
		{
			clearMomentsOfInertia(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setMomentsOfInertia(holdArray);
		return this;
	}
	/**
	 * Provide String enumeration value ['sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_hindfoot'|'l_midproximal'|'l_middistal'|'l_forefoot'|'r_thigh'|'r_calf'|'r_hindfoot'|'r_midproximal'|'r_middistal'|'r_forefoot'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_hand'|'l_thumb_metacarpal'|'l_thumb_proximal'|'l_thumb_distal'|'l_index_metacarpal'|'l_index_proximal'|'l_index_middle'|'l_index_distal'|'l_middle_metacarpal'|'l_middle_proximal'|'l_middle_middle'|'l_middle_distal'|'l_ring_metacarpal'|'l_ring_proximal'|'l_ring_middle'|'l_ring_distal'|'l_pinky_metacarpal'|'l_pinky_proximal'|'l_pinky_middle'|'l_pinky_distal'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_hand'|'r_thumb_metacarpal'|'r_thumb_proximal'|'r_thumb_distal'|'r_index_metacarpal'|'r_index_proximal'|'r_index_middle'|'r_index_distal'|'r_middle_metacarpal'|'r_middle_proximal'|'r_middle_middle'|'r_middle_distal'|'r_ring_metacarpal'|'r_ring_proximal'|'r_ring_middle'|'r_ring_distal'|'r_pinky_metacarpal'|'r_pinky_proximal'|'r_pinky_middle'|'r_pinky_distal'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSegment node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: sacrum pelvis l_thigh l_calf etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> for abitrary humanoids, HAnimSegment name can describe geometry between parent HAnimJoint and sibling HAnimJoint nodes (for example LeftHip_to_LeftKnee). </li> 
 *  <li> <i>Hint:</i> H-Anim Humanoid Segment Names H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NAME_SACRUM SACRUM}, {@link #NAME_PELVIS PELVIS}, {@link #NAME_L_THIGH L_THIGH}, {@link #NAME_L_CALF L_CALF}, {@link #NAME_L_HINDFOOT L_HINDFOOT}, {@link #NAME_L_MIDPROXIMAL L_MIDPROXIMAL}, {@link #NAME_L_MIDDISTAL L_MIDDISTAL}, {@link #NAME_L_FOREFOOT L_FOREFOOT}, {@link #NAME_R_THIGH R_THIGH}, {@link #NAME_R_CALF R_CALF}, {@link #NAME_R_HINDFOOT R_HINDFOOT}, {@link #NAME_R_MIDPROXIMAL R_MIDPROXIMAL}, {@link #NAME_R_MIDDISTAL R_MIDDISTAL}, {@link #NAME_R_FOREFOOT R_FOREFOOT}, {@link #NAME_L5 L5}, {@link #NAME_L4 L4}, {@link #NAME_L3 L3}, {@link #NAME_L2 L2}, {@link #NAME_L1 L1}, {@link #NAME_T12 T12}, {@link #NAME_T11 T11}, {@link #NAME_T10 T10}, {@link #NAME_T9 T9}, {@link #NAME_T8 T8}, {@link #NAME_T7 T7}, {@link #NAME_T6 T6}, {@link #NAME_T5 T5}, {@link #NAME_T4 T4}, {@link #NAME_T3 T3}, {@link #NAME_T2 T2}, {@link #NAME_T1 T1}, {@link #NAME_C7 C7}, {@link #NAME_C6 C6}, {@link #NAME_C5 C5}, {@link #NAME_C4 C4}, {@link #NAME_C3 C3}, {@link #NAME_C2 C2}, {@link #NAME_C1 C1}, {@link #NAME_SKULL SKULL}, {@link #NAME_L_EYELID L_EYELID}, {@link #NAME_R_EYELID R_EYELID}, {@link #NAME_L_EYEBALL L_EYEBALL}, {@link #NAME_R_EYEBALL R_EYEBALL}, {@link #NAME_L_EYEBROW L_EYEBROW}, {@link #NAME_R_EYEBROW R_EYEBROW}, {@link #NAME_JAW JAW}, {@link #NAME_L_CLAVICLE L_CLAVICLE}, {@link #NAME_L_SCAPULA L_SCAPULA}, {@link #NAME_L_UPPERARM L_UPPERARM}, {@link #NAME_L_FOREARM L_FOREARM}, {@link #NAME_L_HAND L_HAND}, {@link #NAME_L_THUMB_METACARPAL L_THUMB_METACARPAL}, {@link #NAME_L_THUMB_PROXIMAL L_THUMB_PROXIMAL}, {@link #NAME_L_THUMB_DISTAL L_THUMB_DISTAL}, {@link #NAME_L_INDEX_METACARPAL L_INDEX_METACARPAL}, {@link #NAME_L_INDEX_PROXIMAL L_INDEX_PROXIMAL}, {@link #NAME_L_INDEX_MIDDLE L_INDEX_MIDDLE}, {@link #NAME_L_INDEX_DISTAL L_INDEX_DISTAL}, {@link #NAME_L_MIDDLE_METACARPAL L_MIDDLE_METACARPAL}, {@link #NAME_L_MIDDLE_PROXIMAL L_MIDDLE_PROXIMAL}, {@link #NAME_L_MIDDLE_MIDDLE L_MIDDLE_MIDDLE}, {@link #NAME_L_MIDDLE_DISTAL L_MIDDLE_DISTAL}, {@link #NAME_L_RING_METACARPAL L_RING_METACARPAL}, {@link #NAME_L_RING_PROXIMAL L_RING_PROXIMAL}, {@link #NAME_L_RING_MIDDLE L_RING_MIDDLE}, {@link #NAME_L_RING_DISTAL L_RING_DISTAL}, {@link #NAME_L_PINKY_METACARPAL L_PINKY_METACARPAL}, {@link #NAME_L_PINKY_PROXIMAL L_PINKY_PROXIMAL}, {@link #NAME_L_PINKY_MIDDLE L_PINKY_MIDDLE}, {@link #NAME_L_PINKY_DISTAL L_PINKY_DISTAL}, {@link #NAME_R_CLAVICLE R_CLAVICLE}, {@link #NAME_R_SCAPULA R_SCAPULA}, {@link #NAME_R_UPPERARM R_UPPERARM}, {@link #NAME_R_FOREARM R_FOREARM}, {@link #NAME_R_HAND R_HAND}, {@link #NAME_R_THUMB_METACARPAL R_THUMB_METACARPAL}, {@link #NAME_R_THUMB_PROXIMAL R_THUMB_PROXIMAL}, {@link #NAME_R_THUMB_DISTAL R_THUMB_DISTAL}, {@link #NAME_R_INDEX_METACARPAL R_INDEX_METACARPAL}, {@link #NAME_R_INDEX_PROXIMAL R_INDEX_PROXIMAL}, {@link #NAME_R_INDEX_MIDDLE R_INDEX_MIDDLE}, {@link #NAME_R_INDEX_DISTAL R_INDEX_DISTAL}, {@link #NAME_R_MIDDLE_METACARPAL R_MIDDLE_METACARPAL}, {@link #NAME_R_MIDDLE_PROXIMAL R_MIDDLE_PROXIMAL}, {@link #NAME_R_MIDDLE_MIDDLE R_MIDDLE_MIDDLE}, {@link #NAME_R_MIDDLE_DISTAL R_MIDDLE_DISTAL}, {@link #NAME_R_RING_METACARPAL R_RING_METACARPAL}, {@link #NAME_R_RING_PROXIMAL R_RING_PROXIMAL}, {@link #NAME_R_RING_MIDDLE R_RING_MIDDLE}, {@link #NAME_R_RING_DISTAL R_RING_DISTAL}, {@link #NAME_R_PINKY_METACARPAL R_PINKY_METACARPAL}, {@link #NAME_R_PINKY_PROXIMAL R_PINKY_PROXIMAL}, {@link #NAME_R_PINKY_MIDDLE R_PINKY_MIDDLE}, {@link #NAME_R_PINKY_DISTAL R_PINKY_DISTAL}.
	 * @return value of name field
	 */
	@Override
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String enumeration value ("sacrum"|"pelvis"|"l_thigh"|"l_calf"|"l_hindfoot"|"l_midproximal"|"l_middistal"|"l_forefoot"|"r_thigh"|"r_calf"|"r_hindfoot"|"r_midproximal"|"r_middistal"|"r_forefoot"|"l5"|"l4"|"l3"|"l2"|"l1"|"t12"|"t11"|"t10"|"t9"|"t8"|"t7"|"t6"|"t5"|"t4"|"t3"|"t2"|"t1"|"c7"|"c6"|"c5"|"c4"|"c3"|"c2"|"c1"|"skull"|"l_eyelid"|"r_eyelid"|"l_eyeball"|"r_eyeball"|"l_eyebrow"|"r_eyebrow"|"jaw"|"l_clavicle"|"l_scapula"|"l_upperarm"|"l_forearm"|"l_hand"|"l_thumb_metacarpal"|"l_thumb_proximal"|"l_thumb_distal"|"l_index_metacarpal"|"l_index_proximal"|"l_index_middle"|"l_index_distal"|"l_middle_metacarpal"|"l_middle_proximal"|"l_middle_middle"|"l_middle_distal"|"l_ring_metacarpal"|"l_ring_proximal"|"l_ring_middle"|"l_ring_distal"|"l_pinky_metacarpal"|"l_pinky_proximal"|"l_pinky_middle"|"l_pinky_distal"|"r_clavicle"|"r_scapula"|"r_upperarm"|"r_forearm"|"r_hand"|"r_thumb_metacarpal"|"r_thumb_proximal"|"r_thumb_distal"|"r_index_metacarpal"|"r_index_proximal"|"r_index_middle"|"r_index_distal"|"r_middle_metacarpal"|"r_middle_proximal"|"r_middle_middle"|"r_middle_distal"|"r_ring_metacarpal"|"r_ring_proximal"|"r_ring_middle"|"r_ring_distal"|"r_pinky_metacarpal"|"r_pinky_proximal"|"r_pinky_middle"|"r_pinky_distal") ['sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_hindfoot'|'l_midproximal'|'l_middistal'|'l_forefoot'|'r_thigh'|'r_calf'|'r_hindfoot'|'r_midproximal'|'r_middistal'|'r_forefoot'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_hand'|'l_thumb_metacarpal'|'l_thumb_proximal'|'l_thumb_distal'|'l_index_metacarpal'|'l_index_proximal'|'l_index_middle'|'l_index_distal'|'l_middle_metacarpal'|'l_middle_proximal'|'l_middle_middle'|'l_middle_distal'|'l_ring_metacarpal'|'l_ring_proximal'|'l_ring_middle'|'l_ring_distal'|'l_pinky_metacarpal'|'l_pinky_proximal'|'l_pinky_middle'|'l_pinky_distal'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_hand'|'r_thumb_metacarpal'|'r_thumb_proximal'|'r_thumb_distal'|'r_index_metacarpal'|'r_index_proximal'|'r_index_middle'|'r_index_distal'|'r_middle_metacarpal'|'r_middle_proximal'|'r_middle_middle'|'r_middle_distal'|'r_ring_metacarpal'|'r_ring_proximal'|'r_ring_middle'|'r_ring_distal'|'r_pinky_metacarpal'|'r_pinky_proximal'|'r_pinky_middle'|'r_pinky_distal'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #NAME_SACRUM SACRUM}, {@link #NAME_PELVIS PELVIS}, {@link #NAME_L_THIGH L_THIGH}, {@link #NAME_L_CALF L_CALF}, {@link #NAME_L_HINDFOOT L_HINDFOOT}, {@link #NAME_L_MIDPROXIMAL L_MIDPROXIMAL}, {@link #NAME_L_MIDDISTAL L_MIDDISTAL}, {@link #NAME_L_FOREFOOT L_FOREFOOT}, {@link #NAME_R_THIGH R_THIGH}, {@link #NAME_R_CALF R_CALF}, {@link #NAME_R_HINDFOOT R_HINDFOOT}, {@link #NAME_R_MIDPROXIMAL R_MIDPROXIMAL}, {@link #NAME_R_MIDDISTAL R_MIDDISTAL}, {@link #NAME_R_FOREFOOT R_FOREFOOT}, {@link #NAME_L5 L5}, {@link #NAME_L4 L4}, {@link #NAME_L3 L3}, {@link #NAME_L2 L2}, {@link #NAME_L1 L1}, {@link #NAME_T12 T12}, {@link #NAME_T11 T11}, {@link #NAME_T10 T10}, {@link #NAME_T9 T9}, {@link #NAME_T8 T8}, {@link #NAME_T7 T7}, {@link #NAME_T6 T6}, {@link #NAME_T5 T5}, {@link #NAME_T4 T4}, {@link #NAME_T3 T3}, {@link #NAME_T2 T2}, {@link #NAME_T1 T1}, {@link #NAME_C7 C7}, {@link #NAME_C6 C6}, {@link #NAME_C5 C5}, {@link #NAME_C4 C4}, {@link #NAME_C3 C3}, {@link #NAME_C2 C2}, {@link #NAME_C1 C1}, {@link #NAME_SKULL SKULL}, {@link #NAME_L_EYELID L_EYELID}, {@link #NAME_R_EYELID R_EYELID}, {@link #NAME_L_EYEBALL L_EYEBALL}, {@link #NAME_R_EYEBALL R_EYEBALL}, {@link #NAME_L_EYEBROW L_EYEBROW}, {@link #NAME_R_EYEBROW R_EYEBROW}, {@link #NAME_JAW JAW}, {@link #NAME_L_CLAVICLE L_CLAVICLE}, {@link #NAME_L_SCAPULA L_SCAPULA}, {@link #NAME_L_UPPERARM L_UPPERARM}, {@link #NAME_L_FOREARM L_FOREARM}, {@link #NAME_L_HAND L_HAND}, {@link #NAME_L_THUMB_METACARPAL L_THUMB_METACARPAL}, {@link #NAME_L_THUMB_PROXIMAL L_THUMB_PROXIMAL}, {@link #NAME_L_THUMB_DISTAL L_THUMB_DISTAL}, {@link #NAME_L_INDEX_METACARPAL L_INDEX_METACARPAL}, {@link #NAME_L_INDEX_PROXIMAL L_INDEX_PROXIMAL}, {@link #NAME_L_INDEX_MIDDLE L_INDEX_MIDDLE}, {@link #NAME_L_INDEX_DISTAL L_INDEX_DISTAL}, {@link #NAME_L_MIDDLE_METACARPAL L_MIDDLE_METACARPAL}, {@link #NAME_L_MIDDLE_PROXIMAL L_MIDDLE_PROXIMAL}, {@link #NAME_L_MIDDLE_MIDDLE L_MIDDLE_MIDDLE}, {@link #NAME_L_MIDDLE_DISTAL L_MIDDLE_DISTAL}, {@link #NAME_L_RING_METACARPAL L_RING_METACARPAL}, {@link #NAME_L_RING_PROXIMAL L_RING_PROXIMAL}, {@link #NAME_L_RING_MIDDLE L_RING_MIDDLE}, {@link #NAME_L_RING_DISTAL L_RING_DISTAL}, {@link #NAME_L_PINKY_METACARPAL L_PINKY_METACARPAL}, {@link #NAME_L_PINKY_PROXIMAL L_PINKY_PROXIMAL}, {@link #NAME_L_PINKY_MIDDLE L_PINKY_MIDDLE}, {@link #NAME_L_PINKY_DISTAL L_PINKY_DISTAL}, {@link #NAME_R_CLAVICLE R_CLAVICLE}, {@link #NAME_R_SCAPULA R_SCAPULA}, {@link #NAME_R_UPPERARM R_UPPERARM}, {@link #NAME_R_FOREARM R_FOREARM}, {@link #NAME_R_HAND R_HAND}, {@link #NAME_R_THUMB_METACARPAL R_THUMB_METACARPAL}, {@link #NAME_R_THUMB_PROXIMAL R_THUMB_PROXIMAL}, {@link #NAME_R_THUMB_DISTAL R_THUMB_DISTAL}, {@link #NAME_R_INDEX_METACARPAL R_INDEX_METACARPAL}, {@link #NAME_R_INDEX_PROXIMAL R_INDEX_PROXIMAL}, {@link #NAME_R_INDEX_MIDDLE R_INDEX_MIDDLE}, {@link #NAME_R_INDEX_DISTAL R_INDEX_DISTAL}, {@link #NAME_R_MIDDLE_METACARPAL R_MIDDLE_METACARPAL}, {@link #NAME_R_MIDDLE_PROXIMAL R_MIDDLE_PROXIMAL}, {@link #NAME_R_MIDDLE_MIDDLE R_MIDDLE_MIDDLE}, {@link #NAME_R_MIDDLE_DISTAL R_MIDDLE_DISTAL}, {@link #NAME_R_RING_METACARPAL R_RING_METACARPAL}, {@link #NAME_R_RING_PROXIMAL R_RING_PROXIMAL}, {@link #NAME_R_RING_MIDDLE R_RING_MIDDLE}, {@link #NAME_R_RING_DISTAL R_RING_DISTAL}, {@link #NAME_R_PINKY_METACARPAL R_PINKY_METACARPAL}, {@link #NAME_R_PINKY_PROXIMAL R_PINKY_PROXIMAL}, {@link #NAME_R_PINKY_MIDDLE R_PINKY_MIDDLE}, {@link #NAME_R_PINKY_DISTAL R_PINKY_DISTAL}).
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSegment node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: sacrum pelvis l_thigh l_calf etc. as listed in H-Anim Specification. Hint: for abitrary humanoids, HAnimSegment name can describe geometry between parent HAnimJoint and sibling HAnimJoint nodes (for example LeftHip_to_LeftKnee). Hint: H-Anim Humanoid Segment Names H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt Hint: H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimSegmentObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(NAME_SACRUM) ||
			newValue.equals(NAME_PELVIS) ||
			newValue.equals(NAME_L_THIGH) ||
			newValue.equals(NAME_L_CALF) ||
			newValue.equals(NAME_L_HINDFOOT) ||
			newValue.equals(NAME_L_MIDPROXIMAL) ||
			newValue.equals(NAME_L_MIDDISTAL) ||
			newValue.equals(NAME_L_FOREFOOT) ||
			newValue.equals(NAME_R_THIGH) ||
			newValue.equals(NAME_R_CALF) ||
			newValue.equals(NAME_R_HINDFOOT) ||
			newValue.equals(NAME_R_MIDPROXIMAL) ||
			newValue.equals(NAME_R_MIDDISTAL) ||
			newValue.equals(NAME_R_FOREFOOT) ||
			newValue.equals(NAME_L5) ||
			newValue.equals(NAME_L4) ||
			newValue.equals(NAME_L3) ||
			newValue.equals(NAME_L2) ||
			newValue.equals(NAME_L1) ||
			newValue.equals(NAME_T12) ||
			newValue.equals(NAME_T11) ||
			newValue.equals(NAME_T10) ||
			newValue.equals(NAME_T9) ||
			newValue.equals(NAME_T8) ||
			newValue.equals(NAME_T7) ||
			newValue.equals(NAME_T6) ||
			newValue.equals(NAME_T5) ||
			newValue.equals(NAME_T4) ||
			newValue.equals(NAME_T3) ||
			newValue.equals(NAME_T2) ||
			newValue.equals(NAME_T1) ||
			newValue.equals(NAME_C7) ||
			newValue.equals(NAME_C6) ||
			newValue.equals(NAME_C5) ||
			newValue.equals(NAME_C4) ||
			newValue.equals(NAME_C3) ||
			newValue.equals(NAME_C2) ||
			newValue.equals(NAME_C1) ||
			newValue.equals(NAME_SKULL) ||
			newValue.equals(NAME_L_EYELID) ||
			newValue.equals(NAME_R_EYELID) ||
			newValue.equals(NAME_L_EYEBALL) ||
			newValue.equals(NAME_R_EYEBALL) ||
			newValue.equals(NAME_L_EYEBROW) ||
			newValue.equals(NAME_R_EYEBROW) ||
			newValue.equals(NAME_JAW) ||
			newValue.equals(NAME_L_CLAVICLE) ||
			newValue.equals(NAME_L_SCAPULA) ||
			newValue.equals(NAME_L_UPPERARM) ||
			newValue.equals(NAME_L_FOREARM) ||
			newValue.equals(NAME_L_HAND) ||
			newValue.equals(NAME_L_THUMB_METACARPAL) ||
			newValue.equals(NAME_L_THUMB_PROXIMAL) ||
			newValue.equals(NAME_L_THUMB_DISTAL) ||
			newValue.equals(NAME_L_INDEX_METACARPAL) ||
			newValue.equals(NAME_L_INDEX_PROXIMAL) ||
			newValue.equals(NAME_L_INDEX_MIDDLE) ||
			newValue.equals(NAME_L_INDEX_DISTAL) ||
			newValue.equals(NAME_L_MIDDLE_METACARPAL) ||
			newValue.equals(NAME_L_MIDDLE_PROXIMAL) ||
			newValue.equals(NAME_L_MIDDLE_MIDDLE) ||
			newValue.equals(NAME_L_MIDDLE_DISTAL) ||
			newValue.equals(NAME_L_RING_METACARPAL) ||
			newValue.equals(NAME_L_RING_PROXIMAL) ||
			newValue.equals(NAME_L_RING_MIDDLE) ||
			newValue.equals(NAME_L_RING_DISTAL) ||
			newValue.equals(NAME_L_PINKY_METACARPAL) ||
			newValue.equals(NAME_L_PINKY_PROXIMAL) ||
			newValue.equals(NAME_L_PINKY_MIDDLE) ||
			newValue.equals(NAME_L_PINKY_DISTAL) ||
			newValue.equals(NAME_R_CLAVICLE) ||
			newValue.equals(NAME_R_SCAPULA) ||
			newValue.equals(NAME_R_UPPERARM) ||
			newValue.equals(NAME_R_FOREARM) ||
			newValue.equals(NAME_R_HAND) ||
			newValue.equals(NAME_R_THUMB_METACARPAL) ||
			newValue.equals(NAME_R_THUMB_PROXIMAL) ||
			newValue.equals(NAME_R_THUMB_DISTAL) ||
			newValue.equals(NAME_R_INDEX_METACARPAL) ||
			newValue.equals(NAME_R_INDEX_PROXIMAL) ||
			newValue.equals(NAME_R_INDEX_MIDDLE) ||
			newValue.equals(NAME_R_INDEX_DISTAL) ||
			newValue.equals(NAME_R_MIDDLE_METACARPAL) ||
			newValue.equals(NAME_R_MIDDLE_PROXIMAL) ||
			newValue.equals(NAME_R_MIDDLE_MIDDLE) ||
			newValue.equals(NAME_R_MIDDLE_DISTAL) ||
			newValue.equals(NAME_R_RING_METACARPAL) ||
			newValue.equals(NAME_R_RING_PROXIMAL) ||
			newValue.equals(NAME_R_RING_MIDDLE) ||
			newValue.equals(NAME_R_RING_DISTAL) ||
			newValue.equals(NAME_R_PINKY_METACARPAL) ||
			newValue.equals(NAME_R_PINKY_PROXIMAL) ||
			newValue.equals(NAME_R_PINKY_MIDDLE) ||
			newValue.equals(NAME_R_PINKY_DISTAL))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment name newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimSegment
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimSegment name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimSegmentObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimSegment
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimSegment DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setDEF(SFStringObject newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimSegmentObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimSegment
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimSegment USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimSegment USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimSegmentObject setCssClass(String newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setCssClass(SFStringObject newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegmentObject setIS(ISObject newValue)
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
	 * @return {@link HAnimSegmentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegmentObject setUSE(HAnimSegmentObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on HAnimSegmentObject" +
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
	public HAnimSegmentObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Utility constructor that assigns both DEF label and name, after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 * @param newName  name for this meta element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimSegmentObject">X3D Tooltips: HAnimSegmentObject</a>
	 */
	public HAnimSegmentObject (String DEFlabel, String newName)
	{
		initialize();
		setDEF  (DEFlabel);
		setName (newName);
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (coord != null) || (coordProtoInstance != null) || (!displacers.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<HAnimSegment"); // start opening tag
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
			
			if (!getName().equals(NAME_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if ((!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxCenter='").append(SFVec3fObject.toString(getBboxCenter())).append("'");
			}
			if ((!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxSize='").append(SFVec3fObject.toString(getBboxSize())).append("'");
			}
			if ((!Arrays.equals(getCenterOfMass(), CENTEROFMASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" centerOfMass='").append(SFVec3fObject.toString(getCenterOfMass())).append("'");
			}
			if (((getMass() != MASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" mass='").append(SFFloatObject.toString(getMass())).append("'");
			}
			if (((getMomentsOfInertia().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" momentsOfInertia='").append(MFFloatObject.toString(getMomentsOfInertia())).append("'");
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
			if      (coord != null)
			{
				stringX3D.append(((X3DConcreteElement)coord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (coordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)coordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (HAnimDisplacer element : displacers)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</HAnimSegment>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (coord != null) || (coordProtoInstance != null) || (!displacers.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);
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
			stringClassicVRML.append("HAnimSegment").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("centerOfMass"))
						{
							stringClassicVRML.append(indentCharacter).append("centerOfMass").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getCenterOfMass(), CENTEROFMASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("centerOfMass ").append(SFVec3fObject.toString(getCenterOfMass())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("mass"))
						{
							stringClassicVRML.append(indentCharacter).append("mass").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMass() != MASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("mass ").append(SFFloatObject.toString(getMass())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("momentsOfInertia"))
						{
							stringClassicVRML.append(indentCharacter).append("momentsOfInertia").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getMomentsOfInertia().length > 0)
				{
					stringClassicVRML.append("momentsOfInertia ").append("[ ").append(MFFloatObject.toString(getMomentsOfInertia())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("name"))
						{
							stringClassicVRML.append(indentCharacter).append("name").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getName().equals(NAME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("name ").append("\"").append(SFStringObject.toString(getName())).append("\"").append("\n").append(indent).append(indentCharacter);
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

			if (coord != null)
			{
				stringClassicVRML.append(indentCharacter).append("coord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) coord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (coordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("coord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) coordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (displacers.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("displacers").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (HAnimDisplacer element : displacers)
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
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
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
		if (coord != null)
		{
			referenceElement = ((X3DConcreteElement) coord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (coordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) coordProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		for (HAnimDisplacer element : displacers) // MFNode
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
		if (coord != null)
		{
			referenceNode = ((X3DConcreteElement) coord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (HAnimDisplacer element : displacers) // MFNode
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

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setCenterOfMass(getCenterOfMass()); // exercise field checks, simple types

		setMass(getMass()); // exercise field checks, simple types

		setMomentsOfInertia(getMomentsOfInertia()); // exercise field checks, simple types

		if (getName().isEmpty() && !isUSE()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

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
			String errorNotice = "HAnimSegment USE='" + getUSE() + "' is not allowed to have contained MFNode children";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (coord != null)
		{
			setCoord(getCoord());
			((X3DConcreteElement) coord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) coord).getValidationResult());
		}
		if (coordProtoInstance != null)
		{
			setCoord(getCoordProtoInstance());
			((X3DConcreteElement) coordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) coordProtoInstance).getValidationResult());
		}
		if ((coord != null) && (coordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both coord and coordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasCoord()) // test USE restrictions
		{
			String errorNotice = "HAnimSegment USE='" + getUSE() + "' is not allowed to have contained SFNode coord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		for (HAnimDisplacer element : displacers) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setDisplacers(getDisplacers()); // also test getter/setter validation

		if (isUSE() && hasDisplacers()) // test USE restrictions
		{
			String errorNotice = "HAnimSegment USE='" + getUSE() + "' is not allowed to have contained MFNode displacers";
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
			String errorNotice = "HAnimSegment USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
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
				if ( nextComponent.getName().equals("HAnim") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='HAnim' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"HAnim\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
