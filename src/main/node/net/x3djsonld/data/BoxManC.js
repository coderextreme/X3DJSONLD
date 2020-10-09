var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/BoxManC.java">BoxManC.java</a> source, <a href="../../../HumanoidAnimation/BoxManIndex.html" target="_top">BoxMan catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/BoxMan.x3d">BoxMan.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript. </td>
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
			<td> 17 November 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org" target="_blank">http://h-anim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> boxman.original.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> reconcile z-coordinate mismatches using source anthropometry, see source for details </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models/H-Anim2001/boxman" target="_blank">http://h-anim.org/Models/H-Anim2001/boxman</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl" target="_blank">http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.vapourtech.com/team/james/boxman.wrl" target="_blank">http://www.vapourtech.com/team/james/boxman.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Specifications/H-Anim2001" target="_blank">http://h-anim.org/Specifications/H-Anim2001</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Models" target="_blank">http://h-anim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://h-anim.org/Nodes" target="_blank">http://h-anim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/X3dToVrml97.xslt" target="_blank">http://www.web3d.org/x3d/content/X3dToVrml97.xslt</a> </td>
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
			<td> BoxMan H-Anim 2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../HumanoidAnimation/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author James Smith - james@vapourtech.com
 */

function BoxManC
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
BoxManC.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo info field, scene-graph level=3, element #26, 14 total values */
	this.WorldInfo_3_26_info = new autoclass.MFString(new autoclass.MFString("\"(C) 2000 James Smith - james@vapourtech.com\" \"http://www.vapourtech.com/team/james/boxman.wrl\" \"Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com\""));

	/** Large attribute array: HAnimHumanoid DEF='HUMANOID' info field, scene-graph level=3, element #28, 10 total values */
	this.HUMANOID_3_28_info = new autoclass.MFString(new autoclass.MFString("\"authorName=James Smith\" \"authorEmail=james@vapourtech.com\" \"copyright=(C) 2000 James Smith - james@vapourtech.com\" \"humanoidVersion=2.0\""));

	/** Large attribute array: HAnimJoint DEF='hanim_r_hip' skinCoordIndex field, scene-graph level=5, element #56, 32 total numbers */
	this.hanim_r_hip_5_56_skinCoordIndex = new autoclass.MFInt32(java.newArray("int", [80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]));

	/** Large attribute array: HAnimJoint DEF='hanim_r_knee' skinCoordIndex field, scene-graph level=6, element #59, 28 total numbers */
	this.hanim_r_knee_6_59_skinCoordIndex = new autoclass.MFInt32(java.newArray("int", [104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]));

	/** Large attribute array: Coordinate DEF='SKINCOORD' point field, scene-graph level=4, element #118, 672 total numbers made up of 224 3-tuple values */
	this.SKINCOORD_4_118_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-.05,1.0,.05,.05,1.0,.05,.03,.97,-.1,-.03,.97,-.1,.03,.94,-.075,-.03,.94,-.075,0.0,.92,0.0,0.0,.94,.03,-0.12,1.06,.05,0.12,1.06,.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.12,1.06,-.1,-0.12,1.06,-.1,.0456,.9364,.05,.1456,.9364,.05,.1456,.9364,-.05,.0456,.9364,-.05,.0456,.9,.05,.1456,.9,.05,.1456,.9,-.05,.0456,.9,-.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.0456,.8,.05,.1456,.8,.05,.1456,.8,-.05,.0456,.8,-.05,.0456,.7,.05,.1456,.7,.05,.1456,.7,-.05,.0456,.7,-.05,.0456,.6,.05,.1456,.6,.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.1456,.6,-.05,.0456,.6,-.05,.0456,.55,.05,.1456,.55,.05,.1456,.55,-.05,.0456,.55,-.05,.0456,.52,.05,.1456,.52,.05,.1456,.52,-.05,.0456,.52,-.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.0456,.5,.05,.1456,.5,.05,.1456,.5,-.05,.0456,.5,-.05,.0454,.43,.045,.1454,.43,.045,.1454,.43,-.055,.0454,.43,-.055,.0452,.36,.04,.1452,.36,.04])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.1452,.36,-.06,.0452,.36,-.06,.045,.29,.035,.145,.29,.035,.145,.29,-.065,.045,.29,-.065,.0448,.21,.03,.1448,.21,.03,.1448,.21,-.07,.0448,.21,-.07])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.0446,.1262,.025,.1446,.1262,.025,.1446,.1262,-.075,.0446,.1262,-.075,.0446,.0762,.025,.1446,.0762,.025,.1446,0.0,-.075,.0446,0.0,-.075,.0446,.0562,.057,.1446,.0562,.057])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.1446,0.0,.057,.0446,0.0,.057,.0446,.0562,.087,.1446,.0562,.087,.1446,0.0,.087,.0446,0.0,.087,.0446,.0562,.1924,.1446,.0562,.1924,.1446,0.0,.1924,.0446,0.0,.1924])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.0456,.9364,.05,-.1456,.9364,.05,-.1456,.9364,-.05,-.0456,.9364,-.05,-.0456,.9,.05,-.1456,.9,.05,-.1456,.9,-.05,-.0456,.9,-.05,-.0456,.8,.05,-.1456,.8,.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.1456,.8,-.05,-.0456,.8,-.05,-.0456,.7,.05,-.1456,.7,.05,-.1456,.7,-.05,-.0456,.7,-.05,-.0456,.6,.05,-.1456,.6,.05,-.1456,.6,-.05,-.0456,.6,-.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.0456,.55,.05,-.1456,.55,.05,-.1456,.55,-.05,-.0456,.55,-.05,-.0456,.52,.05,-.1456,.52,.05,-.1456,.52,-.05,-.0456,.52,-.05,-.0456,.5,.05,-.1456,.5,.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.1456,.5,-.05,-.0456,.5,-.05,-.0454,.43,.045,-.1454,.43,.045,-.1454,.43,-.055,-.0454,.43,-.055,-.0452,.36,.04,-.1452,.36,.04,-.1452,.36,-.06,-.0452,.36,-.06])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.045,.29,.035,-.145,.29,.035,-.145,.29,-.065,-.045,.29,-.065,-.0448,.21,.03,-.1448,.21,.03,-.1448,.21,-.07,-.0448,.21,-.07,-.0446,.1262,.025,-.1446,.1262,.025])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.1446,.1262,-.075,-.0446,.1262,-.075,-.0446,.0762,.025,-.1446,.0762,.025,-.1446,0.0,-.075,-.0446,0.0,-.075,-.0446,.0562,.057,-.1446,.0562,.057,-.1446,0.0,.057,-.0446,0.0,.057])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.0446,.0562,.087,-.1446,.0562,.087,-.1446,0.0,.087,-.0446,0.0,.087,-.0446,.0562,.1924,-.1446,.0562,.1924,-.1446,0.0,.1924,-.0446,0.0,.1924,-0.12,1.10,.05,0.12,1.10,.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.12,1.10,-.1,-0.12,1.10,-.1,-.14,1.42,0.045,.14,1.42,0.045,.14,1.42,-0.09,-.14,1.42,-0.09,-.24,1.52,0.035,.24,1.52,0.035,.24,1.52,-0.09,-.24,1.52,-0.09])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.05,1.56,0.030,.05,1.56,0.030,.05,1.56,-0.06,-.05,1.56,-0.06,-.05,1.60,0.060,.05,1.60,0.060,.05,1.62,-0.03,-.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.60,0.13,0.07,1.60,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,.16,1.42,0.015,.24,1.5,0.015,.24,1.5,-0.075,.16,1.42,-0.075])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.17,1.18,-0.025,.23,1.18,-0.025,.23,1.18,-0.085,.17,1.18,-0.085,.17,1.14,-0.025,.23,1.14,-0.025,.23,1.14,-0.085,.17,1.14,-0.085,.18,.91,-0.05,.22,.91,-0.05])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.22,.91,-0.09,.18,.91,-0.09,.18,.87,-0.02,.22,.87,-0.02,.22,.87,-0.1,.18,.87,-0.1,.18,.6976,-0.02,.22,.6976,-0.02,.22,.6976,-0.1,.18,.6976,-0.1])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.16,1.42,0.015,-.24,1.5,0.015,-.24,1.5,-0.075,-.16,1.42,-0.075,-.17,1.18,-0.025,-.23,1.18,-0.025,-.23,1.18,-0.085,-.17,1.18,-0.085,-.17,1.14,-0.025,-.23,1.14,-0.025])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.23,1.14,-0.085,-.17,1.14,-0.085,-.18,.91,-0.05,-.22,.91,-0.05,-.22,.91,-0.09,-.18,.91,-0.09,-.18,.87,-0.02,-.22,.87,-0.02,-.22,.87,-0.1,-.18,.87,-0.1])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.18,.6976,-0.02,-.22,.6976,-0.02,-.22,.6976,-0.1,-.18,.6976,-0.1])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #121, 888 total numbers */
	this.IndexedFaceSet_6_121_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #126, 272 total numbers */
	this.IndexedFaceSet_6_126_coordIndex = new autoclass.MFInt32(java.newArray("int", [60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #131, 400 total numbers */
	this.IndexedFaceSet_6_131_coordIndex = new autoclass.MFInt32(java.newArray("int", [148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #136, 216 total numbers */
	this.IndexedFaceSet_6_136_coordIndex = new autoclass.MFInt32(java.newArray("int", [172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #141, 1776 total numbers */
	this.IndexedLineSet_6_141_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' key field, scene-graph level=4, element #191, 19 total numbers */
	this.HUMANOIDROOT_POSITION_ANIMATOR_4_191_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0]));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=4, element #191, 57 total numbers made up of 19 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_4_191_keyValue = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=4, element #194, 32 total numbers made up of 8 4-tuple values */
	this.L_HIP_ANIMATOR_4_194_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=4, element #195, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_4_195_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226]));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=4, element #198, 40 total numbers made up of 10 4-tuple values */
	this.R_HIP_ANIMATOR_4_198_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=4, element #199, 40 total numbers made up of 10 4-tuple values */
	this.R_KNEE_ANIMATOR_4_199_keyValue = new autoclass.MFRotation(java.newArray("float", [1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-08,-4.971e-09,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573]));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=4, element #200, 44 total numbers made up of 11 4-tuple values */
	this.R_ANKLE_ANIMATOR_4_200_keyValue = new autoclass.MFRotation() /* splitting up long array to improve readability */
	.append(new autoclass.MFRotation(java.newArray("float", [0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-07,1.827e-08,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322])))
	.append(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=4, element #202, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_4_202_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826]));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=4, element #203, 40 total numbers made up of 10 4-tuple values */
	this.SKULLBASE_ANIMATOR_4_203_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642]));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=4, element #205, 16 total numbers made up of 4 4-tuple values */
	this.L_ELBOW_ANIMATOR_4_205_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-1.58298e-07,8.15967e-08,0.0659878,-1,-3.28826e-08,-2.31665e-08,0.488383,-1,3.06462e-06,-3.11947e-06,0.0177536,-1,-1.58298e-07,8.15967e-08,0.0659878]));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=4, element #206, 16 total numbers made up of 4 4-tuple values */
	this.L_WRIST_ANIMATOR_4_206_keyValue = new autoclass.MFRotation(java.newArray("float", [1.51276e-06,-1,1.7724e-06,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,1.51276e-06,-1,1.7724e-06,0.461076]));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=4, element #207, 16 total numbers made up of 4 4-tuple values */
	this.R_SHOULDER_ANIMATOR_4_207_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-7.689e-07,-1.48e-07,0.09346,1,5.004e-08,2.254e-08,0.3197,-1,-1.104e-07,5.267e-10,0.1564,-1,-7.689e-07,-1.48e-07,0.09346]));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=4, element #208, 16 total numbers made up of 4 4-tuple values */
	this.R_ELBOW_ANIMATOR_4_208_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-4.45619e-08,2.70318e-08,0.411508,-1,8.16742e-07,-1.09556e-07,0.0925011,-1,-2.47628e-08,-7.02862e-09,0.572568,-1,-4.45619e-08,2.70318e-08,0.411508]));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=4, element #209, 16 total numbers made up of 4 4-tuple values */
	this.R_WRIST_ANIMATOR_4_209_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("BoxMan.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("James Smith - james@vapourtech.com"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman and Matt Beitler"))
    .addMeta((new autoclass.meta()).setName("created").setContent("1 March 2001"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("19 October 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("17 November 2014"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("boxman.original.wrl"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("reconcile z-coordinate mismatches using source anthropometry, see source for details"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org/Models/H-Anim2001/boxman"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org/Specifications/H-Anim2001"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org/Models"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://h-anim.org/Nodes"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("(C) 2000 James Smith - james@vapourtech.com"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.vapourtech.com"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("BoxMan H-Anim 2.0"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(this.WorldInfo_3_26_info).setTitle("BoxMan - A Seamless VRML Human"))
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.6,0.6,0.6]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.75,0.75,0.75]))))
    .addComments(" H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim) ")
    .addChild((new autoclass.HAnimHumanoid("HUMANOID")).setName("Humanoid").setInfo(this.HUMANOID_3_28_info).setVersion("2.0")
      .addSkeleton((new autoclass.HAnimJoint("hanim_HumanoidRoot")).setName("HumanoidRoot").setSkinCoordIndex(java.newArray("int", [0,1,2,3,4,5,6,7,8,9,10,11])).setCenter(0.0,0.9723,-0.0728).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0]))
        .addChild((new autoclass.HAnimSegment("hanim_sacrum")).setName("sacrum")
          .addChild((new autoclass.Transform()).setTranslation(0.0,0.9723,-0.0728)
            .addChild((new autoclass.Shape("SphereYellow"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.02)))))
        .addChild((new autoclass.HAnimJoint("hanim_l_hip")).setName("l_hip").setCenter(0.0956,0.9364,0.0).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])).setSkinCoordIndex(java.newArray("int", [12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]))
          .addChild((new autoclass.HAnimSegment("hanim_l_thigh")).setName("l_thigh")
            .addComments(" TODO reconcile z-coordinate mismatch using source anthropometry ")
            .addChild((new autoclass.Transform()).setTranslation(0.0956,0.9346,0.0)
              .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
          .addChild((new autoclass.HAnimJoint("hanim_l_knee")).setName("l_knee").setCenter(0.0956,0.5095,-0.0036).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]))
            .addChild((new autoclass.HAnimSegment("hanim_l_calf")).setName("l_calf")
              .addChild((new autoclass.Transform()).setTranslation(0.0956,0.5095,-0.0036)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
            .addChild((new autoclass.HAnimJoint("hanim_l_ankle")).setName("l_ankle").setCenter(0.0946,0.0762,-0.0261).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [64,65,66,67,68,69,70,71]))
              .addChild((new autoclass.HAnimSegment("hanim_l_hindfoot")).setName("l_hindfoot")
                .addChild((new autoclass.Transform()).setTranslation(0.0946,0.0762,-0.0261)
                  .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
              .addChild((new autoclass.HAnimJoint("hanim_l_midtarsal")).setName("l_midtarsal").setCenter(0.1079,0.0317,0.0670).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [72,73,74,75,76,77,78,79]))
                .addChild((new autoclass.HAnimSegment("hanim_l_middistal")).setName("l_middistal")
                  .addChild((new autoclass.Transform()).setTranslation(0.1079,0.0317,0.0670)
                    .addChild((new autoclass.Shape()).setUSE("SphereYellow")))
                  .addChild((new autoclass.HAnimSite("hanim_l_middle_distal_tip")).setName("l_middle_distal_tip").setTranslation(.095,.0005,.1924))
                  .addChild((new autoclass.Transform()).setTranslation(0.095,5.0E-4,0.1924)
                    .addChild((new autoclass.Shape("SphereRed"))
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))
                      .setGeometry((new autoclass.Sphere()).setRadius(0.02)))))))))
        .addChild((new autoclass.HAnimJoint("hanim_r_hip")).setName("r_hip").setCenter(-0.0956,0.9364,0.0).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5])).setSkinCoordIndex(this.hanim_r_hip_5_56_skinCoordIndex)
          .addChild((new autoclass.HAnimSegment("hanim_r_thigh")).setName("r_thigh")
            .addComments(" TODO reconcile z-coordinate mismatch using source anthropometry ")
            .addChild((new autoclass.Transform()).setTranslation(-0.0956,0.9346,0.0)
              .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
          .addChild((new autoclass.HAnimJoint("hanim_r_knee")).setName("r_knee").setCenter(-0.0956,0.5095,-0.0036).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(this.hanim_r_knee_6_59_skinCoordIndex)
            .addChild((new autoclass.HAnimSegment("hanim_r_calf")).setName("r_calf")
              .addChild((new autoclass.Transform()).setTranslation(-0.0956,0.5095,-0.0036)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
            .addChild((new autoclass.HAnimJoint("hanim_r_ankle")).setName("r_ankle").setCenter(-0.0946,0.0762,-0.0261).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [132,133,134,135,136,137,138,139]))
              .addChild((new autoclass.HAnimSegment("hanim_r_hindfoot")).setName("r_hindfoot")
                .addChild((new autoclass.Transform()).setTranslation(-0.0946,0.0762,-0.0261)
                  .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
              .addChild((new autoclass.HAnimJoint("hanim_r_midtarsal")).setName("r_midtarsal").setCenter(-0.1079,0.0317,0.0670).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [140,141,142,143,144,145,146,147]))
                .addChild((new autoclass.HAnimSegment("hanim_r_middistal")).setName("r_middistal")
                  .addChild((new autoclass.Transform()).setTranslation(-0.1079,0.0317,0.0670)
                    .addChild((new autoclass.Shape()).setUSE("SphereYellow")))
                  .addChild((new autoclass.HAnimSite("hanim_r_middle_distal_tip")).setName("r_middle_distal_tip").setTranslation(-.095,.0005,.1924))
                  .addChild((new autoclass.Transform()).setTranslation(-0.0950,0.0005,0.1924)
                    .addChild((new autoclass.Shape()).setUSE("SphereRed"))))))))
        .addChild((new autoclass.HAnimJoint("hanim_vl5")).setName("vl5").setCenter(0.0,1.0817,-0.0728).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]))
          .addChild((new autoclass.HAnimSegment("hanim_l5")).setName("l5")
            .addChild((new autoclass.Transform()).setTranslation(0.0,1.0817,-0.0728)
              .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
          .addChild((new autoclass.HAnimJoint("hanim_skullbase")).setName("skullbase").setCenter(0.0,1.6440,0.036).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [168,169,170,171,172,173,174,175]))
            .setDisplacers((new autoclass.HAnimDisplacer("hanim_skullbase_displacer")).setDisplacements(new autoclass.MFVec3f(java.newArray("float", [0.0,.031993,0.0]))).setWeight(1.0).setCoordIndex(java.newArray("int", [168])))
            .addChild((new autoclass.HAnimSegment("hanim_skull")).setName("skull")
              .addComments(" TODO reconcile z-coordinate mismatch using source anthropometry ")
              .addChild((new autoclass.Transform()).setTranslation(0.0,1.6440,0.0036)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow")))
              .addChild((new autoclass.HAnimSite("hanim_skull_tip")).setName("skull_tip").setTranslation(-0.0029,1.7771,0.0274))
              .addChild((new autoclass.Transform()).setTranslation(-0.0029,1.7771,0.0274)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow")))))
          .addChild((new autoclass.HAnimJoint("hanim_l_shoulder")).setName("l_shoulder").setCenter(0.1968,1.4642,-0.0265).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [176,177,178,179,180,181,182,183]))
            .addChild((new autoclass.HAnimSegment("hanim_l_upperarm")).setName("l_upperarm")
              .addChild((new autoclass.Transform()).setTranslation(0.1968,1.4642,-0.0265)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
            .addChild((new autoclass.HAnimJoint("hanim_l_elbow")).setName("l_elbow").setCenter(0.1982,1.1622,-0.0557).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [184,185,186,187,188,189,190,191]))
              .addChild((new autoclass.HAnimSegment("hanim_l_forearm")).setName("l_forearm")
                .addChild((new autoclass.Transform()).setTranslation(0.1982,1.1622,-0.0557)
                  .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
              .addChild((new autoclass.HAnimJoint("hanim_l_wrist")).setName("l_wrist").setCenter(0.1972,0.8929,-0.0690).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [192,193,194,195,196,197,198,199]))
                .addChild((new autoclass.HAnimSegment("hanim_l_hand")).setName("l_hand")
                  .addChild((new autoclass.Transform()).setTranslation(0.1972,0.8929,-0.0690)
                    .addChild((new autoclass.Shape()).setUSE("SphereYellow")))
                  .addChild((new autoclass.HAnimSite("hanim_l_hand_tip")).setName("l_hand_tip").setTranslation(0.1912,0.6976,-0.0710))
                  .addChild((new autoclass.Transform()).setTranslation(0.1912,0.6976,-0.0710)
                    .addChild((new autoclass.Shape()).setUSE("SphereRed")))))))
          .addChild((new autoclass.HAnimJoint("hanim_r_shoulder")).setName("r_shoulder").setCenter(-0.1968,1.4642,-0.0265).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [200,201,202,203,204,205,206,207]))
            .addChild((new autoclass.HAnimSegment("hanim_r_upperarm")).setName("r_upperarm")
              .addChild((new autoclass.Transform()).setTranslation(-0.1968,1.4642,-0.0265)
                .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
            .addChild((new autoclass.HAnimJoint("hanim_r_elbow")).setName("r_elbow").setCenter(-0.1982,1.1622,-0.0557).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [208,209,210,211,212,213,214,215]))
              .addChild((new autoclass.HAnimSegment("hanim_r_forearm")).setName("r_forearm")
                .addChild((new autoclass.Transform()).setTranslation(-0.1982,1.1622,-0.0557)
                  .addChild((new autoclass.Shape()).setUSE("SphereYellow"))))
              .addChild((new autoclass.HAnimJoint("hanim_r_wrist")).setName("r_wrist").setCenter(-0.1972,0.8929,-0.0690).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setSkinCoordIndex(java.newArray("int", [216,217,218,219,220,221,222,223]))
                .addChild((new autoclass.HAnimSegment("hanim_r_hand")).setName("r_hand")
                  .addChild((new autoclass.Transform()).setTranslation(-0.1972,0.8929,-0.0690)
                    .addChild((new autoclass.Shape()).setUSE("SphereYellow")))
                  .addChild((new autoclass.HAnimSite("hanim_r_hand_tip")).setName("r_hand_tip").setTranslation(-0.1912,0.6976,-0.0710))
                  .addChild((new autoclass.Transform()).setTranslation(-0.1912,0.6976,-0.0710)
                    .addChild((new autoclass.Shape()).setUSE("SphereRed")))))))))
      .addComments(" # sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8) ")
      .setSkinCoord((new autoclass.Coordinate("SKINCOORD")).setPoint(this.SKINCOORD_4_118_point))
      .addSkin((new autoclass.Group())
        .addChild((new autoclass.Shape("TrouserSkin"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0).setTransparency(0.5)))
          .addComments(" # 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40) ")
          .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_6_121_coordIndex)
            .setCoord((new autoclass.Coordinate()).setUSE("SKINCOORD"))))
        .addChild((new autoclass.Shape("ShoeSkin"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setTransparency(0.5)))
          .addComments(" # 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10) ")
          .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_6_126_coordIndex)
            .setCoord((new autoclass.Coordinate()).setUSE("SKINCOORD"))))
        .addChild((new autoclass.Shape("ShirtSkin"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(0.5).setDiffuseColor(1.0,1.0,0.0)))
          .addComments(" # 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8) ")
          .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_6_131_coordIndex)
            .setCoord((new autoclass.Coordinate()).setUSE("SKINCOORD"))))
        .addChild((new autoclass.Shape("HeadHandsFleshToneSkin"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(0.5).setDiffuseColor(1.0,0.75,0.75)))
          .addComments(" # 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10) ")
          .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_6_136_coordIndex)
            .setCoord((new autoclass.Coordinate()).setUSE("SKINCOORD"))))
        .addChild((new autoclass.Shape("SkinLines"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0)))
          .addComments(" Combined set of prior IFS coordIndex values ")
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(this.IndexedLineSet_6_141_coordIndex)
            .setCoord((new autoclass.Coordinate()).setUSE("SKINCOORD")))))
      .addComments(" top-level joint references ")
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_wrist"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_elbow"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_shoulder"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_wrist"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_elbow"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_shoulder"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_skullbase"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_vl5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_midtarsal"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_ankle"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_knee"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_hip"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_midtarsal"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_ankle"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_knee"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_l_hip"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_HumanoidRoot"))
      .addComments(" top-level site references ")
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_middle_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_middle_distal_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_skull_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_l_hand_tip"))
      .addSites((new autoclass.HAnimSite()).setUSE("hanim_r_hand_tip"))
      .addComments(" top-level segment references ")
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_sacrum"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_thigh"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_calf"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_hindfoot"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_middistal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_thigh"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_calf"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_hindfoot"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_middistal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_skull"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_upperarm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_forearm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_l_hand"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_upperarm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_forearm"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_hand"))
      .addComments(" top-level viewpoint references ")
      .addViewpoints((new autoclass.Viewpoint("Inclined_View")).setDescription("Inclined View").setOrientation(0.0,1.0,0.0,.78).setPosition(2.0,1.0,2.0))
      .addViewpoints((new autoclass.Viewpoint("Best_View")).setDescription("Best View").setPosition(-2.0,.25,0.0).setOrientation(0.0,1.0,0.0,-1.57))
      .addViewpoints((new autoclass.Viewpoint("Front_View")).setDescription("Front View").setPosition(0.0,1.0,3.0))
      .addViewpoints((new autoclass.Viewpoint("Side_View")).setDescription("Side View").setOrientation(0.0,1.0,0.0,1.57).setPosition(3.0,1.0,0.0))
      .addViewpoints((new autoclass.Viewpoint("Top_View")).setDescription("Top View").setPosition(0.0,3.0,0.0).setOrientation(1.0,0.0,0.0,-1.57)))
    .addComments(java.newArray("java.lang.String",["ExternProtoDeclare name='LOA1_WalkAnimation' url='\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\"'>",
"      <field accessType='inputOutput' name='cycleInterval' type='SFTime'/>",
"      <field accessType='inputOutput' name='enabled' type='SFBool'/>",
"      <field accessType='inputOutput' name='loop' type='SFBool'/>",
"      <field accessType='inputOutput' name='startTime' type='SFTime'/>",
"      <field accessType='inputOutput' name='stopTime' type='SFTime'/>",
"      <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/>",
"      <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/>",
"      <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/>",
"      <field accessType='outputOnly' name='isActive' type='SFBool'/>",
"    </ExternProtoDeclare>",
"    <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/]))
    .addChild((new autoclass.Group())
      .addComments(" ROUTE information for TIMER node:  [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ] ")
      .addChild((new autoclass.TimeSensor("TIMER")).setCycleInterval(2).setLoop(true)
        .addComments(java.newArray("java.lang.String",["field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> ",
"<field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> ",
"<field name='loop' type='SFBool' value='true' accessType='inputOutput'/> ",
"<field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> ",
"<field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='cycleInterval' protoField='cycleInterval'/> ",
"<connect nodeField='enabled' protoField='enabled'/> ",
"<connect nodeField='loop' protoField='loop'/> ",
"<connect nodeField='startTime' protoField='startTime'/> ",
"<connect nodeField='stopTime' protoField='stopTime'/> ",
"<connect nodeField='fraction_changed' protoField='fraction_changed'/> ",
"<connect nodeField='isActive' protoField='isActive'/>",
"</IS])))
      .addComments(" ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR")).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_4_191_keyValue).setKey(this.HUMANOIDROOT_POSITION_ANIMATOR_4_191_key)
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for HUMANOIDROOT_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("HUMANOIDROOT_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0])))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for SACROILIAC_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("SACROILIAC_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056])))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='lower_body_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for L_HIP_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_HIP_ANIMATOR")).setKeyValue(this.L_HIP_ANIMATOR_4_194_keyValue).setKey(java.newArray("float", [0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_hip_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for L_KNEE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.L_KNEE_ANIMATOR_4_195_keyValue)
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_knee_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for L_ANKLE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_ANKLE_ANIMATOR")).setKeyValue(new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714]))).setKey(java.newArray("float", [0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for L_MIDTARSAL_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0])))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for R_HIP_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_HIP_ANIMATOR")).setKeyValue(this.R_HIP_ANIMATOR_4_198_keyValue).setKey(java.newArray("float", [0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_hip_rotation_changed'/>",
"</IS])))
      .addComments(" ROUTE information for R_KNEE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.R_KNEE_ANIMATOR_4_199_keyValue)
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_knee_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for R_ANKLE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_ANKLE_ANIMATOR")).setKeyValue(this.R_ANKLE_ANIMATOR_4_200_keyValue).setKey(java.newArray("float", [0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for R_MIDTARSAL_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2])))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for VL5_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("VL5_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2083,0.375,0.75,0.8333,1.0])).setKeyValue(this.VL5_ANIMATOR_4_202_keyValue)
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='vl5_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for SKULLBASE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("SKULLBASE_ANIMATOR")).setKeyValue(this.SKULLBASE_ANIMATOR_4_203_keyValue).setKey(java.newArray("float", [0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='skullbase_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for L_SHOULDER_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1,0,0,0.1189,-1,-5.928e-07,1.525e-07,0.1861,1,-2.038e-07,-1.257e-07,0.3357,1.0,0.0,0.0,0.1189])))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for L_ELBOW_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_ELBOW_ANIMATOR")).setKeyValue(this.L_ELBOW_ANIMATOR_4_205_keyValue).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for L_WRIST_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("L_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.L_WRIST_ANIMATOR_4_206_keyValue)
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for R_SHOULDER_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_SHOULDER_ANIMATOR")).setKeyValue(this.R_SHOULDER_ANIMATOR_4_207_keyValue).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for R_ELBOW_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_ELBOW_ANIMATOR")).setKeyValue(this.R_ELBOW_ANIMATOR_4_208_keyValue).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/>",
"<IS])))
      .addComments(" ROUTE information for R_WRIST_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] ")
      .addChild((new autoclass.OrientationInterpolator("R_WRIST_ANIMATOR")).setKeyValue(this.R_WRIST_ANIMATOR_4_209_keyValue).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0]))
        .addComments(java.newArray("java.lang.String",["IS>",
"<connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/>",
"<IS]))))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("SACROILIAC_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))
    .addComments(" Animation ROUTEs ")
    .addChild((new autoclass.ROUTE()).setFromNode("HUMANOIDROOT_POSITION_ANIMATOR").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
    .addChild((new autoclass.ROUTE()).setFromNode("HUMANOIDROOT_ANIMATOR").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_HIP_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_KNEE_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_midtarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_HIP_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_KNEE_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_midtarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("VL5_ANIMATOR").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("SKULLBASE_ANIMATOR").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_WRIST_ANIMATOR").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_WRIST_ANIMATOR").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("hanim_skullbase_displacer").setToField("weight")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return BoxManC model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new BoxManC();
		console.log ("BoxManC execution self-validation test results: " + testObject.validateSelf());
	}
}
new BoxManC().main();