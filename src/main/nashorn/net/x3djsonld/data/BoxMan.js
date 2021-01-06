load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare). </p>
 <p> Related links: BoxMan.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.BoxMan&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d">BoxMan.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> James Smith - james@vapourtech.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman and Matt Beitler </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 March 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 19 October 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 4 July 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org" target="_blank">http://HAnim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> boxman.original.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js">BoxMan.js</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Skin mesh is split across multiple shapes within a Group, should that be allowed? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> What does the original animation script accomplish? It is not hooked up, script source contains errors... </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. <a href="http://forum.instantreality.org" target="_blank">http://forum.instantreality.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManViewInclined.png">BoxManViewInclined.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManViewFront.png">BoxManViewFront.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManViewRight.png">BoxManViewRight.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManViewLeft.png">BoxManViewLeft.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManViewTop.png">BoxManViewTop.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManAnimationPanel.x3d">BoxManAnimationPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl" target="_blank">http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.vapourtech.com/team/james/boxman.wrl" target="_blank">http://www.vapourtech.com/team/james/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Specifications/HAnim2001" target="_blank">http://HAnim.org/Specifications/HAnim2001</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models" target="_blank">http://HAnim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Nodes" target="_blank">http://HAnim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/X3dToVrml97.xslt" target="_blank">https://www.web3d.org/x3d/content/X3dToVrml97.xslt</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> (C) 2000 James Smith - james@vapourtech.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.vapourtech.com" target="_blank">http://www.vapourtech.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BoxMan HAnim 2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author James Smith - james@vapourtech.com
 */

