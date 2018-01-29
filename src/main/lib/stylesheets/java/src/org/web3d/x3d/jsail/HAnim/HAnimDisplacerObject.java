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

/**
 * <i>X3D node tooltip</i>: HAnimDisplacer nodes alter the shape of coordinate-based geometry within parent HAnimSegment or parent HAnimBody/HanimHumanoid nodes. Displacer effects are scaled by the corresponding weight field.
 * <ul>
 *  <li> <i>Hint:</i> HAnimDisplacer can be used in three different ways: (a) identify vertices corresponding to a particular feature in a parent HAnimSegment node, (b) represent a particular muscular action for a parent HAnimJoint node by displacing corresponding HAnimHumanoid skin vertices in various directions (linearly or radially), or (c) represent a complete configuration of coordinate vertices in a parent HAnimSegment node or parent HAnimJoint/HAnimHumanoid nodes. Example: in the case of a face, there might be a separate HAnimDisplacer node for each facial expression. </li> 
 *  <li> <i>Hint:</i> name suffixes include _feature, _action and _config. </li> 
 *  <li> <i>Hint:</i> multiple HAnimDisplacer nodes must appear consecutively inside parent HAnimSegment for proper content validationi in XML encoding. </li> 
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Displacer <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Displacer" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Displacer</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimDisplacer" target="blank">X3D Abstract Specification: HAnimDisplacer</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimDisplacer" target="_blank">X3D Tooltips: HAnimDisplacer</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class HAnimDisplacerObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.HAnim.HAnimDisplacer
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<Integer> coordIndex = new ArrayList<>(); // MFInt32

	private float[] displacements; // MFVec3f

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String name; // SFString

	private float weight; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>name</i> can equal this enumeration value <i>"sellion"</i> (Java syntax) or <i>sellion</i> (XML syntax). */
	public static final String NAME_SELLION = "sellion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_infraorbitale"</i> (Java syntax) or <i>r_infraorbitale</i> (XML syntax). */
	public static final String NAME_R_INFRAORBITALE = "r_infraorbitale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_infraorbitale"</i> (Java syntax) or <i>l_infraorbitale</i> (XML syntax). */
	public static final String NAME_L_INFRAORBITALE = "l_infraorbitale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"supramenton"</i> (Java syntax) or <i>supramenton</i> (XML syntax). */
	public static final String NAME_SUPRAMENTON = "supramenton";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_tragion"</i> (Java syntax) or <i>r_tragion</i> (XML syntax). */
	public static final String NAME_R_TRAGION = "r_tragion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_gonion"</i> (Java syntax) or <i>r_gonion</i> (XML syntax). */
	public static final String NAME_R_GONION = "r_gonion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_tragion"</i> (Java syntax) or <i>l_tragion</i> (XML syntax). */
	public static final String NAME_L_TRAGION = "l_tragion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_gonion"</i> (Java syntax) or <i>l_gonion</i> (XML syntax). */
	public static final String NAME_L_GONION = "l_gonion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"nuchale"</i> (Java syntax) or <i>nuchale</i> (XML syntax). */
	public static final String NAME_NUCHALE = "nuchale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_clavicale"</i> (Java syntax) or <i>r_clavicale</i> (XML syntax). */
	public static final String NAME_R_CLAVICALE = "r_clavicale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"suprasternale"</i> (Java syntax) or <i>suprasternale</i> (XML syntax). */
	public static final String NAME_SUPRASTERNALE = "suprasternale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_clavicale"</i> (Java syntax) or <i>l_clavicale</i> (XML syntax). */
	public static final String NAME_L_CLAVICALE = "l_clavicale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_thelion"</i> (Java syntax) or <i>r_thelion</i> (XML syntax). */
	public static final String NAME_R_THELION = "r_thelion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_thelion"</i> (Java syntax) or <i>l_thelion</i> (XML syntax). */
	public static final String NAME_L_THELION = "l_thelion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"substernale"</i> (Java syntax) or <i>substernale</i> (XML syntax). */
	public static final String NAME_SUBSTERNALE = "substernale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_rib10"</i> (Java syntax) or <i>r_rib10</i> (XML syntax). */
	public static final String NAME_R_RIB10 = "r_rib10";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_asis"</i> (Java syntax) or <i>r_asis</i> (XML syntax). */
	public static final String NAME_R_ASIS = "r_asis";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_rib10"</i> (Java syntax) or <i>l_rib10</i> (XML syntax). */
	public static final String NAME_L_RIB10 = "l_rib10";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_asis"</i> (Java syntax) or <i>l_asis</i> (XML syntax). */
	public static final String NAME_L_ASIS = "l_asis";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_iliocristale"</i> (Java syntax) or <i>r_iliocristale</i> (XML syntax). */
	public static final String NAME_R_ILIOCRISTALE = "r_iliocristale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_trochanterion"</i> (Java syntax) or <i>r_trochanterion</i> (XML syntax). */
	public static final String NAME_R_TROCHANTERION = "r_trochanterion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_iliocristale"</i> (Java syntax) or <i>l_iliocristale</i> (XML syntax). */
	public static final String NAME_L_ILIOCRISTALE = "l_iliocristale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_trochanterion"</i> (Java syntax) or <i>l_trochanterion</i> (XML syntax). */
	public static final String NAME_L_TROCHANTERION = "l_trochanterion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"cervicale"</i> (Java syntax) or <i>cervicale</i> (XML syntax). */
	public static final String NAME_CERVICALE = "cervicale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"rib10_midspine"</i> (Java syntax) or <i>rib10_midspine</i> (XML syntax). */
	public static final String NAME_RIB10_MIDSPINE = "rib10_midspine";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_psis"</i> (Java syntax) or <i>r_psis</i> (XML syntax). */
	public static final String NAME_R_PSIS = "r_psis";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_psis"</i> (Java syntax) or <i>l_psis</i> (XML syntax). */
	public static final String NAME_L_PSIS = "l_psis";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"waist_preferred_post"</i> (Java syntax) or <i>waist_preferred_post</i> (XML syntax). */
	public static final String NAME_WAIST_PREFERRED_POST = "waist_preferred_post";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_acromion"</i> (Java syntax) or <i>r_acromion</i> (XML syntax). */
	public static final String NAME_R_ACROMION = "r_acromion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_axilla_ant"</i> (Java syntax) or <i>r_axilla_ant</i> (XML syntax). */
	public static final String NAME_R_AXILLA_ANT = "r_axilla_ant";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_radial_styloid"</i> (Java syntax) or <i>r_radial_styloid</i> (XML syntax). */
	public static final String NAME_R_RADIAL_STYLOID = "r_radial_styloid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_axilla_post"</i> (Java syntax) or <i>r_axilla_post</i> (XML syntax). */
	public static final String NAME_R_AXILLA_POST = "r_axilla_post";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_olecranon"</i> (Java syntax) or <i>r_olecranon</i> (XML syntax). */
	public static final String NAME_R_OLECRANON = "r_olecranon";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_humeral_lateral_epicn"</i> (Java syntax) or <i>r_humeral_lateral_epicn</i> (XML syntax). */
	public static final String NAME_R_HUMERAL_LATERAL_EPICN = "r_humeral_lateral_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_humeral_medial_epicn"</i> (Java syntax) or <i>r_humeral_medial_epicn</i> (XML syntax). */
	public static final String NAME_R_HUMERAL_MEDIAL_EPICN = "r_humeral_medial_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_radiale"</i> (Java syntax) or <i>r_radiale</i> (XML syntax). */
	public static final String NAME_R_RADIALE = "r_radiale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_metacarpal_pha2"</i> (Java syntax) or <i>r_metacarpal_pha2</i> (XML syntax). */
	public static final String NAME_R_METACARPAL_PHA2 = "r_metacarpal_pha2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_dactylion"</i> (Java syntax) or <i>r_dactylion</i> (XML syntax). */
	public static final String NAME_R_DACTYLION = "r_dactylion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_ulnar_styloid"</i> (Java syntax) or <i>r_ulnar_styloid</i> (XML syntax). */
	public static final String NAME_R_ULNAR_STYLOID = "r_ulnar_styloid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_metacarpal_pha5"</i> (Java syntax) or <i>r_metacarpal_pha5</i> (XML syntax). */
	public static final String NAME_R_METACARPAL_PHA5 = "r_metacarpal_pha5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_acromion"</i> (Java syntax) or <i>l_acromion</i> (XML syntax). */
	public static final String NAME_L_ACROMION = "l_acromion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_axilla_ant"</i> (Java syntax) or <i>l_axilla_ant</i> (XML syntax). */
	public static final String NAME_L_AXILLA_ANT = "l_axilla_ant";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_radial_styloid"</i> (Java syntax) or <i>l_radial_styloid</i> (XML syntax). */
	public static final String NAME_L_RADIAL_STYLOID = "l_radial_styloid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_axilla_post"</i> (Java syntax) or <i>l_axilla_post</i> (XML syntax). */
	public static final String NAME_L_AXILLA_POST = "l_axilla_post";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_olecranon"</i> (Java syntax) or <i>l_olecranon</i> (XML syntax). */
	public static final String NAME_L_OLECRANON = "l_olecranon";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_humeral_lateral_epicn"</i> (Java syntax) or <i>l_humeral_lateral_epicn</i> (XML syntax). */
	public static final String NAME_L_HUMERAL_LATERAL_EPICN = "l_humeral_lateral_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_humeral_medial_epicn"</i> (Java syntax) or <i>l_humeral_medial_epicn</i> (XML syntax). */
	public static final String NAME_L_HUMERAL_MEDIAL_EPICN = "l_humeral_medial_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_radiale"</i> (Java syntax) or <i>l_radiale</i> (XML syntax). */
	public static final String NAME_L_RADIALE = "l_radiale";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_metacarpal_pha2"</i> (Java syntax) or <i>l_metacarpal_pha2</i> (XML syntax). */
	public static final String NAME_L_METACARPAL_PHA2 = "l_metacarpal_pha2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_dactylion"</i> (Java syntax) or <i>l_dactylion</i> (XML syntax). */
	public static final String NAME_L_DACTYLION = "l_dactylion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_ulnar_styloid"</i> (Java syntax) or <i>l_ulnar_styloid</i> (XML syntax). */
	public static final String NAME_L_ULNAR_STYLOID = "l_ulnar_styloid";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_metacarpal_pha5"</i> (Java syntax) or <i>l_metacarpal_pha5</i> (XML syntax). */
	public static final String NAME_L_METACARPAL_PHA5 = "l_metacarpal_pha5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_knee_crease"</i> (Java syntax) or <i>r_knee_crease</i> (XML syntax). */
	public static final String NAME_R_KNEE_CREASE = "r_knee_crease";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_femoral_lateral_epicn"</i> (Java syntax) or <i>r_femoral_lateral_epicn</i> (XML syntax). */
	public static final String NAME_R_FEMORAL_LATERAL_EPICN = "r_femoral_lateral_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_femoral_medial_epicn"</i> (Java syntax) or <i>r_femoral_medial_epicn</i> (XML syntax). */
	public static final String NAME_R_FEMORAL_MEDIAL_EPICN = "r_femoral_medial_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_metatarsal_pha5"</i> (Java syntax) or <i>r_metatarsal_pha5</i> (XML syntax). */
	public static final String NAME_R_METATARSAL_PHA5 = "r_metatarsal_pha5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_lateral_malleolus"</i> (Java syntax) or <i>r_lateral_malleolus</i> (XML syntax). */
	public static final String NAME_R_LATERAL_MALLEOLUS = "r_lateral_malleolus";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_medial_malleolus"</i> (Java syntax) or <i>r_medial_malleolus</i> (XML syntax). */
	public static final String NAME_R_MEDIAL_MALLEOLUS = "r_medial_malleolus";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_sphyrion"</i> (Java syntax) or <i>r_sphyrion</i> (XML syntax). */
	public static final String NAME_R_SPHYRION = "r_sphyrion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_metatarsal_pha1"</i> (Java syntax) or <i>r_metatarsal_pha1</i> (XML syntax). */
	public static final String NAME_R_METATARSAL_PHA1 = "r_metatarsal_pha1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_calcaneous_post"</i> (Java syntax) or <i>r_calcaneous_post</i> (XML syntax). */
	public static final String NAME_R_CALCANEOUS_POST = "r_calcaneous_post";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_digit2"</i> (Java syntax) or <i>r_digit2</i> (XML syntax). */
	public static final String NAME_R_DIGIT2 = "r_digit2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_knee_crease"</i> (Java syntax) or <i>l_knee_crease</i> (XML syntax). */
	public static final String NAME_L_KNEE_CREASE = "l_knee_crease";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_femoral_lateral_epicn"</i> (Java syntax) or <i>l_femoral_lateral_epicn</i> (XML syntax). */
	public static final String NAME_L_FEMORAL_LATERAL_EPICN = "l_femoral_lateral_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_femoral_medial_epicn"</i> (Java syntax) or <i>l_femoral_medial_epicn</i> (XML syntax). */
	public static final String NAME_L_FEMORAL_MEDIAL_EPICN = "l_femoral_medial_epicn";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_metatarsal_pha5"</i> (Java syntax) or <i>l_metatarsal_pha5</i> (XML syntax). */
	public static final String NAME_L_METATARSAL_PHA5 = "l_metatarsal_pha5";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_lateral_malleolus"</i> (Java syntax) or <i>l_lateral_malleolus</i> (XML syntax). */
	public static final String NAME_L_LATERAL_MALLEOLUS = "l_lateral_malleolus";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_medial_malleolus"</i> (Java syntax) or <i>l_medial_malleolus</i> (XML syntax). */
	public static final String NAME_L_MEDIAL_MALLEOLUS = "l_medial_malleolus";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_sphyrion"</i> (Java syntax) or <i>l_sphyrion</i> (XML syntax). */
	public static final String NAME_L_SPHYRION = "l_sphyrion";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_metatarsal_pha1"</i> (Java syntax) or <i>l_metatarsal_pha1</i> (XML syntax). */
	public static final String NAME_L_METATARSAL_PHA1 = "l_metatarsal_pha1";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_calcaneous_post"</i> (Java syntax) or <i>l_calcaneous_post</i> (XML syntax). */
	public static final String NAME_L_CALCANEOUS_POST = "l_calcaneous_post";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_digit2"</i> (Java syntax) or <i>l_digit2</i> (XML syntax). */
	public static final String NAME_L_DIGIT2 = "l_digit2";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"crotch"</i> (Java syntax) or <i>crotch</i> (XML syntax). */
	public static final String NAME_CROTCH = "crotch";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"r_neck_base"</i> (Java syntax) or <i>r_neck_base</i> (XML syntax). */
	public static final String NAME_R_NECK_BASE = "r_neck_base";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"l_neck_base"</i> (Java syntax) or <i>l_neck_base</i> (XML syntax). */
	public static final String NAME_L_NECK_BASE = "l_neck_base";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"navel"</i> (Java syntax) or <i>navel</i> (XML syntax). */
	public static final String NAME_NAVEL = "navel";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>HAnimDisplacer</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "HAnimDisplacer";

	/** Provides name of this element: <i>HAnimDisplacer</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>HAnimDisplacer</i> element: <i>H-Anim</i> */
	public static final String COMPONENT = "H-Anim";

	/** Defines X3D component for the <i>HAnimDisplacer</i> element: <i>H-Anim</i>
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

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** SFFloat field named <i>weight</i> has default value <i>0.0f</i> (Java syntax) or <i>0.0</i> (XML syntax). */
	public static final float WEIGHT_DEFAULT_VALUE = 0.0f;

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
			case "coordIndex":
				result = "MFInt32";
				break;
			case "displacements":
				result = "MFVec3f";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "name":
				result = "SFString";
				break;
			case "weight":
				result = "SFFloat";
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
			case "coordIndex":
				result = "initializeOnly";
				break;
			case "displacements":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "weight":
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
	String containerField_DEFAULT_VALUE = "displacers";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for MFVec3f field named <i>displacements</i>. */
	public static final String fromField_DISPLACEMENTS = "displacements";

	/** toField ROUTE name for MFVec3f field named <i>displacements</i>. */
	public static final String toField_DISPLACEMENTS = "displacements";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFString field named <i>name</i>. */
	public static final String fromField_NAME = "name";

	/** toField ROUTE name for SFString field named <i>name</i>. */
	public static final String toField_NAME = "name";

	/** fromField ROUTE name for SFFloat field named <i>weight</i>. */
	public static final String fromField_WEIGHT = "weight";

	/** toField ROUTE name for SFFloat field named <i>weight</i>. */
	public static final String toField_WEIGHT = "weight";

	/** Constructor for HAnimDisplacerObject to initialize member variables with default values. */
	public HAnimDisplacerObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "displacers" };

		coordIndex = new ArrayList<>();
		displacements =  new float[] { };
		metadata = null; // clear out any prior node
		name = NAME_DEFAULT_VALUE;
		weight = WEIGHT_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of Integer results within allowed range of [0,infinity) from initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Defines index values into the parent HAnimSegment or HAnimBody/HAnimHumanoid coordinate array for the mesh of vertices affected by this HAnimDisplacer. Values start at index 0.
 * <ul>
 *  <li> <i> Warning:</i>  -1 sentinel values are not allowed. </li> 
 * </ul>
	 * @return value of coordIndex field
	 */
	@Override
	public int[] getCoordIndex()
	{
		final int[] valuesArray = new int[coordIndex.size()];
		int i = 0;
		for (Integer arrayElement : coordIndex) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 coordIndex field, similar to {@link #getCoordIndex()}.

	 * @return value of coordIndex field
	 */
	public ArrayList<Integer> getCoordIndexList()
	{
		return coordIndex;
	}

	/**
	 * Assign Integer array within allowed range of [0,infinity) to initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Defines index values into the parent HAnimSegment or HAnimBody/HAnimHumanoid coordinate array for the mesh of vertices affected by this HAnimDisplacer. Values start at index 0. Warning: -1 sentinel values are not allowed.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacerObject setCoordIndex(int[] newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		coordIndex.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			coordIndex.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 coordIndex field, similar to {@link #setCoordIndex(int[])}.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setCoordIndex(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setCoordIndex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 coordIndex field, similar to {@link #setCoordIndex(int[])}.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setCoordIndex(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		coordIndex = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of coordIndex field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimDisplacerObject clearCoordIndex()
	{
		coordIndex.clear(); // reset
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>displacements</i>.
	 * <br><br>
	 * <i>Tooltip:</i> displacements are a set of SFVec3f values added to neutral/resting position of each of the corresponding HAnimSegment vertices (or HAnimJoint/HAnimHumanoid vertices) referenced by coordIndex field.
 * <ul>
 *  <li> <i>Hint:</i> Individual displacement values are scaled by the weight factor, if present. </li> 
 *  <li> <i>Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
	 * @return value of displacements field
	 */
	@Override
	public float[] getDisplacements()
	{
		return displacements;
	}

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>displacements</i>.
	 * <br><br>
	 * <i>Tooltip:</i> displacements are a set of SFVec3f values added to neutral/resting position of each of the corresponding HAnimSegment vertices (or HAnimJoint/HAnimHumanoid vertices) referenced by coordIndex field. Hint: Individual displacement values are scaled by the weight factor, if present. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the displacements field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacerObject setDisplacements(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimDisplacer displacements newValue=" + MFVec3fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		displacements = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec3f displacements field, similar to {@link #setDisplacements(float[])}.
	 * @param newValue is new value for the displacements field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setDisplacements(MFVec3fObject newValue)
	{
		setDisplacements(newValue.getPrimitiveValue());
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacerObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimDisplacerObject clearMetadata()
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimDisplacerObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide String enumeration value ['sellion'|'r_infraorbitale'|'l_infraorbitale'|'supramenton'|'r_tragion'|'r_gonion'|'l_tragion'|'l_gonion'|'nuchale'|'r_clavicale'|'suprasternale'|'l_clavicale'|'r_thelion'|'l_thelion'|'substernale'|'r_rib10'|'r_asis'|'l_rib10'|'l_asis'|'r_iliocristale'|'r_trochanterion'|'l_iliocristale'|'l_trochanterion'|'cervicale'|'rib10_midspine'|'r_psis'|'l_psis'|'waist_preferred_post'|'r_acromion'|'r_axilla_ant'|'r_radial_styloid'|'r_axilla_post'|'r_olecranon'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_radiale'|'r_metacarpal_pha2'|'r_dactylion'|'r_ulnar_styloid'|'r_metacarpal_pha5'|'l_acromion'|'l_axilla_ant'|'l_radial_styloid'|'l_axilla_post'|'l_olecranon'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_radiale'|'l_metacarpal_pha2'|'l_dactylion'|'l_ulnar_styloid'|'l_metacarpal_pha5'|'r_knee_crease'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_metatarsal_pha5'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_sphyrion'|'r_metatarsal_pha1'|'r_calcaneous_post'|'r_digit2'|'l_knee_crease'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_metatarsal_pha5'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_sphyrion'|'l_metatarsal_pha1'|'l_calcaneous_post'|'l_digit2'|'crotch'|'r_neck_base'|'l_neck_base'|'navel'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimDisplacer node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: sellion r_infraorbitale etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> H-Anim Feature Points <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Feature points for the human body <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NAME_SELLION SELLION}, {@link #NAME_R_INFRAORBITALE R_INFRAORBITALE}, {@link #NAME_L_INFRAORBITALE L_INFRAORBITALE}, {@link #NAME_SUPRAMENTON SUPRAMENTON}, {@link #NAME_R_TRAGION R_TRAGION}, {@link #NAME_R_GONION R_GONION}, {@link #NAME_L_TRAGION L_TRAGION}, {@link #NAME_L_GONION L_GONION}, {@link #NAME_NUCHALE NUCHALE}, {@link #NAME_R_CLAVICALE R_CLAVICALE}, {@link #NAME_SUPRASTERNALE SUPRASTERNALE}, {@link #NAME_L_CLAVICALE L_CLAVICALE}, {@link #NAME_R_THELION R_THELION}, {@link #NAME_L_THELION L_THELION}, {@link #NAME_SUBSTERNALE SUBSTERNALE}, {@link #NAME_R_RIB10 R_RIB10}, {@link #NAME_R_ASIS R_ASIS}, {@link #NAME_L_RIB10 L_RIB10}, {@link #NAME_L_ASIS L_ASIS}, {@link #NAME_R_ILIOCRISTALE R_ILIOCRISTALE}, {@link #NAME_R_TROCHANTERION R_TROCHANTERION}, {@link #NAME_L_ILIOCRISTALE L_ILIOCRISTALE}, {@link #NAME_L_TROCHANTERION L_TROCHANTERION}, {@link #NAME_CERVICALE CERVICALE}, {@link #NAME_RIB10_MIDSPINE RIB10_MIDSPINE}, {@link #NAME_R_PSIS R_PSIS}, {@link #NAME_L_PSIS L_PSIS}, {@link #NAME_WAIST_PREFERRED_POST WAIST_PREFERRED_POST}, {@link #NAME_R_ACROMION R_ACROMION}, {@link #NAME_R_AXILLA_ANT R_AXILLA_ANT}, {@link #NAME_R_RADIAL_STYLOID R_RADIAL_STYLOID}, {@link #NAME_R_AXILLA_POST R_AXILLA_POST}, {@link #NAME_R_OLECRANON R_OLECRANON}, {@link #NAME_R_HUMERAL_LATERAL_EPICN R_HUMERAL_LATERAL_EPICN}, {@link #NAME_R_HUMERAL_MEDIAL_EPICN R_HUMERAL_MEDIAL_EPICN}, {@link #NAME_R_RADIALE R_RADIALE}, {@link #NAME_R_METACARPAL_PHA2 R_METACARPAL_PHA2}, {@link #NAME_R_DACTYLION R_DACTYLION}, {@link #NAME_R_ULNAR_STYLOID R_ULNAR_STYLOID}, {@link #NAME_R_METACARPAL_PHA5 R_METACARPAL_PHA5}, {@link #NAME_L_ACROMION L_ACROMION}, {@link #NAME_L_AXILLA_ANT L_AXILLA_ANT}, {@link #NAME_L_RADIAL_STYLOID L_RADIAL_STYLOID}, {@link #NAME_L_AXILLA_POST L_AXILLA_POST}, {@link #NAME_L_OLECRANON L_OLECRANON}, {@link #NAME_L_HUMERAL_LATERAL_EPICN L_HUMERAL_LATERAL_EPICN}, {@link #NAME_L_HUMERAL_MEDIAL_EPICN L_HUMERAL_MEDIAL_EPICN}, {@link #NAME_L_RADIALE L_RADIALE}, {@link #NAME_L_METACARPAL_PHA2 L_METACARPAL_PHA2}, {@link #NAME_L_DACTYLION L_DACTYLION}, {@link #NAME_L_ULNAR_STYLOID L_ULNAR_STYLOID}, {@link #NAME_L_METACARPAL_PHA5 L_METACARPAL_PHA5}, {@link #NAME_R_KNEE_CREASE R_KNEE_CREASE}, {@link #NAME_R_FEMORAL_LATERAL_EPICN R_FEMORAL_LATERAL_EPICN}, {@link #NAME_R_FEMORAL_MEDIAL_EPICN R_FEMORAL_MEDIAL_EPICN}, {@link #NAME_R_METATARSAL_PHA5 R_METATARSAL_PHA5}, {@link #NAME_R_LATERAL_MALLEOLUS R_LATERAL_MALLEOLUS}, {@link #NAME_R_MEDIAL_MALLEOLUS R_MEDIAL_MALLEOLUS}, {@link #NAME_R_SPHYRION R_SPHYRION}, {@link #NAME_R_METATARSAL_PHA1 R_METATARSAL_PHA1}, {@link #NAME_R_CALCANEOUS_POST R_CALCANEOUS_POST}, {@link #NAME_R_DIGIT2 R_DIGIT2}, {@link #NAME_L_KNEE_CREASE L_KNEE_CREASE}, {@link #NAME_L_FEMORAL_LATERAL_EPICN L_FEMORAL_LATERAL_EPICN}, {@link #NAME_L_FEMORAL_MEDIAL_EPICN L_FEMORAL_MEDIAL_EPICN}, {@link #NAME_L_METATARSAL_PHA5 L_METATARSAL_PHA5}, {@link #NAME_L_LATERAL_MALLEOLUS L_LATERAL_MALLEOLUS}, {@link #NAME_L_MEDIAL_MALLEOLUS L_MEDIAL_MALLEOLUS}, {@link #NAME_L_SPHYRION L_SPHYRION}, {@link #NAME_L_METATARSAL_PHA1 L_METATARSAL_PHA1}, {@link #NAME_L_CALCANEOUS_POST L_CALCANEOUS_POST}, {@link #NAME_L_DIGIT2 L_DIGIT2}, {@link #NAME_CROTCH CROTCH}, {@link #NAME_R_NECK_BASE R_NECK_BASE}, {@link #NAME_L_NECK_BASE L_NECK_BASE}, {@link #NAME_NAVEL NAVEL}.
	 * @return value of name field
	 */
	@Override
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String enumeration value ("sellion"|"r_infraorbitale"|"l_infraorbitale"|"supramenton"|"r_tragion"|"r_gonion"|"l_tragion"|"l_gonion"|"nuchale"|"r_clavicale"|"suprasternale"|"l_clavicale"|"r_thelion"|"l_thelion"|"substernale"|"r_rib10"|"r_asis"|"l_rib10"|"l_asis"|"r_iliocristale"|"r_trochanterion"|"l_iliocristale"|"l_trochanterion"|"cervicale"|"rib10_midspine"|"r_psis"|"l_psis"|"waist_preferred_post"|"r_acromion"|"r_axilla_ant"|"r_radial_styloid"|"r_axilla_post"|"r_olecranon"|"r_humeral_lateral_epicn"|"r_humeral_medial_epicn"|"r_radiale"|"r_metacarpal_pha2"|"r_dactylion"|"r_ulnar_styloid"|"r_metacarpal_pha5"|"l_acromion"|"l_axilla_ant"|"l_radial_styloid"|"l_axilla_post"|"l_olecranon"|"l_humeral_lateral_epicn"|"l_humeral_medial_epicn"|"l_radiale"|"l_metacarpal_pha2"|"l_dactylion"|"l_ulnar_styloid"|"l_metacarpal_pha5"|"r_knee_crease"|"r_femoral_lateral_epicn"|"r_femoral_medial_epicn"|"r_metatarsal_pha5"|"r_lateral_malleolus"|"r_medial_malleolus"|"r_sphyrion"|"r_metatarsal_pha1"|"r_calcaneous_post"|"r_digit2"|"l_knee_crease"|"l_femoral_lateral_epicn"|"l_femoral_medial_epicn"|"l_metatarsal_pha5"|"l_lateral_malleolus"|"l_medial_malleolus"|"l_sphyrion"|"l_metatarsal_pha1"|"l_calcaneous_post"|"l_digit2"|"crotch"|"r_neck_base"|"l_neck_base"|"navel") ['sellion'|'r_infraorbitale'|'l_infraorbitale'|'supramenton'|'r_tragion'|'r_gonion'|'l_tragion'|'l_gonion'|'nuchale'|'r_clavicale'|'suprasternale'|'l_clavicale'|'r_thelion'|'l_thelion'|'substernale'|'r_rib10'|'r_asis'|'l_rib10'|'l_asis'|'r_iliocristale'|'r_trochanterion'|'l_iliocristale'|'l_trochanterion'|'cervicale'|'rib10_midspine'|'r_psis'|'l_psis'|'waist_preferred_post'|'r_acromion'|'r_axilla_ant'|'r_radial_styloid'|'r_axilla_post'|'r_olecranon'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_radiale'|'r_metacarpal_pha2'|'r_dactylion'|'r_ulnar_styloid'|'r_metacarpal_pha5'|'l_acromion'|'l_axilla_ant'|'l_radial_styloid'|'l_axilla_post'|'l_olecranon'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_radiale'|'l_metacarpal_pha2'|'l_dactylion'|'l_ulnar_styloid'|'l_metacarpal_pha5'|'r_knee_crease'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_metatarsal_pha5'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_sphyrion'|'r_metatarsal_pha1'|'r_calcaneous_post'|'r_digit2'|'l_knee_crease'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_metatarsal_pha5'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_sphyrion'|'l_metatarsal_pha1'|'l_calcaneous_post'|'l_digit2'|'crotch'|'r_neck_base'|'l_neck_base'|'navel'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #NAME_SELLION SELLION}, {@link #NAME_R_INFRAORBITALE R_INFRAORBITALE}, {@link #NAME_L_INFRAORBITALE L_INFRAORBITALE}, {@link #NAME_SUPRAMENTON SUPRAMENTON}, {@link #NAME_R_TRAGION R_TRAGION}, {@link #NAME_R_GONION R_GONION}, {@link #NAME_L_TRAGION L_TRAGION}, {@link #NAME_L_GONION L_GONION}, {@link #NAME_NUCHALE NUCHALE}, {@link #NAME_R_CLAVICALE R_CLAVICALE}, {@link #NAME_SUPRASTERNALE SUPRASTERNALE}, {@link #NAME_L_CLAVICALE L_CLAVICALE}, {@link #NAME_R_THELION R_THELION}, {@link #NAME_L_THELION L_THELION}, {@link #NAME_SUBSTERNALE SUBSTERNALE}, {@link #NAME_R_RIB10 R_RIB10}, {@link #NAME_R_ASIS R_ASIS}, {@link #NAME_L_RIB10 L_RIB10}, {@link #NAME_L_ASIS L_ASIS}, {@link #NAME_R_ILIOCRISTALE R_ILIOCRISTALE}, {@link #NAME_R_TROCHANTERION R_TROCHANTERION}, {@link #NAME_L_ILIOCRISTALE L_ILIOCRISTALE}, {@link #NAME_L_TROCHANTERION L_TROCHANTERION}, {@link #NAME_CERVICALE CERVICALE}, {@link #NAME_RIB10_MIDSPINE RIB10_MIDSPINE}, {@link #NAME_R_PSIS R_PSIS}, {@link #NAME_L_PSIS L_PSIS}, {@link #NAME_WAIST_PREFERRED_POST WAIST_PREFERRED_POST}, {@link #NAME_R_ACROMION R_ACROMION}, {@link #NAME_R_AXILLA_ANT R_AXILLA_ANT}, {@link #NAME_R_RADIAL_STYLOID R_RADIAL_STYLOID}, {@link #NAME_R_AXILLA_POST R_AXILLA_POST}, {@link #NAME_R_OLECRANON R_OLECRANON}, {@link #NAME_R_HUMERAL_LATERAL_EPICN R_HUMERAL_LATERAL_EPICN}, {@link #NAME_R_HUMERAL_MEDIAL_EPICN R_HUMERAL_MEDIAL_EPICN}, {@link #NAME_R_RADIALE R_RADIALE}, {@link #NAME_R_METACARPAL_PHA2 R_METACARPAL_PHA2}, {@link #NAME_R_DACTYLION R_DACTYLION}, {@link #NAME_R_ULNAR_STYLOID R_ULNAR_STYLOID}, {@link #NAME_R_METACARPAL_PHA5 R_METACARPAL_PHA5}, {@link #NAME_L_ACROMION L_ACROMION}, {@link #NAME_L_AXILLA_ANT L_AXILLA_ANT}, {@link #NAME_L_RADIAL_STYLOID L_RADIAL_STYLOID}, {@link #NAME_L_AXILLA_POST L_AXILLA_POST}, {@link #NAME_L_OLECRANON L_OLECRANON}, {@link #NAME_L_HUMERAL_LATERAL_EPICN L_HUMERAL_LATERAL_EPICN}, {@link #NAME_L_HUMERAL_MEDIAL_EPICN L_HUMERAL_MEDIAL_EPICN}, {@link #NAME_L_RADIALE L_RADIALE}, {@link #NAME_L_METACARPAL_PHA2 L_METACARPAL_PHA2}, {@link #NAME_L_DACTYLION L_DACTYLION}, {@link #NAME_L_ULNAR_STYLOID L_ULNAR_STYLOID}, {@link #NAME_L_METACARPAL_PHA5 L_METACARPAL_PHA5}, {@link #NAME_R_KNEE_CREASE R_KNEE_CREASE}, {@link #NAME_R_FEMORAL_LATERAL_EPICN R_FEMORAL_LATERAL_EPICN}, {@link #NAME_R_FEMORAL_MEDIAL_EPICN R_FEMORAL_MEDIAL_EPICN}, {@link #NAME_R_METATARSAL_PHA5 R_METATARSAL_PHA5}, {@link #NAME_R_LATERAL_MALLEOLUS R_LATERAL_MALLEOLUS}, {@link #NAME_R_MEDIAL_MALLEOLUS R_MEDIAL_MALLEOLUS}, {@link #NAME_R_SPHYRION R_SPHYRION}, {@link #NAME_R_METATARSAL_PHA1 R_METATARSAL_PHA1}, {@link #NAME_R_CALCANEOUS_POST R_CALCANEOUS_POST}, {@link #NAME_R_DIGIT2 R_DIGIT2}, {@link #NAME_L_KNEE_CREASE L_KNEE_CREASE}, {@link #NAME_L_FEMORAL_LATERAL_EPICN L_FEMORAL_LATERAL_EPICN}, {@link #NAME_L_FEMORAL_MEDIAL_EPICN L_FEMORAL_MEDIAL_EPICN}, {@link #NAME_L_METATARSAL_PHA5 L_METATARSAL_PHA5}, {@link #NAME_L_LATERAL_MALLEOLUS L_LATERAL_MALLEOLUS}, {@link #NAME_L_MEDIAL_MALLEOLUS L_MEDIAL_MALLEOLUS}, {@link #NAME_L_SPHYRION L_SPHYRION}, {@link #NAME_L_METATARSAL_PHA1 L_METATARSAL_PHA1}, {@link #NAME_L_CALCANEOUS_POST L_CALCANEOUS_POST}, {@link #NAME_L_DIGIT2 L_DIGIT2}, {@link #NAME_CROTCH CROTCH}, {@link #NAME_R_NECK_BASE R_NECK_BASE}, {@link #NAME_L_NECK_BASE L_NECK_BASE}, {@link #NAME_NAVEL NAVEL}).
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimDisplacer node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: sellion r_infraorbitale etc. as listed in H-Anim Specification. Hint: H-Anim Feature Points http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt Hint: H-Anim Specification, Feature points for the human body http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimDisplacerObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(NAME_SELLION) ||
			newValue.equals(NAME_R_INFRAORBITALE) ||
			newValue.equals(NAME_L_INFRAORBITALE) ||
			newValue.equals(NAME_SUPRAMENTON) ||
			newValue.equals(NAME_R_TRAGION) ||
			newValue.equals(NAME_R_GONION) ||
			newValue.equals(NAME_L_TRAGION) ||
			newValue.equals(NAME_L_GONION) ||
			newValue.equals(NAME_NUCHALE) ||
			newValue.equals(NAME_R_CLAVICALE) ||
			newValue.equals(NAME_SUPRASTERNALE) ||
			newValue.equals(NAME_L_CLAVICALE) ||
			newValue.equals(NAME_R_THELION) ||
			newValue.equals(NAME_L_THELION) ||
			newValue.equals(NAME_SUBSTERNALE) ||
			newValue.equals(NAME_R_RIB10) ||
			newValue.equals(NAME_R_ASIS) ||
			newValue.equals(NAME_L_RIB10) ||
			newValue.equals(NAME_L_ASIS) ||
			newValue.equals(NAME_R_ILIOCRISTALE) ||
			newValue.equals(NAME_R_TROCHANTERION) ||
			newValue.equals(NAME_L_ILIOCRISTALE) ||
			newValue.equals(NAME_L_TROCHANTERION) ||
			newValue.equals(NAME_CERVICALE) ||
			newValue.equals(NAME_RIB10_MIDSPINE) ||
			newValue.equals(NAME_R_PSIS) ||
			newValue.equals(NAME_L_PSIS) ||
			newValue.equals(NAME_WAIST_PREFERRED_POST) ||
			newValue.equals(NAME_R_ACROMION) ||
			newValue.equals(NAME_R_AXILLA_ANT) ||
			newValue.equals(NAME_R_RADIAL_STYLOID) ||
			newValue.equals(NAME_R_AXILLA_POST) ||
			newValue.equals(NAME_R_OLECRANON) ||
			newValue.equals(NAME_R_HUMERAL_LATERAL_EPICN) ||
			newValue.equals(NAME_R_HUMERAL_MEDIAL_EPICN) ||
			newValue.equals(NAME_R_RADIALE) ||
			newValue.equals(NAME_R_METACARPAL_PHA2) ||
			newValue.equals(NAME_R_DACTYLION) ||
			newValue.equals(NAME_R_ULNAR_STYLOID) ||
			newValue.equals(NAME_R_METACARPAL_PHA5) ||
			newValue.equals(NAME_L_ACROMION) ||
			newValue.equals(NAME_L_AXILLA_ANT) ||
			newValue.equals(NAME_L_RADIAL_STYLOID) ||
			newValue.equals(NAME_L_AXILLA_POST) ||
			newValue.equals(NAME_L_OLECRANON) ||
			newValue.equals(NAME_L_HUMERAL_LATERAL_EPICN) ||
			newValue.equals(NAME_L_HUMERAL_MEDIAL_EPICN) ||
			newValue.equals(NAME_L_RADIALE) ||
			newValue.equals(NAME_L_METACARPAL_PHA2) ||
			newValue.equals(NAME_L_DACTYLION) ||
			newValue.equals(NAME_L_ULNAR_STYLOID) ||
			newValue.equals(NAME_L_METACARPAL_PHA5) ||
			newValue.equals(NAME_R_KNEE_CREASE) ||
			newValue.equals(NAME_R_FEMORAL_LATERAL_EPICN) ||
			newValue.equals(NAME_R_FEMORAL_MEDIAL_EPICN) ||
			newValue.equals(NAME_R_METATARSAL_PHA5) ||
			newValue.equals(NAME_R_LATERAL_MALLEOLUS) ||
			newValue.equals(NAME_R_MEDIAL_MALLEOLUS) ||
			newValue.equals(NAME_R_SPHYRION) ||
			newValue.equals(NAME_R_METATARSAL_PHA1) ||
			newValue.equals(NAME_R_CALCANEOUS_POST) ||
			newValue.equals(NAME_R_DIGIT2) ||
			newValue.equals(NAME_L_KNEE_CREASE) ||
			newValue.equals(NAME_L_FEMORAL_LATERAL_EPICN) ||
			newValue.equals(NAME_L_FEMORAL_MEDIAL_EPICN) ||
			newValue.equals(NAME_L_METATARSAL_PHA5) ||
			newValue.equals(NAME_L_LATERAL_MALLEOLUS) ||
			newValue.equals(NAME_L_MEDIAL_MALLEOLUS) ||
			newValue.equals(NAME_L_SPHYRION) ||
			newValue.equals(NAME_L_METATARSAL_PHA1) ||
			newValue.equals(NAME_L_CALCANEOUS_POST) ||
			newValue.equals(NAME_L_DIGIT2) ||
			newValue.equals(NAME_CROTCH) ||
			newValue.equals(NAME_R_NECK_BASE) ||
			newValue.equals(NAME_L_NECK_BASE) ||
			newValue.equals(NAME_NAVEL))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimDisplacer name newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimDisplacer
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimDisplacer name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimDisplacer name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The weigh factor has typical range [0,1] and defines the scale factor applied to displacement values before adding them to neutral vertex positions.
 * <ul>
 *  <li> <i> Hint:</i>  apply a non-zero weight factor to see the effect of HAnimDisplacer displacements. </li> 
 * </ul>
	 * @return value of weight field
	 */
	@Override
	public float getWeight()
	{
		return weight;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The weigh factor has typical range [0,1] and defines the scale factor applied to displacement values before adding them to neutral vertex positions. Hint: apply a non-zero weight factor to see the effect of HAnimDisplacer displacements.
	 * @param newValue is new value for the weight field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacerObject setWeight(float newValue)
	{
		weight = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat weight field, similar to {@link #setWeight(float)}.
	 * @param newValue is new value for the weight field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setWeight(SFFloatObject newValue)
	{
		setWeight(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes.
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimDisplacerObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimDisplacer
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimDisplacer DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimDisplacer DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setDEF(SFStringObject newValue)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimDisplacerObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimDisplacer
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimDisplacer USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimDisplacer USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimDisplacerObject setCssClass(String newValue)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setCssClass(SFStringObject newValue)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacerObject setIS(ISObject newValue)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacerObject setUSE(HAnimDisplacerObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on HAnimDisplacerObject" +
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
	public HAnimDisplacerObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Utility constructor that assigns both DEF label and name, after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 * @param newName  name for this meta element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimDisplacerObject">X3D Tooltips: HAnimDisplacerObject</a>
	 */
	public HAnimDisplacerObject (String DEFlabel, String newName)
	{
		initialize();
		setDEF  (DEFlabel);
		setName (newName);
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimDisplacerObject addComments (String newComment)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimDisplacerObject addComments (String[] newComments)
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
	 * @return {@link HAnimDisplacerObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimDisplacerObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<HAnimDisplacer"); // start opening tag
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
                            
			if (((getCoordIndex().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" coordIndex='").append(MFInt32Object.toString(getCoordIndex())).append("'");
			}
			if ((getDisplacements().length > 0) && !isUSE())
			{
				stringX3D.append(" displacements='").append(MFVec3fObject.toString(getDisplacements())).append("'");
			}
			if (((getWeight() != WEIGHT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weight='").append(SFFloatObject.toString(getWeight())).append("'");
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
			stringX3D.append(indent).append("</HAnimDisplacer>").append("\n"); // finish closing tag
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
			stringClassicVRML.append("HAnimDisplacer").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("coordIndex"))
						{
							stringClassicVRML.append(indentCharacter).append("coordIndex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getCoordIndex().length > 0)
				{
					stringClassicVRML.append("coordIndex ").append("[ ").append(MFInt32Object.toString(getCoordIndex())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("displacements"))
						{
							stringClassicVRML.append(indentCharacter).append("displacements").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDisplacements().length > 0) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("displacements ").append("[ ").append(MFVec3fObject.toString(getDisplacements())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("weight"))
						{
							stringClassicVRML.append(indentCharacter).append("weight").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWeight() != WEIGHT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("weight ").append(SFFloatObject.toString(getWeight())).append("\n").append(indent).append(indentCharacter);
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
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
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

		setCoordIndex(getCoordIndex()); // exercise field checks, simple types

		setDisplacements(getDisplacements()); // exercise field checks, simple types

		if (getName().isEmpty() && !isUSE()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		setWeight(getWeight()); // exercise field checks, simple types

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
			String errorNotice = "HAnimDisplacer USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "HAnimDisplacer USE='" + getUSE() + "' is not allowed to have contained comments";
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
