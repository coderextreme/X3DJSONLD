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
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: Each joint in the body is represented by an HAnimJoint node.
 * <ul>
 *  <li> <i>Hint:</i> HAnimJoint may only get inserted as one (or more) root nodes of HAnimHumanoid skeleton field, as a child of another HAnimJoint node, or as a USE node in the HAnimHumanoid joints field. </li> 
 *  <li> <i>Hint:</i> HAnimJoint can only contain nodes HAnimJoint, HAnimSegment, HAnimSite with containerField='children' and also HAnimDisplacer nodes with containerField='displacers'. </li> 
 *  <li> <i>Hint:</i> visualization shapes for HAnimJoint nodes can be placed in child HAnimSegment or HAnimSite nodes. </li> 
 *  <li> <i>Warning:</i> an HAnimJoint may not be a child of an HAnimSegment. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Joint <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Joint" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Joint</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  the number of contained &amp;lt;HAnimJoint USE='*' containerField='joints'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimJoint" target="blank">X3D Abstract Specification: HAnimJoint</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimJoint" target="_blank">X3D Tooltips: HAnimJoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class HAnimJointObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.HAnim.HAnimJoint
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private float[] center; // SFVec3f

	private ArrayList<X3DNode> children = new ArrayList<>(); // MFNode acceptable node types: HAnimJoint|HAnimSegment|HAnimSite

	private ArrayList<HAnimDisplacer> displacers = new ArrayList<>(); // MFNode acceptable node types: HAnimDisplacer

	private float[] limitOrientation; // SFRotation

	private ArrayList<Float> llimit = new ArrayList<>(); // MFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String name; // SFString

	private float[] rotation; // SFRotation

	private float[] scale; // SFVec3f

	private float[] scaleOrientation; // SFRotation

	private ArrayList<Integer> skinCoordIndex = new ArrayList<>(); // MFInt32

	private ArrayList<Float> skinCoordWeight = new ArrayList<>(); // MFFloat

	private ArrayList<Float> stiffness = new ArrayList<>(); // MFFloat

	private float[] translation; // SFVec3f

	private ArrayList<Float> ulimit = new ArrayList<>(); // MFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>name</i> can equal this enumeration value <i>"HumanoidRoot"</i> (Java syntax) or <i>HumanoidRoot</i> (XML syntax). */
	public static final String NAME_HUMANOIDROOT = "HumanoidRoot";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"sacroiliac"</i> (Java syntax) or <i>sacroiliac</i> (XML syntax). */
	public static final String NAME_SACROILIAC = "sacroiliac";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_hip"</i> (Java syntax) or <i>l_hip</i> (XML syntax). */
	public static final String NAME_L_HIP = "l_hip";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_knee"</i> (Java syntax) or <i>l_knee</i> (XML syntax). */
	public static final String NAME_L_KNEE = "l_knee";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ankle"</i> (Java syntax) or <i>l_ankle</i> (XML syntax). */
	public static final String NAME_L_ANKLE = "l_ankle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_subtalar"</i> (Java syntax) or <i>l_subtalar</i> (XML syntax). */
	public static final String NAME_L_SUBTALAR = "l_subtalar";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_midtarsal"</i> (Java syntax) or <i>l_midtarsal</i> (XML syntax). */
	public static final String NAME_L_MIDTARSAL = "l_midtarsal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_metatarsal"</i> (Java syntax) or <i>l_metatarsal</i> (XML syntax). */
	public static final String NAME_L_METATARSAL = "l_metatarsal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_hip"</i> (Java syntax) or <i>r_hip</i> (XML syntax). */
	public static final String NAME_R_HIP = "r_hip";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_knee"</i> (Java syntax) or <i>r_knee</i> (XML syntax). */
	public static final String NAME_R_KNEE = "r_knee";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ankle"</i> (Java syntax) or <i>r_ankle</i> (XML syntax). */
	public static final String NAME_R_ANKLE = "r_ankle";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_subtalar"</i> (Java syntax) or <i>r_subtalar</i> (XML syntax). */
	public static final String NAME_R_SUBTALAR = "r_subtalar";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_midtarsal"</i> (Java syntax) or <i>r_midtarsal</i> (XML syntax). */
	public static final String NAME_R_MIDTARSAL = "r_midtarsal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_metatarsal"</i> (Java syntax) or <i>r_metatarsal</i> (XML syntax). */
	public static final String NAME_R_METATARSAL = "r_metatarsal";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vl5"</i> (Java syntax) or <i>vl5</i> (XML syntax). */
	public static final String NAME_VL5 = "vl5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vl4"</i> (Java syntax) or <i>vl4</i> (XML syntax). */
	public static final String NAME_VL4 = "vl4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vl3"</i> (Java syntax) or <i>vl3</i> (XML syntax). */
	public static final String NAME_VL3 = "vl3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vl2"</i> (Java syntax) or <i>vl2</i> (XML syntax). */
	public static final String NAME_VL2 = "vl2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vl1"</i> (Java syntax) or <i>vl1</i> (XML syntax). */
	public static final String NAME_VL1 = "vl1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt12"</i> (Java syntax) or <i>vt12</i> (XML syntax). */
	public static final String NAME_VT12 = "vt12";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt11"</i> (Java syntax) or <i>vt11</i> (XML syntax). */
	public static final String NAME_VT11 = "vt11";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt10"</i> (Java syntax) or <i>vt10</i> (XML syntax). */
	public static final String NAME_VT10 = "vt10";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt9"</i> (Java syntax) or <i>vt9</i> (XML syntax). */
	public static final String NAME_VT9 = "vt9";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt8"</i> (Java syntax) or <i>vt8</i> (XML syntax). */
	public static final String NAME_VT8 = "vt8";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt7"</i> (Java syntax) or <i>vt7</i> (XML syntax). */
	public static final String NAME_VT7 = "vt7";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt6"</i> (Java syntax) or <i>vt6</i> (XML syntax). */
	public static final String NAME_VT6 = "vt6";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt5"</i> (Java syntax) or <i>vt5</i> (XML syntax). */
	public static final String NAME_VT5 = "vt5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt4"</i> (Java syntax) or <i>vt4</i> (XML syntax). */
	public static final String NAME_VT4 = "vt4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt3"</i> (Java syntax) or <i>vt3</i> (XML syntax). */
	public static final String NAME_VT3 = "vt3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt2"</i> (Java syntax) or <i>vt2</i> (XML syntax). */
	public static final String NAME_VT2 = "vt2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vt1"</i> (Java syntax) or <i>vt1</i> (XML syntax). */
	public static final String NAME_VT1 = "vt1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc7"</i> (Java syntax) or <i>vc7</i> (XML syntax). */
	public static final String NAME_VC7 = "vc7";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc6"</i> (Java syntax) or <i>vc6</i> (XML syntax). */
	public static final String NAME_VC6 = "vc6";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc5"</i> (Java syntax) or <i>vc5</i> (XML syntax). */
	public static final String NAME_VC5 = "vc5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc4"</i> (Java syntax) or <i>vc4</i> (XML syntax). */
	public static final String NAME_VC4 = "vc4";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc3"</i> (Java syntax) or <i>vc3</i> (XML syntax). */
	public static final String NAME_VC3 = "vc3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc2"</i> (Java syntax) or <i>vc2</i> (XML syntax). */
	public static final String NAME_VC2 = "vc2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"vc1"</i> (Java syntax) or <i>vc1</i> (XML syntax). */
	public static final String NAME_VC1 = "vc1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"skullbase"</i> (Java syntax) or <i>skullbase</i> (XML syntax). */
	public static final String NAME_SKULLBASE = "skullbase";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyelid_joint"</i> (Java syntax) or <i>l_eyelid_joint</i> (XML syntax). */
	public static final String NAME_L_EYELID_JOINT = "l_eyelid_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyelid_joint"</i> (Java syntax) or <i>r_eyelid_joint</i> (XML syntax). */
	public static final String NAME_R_EYELID_JOINT = "r_eyelid_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyeball_joint"</i> (Java syntax) or <i>l_eyeball_joint</i> (XML syntax). */
	public static final String NAME_L_EYEBALL_JOINT = "l_eyeball_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyeball_joint"</i> (Java syntax) or <i>r_eyeball_joint</i> (XML syntax). */
	public static final String NAME_R_EYEBALL_JOINT = "r_eyeball_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_eyebrow_joint"</i> (Java syntax) or <i>l_eyebrow_joint</i> (XML syntax). */
	public static final String NAME_L_EYEBROW_JOINT = "l_eyebrow_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_eyebrow_joint"</i> (Java syntax) or <i>r_eyebrow_joint</i> (XML syntax). */
	public static final String NAME_R_EYEBROW_JOINT = "r_eyebrow_joint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"temporomandibular"</i> (Java syntax) or <i>temporomandibular</i> (XML syntax). */
	public static final String NAME_TEMPOROMANDIBULAR = "temporomandibular";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_sternoclavicular"</i> (Java syntax) or <i>l_sternoclavicular</i> (XML syntax). */
	public static final String NAME_L_STERNOCLAVICULAR = "l_sternoclavicular";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_acromioclavicular"</i> (Java syntax) or <i>l_acromioclavicular</i> (XML syntax). */
	public static final String NAME_L_ACROMIOCLAVICULAR = "l_acromioclavicular";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_shoulder"</i> (Java syntax) or <i>l_shoulder</i> (XML syntax). */
	public static final String NAME_L_SHOULDER = "l_shoulder";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_elbow"</i> (Java syntax) or <i>l_elbow</i> (XML syntax). */
	public static final String NAME_L_ELBOW = "l_elbow";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_wrist"</i> (Java syntax) or <i>l_wrist</i> (XML syntax). */
	public static final String NAME_L_WRIST = "l_wrist";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb1"</i> (Java syntax) or <i>l_thumb1</i> (XML syntax). */
	public static final String NAME_L_THUMB1 = "l_thumb1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb2"</i> (Java syntax) or <i>l_thumb2</i> (XML syntax). */
	public static final String NAME_L_THUMB2 = "l_thumb2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thumb3"</i> (Java syntax) or <i>l_thumb3</i> (XML syntax). */
	public static final String NAME_L_THUMB3 = "l_thumb3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index0"</i> (Java syntax) or <i>l_index0</i> (XML syntax). */
	public static final String NAME_L_INDEX0 = "l_index0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index1"</i> (Java syntax) or <i>l_index1</i> (XML syntax). */
	public static final String NAME_L_INDEX1 = "l_index1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index2"</i> (Java syntax) or <i>l_index2</i> (XML syntax). */
	public static final String NAME_L_INDEX2 = "l_index2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_index3"</i> (Java syntax) or <i>l_index3</i> (XML syntax). */
	public static final String NAME_L_INDEX3 = "l_index3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle0"</i> (Java syntax) or <i>l_middle0</i> (XML syntax). */
	public static final String NAME_L_MIDDLE0 = "l_middle0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle1"</i> (Java syntax) or <i>l_middle1</i> (XML syntax). */
	public static final String NAME_L_MIDDLE1 = "l_middle1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle2"</i> (Java syntax) or <i>l_middle2</i> (XML syntax). */
	public static final String NAME_L_MIDDLE2 = "l_middle2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_middle3"</i> (Java syntax) or <i>l_middle3</i> (XML syntax). */
	public static final String NAME_L_MIDDLE3 = "l_middle3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring0"</i> (Java syntax) or <i>l_ring0</i> (XML syntax). */
	public static final String NAME_L_RING0 = "l_ring0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring1"</i> (Java syntax) or <i>l_ring1</i> (XML syntax). */
	public static final String NAME_L_RING1 = "l_ring1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring2"</i> (Java syntax) or <i>l_ring2</i> (XML syntax). */
	public static final String NAME_L_RING2 = "l_ring2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ring3"</i> (Java syntax) or <i>l_ring3</i> (XML syntax). */
	public static final String NAME_L_RING3 = "l_ring3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky0"</i> (Java syntax) or <i>l_pinky0</i> (XML syntax). */
	public static final String NAME_L_PINKY0 = "l_pinky0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky1"</i> (Java syntax) or <i>l_pinky1</i> (XML syntax). */
	public static final String NAME_L_PINKY1 = "l_pinky1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky2"</i> (Java syntax) or <i>l_pinky2</i> (XML syntax). */
	public static final String NAME_L_PINKY2 = "l_pinky2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_pinky3"</i> (Java syntax) or <i>l_pinky3</i> (XML syntax). */
	public static final String NAME_L_PINKY3 = "l_pinky3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_sternoclavicular"</i> (Java syntax) or <i>r_sternoclavicular</i> (XML syntax). */
	public static final String NAME_R_STERNOCLAVICULAR = "r_sternoclavicular";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_acromioclavicular"</i> (Java syntax) or <i>r_acromioclavicular</i> (XML syntax). */
	public static final String NAME_R_ACROMIOCLAVICULAR = "r_acromioclavicular";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_shoulder"</i> (Java syntax) or <i>r_shoulder</i> (XML syntax). */
	public static final String NAME_R_SHOULDER = "r_shoulder";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_elbow"</i> (Java syntax) or <i>r_elbow</i> (XML syntax). */
	public static final String NAME_R_ELBOW = "r_elbow";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_wrist"</i> (Java syntax) or <i>r_wrist</i> (XML syntax). */
	public static final String NAME_R_WRIST = "r_wrist";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb1"</i> (Java syntax) or <i>r_thumb1</i> (XML syntax). */
	public static final String NAME_R_THUMB1 = "r_thumb1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb2"</i> (Java syntax) or <i>r_thumb2</i> (XML syntax). */
	public static final String NAME_R_THUMB2 = "r_thumb2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thumb3"</i> (Java syntax) or <i>r_thumb3</i> (XML syntax). */
	public static final String NAME_R_THUMB3 = "r_thumb3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index0"</i> (Java syntax) or <i>r_index0</i> (XML syntax). */
	public static final String NAME_R_INDEX0 = "r_index0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index1"</i> (Java syntax) or <i>r_index1</i> (XML syntax). */
	public static final String NAME_R_INDEX1 = "r_index1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index2"</i> (Java syntax) or <i>r_index2</i> (XML syntax). */
	public static final String NAME_R_INDEX2 = "r_index2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_index3"</i> (Java syntax) or <i>r_index3</i> (XML syntax). */
	public static final String NAME_R_INDEX3 = "r_index3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle0"</i> (Java syntax) or <i>r_middle0</i> (XML syntax). */
	public static final String NAME_R_MIDDLE0 = "r_middle0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle1"</i> (Java syntax) or <i>r_middle1</i> (XML syntax). */
	public static final String NAME_R_MIDDLE1 = "r_middle1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle2"</i> (Java syntax) or <i>r_middle2</i> (XML syntax). */
	public static final String NAME_R_MIDDLE2 = "r_middle2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_middle3"</i> (Java syntax) or <i>r_middle3</i> (XML syntax). */
	public static final String NAME_R_MIDDLE3 = "r_middle3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring0"</i> (Java syntax) or <i>r_ring0</i> (XML syntax). */
	public static final String NAME_R_RING0 = "r_ring0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring1"</i> (Java syntax) or <i>r_ring1</i> (XML syntax). */
	public static final String NAME_R_RING1 = "r_ring1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring2"</i> (Java syntax) or <i>r_ring2</i> (XML syntax). */
	public static final String NAME_R_RING2 = "r_ring2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ring3"</i> (Java syntax) or <i>r_ring3</i> (XML syntax). */
	public static final String NAME_R_RING3 = "r_ring3";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky0"</i> (Java syntax) or <i>r_pinky0</i> (XML syntax). */
	public static final String NAME_R_PINKY0 = "r_pinky0";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky1"</i> (Java syntax) or <i>r_pinky1</i> (XML syntax). */
	public static final String NAME_R_PINKY1 = "r_pinky1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky2"</i> (Java syntax) or <i>r_pinky2</i> (XML syntax). */
	public static final String NAME_R_PINKY2 = "r_pinky2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_pinky3"</i> (Java syntax) or <i>r_pinky3</i> (XML syntax). */
	public static final String NAME_R_PINKY3 = "r_pinky3";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>HAnimJoint</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "HAnimJoint";

	/** Provides name of this element: <i>HAnimJoint</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>HAnimJoint</i> element: <i>H-Anim</i> */
	public static final String COMPONENT = "H-Anim";

	/** Defines X3D component for the <i>HAnimJoint</i> element: <i>H-Anim</i>
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

	/** SFVec3f field named <i>center</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] CENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFRotation field named <i>limitOrientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] LIMITORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** SFRotation field named <i>rotation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] ROTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFVec3f field named <i>scale</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final float[] SCALE_DEFAULT_VALUE = {1f,1f,1f};

	/** SFRotation field named <i>scaleOrientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] SCALEORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** MFFloat field named <i>stiffness</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final ArrayList<Float> STIFFNESS_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(1f,1f,1f));

	/** SFVec3f field named <i>translation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] TRANSLATION_DEFAULT_VALUE = {0f,0f,0f};

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
			case "center":
				result = "SFVec3f";
				break;
			case "children":
				result = "MFNode";
				break;
			case "displacers":
				result = "MFNode";
				break;
			case "limitOrientation":
				result = "SFRotation";
				break;
			case "llimit":
				result = "MFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "name":
				result = "SFString";
				break;
			case "removeChildren":
				result = "MFNode";
				break;
			case "rotation":
				result = "SFRotation";
				break;
			case "scale":
				result = "SFVec3f";
				break;
			case "scaleOrientation":
				result = "SFRotation";
				break;
			case "skinCoordIndex":
				result = "MFInt32";
				break;
			case "skinCoordWeight":
				result = "MFFloat";
				break;
			case "stiffness":
				result = "MFFloat";
				break;
			case "translation":
				result = "SFVec3f";
				break;
			case "ulimit":
				result = "MFFloat";
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
			case "center":
				result = "inputOutput";
				break;
			case "children":
				result = "inputOutput";
				break;
			case "displacers":
				result = "inputOutput";
				break;
			case "limitOrientation":
				result = "inputOutput";
				break;
			case "llimit":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "removeChildren":
				result = "inputOnly";
				break;
			case "rotation":
				result = "inputOutput";
				break;
			case "scale":
				result = "inputOutput";
				break;
			case "scaleOrientation":
				result = "inputOutput";
				break;
			case "skinCoordIndex":
				result = "inputOutput";
				break;
			case "skinCoordWeight":
				result = "inputOutput";
				break;
			case "stiffness":
				result = "inputOutput";
				break;
			case "translation":
				result = "inputOutput";
				break;
			case "ulimit":
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

	/** fromField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String fromField_CENTER = "center";

	/** toField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String toField_CENTER = "center";

	/** fromField ROUTE name for MFNode field named <i>children</i>. */
	public static final String fromField_CHILDREN = "children";

	/** toField ROUTE name for MFNode field named <i>children</i>. */
	public static final String toField_CHILDREN = "children";

	/** fromField ROUTE name for MFNode field named <i>displacers</i>. */
	public static final String fromField_DISPLACERS = "displacers";

	/** toField ROUTE name for MFNode field named <i>displacers</i>. */
	public static final String toField_DISPLACERS = "displacers";

	/** fromField ROUTE name for SFRotation field named <i>limitOrientation</i>. */
	public static final String fromField_LIMITORIENTATION = "limitOrientation";

	/** toField ROUTE name for SFRotation field named <i>limitOrientation</i>. */
	public static final String toField_LIMITORIENTATION = "limitOrientation";

	/** fromField ROUTE name for MFFloat field named <i>llimit</i>. */
	public static final String fromField_LLIMIT = "llimit";

	/** toField ROUTE name for MFFloat field named <i>llimit</i>. */
	public static final String toField_LLIMIT = "llimit";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFString field named <i>name</i>. */
	public static final String fromField_NAME = "name";

	/** toField ROUTE name for SFString field named <i>name</i>. */
	public static final String toField_NAME = "name";

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

	/** fromField ROUTE name for MFInt32 field named <i>skinCoordIndex</i>. */
	public static final String fromField_SKINCOORDINDEX = "skinCoordIndex";

	/** toField ROUTE name for MFInt32 field named <i>skinCoordIndex</i>. */
	public static final String toField_SKINCOORDINDEX = "skinCoordIndex";

	/** fromField ROUTE name for MFFloat field named <i>skinCoordWeight</i>. */
	public static final String fromField_SKINCOORDWEIGHT = "skinCoordWeight";

	/** toField ROUTE name for MFFloat field named <i>skinCoordWeight</i>. */
	public static final String toField_SKINCOORDWEIGHT = "skinCoordWeight";

	/** fromField ROUTE name for MFFloat field named <i>stiffness</i>. */
	public static final String fromField_STIFFNESS = "stiffness";

	/** toField ROUTE name for MFFloat field named <i>stiffness</i>. */
	public static final String toField_STIFFNESS = "stiffness";

	/** fromField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String fromField_TRANSLATION = "translation";

	/** toField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String toField_TRANSLATION = "translation";

	/** fromField ROUTE name for MFFloat field named <i>ulimit</i>. */
	public static final String fromField_ULIMIT = "ulimit";

	/** toField ROUTE name for MFFloat field named <i>ulimit</i>. */
	public static final String toField_ULIMIT = "ulimit";

	/** Constructor for HAnimJointObject to initialize member variables with default values. */
	public HAnimJointObject()
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
		center = CENTER_DEFAULT_VALUE;
		children = new ArrayList<>();
		displacers = new ArrayList<>();
		limitOrientation = LIMITORIENTATION_DEFAULT_VALUE;
		llimit = new ArrayList<>();
		metadata = null; // clear out any prior node
		name = NAME_DEFAULT_VALUE;
		rotation = ROTATION_DEFAULT_VALUE;
		scale = SCALE_DEFAULT_VALUE;
		scaleOrientation = SCALEORIENTATION_DEFAULT_VALUE;
		skinCoordIndex = new ArrayList<>();
		skinCoordWeight = new ArrayList<>();
		stiffness = STIFFNESS_DEFAULT_VALUE;
		translation = TRANSLATION_DEFAULT_VALUE;
		ulimit = new ArrayList<>();
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  usually HAnimJoint position is controlled by the center field, not the translation field. </li> 
 * </ul>
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
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system. Hint: usually HAnimJoint position is controlled by the center field, not the translation field.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint center newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		center = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f center field, similar to {@link #setCenter(float[])}.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setCenter(SFVec3fObject newValue)
	{
		setCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f center field, similar to {@link #setCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setCenter(float x, float y, float z)
	{
		setCenter(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSegment|HAnimSite, from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSegmentObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of children field
	 */
	@Override
	public X3DNode[] getChildren()
	{
		final X3DNode[] valuesArray = new X3DNode[children.size()];
		int i = 0;
		for (X3DNode arrayElement : children) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode children field, similar to {@link #getChildren()}.

	 * @return value of children field
	 */
	public ArrayList<X3DNode> getChildrenList()
	{
		return children;
	}

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSegment|HAnimSite, to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new value for the children field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setChildren(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; newValue["+i+"]=" + newValue[i]);
			}
		}
		children.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				children.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode children field, similar to {@link #setChildren(X3DNode[])}.
	 * @param newValue is new value for the children field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setChildren(ArrayList<X3DNode> newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayListAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #3
		for (X3DNode element : newValue)
		{
			boolean isNodeTypeAllowed = 
				(element instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(element instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(element instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(element instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(element instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(element instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(element instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(element instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(element instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] element is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; element=" + element);
			}
		}
		children = newValue;
		for (X3DNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single children node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new value to be appended the children field.	 */
	public void addChildren(X3DNode newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(newValue instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; newValue=" + newValue);
		}
		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
	}


	/**
	 * Utility method to add single child element to contained list of existing children nodes (if any).
	 * @param newValue is new node value to be appended the children field.	 
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	*/
	public HAnimJointObject addChild(X3DChildNode newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(newValue instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; newValue=" + newValue);
		}

		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest3
		return this;
	}
	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new value array to be appended the children field.
	 */
	@Override
	public void addChildren(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(newValue[i] instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; newValue["+i+"]=" + newValue[i]);
			}
		}
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				children.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new node for the children field (restricted to HAnimJoint|HAnimSegment|HAnimSite)
	 */
	@Override
	public void setChildren(X3DNode newValue)
	{
		if (newValue == null)
		{
			children.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(newValue instanceof org.web3d.x3d.jsail.Core.CommentsBlock) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ROUTEObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.IMPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Networking.EXPORTObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) ||
				(newValue instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject) ||
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSegmentObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes HAnimJoint|HAnimSegment|HAnimSite; newValue=" + newValue);
		}
		if  (newValue instanceof X3DNode)
		{
			for (X3DNode element : children)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			children.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			children.add(newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of children field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearChildren()
	{
		for (X3DNode element : children)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimJointObject addComments (String newComment)
	{
		if (newComment == null) return this;
		children.add(new CommentsBlock (newComment));
		return this;
	}
	/**
	 * Add comments as String[] array to children field
	 * @param newComments array of comments
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimJointObject addComments (String[] newComments)
	{
		if (newComments == null) return this;
		children.add(new CommentsBlock (newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to children field
	 * @param newCommentsBlock block of comments to add
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimJointObject addComments (CommentsBlock newCommentsBlock)
	{
		if (newCommentsBlock == null) return this;
		children.add(newCommentsBlock);
		return this;
	}
											/**
	 * Provide array of HAnimDisplacer results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>displacers</i>.
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
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value for the displacers field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setDisplacers(X3DNode[] newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setDisplacers(ArrayList<HAnimDisplacer> newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimJointObject addDisplacers(HAnimDisplacerObject newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearDisplacers()
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
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>limitOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation of upper/lower rotation limits, relative to HAnimJoint center.  * <br>

	 * @return value of limitOrientation field
	 */
	@Override
	public float[] getLimitOrientation()
	{
		return limitOrientation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>limitOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of upper/lower rotation limits, relative to HAnimJoint center.
	 * @param newValue is new value for the limitOrientation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setLimitOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint limitOrientation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		limitOrientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation limitOrientation field, similar to {@link #setLimitOrientation(float[])}.
	 * @param newValue is new value for the limitOrientation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setLimitOrientation(SFRotationObject newValue)
	{
		setLimitOrientation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation limitOrientation field, similar to {@link #setLimitOrientation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setLimitOrientation(float x, float y, float z, float angleRadians)
	{
		setLimitOrientation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of Float results from inputOutput MFFloat field named <i>llimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Lower limit for minimum joint rotation in radians.
 * <ul>
 *  <li> <i> Hint:</i>  always contains 3 values, one for each local axis. </li> 
 * </ul>
	 * @return value of llimit field
	 */
	@Override
	public float[] getLlimit()
	{
		final float[] valuesArray = new float[llimit.size()];
		int i = 0;
		for (Float arrayElement : llimit) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat llimit field, similar to {@link #getLlimit()}.

	 * @return value of llimit field
	 */
	public ArrayList<Float> getLlimitList()
	{
		return llimit;
	}

	/**
	 * Assign Float array to inputOutput MFFloat field named <i>llimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Lower limit for minimum joint rotation in radians. Hint: always contains 3 values, one for each local axis.
	 * @param newValue is new value for the llimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setLlimit(float[] newValue)
	{
		if (newValue == null)
		{
			clearLlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		llimit.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			llimit.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat llimit field, similar to {@link #setLlimit(float[])}.
	 * @param newValue is new value for the llimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setLlimit(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearLlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setLlimit(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat llimit field, similar to {@link #setLlimit(float[])}.
	 * @param newValue is new value for the llimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setLlimit(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearLlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		llimit = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of llimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearLlimit()
	{
		llimit.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat llimit field, similar to {@link #setLlimit(float[])}.
	 * @param newValue is new value for the llimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setLlimit(int[] newValue)
	{
		if (newValue == null)
		{
			clearLlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setLlimit(holdArray);
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimJointObject clearMetadata()
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide String enumeration value ['HumanoidRoot'|'sacroiliac'|'l_hip'|'l_knee'|'l_ankle'|'l_subtalar'|'l_midtarsal'|'l_metatarsal'|'r_hip'|'r_knee'|'r_ankle'|'r_subtalar'|'r_midtarsal'|'r_metatarsal'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_wrist'|'l_thumb1'|'l_thumb2'|'l_thumb3'|'l_index0'|'l_index1'|'l_index2'|'l_index3'|'l_middle0'|'l_middle1'|'l_middle2'|'l_middle3'|'l_ring0'|'l_ring1'|'l_ring2'|'l_ring3'|'l_pinky0'|'l_pinky1'|'l_pinky2'|'l_pinky3'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_wrist'|'r_thumb1'|'r_thumb2'|'r_thumb3'|'r_index0'|'r_index1'|'r_index2'|'r_index3'|'r_middle0'|'r_middle1'|'r_middle2'|'r_middle3'|'r_ring0'|'r_ring1'|'r_ring2'|'r_ring3'|'r_pinky0'|'r_pinky1'|'r_pinky2'|'r_pinky3'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimJoint node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: HumanoidRoot sacroiliac l_hip l_knee l_ankle etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> H-Anim Humanoid Joint Names <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NAME_HUMANOIDROOT HUMANOIDROOT}, {@link #NAME_SACROILIAC SACROILIAC}, {@link #NAME_L_HIP L_HIP}, {@link #NAME_L_KNEE L_KNEE}, {@link #NAME_L_ANKLE L_ANKLE}, {@link #NAME_L_SUBTALAR L_SUBTALAR}, {@link #NAME_L_MIDTARSAL L_MIDTARSAL}, {@link #NAME_L_METATARSAL L_METATARSAL}, {@link #NAME_R_HIP R_HIP}, {@link #NAME_R_KNEE R_KNEE}, {@link #NAME_R_ANKLE R_ANKLE}, {@link #NAME_R_SUBTALAR R_SUBTALAR}, {@link #NAME_R_MIDTARSAL R_MIDTARSAL}, {@link #NAME_R_METATARSAL R_METATARSAL}, {@link #NAME_VL5 VL5}, {@link #NAME_VL4 VL4}, {@link #NAME_VL3 VL3}, {@link #NAME_VL2 VL2}, {@link #NAME_VL1 VL1}, {@link #NAME_VT12 VT12}, {@link #NAME_VT11 VT11}, {@link #NAME_VT10 VT10}, {@link #NAME_VT9 VT9}, {@link #NAME_VT8 VT8}, {@link #NAME_VT7 VT7}, {@link #NAME_VT6 VT6}, {@link #NAME_VT5 VT5}, {@link #NAME_VT4 VT4}, {@link #NAME_VT3 VT3}, {@link #NAME_VT2 VT2}, {@link #NAME_VT1 VT1}, {@link #NAME_VC7 VC7}, {@link #NAME_VC6 VC6}, {@link #NAME_VC5 VC5}, {@link #NAME_VC4 VC4}, {@link #NAME_VC3 VC3}, {@link #NAME_VC2 VC2}, {@link #NAME_VC1 VC1}, {@link #NAME_SKULLBASE SKULLBASE}, {@link #NAME_L_EYELID_JOINT L_EYELID_JOINT}, {@link #NAME_R_EYELID_JOINT R_EYELID_JOINT}, {@link #NAME_L_EYEBALL_JOINT L_EYEBALL_JOINT}, {@link #NAME_R_EYEBALL_JOINT R_EYEBALL_JOINT}, {@link #NAME_L_EYEBROW_JOINT L_EYEBROW_JOINT}, {@link #NAME_R_EYEBROW_JOINT R_EYEBROW_JOINT}, {@link #NAME_TEMPOROMANDIBULAR TEMPOROMANDIBULAR}, {@link #NAME_L_STERNOCLAVICULAR L_STERNOCLAVICULAR}, {@link #NAME_L_ACROMIOCLAVICULAR L_ACROMIOCLAVICULAR}, {@link #NAME_L_SHOULDER L_SHOULDER}, {@link #NAME_L_ELBOW L_ELBOW}, {@link #NAME_L_WRIST L_WRIST}, {@link #NAME_L_THUMB1 L_THUMB1}, {@link #NAME_L_THUMB2 L_THUMB2}, {@link #NAME_L_THUMB3 L_THUMB3}, {@link #NAME_L_INDEX0 L_INDEX0}, {@link #NAME_L_INDEX1 L_INDEX1}, {@link #NAME_L_INDEX2 L_INDEX2}, {@link #NAME_L_INDEX3 L_INDEX3}, {@link #NAME_L_MIDDLE0 L_MIDDLE0}, {@link #NAME_L_MIDDLE1 L_MIDDLE1}, {@link #NAME_L_MIDDLE2 L_MIDDLE2}, {@link #NAME_L_MIDDLE3 L_MIDDLE3}, {@link #NAME_L_RING0 L_RING0}, {@link #NAME_L_RING1 L_RING1}, {@link #NAME_L_RING2 L_RING2}, {@link #NAME_L_RING3 L_RING3}, {@link #NAME_L_PINKY0 L_PINKY0}, {@link #NAME_L_PINKY1 L_PINKY1}, {@link #NAME_L_PINKY2 L_PINKY2}, {@link #NAME_L_PINKY3 L_PINKY3}, {@link #NAME_R_STERNOCLAVICULAR R_STERNOCLAVICULAR}, {@link #NAME_R_ACROMIOCLAVICULAR R_ACROMIOCLAVICULAR}, {@link #NAME_R_SHOULDER R_SHOULDER}, {@link #NAME_R_ELBOW R_ELBOW}, {@link #NAME_R_WRIST R_WRIST}, {@link #NAME_R_THUMB1 R_THUMB1}, {@link #NAME_R_THUMB2 R_THUMB2}, {@link #NAME_R_THUMB3 R_THUMB3}, {@link #NAME_R_INDEX0 R_INDEX0}, {@link #NAME_R_INDEX1 R_INDEX1}, {@link #NAME_R_INDEX2 R_INDEX2}, {@link #NAME_R_INDEX3 R_INDEX3}, {@link #NAME_R_MIDDLE0 R_MIDDLE0}, {@link #NAME_R_MIDDLE1 R_MIDDLE1}, {@link #NAME_R_MIDDLE2 R_MIDDLE2}, {@link #NAME_R_MIDDLE3 R_MIDDLE3}, {@link #NAME_R_RING0 R_RING0}, {@link #NAME_R_RING1 R_RING1}, {@link #NAME_R_RING2 R_RING2}, {@link #NAME_R_RING3 R_RING3}, {@link #NAME_R_PINKY0 R_PINKY0}, {@link #NAME_R_PINKY1 R_PINKY1}, {@link #NAME_R_PINKY2 R_PINKY2}, {@link #NAME_R_PINKY3 R_PINKY3}.
	 * @return value of name field
	 */
	@Override
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String enumeration value ("HumanoidRoot"|"sacroiliac"|"l_hip"|"l_knee"|"l_ankle"|"l_subtalar"|"l_midtarsal"|"l_metatarsal"|"r_hip"|"r_knee"|"r_ankle"|"r_subtalar"|"r_midtarsal"|"r_metatarsal"|"vl5"|"vl4"|"vl3"|"vl2"|"vl1"|"vt12"|"vt11"|"vt10"|"vt9"|"vt8"|"vt7"|"vt6"|"vt5"|"vt4"|"vt3"|"vt2"|"vt1"|"vc7"|"vc6"|"vc5"|"vc4"|"vc3"|"vc2"|"vc1"|"skullbase"|"l_eyelid_joint"|"r_eyelid_joint"|"l_eyeball_joint"|"r_eyeball_joint"|"l_eyebrow_joint"|"r_eyebrow_joint"|"temporomandibular"|"l_sternoclavicular"|"l_acromioclavicular"|"l_shoulder"|"l_elbow"|"l_wrist"|"l_thumb1"|"l_thumb2"|"l_thumb3"|"l_index0"|"l_index1"|"l_index2"|"l_index3"|"l_middle0"|"l_middle1"|"l_middle2"|"l_middle3"|"l_ring0"|"l_ring1"|"l_ring2"|"l_ring3"|"l_pinky0"|"l_pinky1"|"l_pinky2"|"l_pinky3"|"r_sternoclavicular"|"r_acromioclavicular"|"r_shoulder"|"r_elbow"|"r_wrist"|"r_thumb1"|"r_thumb2"|"r_thumb3"|"r_index0"|"r_index1"|"r_index2"|"r_index3"|"r_middle0"|"r_middle1"|"r_middle2"|"r_middle3"|"r_ring0"|"r_ring1"|"r_ring2"|"r_ring3"|"r_pinky0"|"r_pinky1"|"r_pinky2"|"r_pinky3") ['HumanoidRoot'|'sacroiliac'|'l_hip'|'l_knee'|'l_ankle'|'l_subtalar'|'l_midtarsal'|'l_metatarsal'|'r_hip'|'r_knee'|'r_ankle'|'r_subtalar'|'r_midtarsal'|'r_metatarsal'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_wrist'|'l_thumb1'|'l_thumb2'|'l_thumb3'|'l_index0'|'l_index1'|'l_index2'|'l_index3'|'l_middle0'|'l_middle1'|'l_middle2'|'l_middle3'|'l_ring0'|'l_ring1'|'l_ring2'|'l_ring3'|'l_pinky0'|'l_pinky1'|'l_pinky2'|'l_pinky3'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_wrist'|'r_thumb1'|'r_thumb2'|'r_thumb3'|'r_index0'|'r_index1'|'r_index2'|'r_index3'|'r_middle0'|'r_middle1'|'r_middle2'|'r_middle3'|'r_ring0'|'r_ring1'|'r_ring2'|'r_ring3'|'r_pinky0'|'r_pinky1'|'r_pinky2'|'r_pinky3'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #NAME_HUMANOIDROOT HUMANOIDROOT}, {@link #NAME_SACROILIAC SACROILIAC}, {@link #NAME_L_HIP L_HIP}, {@link #NAME_L_KNEE L_KNEE}, {@link #NAME_L_ANKLE L_ANKLE}, {@link #NAME_L_SUBTALAR L_SUBTALAR}, {@link #NAME_L_MIDTARSAL L_MIDTARSAL}, {@link #NAME_L_METATARSAL L_METATARSAL}, {@link #NAME_R_HIP R_HIP}, {@link #NAME_R_KNEE R_KNEE}, {@link #NAME_R_ANKLE R_ANKLE}, {@link #NAME_R_SUBTALAR R_SUBTALAR}, {@link #NAME_R_MIDTARSAL R_MIDTARSAL}, {@link #NAME_R_METATARSAL R_METATARSAL}, {@link #NAME_VL5 VL5}, {@link #NAME_VL4 VL4}, {@link #NAME_VL3 VL3}, {@link #NAME_VL2 VL2}, {@link #NAME_VL1 VL1}, {@link #NAME_VT12 VT12}, {@link #NAME_VT11 VT11}, {@link #NAME_VT10 VT10}, {@link #NAME_VT9 VT9}, {@link #NAME_VT8 VT8}, {@link #NAME_VT7 VT7}, {@link #NAME_VT6 VT6}, {@link #NAME_VT5 VT5}, {@link #NAME_VT4 VT4}, {@link #NAME_VT3 VT3}, {@link #NAME_VT2 VT2}, {@link #NAME_VT1 VT1}, {@link #NAME_VC7 VC7}, {@link #NAME_VC6 VC6}, {@link #NAME_VC5 VC5}, {@link #NAME_VC4 VC4}, {@link #NAME_VC3 VC3}, {@link #NAME_VC2 VC2}, {@link #NAME_VC1 VC1}, {@link #NAME_SKULLBASE SKULLBASE}, {@link #NAME_L_EYELID_JOINT L_EYELID_JOINT}, {@link #NAME_R_EYELID_JOINT R_EYELID_JOINT}, {@link #NAME_L_EYEBALL_JOINT L_EYEBALL_JOINT}, {@link #NAME_R_EYEBALL_JOINT R_EYEBALL_JOINT}, {@link #NAME_L_EYEBROW_JOINT L_EYEBROW_JOINT}, {@link #NAME_R_EYEBROW_JOINT R_EYEBROW_JOINT}, {@link #NAME_TEMPOROMANDIBULAR TEMPOROMANDIBULAR}, {@link #NAME_L_STERNOCLAVICULAR L_STERNOCLAVICULAR}, {@link #NAME_L_ACROMIOCLAVICULAR L_ACROMIOCLAVICULAR}, {@link #NAME_L_SHOULDER L_SHOULDER}, {@link #NAME_L_ELBOW L_ELBOW}, {@link #NAME_L_WRIST L_WRIST}, {@link #NAME_L_THUMB1 L_THUMB1}, {@link #NAME_L_THUMB2 L_THUMB2}, {@link #NAME_L_THUMB3 L_THUMB3}, {@link #NAME_L_INDEX0 L_INDEX0}, {@link #NAME_L_INDEX1 L_INDEX1}, {@link #NAME_L_INDEX2 L_INDEX2}, {@link #NAME_L_INDEX3 L_INDEX3}, {@link #NAME_L_MIDDLE0 L_MIDDLE0}, {@link #NAME_L_MIDDLE1 L_MIDDLE1}, {@link #NAME_L_MIDDLE2 L_MIDDLE2}, {@link #NAME_L_MIDDLE3 L_MIDDLE3}, {@link #NAME_L_RING0 L_RING0}, {@link #NAME_L_RING1 L_RING1}, {@link #NAME_L_RING2 L_RING2}, {@link #NAME_L_RING3 L_RING3}, {@link #NAME_L_PINKY0 L_PINKY0}, {@link #NAME_L_PINKY1 L_PINKY1}, {@link #NAME_L_PINKY2 L_PINKY2}, {@link #NAME_L_PINKY3 L_PINKY3}, {@link #NAME_R_STERNOCLAVICULAR R_STERNOCLAVICULAR}, {@link #NAME_R_ACROMIOCLAVICULAR R_ACROMIOCLAVICULAR}, {@link #NAME_R_SHOULDER R_SHOULDER}, {@link #NAME_R_ELBOW R_ELBOW}, {@link #NAME_R_WRIST R_WRIST}, {@link #NAME_R_THUMB1 R_THUMB1}, {@link #NAME_R_THUMB2 R_THUMB2}, {@link #NAME_R_THUMB3 R_THUMB3}, {@link #NAME_R_INDEX0 R_INDEX0}, {@link #NAME_R_INDEX1 R_INDEX1}, {@link #NAME_R_INDEX2 R_INDEX2}, {@link #NAME_R_INDEX3 R_INDEX3}, {@link #NAME_R_MIDDLE0 R_MIDDLE0}, {@link #NAME_R_MIDDLE1 R_MIDDLE1}, {@link #NAME_R_MIDDLE2 R_MIDDLE2}, {@link #NAME_R_MIDDLE3 R_MIDDLE3}, {@link #NAME_R_RING0 R_RING0}, {@link #NAME_R_RING1 R_RING1}, {@link #NAME_R_RING2 R_RING2}, {@link #NAME_R_RING3 R_RING3}, {@link #NAME_R_PINKY0 R_PINKY0}, {@link #NAME_R_PINKY1 R_PINKY1}, {@link #NAME_R_PINKY2 R_PINKY2}, {@link #NAME_R_PINKY3 R_PINKY3}).
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimJoint node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: HumanoidRoot sacroiliac l_hip l_knee l_ankle etc. as listed in H-Anim Specification. Hint: H-Anim Humanoid Joint Names http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt Hint: H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimJointObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(NAME_HUMANOIDROOT) ||
			newValue.equals(NAME_SACROILIAC) ||
			newValue.equals(NAME_L_HIP) ||
			newValue.equals(NAME_L_KNEE) ||
			newValue.equals(NAME_L_ANKLE) ||
			newValue.equals(NAME_L_SUBTALAR) ||
			newValue.equals(NAME_L_MIDTARSAL) ||
			newValue.equals(NAME_L_METATARSAL) ||
			newValue.equals(NAME_R_HIP) ||
			newValue.equals(NAME_R_KNEE) ||
			newValue.equals(NAME_R_ANKLE) ||
			newValue.equals(NAME_R_SUBTALAR) ||
			newValue.equals(NAME_R_MIDTARSAL) ||
			newValue.equals(NAME_R_METATARSAL) ||
			newValue.equals(NAME_VL5) ||
			newValue.equals(NAME_VL4) ||
			newValue.equals(NAME_VL3) ||
			newValue.equals(NAME_VL2) ||
			newValue.equals(NAME_VL1) ||
			newValue.equals(NAME_VT12) ||
			newValue.equals(NAME_VT11) ||
			newValue.equals(NAME_VT10) ||
			newValue.equals(NAME_VT9) ||
			newValue.equals(NAME_VT8) ||
			newValue.equals(NAME_VT7) ||
			newValue.equals(NAME_VT6) ||
			newValue.equals(NAME_VT5) ||
			newValue.equals(NAME_VT4) ||
			newValue.equals(NAME_VT3) ||
			newValue.equals(NAME_VT2) ||
			newValue.equals(NAME_VT1) ||
			newValue.equals(NAME_VC7) ||
			newValue.equals(NAME_VC6) ||
			newValue.equals(NAME_VC5) ||
			newValue.equals(NAME_VC4) ||
			newValue.equals(NAME_VC3) ||
			newValue.equals(NAME_VC2) ||
			newValue.equals(NAME_VC1) ||
			newValue.equals(NAME_SKULLBASE) ||
			newValue.equals(NAME_L_EYELID_JOINT) ||
			newValue.equals(NAME_R_EYELID_JOINT) ||
			newValue.equals(NAME_L_EYEBALL_JOINT) ||
			newValue.equals(NAME_R_EYEBALL_JOINT) ||
			newValue.equals(NAME_L_EYEBROW_JOINT) ||
			newValue.equals(NAME_R_EYEBROW_JOINT) ||
			newValue.equals(NAME_TEMPOROMANDIBULAR) ||
			newValue.equals(NAME_L_STERNOCLAVICULAR) ||
			newValue.equals(NAME_L_ACROMIOCLAVICULAR) ||
			newValue.equals(NAME_L_SHOULDER) ||
			newValue.equals(NAME_L_ELBOW) ||
			newValue.equals(NAME_L_WRIST) ||
			newValue.equals(NAME_L_THUMB1) ||
			newValue.equals(NAME_L_THUMB2) ||
			newValue.equals(NAME_L_THUMB3) ||
			newValue.equals(NAME_L_INDEX0) ||
			newValue.equals(NAME_L_INDEX1) ||
			newValue.equals(NAME_L_INDEX2) ||
			newValue.equals(NAME_L_INDEX3) ||
			newValue.equals(NAME_L_MIDDLE0) ||
			newValue.equals(NAME_L_MIDDLE1) ||
			newValue.equals(NAME_L_MIDDLE2) ||
			newValue.equals(NAME_L_MIDDLE3) ||
			newValue.equals(NAME_L_RING0) ||
			newValue.equals(NAME_L_RING1) ||
			newValue.equals(NAME_L_RING2) ||
			newValue.equals(NAME_L_RING3) ||
			newValue.equals(NAME_L_PINKY0) ||
			newValue.equals(NAME_L_PINKY1) ||
			newValue.equals(NAME_L_PINKY2) ||
			newValue.equals(NAME_L_PINKY3) ||
			newValue.equals(NAME_R_STERNOCLAVICULAR) ||
			newValue.equals(NAME_R_ACROMIOCLAVICULAR) ||
			newValue.equals(NAME_R_SHOULDER) ||
			newValue.equals(NAME_R_ELBOW) ||
			newValue.equals(NAME_R_WRIST) ||
			newValue.equals(NAME_R_THUMB1) ||
			newValue.equals(NAME_R_THUMB2) ||
			newValue.equals(NAME_R_THUMB3) ||
			newValue.equals(NAME_R_INDEX0) ||
			newValue.equals(NAME_R_INDEX1) ||
			newValue.equals(NAME_R_INDEX2) ||
			newValue.equals(NAME_R_INDEX3) ||
			newValue.equals(NAME_R_MIDDLE0) ||
			newValue.equals(NAME_R_MIDDLE1) ||
			newValue.equals(NAME_R_MIDDLE2) ||
			newValue.equals(NAME_R_MIDDLE3) ||
			newValue.equals(NAME_R_RING0) ||
			newValue.equals(NAME_R_RING1) ||
			newValue.equals(NAME_R_RING2) ||
			newValue.equals(NAME_R_RING3) ||
			newValue.equals(NAME_R_PINKY0) ||
			newValue.equals(NAME_R_PINKY1) ||
			newValue.equals(NAME_R_PINKY2) ||
			newValue.equals(NAME_R_PINKY3))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint name newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimJoint name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system.
 * <ul>
 *  <li> <i> Warning:</i>  default pose is typically empty (or an identity rotation) to avoid distorted body animations. </li> 
 * </ul>
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
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system. Warning: default pose is typically empty (or an identity rotation) to avoid distorted body animations.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setRotation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint rotation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		rotation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation rotation field, similar to {@link #setRotation(float[])}.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setRotation(SFRotationObject newValue)
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

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setRotation(float x, float y, float z, float angleRadians)
	{
		setRotation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results within allowed range of (0,infinity) from inputOutput SFVec3f field named <i>scale</i>.
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
	 * Assign 3-tuple float array within allowed range of (0,infinity) to inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
	 * @param newValue is new value for the scale field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setScale(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint scale newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if ((newValue[0] <= 0f) || (newValue[1] <= 0f) || (newValue[2] <= 0f)) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint scale newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		scale = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f scale field, similar to {@link #setScale(float[])}.
	 * @param newValue is new value for the scale field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setScale(SFVec3fObject newValue)
	{
		setScale(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f scale field, similar to {@link #setScale(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setScale(float x, float y, float z)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setScaleOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint scaleOrientation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		scaleOrientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation scaleOrientation field, similar to {@link #setScaleOrientation(float[])}.
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setScaleOrientation(SFRotationObject newValue)
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

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setScaleOrientation(float x, float y, float z, float angleRadians)
	{
		setScaleOrientation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of Integer results within allowed range of [0,infinity) from inputOutput MFInt32 field named <i>skinCoordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Coordinate index values referencing which vertices are influenced by the HAnimJoint.
 * <ul>
 *  <li> <i>Warning:</i> -1 sentinel values are not allowed. </li> 
 *  <li> <i>Hint:</i> corresponding skinCoord Coordinate and skinNormal Normal nodes are directly contained within the ancestor HAnimHumanoid node for this HAnimJoint. </li> 
 *  <li> <i>Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of skinCoordIndex field
	 */
	@Override
	public int[] getSkinCoordIndex()
	{
		final int[] valuesArray = new int[skinCoordIndex.size()];
		int i = 0;
		for (Integer arrayElement : skinCoordIndex) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 skinCoordIndex field, similar to {@link #getSkinCoordIndex()}.

	 * @return value of skinCoordIndex field
	 */
	public ArrayList<Integer> getSkinCoordIndexList()
	{
		return skinCoordIndex;
	}

	/**
	 * Assign Integer array within allowed range of [0,infinity) to inputOutput MFInt32 field named <i>skinCoordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Coordinate index values referencing which vertices are influenced by the HAnimJoint. Warning: -1 sentinel values are not allowed. Hint: corresponding skinCoord Coordinate and skinNormal Normal nodes are directly contained within the ancestor HAnimHumanoid node for this HAnimJoint. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the skinCoordIndex field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setSkinCoordIndex(int[] newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skinCoordIndex.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			skinCoordIndex.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 skinCoordIndex field, similar to {@link #setSkinCoordIndex(int[])}.
	 * @param newValue is new value for the skinCoordIndex field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setSkinCoordIndex(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setSkinCoordIndex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 skinCoordIndex field, similar to {@link #setSkinCoordIndex(int[])}.
	 * @param newValue is new value for the skinCoordIndex field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setSkinCoordIndex(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skinCoordIndex = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of skinCoordIndex field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearSkinCoordIndex()
	{
		skinCoordIndex.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Float results from inputOutput MFFloat field named <i>skinCoordWeight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Weight deformation values for the corresponding values in the skinCoordIndex field.
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of skinCoordWeight field
	 */
	@Override
	public float[] getSkinCoordWeight()
	{
		final float[] valuesArray = new float[skinCoordWeight.size()];
		int i = 0;
		for (Float arrayElement : skinCoordWeight) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat skinCoordWeight field, similar to {@link #getSkinCoordWeight()}.

	 * @return value of skinCoordWeight field
	 */
	public ArrayList<Float> getSkinCoordWeightList()
	{
		return skinCoordWeight;
	}

	/**
	 * Assign Float array to inputOutput MFFloat field named <i>skinCoordWeight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Weight deformation values for the corresponding values in the skinCoordIndex field. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the skinCoordWeight field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setSkinCoordWeight(float[] newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skinCoordWeight.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			skinCoordWeight.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat skinCoordWeight field, similar to {@link #setSkinCoordWeight(float[])}.
	 * @param newValue is new value for the skinCoordWeight field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setSkinCoordWeight(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setSkinCoordWeight(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat skinCoordWeight field, similar to {@link #setSkinCoordWeight(float[])}.
	 * @param newValue is new value for the skinCoordWeight field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setSkinCoordWeight(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skinCoordWeight = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of skinCoordWeight field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearSkinCoordWeight()
	{
		skinCoordWeight.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat skinCoordWeight field, similar to {@link #setSkinCoordWeight(float[])}.
	 * @param newValue is new value for the skinCoordWeight field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setSkinCoordWeight(int[] newValue)
	{
		if (newValue == null)
		{
			clearSkinCoordWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setSkinCoordWeight(holdArray);
		return this;
	}
	/**
	 * Provide array of Float results within allowed range of [0,1] from inputOutput MFFloat field named <i>stiffness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Axial values (0,1) indicating willingness of joint to move (about local X, Y, Z axes), larger stiffness values means greater resistance.
 * <ul>
 *  <li> <i> Hint:</i>  used by inverse kinematics (IK) systems. </li> 
 * </ul>
	 * @return value of stiffness field
	 */
	@Override
	public float[] getStiffness()
	{
		final float[] valuesArray = new float[stiffness.size()];
		int i = 0;
		for (Float arrayElement : stiffness) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat stiffness field, similar to {@link #getStiffness()}.

	 * @return value of stiffness field
	 */
	public ArrayList<Float> getStiffnessList()
	{
		return stiffness;
	}

	/**
	 * Assign Float array within allowed range of [0,1] to inputOutput MFFloat field named <i>stiffness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Axial values (0,1) indicating willingness of joint to move (about local X, Y, Z axes), larger stiffness values means greater resistance. Hint: used by inverse kinematics (IK) systems.
	 * @param newValue is new value for the stiffness field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setStiffness(float[] newValue)
	{
		if (newValue == null)
		{
			clearStiffness(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		stiffness.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			stiffness.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat stiffness field, similar to {@link #setStiffness(float[])}.
	 * @param newValue is new value for the stiffness field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setStiffness(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearStiffness(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setStiffness(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat stiffness field, similar to {@link #setStiffness(float[])}.
	 * @param newValue is new value for the stiffness field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setStiffness(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearStiffness(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		stiffness = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of stiffness field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearStiffness()
	{
		stiffness.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat stiffness field, similar to {@link #setStiffness(float[])}.
	 * @param newValue is new value for the stiffness field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setStiffness(int[] newValue)
	{
		if (newValue == null)
		{
			clearStiffness(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setStiffness(holdArray);
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system.
 * <ul>
 *  <li> <i>Warning:</i> usually HAnimJoint position is controlled by the center field, not the translation field. </li> 
 *  <li> <i>Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
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
	 * <i>Tooltip:</i> Position of children relative to local coordinate system. Warning: usually HAnimJoint position is controlled by the center field, not the translation field. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setTranslation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint translation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		translation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f translation field, similar to {@link #setTranslation(float[])}.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setTranslation(SFVec3fObject newValue)
	{
		setTranslation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f translation field, similar to {@link #setTranslation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setTranslation(float x, float y, float z)
	{
		setTranslation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of Float results from inputOutput MFFloat field named <i>ulimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Upper limit for maximum joint rotation in radians.
 * <ul>
 *  <li> <i> Hint:</i>  always contains 3 values, one for each local axis. </li> 
 * </ul>
	 * @return value of ulimit field
	 */
	@Override
	public float[] getUlimit()
	{
		final float[] valuesArray = new float[ulimit.size()];
		int i = 0;
		for (Float arrayElement : ulimit) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat ulimit field, similar to {@link #getUlimit()}.

	 * @return value of ulimit field
	 */
	public ArrayList<Float> getUlimitList()
	{
		return ulimit;
	}

	/**
	 * Assign Float array to inputOutput MFFloat field named <i>ulimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Upper limit for maximum joint rotation in radians. Hint: always contains 3 values, one for each local axis.
	 * @param newValue is new value for the ulimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setUlimit(float[] newValue)
	{
		if (newValue == null)
		{
			clearUlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		ulimit.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			ulimit.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat ulimit field, similar to {@link #setUlimit(float[])}.
	 * @param newValue is new value for the ulimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setUlimit(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearUlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setUlimit(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat ulimit field, similar to {@link #setUlimit(float[])}.
	 * @param newValue is new value for the ulimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setUlimit(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearUlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		ulimit = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of ulimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimJointObject clearUlimit()
	{
		ulimit.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat ulimit field, similar to {@link #setUlimit(float[])}.
	 * @param newValue is new value for the ulimit field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setUlimit(int[] newValue)
	{
		if (newValue == null)
		{
			clearUlimit(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setUlimit(holdArray);
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimJointObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimJoint DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setDEF(SFStringObject newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimJointObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimJoint USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimJoint USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimJointObject setCssClass(String newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setCssClass(SFStringObject newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJointObject setIS(ISObject newValue)
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
	 * @return {@link HAnimJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJointObject setUSE(HAnimJointObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on HAnimJointObject" +
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
	public HAnimJointObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Utility constructor that assigns both DEF label and name, after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 * @param newName  name for this meta element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimJointObject">X3D Tooltips: HAnimJointObject</a>
	 */
	public HAnimJointObject (String DEFlabel, String newName)
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (!displacers.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<HAnimJoint"); // start opening tag
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
			if ((!Arrays.equals(getCenter(), CENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" center='").append(SFVec3fObject.toString(getCenter())).append("'");
			}
			if ((!Arrays.equals(getLimitOrientation(), LIMITORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" limitOrientation='").append(SFRotationObject.toString(getLimitOrientation())).append("'");
			}
			if (((getLlimit().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" llimit='").append(MFFloatObject.toString(getLlimit())).append("'");
			}
			if ((!Arrays.equals(getRotation(), ROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rotation='").append(SFRotationObject.toString(getRotation())).append("'");
			}
			if ((!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scale='").append(SFVec3fObject.toString(getScale())).append("'");
			}
			if ((!Arrays.equals(getScaleOrientation(), SCALEORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scaleOrientation='").append(SFRotationObject.toString(getScaleOrientation())).append("'");
			}
			if (((getSkinCoordIndex().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" skinCoordIndex='").append(MFInt32Object.toString(getSkinCoordIndex())).append("'");
			}
			if (((getSkinCoordWeight().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" skinCoordWeight='").append(MFFloatObject.toString(getSkinCoordWeight())).append("'");
			}
			if (((getStiffness().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stiffness='").append(MFFloatObject.toString(getStiffness())).append("'");
			}
			if ((!Arrays.equals(getTranslation(), TRANSLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" translation='").append(SFVec3fObject.toString(getTranslation())).append("'");
			}
			if (((getUlimit().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" ulimit='").append(MFFloatObject.toString(getUlimit())).append("'");
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
			for (X3DNode element : children)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			for (HAnimDisplacer element : displacers)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</HAnimJoint>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!children.isEmpty()) || (!displacers.isEmpty()) || (metadata != null) || (metadataProtoInstance != null);
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
			stringClassicVRML.append("HAnimJoint").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("limitOrientation"))
						{
							stringClassicVRML.append(indentCharacter).append("limitOrientation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getLimitOrientation(), LIMITORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("limitOrientation ").append(SFRotationObject.toString(getLimitOrientation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("llimit"))
						{
							stringClassicVRML.append(indentCharacter).append("llimit").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getLlimit().length > 0)
				{
					stringClassicVRML.append("llimit ").append("[ ").append(MFFloatObject.toString(getLlimit())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("skinCoordIndex"))
						{
							stringClassicVRML.append(indentCharacter).append("skinCoordIndex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getSkinCoordIndex().length > 0)
				{
					stringClassicVRML.append("skinCoordIndex ").append("[ ").append(MFInt32Object.toString(getSkinCoordIndex())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("skinCoordWeight"))
						{
							stringClassicVRML.append(indentCharacter).append("skinCoordWeight").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getSkinCoordWeight().length > 0)
				{
					stringClassicVRML.append("skinCoordWeight ").append("[ ").append(MFFloatObject.toString(getSkinCoordWeight())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stiffness"))
						{
							stringClassicVRML.append(indentCharacter).append("stiffness").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getStiffness().length > 0)
				{
					stringClassicVRML.append("stiffness ").append("[ ").append(MFFloatObject.toString(getStiffness())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("ulimit"))
						{
							stringClassicVRML.append(indentCharacter).append("ulimit").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getUlimit().length > 0)
				{
					stringClassicVRML.append("ulimit ").append("[ ").append(MFFloatObject.toString(getUlimit())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			for (X3DNode element : children)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
		for (X3DNode element : children) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
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
		for (X3DNode element : children) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		setCenter(getCenter()); // exercise field checks, simple types

		setLimitOrientation(getLimitOrientation()); // exercise field checks, simple types

		setLlimit(getLlimit()); // exercise field checks, simple types

		if (getName().isEmpty() && !isUSE()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		setRotation(getRotation()); // exercise field checks, simple types

		setScale(getScale()); // exercise field checks, simple types

		setScaleOrientation(getScaleOrientation()); // exercise field checks, simple types

		setSkinCoordIndex(getSkinCoordIndex()); // exercise field checks, simple types

		setSkinCoordWeight(getSkinCoordWeight()); // exercise field checks, simple types

		setStiffness(getStiffness()); // exercise field checks, simple types

		setTranslation(getTranslation()); // exercise field checks, simple types

		setUlimit(getUlimit()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (X3DNode element : children) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setChildren(getChildren()); // also test getter/setter validation

		if (isUSE() && hasChildren()) // test USE restrictions
		{
			String errorNotice = "HAnimJoint USE='" + getUSE() + "' is not allowed to have contained MFNode children";
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
			String errorNotice = "HAnimJoint USE='" + getUSE() + "' is not allowed to have contained MFNode displacers";
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
			String errorNotice = "HAnimJoint USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
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