function BoxMan
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
BoxMan.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=3, element #34, 14 total values */
	this.WorldInfo_3_34_info = new MFStringObject(new MFStringObject("\"(C) 2000 James Smith - james@vapourtech.com\" \"http://www.vapourtech.com/team/james/boxman.wrl\" \"Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com\""));

	/** Large attribute array: HAnimHumanoid DEF='boxman_Humanoid' info field, scene-graph level=3, element #36, 10 total values */
	this.boxman_Humanoid_3_36_info = new MFStringObject(new MFStringObject("\"authorName=James Smith\" \"authorEmail=james@vapourtech.com\" \"copyright=(C) 2000 James Smith - james@vapourtech.com\" \"humanoidVersion=1.0\""));

	/** Large attribute array: HAnimJoint DEF='boxman_r_hip' skinCoordIndex field, scene-graph level=5, element #63, 32 total numbers */
	this.boxman_r_hip_5_63_skinCoordIndex = new MFInt32Object(Java.to([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111], Java.type("int[]")));

	/** Large attribute array: HAnimJoint DEF='boxman_r_knee' skinCoordIndex field, scene-graph level=6, element #66, 28 total numbers */
	this.boxman_r_knee_6_66_skinCoordIndex = new MFInt32Object(Java.to([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131], Java.type("int[]")));

	/** Large attribute array: Coordinate DEF='SKINCOORD' point field, scene-graph level=4, element #120, 672 total numbers made up of 224 3-tuple values */
	this.SKINCOORD_4_120_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.10,0.05,0.12,1.10,0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.12,1.10,-0.1,-0.12,1.10,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.05,1.56,0.030,0.05,1.56,0.030,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.60,0.060,0.05,1.60,0.060,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.60,0.13,0.07,1.60,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1], Java.type("float[]"))));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #123, 888 total numbers */
	this.IndexedFaceSet_6_123_coordIndex = new MFInt32Object(Java.to([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1], Java.type("int[]")));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #128, 272 total numbers */
	this.IndexedFaceSet_6_128_coordIndex = new MFInt32Object(Java.to([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1], Java.type("int[]")));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #133, 400 total numbers */
	this.IndexedFaceSet_6_133_coordIndex = new MFInt32Object(Java.to([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1], Java.type("int[]")));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #138, 216 total numbers */
	this.IndexedFaceSet_6_138_coordIndex = new MFInt32Object(Java.to([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1], Java.type("int[]")));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #143, 1776 total numbers */
	this.IndexedLineSet_6_143_coordIndex = new MFInt32Object(Java.to([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1], Java.type("int[]")));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("HAnim").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("BoxMan.x3d"))
    .addMeta(new metaObject().setName("description").setContent("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."))
    .addMeta(new metaObject().setName("creator").setContent("James Smith - james@vapourtech.com"))
    .addMeta(new metaObject().setName("translator").setContent("Don Brutzman and Matt Beitler"))
    .addMeta(new metaObject().setName("created").setContent("1 March 2001"))
    .addMeta(new metaObject().setName("translated").setContent("19 October 2001"))
    .addMeta(new metaObject().setName("modified").setContent("4 July 2020"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org"))
    .addMeta(new metaObject().setName("reference").setContent("boxman.original.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("BoxMan.js"))
    .addMeta(new metaObject().setName("warning").setContent("Skin mesh is split across multiple shapes within a Group, should that be allowed?"))
    .addMeta(new metaObject().setName("TODO").setContent("What does the original animation script accomplish? It is not hooked up, script source contains errors..."))
    .addMeta(new metaObject().setName("TODO").setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
    .addMeta(new metaObject().setName("Image").setContent("BoxManViewInclined.png"))
    .addMeta(new metaObject().setName("Image").setContent("BoxManViewFront.png"))
    .addMeta(new metaObject().setName("Image").setContent("BoxManViewRight.png"))
    .addMeta(new metaObject().setName("Image").setContent("BoxManViewLeft.png"))
    .addMeta(new metaObject().setName("Image").setContent("BoxManViewTop.png"))
    .addMeta(new metaObject().setName("reference").setContent("BoxManAnimationPanel.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
    .addMeta(new metaObject().setName("rights").setContent("(C) 2000 James Smith - james@vapourtech.com"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.vapourtech.com"))
    .addMeta(new metaObject().setName("subject").setContent("BoxMan HAnim 2.0"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setInfo(this.WorldInfo_3_34_info).setTitle("BoxMan - A Seamless VRML Human"))
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(Java.to([0.6,0.6,0.6], Java.type("float[]")))).setSkyColor(new MFColorObject(Java.to([0.75,0.75,0.75], Java.type("float[]")))))
    .addComments(" When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet ")
    .addChild(new HAnimHumanoidObject("boxman_Humanoid").setName("Humanoid").setInfo(this.boxman_Humanoid_3_36_info).setVersion("1.0")
      .addSkeleton(new HAnimJointObject("boxman_humanoid_root").setName("humanoid_root").setCenter(0.0,0.9723,-0.0728).setSkinCoordIndex(Java.to([0,1,2,3,4,5,6,7,8,9,10,11], Java.type("int[]"))).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]")))
        .addChild(new HAnimSegmentObject("boxman_sacrum").setName("sacrum")
          .addChild(new TransformObject().setTranslation(0.0,0.9723,-0.0728)
            .addChild(new ShapeObject("SphereYellow")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.0)))
              .setGeometry(new SphereObject().setRadius(0.02)))))
        .addChild(new HAnimJointObject("boxman_l_hip").setName("l_hip").setCenter(0.0956,0.9364,0.0).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5], Java.type("float[]"))).setSkinCoordIndex(Java.to([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43], Java.type("int[]")))
          .addChild(new HAnimSegmentObject("boxman_l_thigh").setName("l_thigh")
            .addChild(new TransformObject().setTranslation(0.0956,0.9364,0.0)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_l_knee").setName("l_knee").setCenter(0.0956,0.5095,-0.0036).setSkinCoordWeight(Java.to([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63], Java.type("int[]")))
            .addChild(new HAnimSegmentObject("boxman_l_calf").setName("l_calf")
              .addChild(new TransformObject().setTranslation(0.0956,0.5095,-0.0036)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_l_ankle").setName("l_ankle").setCenter(0.0946,0.0762,-0.0261).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([64,65,66,67,68,69,70,71], Java.type("int[]")))
              .addChild(new HAnimSegmentObject("boxman_l_hindfoot").setName("l_hindfoot")
                .addChild(new TransformObject().setTranslation(0.0946,0.0762,-0.0261)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_l_midtarsal").setName("l_midtarsal").setCenter(0.1079,0.0317,0.0670).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([72,73,74,75,76,77,78,79], Java.type("int[]")))
                .addChild(new HAnimSegmentObject("boxman_l_middistal").setName("l_middistal")
                  .addChild(new TransformObject().setTranslation(0.1079,0.0317,0.0670)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_l_middistal_tip").setName("l_middistal_tip").setTranslation(.095,0.0005,0.1924)
                    .addChild(new ShapeObject("SphereRed")
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0)))
                      .setGeometry(new SphereObject().setRadius(0.02)))))))))
        .addChild(new HAnimJointObject("boxman_r_hip").setName("r_hip").setCenter(-0.0956,0.9364,0.0).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5], Java.type("float[]"))).setSkinCoordIndex(this.boxman_r_hip_5_63_skinCoordIndex)
          .addChild(new HAnimSegmentObject("boxman_r_thigh").setName("r_thigh")
            .addChild(new TransformObject().setTranslation(-0.0956,0.9364,0.0)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_r_knee").setName("r_knee").setCenter(-0.0956,0.5095,-0.0036).setSkinCoordWeight(Java.to([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(this.boxman_r_knee_6_66_skinCoordIndex)
            .addChild(new HAnimSegmentObject("boxman_r_calf").setName("r_calf")
              .addChild(new TransformObject().setTranslation(-0.0956,0.5095,-0.0036)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_r_ankle").setName("r_ankle").setCenter(-0.0946,0.0762,-0.0261).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([132,133,134,135,136,137,138,139], Java.type("int[]")))
              .addChild(new HAnimSegmentObject("boxman_r_hindfoot").setName("r_hindfoot")
                .addChild(new TransformObject().setTranslation(-0.0946,0.0762,-0.0261)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_r_midtarsal").setName("r_midtarsal").setCenter(-0.1079,0.0317,0.0670).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([140,141,142,143,144,145,146,147], Java.type("int[]")))
                .addChild(new HAnimSegmentObject("boxman_r_middistal").setName("r_middistal")
                  .addChild(new TransformObject().setTranslation(-0.1079,0.0317,0.0670)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_r_middistal_tip").setName("r_middistal_tip").setTranslation(-0.095,0.0005,0.1924)
                    .addChild(new ShapeObject().setUSE("SphereRed"))))))))
        .addChild(new HAnimJointObject("boxman_vl5").setName("vl5").setCenter(0.0,1.0817,-0.0728).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167], Java.type("int[]")))
          .addChild(new HAnimSegmentObject("boxman_l5").setName("l5")
            .addChild(new TransformObject().setTranslation(0.0,1.0817,-0.0728)
              .addChild(new ShapeObject().setUSE("SphereYellow"))))
          .addChild(new HAnimJointObject("boxman_skullbase").setName("skullbase").setCenter(0.0,1.6440,0.036).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([168,169,170,171,172,173,174,175], Java.type("int[]")))
            .addChild(new HAnimSegmentObject("boxman_skull").setName("skull")
              .addChild(new TransformObject().setTranslation(0.0,1.6440,0.036)
                .addChild(new ShapeObject().setUSE("SphereYellow")))
              .addChild(new HAnimSiteObject("boxman_skull_tip").setName("skull_tip").setTranslation(-0.0029,1.7771,0.0274)
                .addChild(new ShapeObject().setUSE("SphereYellow")))))
          .addChild(new HAnimJointObject("boxman_l_shoulder").setName("l_shoulder").setCenter(0.1968,1.4642,-0.0265).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([176,177,178,179,180,181,182,183], Java.type("int[]")))
            .addChild(new HAnimSegmentObject("boxman_l_upperarm").setName("l_upperarm")
              .addChild(new TransformObject().setTranslation(0.1968,1.4642,-0.0265)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_l_elbow").setName("l_elbow").setCenter(0.1982,1.1622,-0.0557).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([184,185,186,187,188,189,190,191], Java.type("int[]")))
              .addChild(new HAnimSegmentObject("boxman_l_forearm").setName("l_forearm")
                .addChild(new TransformObject().setTranslation(0.1982,1.1622,-0.0557)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_l_wrist").setName("l_wrist").setCenter(0.1972,0.8929,-0.0690).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([192,193,194,195,196,197,198,199], Java.type("int[]")))
                .addChild(new HAnimSegmentObject("boxman_l_hand").setName("l_hand")
                  .addChild(new TransformObject().setTranslation(0.1972,0.8929,-0.0690)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_l_hand_tip").setName("l_hand_tip").setTranslation(0.1912,0.6976,-0.0710)
                    .addChild(new ShapeObject().setUSE("SphereRed")))))))
          .addChild(new HAnimJointObject("boxman_r_shoulder").setName("r_shoulder").setCenter(-0.1968,1.4642,-0.0265).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([200,201,202,203,204,205,206,207], Java.type("int[]")))
            .addChild(new HAnimSegmentObject("boxman_r_upperarm").setName("r_upperarm")
              .addChild(new TransformObject().setTranslation(-0.1968,1.4642,-0.0265)
                .addChild(new ShapeObject().setUSE("SphereYellow"))))
            .addChild(new HAnimJointObject("boxman_r_elbow").setName("r_elbow").setCenter(-0.1982,1.1622,-0.0557).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([208,209,210,211,212,213,214,215], Java.type("int[]")))
              .addChild(new HAnimSegmentObject("boxman_r_forearm").setName("r_forearm")
                .addChild(new TransformObject().setTranslation(-0.1982,1.1622,-0.0557)
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject("boxman_r_wrist").setName("r_wrist").setCenter(-0.1972,0.8929,-0.0690).setSkinCoordWeight(Java.to([1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0], Java.type("float[]"))).setSkinCoordIndex(Java.to([216,217,218,219,220,221,222,223], Java.type("int[]")))
                .addChild(new HAnimSegmentObject("boxman_r_hand").setName("r_hand")
                  .addChild(new TransformObject().setTranslation(-0.1972,0.8929,-0.0690)
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject("boxman_r_hand_tip").setName("r_hand_tip").setTranslation(-0.1912,0.6976,-0.0710)
                    .addChild(new ShapeObject().setUSE("SphereRed")))))))))
      .addComments(" # sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8) ")
      .setSkinCoord(new CoordinateObject("SKINCOORD").setPoint(this.SKINCOORD_4_120_point))
      .addSkin(new GroupObject()
        .addChild(new ShapeObject("TrouserSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,1.0).setTransparency(0.5)))
          .addComments(" # 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(this.IndexedFaceSet_6_123_coordIndex)
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("ShoeSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,0.0).setTransparency(0.5)))
          .addComments(" # 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(this.IndexedFaceSet_6_128_coordIndex)
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("ShirtSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(0.5).setDiffuseColor(1.0,1.0,0.0)))
          .addComments(" # 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(this.IndexedFaceSet_6_133_coordIndex)
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("HeadHandsFleshToneSkin")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(0.5).setDiffuseColor(1.0,0.75,0.75)))
          .addComments(" # 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10) ")
          .setGeometry(new IndexedFaceSetObject().setCoordIndex(this.IndexedFaceSet_6_138_coordIndex)
            .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
        .addChild(new ShapeObject("SkinLines")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,0.0)))
          .addComments(" Combined set of prior IFS coordIndex values ")
          .setGeometry(new IndexedLineSetObject().setCoordIndex(this.IndexedLineSet_6_143_coordIndex)
            .setCoord(new CoordinateObject().setUSE("SKINCOORD")))))
      .addComments(" top-level joint references ")
      .addComments(" top-level segment references ")
      .addComments(" top-level site references ")
      .addViewpoints(new HAnimSiteObject("boxman_BoxMan_view").setName("BoxMan_view")
        .addChild(new ViewpointObject("Inclined_View").setDescription("Inclined View").setOrientation(0.0,1.0,0.0,0.78).setPosition(2.0,0.9,2.0))
        .addChild(new ViewpointObject("Front_View").setDescription("Front View").setPosition(0.0,1.0,3.0))
        .addChild(new ViewpointObject("Right_View").setDescription("Right-side View").setPosition(-3.0,1.0,0.0).setOrientation(0.0,1.0,0.0,-1.57))
        .addChild(new ViewpointObject("Left_View").setDescription("Left-side View").setOrientation(0.0,1.0,0.0,1.57).setPosition(3.0,1.0,0.0))
        .addChild(new ViewpointObject("Top_View").setDescription("Top View").setPosition(0.0,3.0,0.0).setOrientation(1.0,0.0,0.0,-1.57)))
      .addJoints(new HAnimJointObject().setUSE("boxman_humanoid_root"))
      .addJoints(new HAnimJointObject().setUSE("boxman_skullbase"))
      .addJoints(new HAnimJointObject().setUSE("boxman_vl5"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_ankle"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_ankle"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_elbow"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_elbow"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_hip"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_hip"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_knee"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_knee"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_midtarsal"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_midtarsal"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_shoulder"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_shoulder"))
      .addJoints(new HAnimJointObject().setUSE("boxman_l_wrist"))
      .addJoints(new HAnimJointObject().setUSE("boxman_r_wrist"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l5"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_sacrum"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_skull"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_calf"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_calf"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_forearm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_forearm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_hand"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_hand"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_hindfoot"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_hindfoot"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_middistal"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_middistal"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_thigh"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_thigh"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_l_upperarm"))
      .addSegments(new HAnimSegmentObject().setUSE("boxman_r_upperarm"))
      .addSites(new HAnimSiteObject().setUSE("boxman_skull_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_l_hand_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_r_hand_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_l_middistal_tip"))
      .addSites(new HAnimSiteObject().setUSE("boxman_r_middistal_tip")))
    .addChild(new ExternProtoDeclareObject().setName("LOA1_WalkAnimation").setUrl(new MFStringObject("\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("cycleInterval").setType("SFTime"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("loop").setType("SFBool"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("startTime").setType("SFTime"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("stopTime").setType("SFTime"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("fraction_changed").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("HumanoidRoot_translation_changed").setType("SFVec3f"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("HumanoidRoot_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_hip_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_knee_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_ankle_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_midtarsal_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_hip_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_knee_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_ankle_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_midtarsal_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("vl5_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("skullbase_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_shoulder_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_elbow_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("l_wrist_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_shoulder_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_elbow_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("r_wrist_rotation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("isActive").setType("SFBool")))
    .addChild(new ProtoInstanceObject("ANIMATOR", "LOA1_WalkAnimation").setDEF("ANIMATOR").setName("LOA1_WalkAnimation"))
    .addComments(" Animation ROUTEs ")
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("HumanoidRoot_translation_changed").setToNode("boxman_humanoid_root").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("HumanoidRoot_rotation_changed").setToNode("boxman_humanoid_root").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_hip_rotation_changed").setToNode("boxman_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_knee_rotation_changed").setToNode("boxman_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_ankle_rotation_changed").setToNode("boxman_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_midtarsal_rotation_changed").setToNode("boxman_l_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_hip_rotation_changed").setToNode("boxman_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_knee_rotation_changed").setToNode("boxman_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_ankle_rotation_changed").setToNode("boxman_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_midtarsal_rotation_changed").setToNode("boxman_r_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("vl5_rotation_changed").setToNode("boxman_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("skullbase_rotation_changed").setToNode("boxman_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_shoulder_rotation_changed").setToNode("boxman_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_elbow_rotation_changed").setToNode("boxman_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("l_wrist_rotation_changed").setToNode("boxman_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_shoulder_rotation_changed").setToNode("boxman_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_elbow_rotation_changed").setToNode("boxman_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("ANIMATOR").setFromField("r_wrist_rotation_changed").setToNode("boxman_r_wrist").setToField("set_rotation"))
    .addChild(new ScriptObject("ENGINE").setDirectOutput(true).setUrl(new MFStringObject("\"BoxMan.js\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js\""))
      .addField(new fieldObject().setAccessType("inputOnly").setName("update").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("humanoid").setType("SFNode")
        .addChild(new HAnimHumanoidObject().setUSE("boxman_Humanoid").setVersion("2.0")))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("coordList").setType("MFVec3f"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("joint").setType("SFNode")
        .addComments(" initialization node (if any) goes here "))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("translation").setType("SFVec3f").setValue("0 0 0"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("rotation").setType("SFRotation").setValue("1 0 0 0"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("scale").setType("SFVec3f").setValue("1 1 1")))
    .addComments(" Trigger calculation after each animation change ")
    .addComments(" <ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/> "));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return BoxMan model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new BoxMan();
		print ("BoxMan execution self-validation test results: " + testObject.validateSelf());
	}
}
new BoxMan().main();