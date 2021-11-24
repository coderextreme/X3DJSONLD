package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Generate an IndexedLineSet using the Coordinate node. Browser should create a 23 line by 23 line square geometric grid, elevated in the center toward the + Y direction. </p>
 <p> Related links: <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord.java">IndexedLineCoord.java</a> source, <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoordIndex.html" target="_top">IndexedLineCoord catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord.x3d">IndexedLineCoord.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-front.jpg">IndexedLineCoord-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-rear.jpg">IndexedLineCoord-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-top.jpg">IndexedLineCoord-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-bottom.jpg">IndexedLineCoord-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-left.jpg">IndexedLineCoord-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/IndexedLineCoord-right.jpg">IndexedLineCoord-right.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> disclaimer </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, <a href="https://www.web3d.org/working-groups/x3d" target="_blank">https://www.web3d.org/working-groups/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 21 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Generate an IndexedLineSet using the Coordinate node. Browser should create a 23 line by 23 line square geometric grid, elevated in the center toward the + Y direction. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/IndexedLineCoord.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/IndexedLineCoord.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/../../license.html">../../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

public class IndexedLineCoord
{
	/** Default constructor to create this object. */
	public IndexedLineCoord ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IndexedLineCoord.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-left.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("IndexedLineCoord-right.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Generate an IndexedLineSet using the Coordinate node. Browser should create a 23 line by 23 line square geometric grid, elevated in the center toward the + Y direction."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/IndexedLineCoord.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IndexedLineCoord.x3d"))
    .addChild(new Viewpoint().setDescription("Front View"))
    .addChild(new Viewpoint().setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint().setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
    .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
    .addChild(new Viewpoint().setDescription("Right View").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Left View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,1.0,1.0)))
      .setGeometry(new IndexedLineSet().setCoordIndex(getIndexedLineSet_4_32_coordIndex())
        .setCoord(new Coordinate().setPoint(getCoordinate_5_32_point())))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_4_32_coordIndex_1()
		{
			int[] value = {0,1,24,23,-1,1,2,25,24,-1,2,3,26,25,-1,3,4,27,26,-1,4,5,28,27,-1,5,6,29,28,-1,6,7,30,29,-1,7,8,31,30,-1,8,9,32,31,-1,9,10,33,32,-1,10,11,34,33,-1,11,12,35,34,-1,12,13,36,35,-1,13,14,37,36,-1,14,15,38,37,-1,15,16,39,38,-1,16,17,40,39,-1,17,18,41,40,-1,18,19,42,41,-1,19,20,43,42,-1,20,21,44,43,-1,21,22,45,44,-1,23,24,47,46,-1,24,25,48,47,-1,25,26,49,48,-1,26,27,50,49,-1,27,28,51,50,-1,28,29,52,51,-1,29,30,53,52,-1,30,31,54,53,-1,31,32,55,54,-1,32,33,56,55,-1,33,34,57,56,-1,34,35,58,57,-1,35,36,59,58,-1,36,37,60,59,-1,37,38,61,60,-1,38,39,62,61,-1,39,40,63,62,-1,40,41,64,63,-1,41,42,65,64,-1,42,43,66,65,-1,43,44,67,66,-1,44,45,68,67,-1,46,47,70,69,-1,47,48,71,70,-1,48,49,72,71,-1,49,50,73,72,-1,50,51,74,73,-1,51,52,75,74,-1,52,53,76,75,-1,53,54,77,76,-1,54,55,78,77,-1,55,56,79,78,-1,56,57,80,79,-1,57,58,81,80,-1,58,59,82,81,-1,59,60,83,82,-1,60,61,84,83,-1,61,62,85,84,-1,62,63,86,85,-1,63,64,87,86,-1,64,65,88,87,-1,65,66,89,88,-1,66,67,90,89,-1,67,68,91,90,-1,69,70,93,92,-1,70,71,94,93,-1,71,72,95,94,-1,72,73,96,95,-1,73,74,97,96,-1,74,75,98,97,-1,75,76,99,98,-1,76,77,100,99,-1,77,78,101,100,-1,78,79,102,101,-1,79,80,103,102,-1,80,81,104,103,-1,81,82,105,104,-1,82,83,106,105,-1,83,84,107,106,-1,84,85,108,107,-1,85,86,109,108,-1,86,87,110,109,-1,87,88,111,110,-1,88,89,112,111,-1,89,90,113,112,-1,90,91,114,113,-1,92,93,116,115,-1,93,94,117,116,-1,94,95,118,117,-1,95,96,119,118,-1,96,97,120,119,-1,97,98,121,120,-1,98,99,122,121,-1,99,100,123,122,-1,100,101,124,123,-1,101,102,125,124,-1,102,103,126,125,-1,103,104,127,126,-1,104,105,128,127,-1,105,106,129,128,-1,106,107,130,129,-1,107,108,131,130,-1,108,109,132,131,-1,109,110,133,132,-1,110,111,134,133,-1,111,112,135,134,-1,112,113,136,135,-1,113,114,137,136,-1,115,116,139,138,-1,116,117,140,139,-1,117,118,141,140,-1,118,119,142,141,-1,119,120,143,142,-1,120,121,144,143,-1,121,122,145,144,-1,122,123,146,145,-1,123,124,147,146,-1,124,125,148,147,-1,125,126,149,148,-1,126,127,150,149,-1,127,128,151,150,-1,128,129,152,151,-1,129,130,153,152,-1,130,131,154,153,-1,131,132,155,154,-1,132,133,156,155,-1,133,134,157,156,-1,134,135,158,157,-1,135,136,159,158,-1,136,137,160,159,-1,138,139,162,161,-1,139,140,163,162,-1,140,141,164,163,-1,141,142,165,164,-1,142,143,166,165,-1,143,144,167,166,-1,144,145,168,167,-1,145,146,169,168,-1,146,147,170,169,-1,147,148,171,170,-1,148,149,172,171,-1,149,150,173,172,-1,150,151,174,173,-1,151,152,175,174,-1,152,153,176,175,-1,153,154,177,176,-1,154,155,178,177,-1,155,156,179,178,-1,156,157,180,179,-1,157,158,181,180,-1,158,159,182,181,-1,159,160,183,182,-1,161,162,185,184,-1,162,163,186,185,-1,163,164,187,186,-1,164,165,188,187,-1,165,166,189,188,-1,166,167,190,189,-1,167,168,191,190,-1,168,169,192,191,-1,169,170,193,192,-1,170,171,194,193,-1,171,172,195,194,-1,172,173,196,195,-1,173,174,197,196,-1,174,175,198,197,-1,175,176,199,198,-1,176,177,200,199,-1,177,178,201,200,-1,178,179,202,201,-1,179,180,203,202,-1,180,181,204,203,-1,181,182,205,204,-1,182,183,206,205,-1,184,185,208,207,-1,185,186,209,208,-1,186,187,210,209,-1,187,188,211,210,-1,188,189,212,211,-1,189,190,213,212,-1,190,191,214,213,-1,191,192,215,214,-1,192,193,216,215,-1,193,194,217,216,-1,194,195,218,217,-1,195,196,219,218,-1,196,197,220,219,-1,197,198,221,220,-1,198,199,222,221,-1,199,200,223,222,-1,200,201,224,223,-1,201,202,225,224,-1,202,203,226,225,-1,203,204,227,226,-1,204,205,228,227,-1,205,206,229,228,-1,207,208,231,230,-1,208,209,232,231,-1};
			return value;
		}
		private int[] getIndexedLineSet_4_32_coordIndex_2()
		{
			int[] value = {209,210,233,232,-1,210,211,234,233,-1,211,212,235,234,-1,212,213,236,235,-1,213,214,237,236,-1,214,215,238,237,-1,215,216,239,238,-1,216,217,240,239,-1,217,218,241,240,-1,218,219,242,241,-1,219,220,243,242,-1,220,221,244,243,-1,221,222,245,244,-1,222,223,246,245,-1,223,224,247,246,-1,224,225,248,247,-1,225,226,249,248,-1,226,227,250,249,-1,227,228,251,250,-1,228,229,252,251,-1,230,231,254,253,-1,231,232,255,254,-1,232,233,256,255,-1,233,234,257,256,-1,234,235,258,257,-1,235,236,259,258,-1,236,237,260,259,-1,237,238,261,260,-1,238,239,262,261,-1,239,240,263,262,-1,240,241,264,263,-1,241,242,265,264,-1,242,243,266,265,-1,243,244,267,266,-1,244,245,268,267,-1,245,246,269,268,-1,246,247,270,269,-1,247,248,271,270,-1,248,249,272,271,-1,249,250,273,272,-1,250,251,274,273,-1,251,252,275,274,-1,253,254,277,276,-1,254,255,278,277,-1,255,256,279,278,-1,256,257,280,279,-1,257,258,281,280,-1,258,259,282,281,-1,259,260,283,282,-1,260,261,284,283,-1,261,262,285,284,-1,262,263,286,285,-1,263,264,287,286,-1,264,265,288,287,-1,265,266,289,288,-1,266,267,290,289,-1,267,268,291,290,-1,268,269,292,291,-1,269,270,293,292,-1,270,271,294,293,-1,271,272,295,294,-1,272,273,296,295,-1,273,274,297,296,-1,274,275,298,297,-1,276,277,300,299,-1,277,278,301,300,-1,278,279,302,301,-1,279,280,303,302,-1,280,281,304,303,-1,281,282,305,304,-1,282,283,306,305,-1,283,284,307,306,-1,284,285,308,307,-1,285,286,309,308,-1,286,287,310,309,-1,287,288,311,310,-1,288,289,312,311,-1,289,290,313,312,-1,290,291,314,313,-1,291,292,315,314,-1,292,293,316,315,-1,293,294,317,316,-1,294,295,318,317,-1,295,296,319,318,-1,296,297,320,319,-1,297,298,321,320,-1,299,300,323,322,-1,300,301,324,323,-1,301,302,325,324,-1,302,303,326,325,-1,303,304,327,326,-1,304,305,328,327,-1,305,306,329,328,-1,306,307,330,329,-1,307,308,331,330,-1,308,309,332,331,-1,309,310,333,332,-1,310,311,334,333,-1,311,312,335,334,-1,312,313,336,335,-1,313,314,337,336,-1,314,315,338,337,-1,315,316,339,338,-1,316,317,340,339,-1,317,318,341,340,-1,318,319,342,341,-1,319,320,343,342,-1,320,321,344,343,-1,322,323,346,345,-1,323,324,347,346,-1,324,325,348,347,-1,325,326,349,348,-1,326,327,350,349,-1,327,328,351,350,-1,328,329,352,351,-1,329,330,353,352,-1,330,331,354,353,-1,331,332,355,354,-1,332,333,356,355,-1,333,334,357,356,-1,334,335,358,357,-1,335,336,359,358,-1,336,337,360,359,-1,337,338,361,360,-1,338,339,362,361,-1,339,340,363,362,-1,340,341,364,363,-1,341,342,365,364,-1,342,343,366,365,-1,343,344,367,366,-1,345,346,369,368,-1,346,347,370,369,-1,347,348,371,370,-1,348,349,372,371,-1,349,350,373,372,-1,350,351,374,373,-1,351,352,375,374,-1,352,353,376,375,-1,353,354,377,376,-1,354,355,378,377,-1,355,356,379,378,-1,356,357,380,379,-1,357,358,381,380,-1,358,359,382,381,-1,359,360,383,382,-1,360,361,384,383,-1,361,362,385,384,-1,362,363,386,385,-1,363,364,387,386,-1,364,365,388,387,-1,365,366,389,388,-1,366,367,390,389,-1,368,369,392,391,-1,369,370,393,392,-1,370,371,394,393,-1,371,372,395,394,-1,372,373,396,395,-1,373,374,397,396,-1,374,375,398,397,-1,375,376,399,398,-1,376,377,400,399,-1,377,378,401,400,-1,378,379,402,401,-1,379,380,403,402,-1,380,381,404,403,-1,381,382,405,404,-1,382,383,406,405,-1,383,384,407,406,-1,384,385,408,407,-1,385,386,409,408,-1,386,387,410,409,-1,387,388,411,410,-1,388,389,412,411,-1,389,390,413,412,-1,391,392,415,414,-1,392,393,416,415,-1,393,394,417,416,-1,394,395,418,417,-1,395,396,419,418,-1,396,397,420,419,-1,397,398,421,420,-1,398,399,422,421,-1,399,400,423,422,-1,400,401,424,423,-1,401,402,425,424,-1,402,403,426,425,-1,403,404,427,426,-1,404,405,428,427,-1,405,406,429,428,-1,406,407,430,429,-1,407,408,431,430,-1,408,409,432,431,-1,409,410,433,432,-1,410,411,434,433,-1,411,412,435,434,-1,412,413,436,435,-1,414,415,438,437,-1,415,416,439,438,-1,416,417,440,439,-1,417,418,441,440,-1};
			return value;
		}
		private int[] getIndexedLineSet_4_32_coordIndex_3()
		{
			int[] value = {418,419,442,441,-1,419,420,443,442,-1,420,421,444,443,-1,421,422,445,444,-1,422,423,446,445,-1,423,424,447,446,-1,424,425,448,447,-1,425,426,449,448,-1,426,427,450,449,-1,427,428,451,450,-1,428,429,452,451,-1,429,430,453,452,-1,430,431,454,453,-1,431,432,455,454,-1,432,433,456,455,-1,433,434,457,456,-1,434,435,458,457,-1,435,436,459,458,-1,437,438,461,460,-1,438,439,462,461,-1,439,440,463,462,-1,440,441,464,463,-1,441,442,465,464,-1,442,443,466,465,-1,443,444,467,466,-1,444,445,468,467,-1,445,446,469,468,-1,446,447,470,469,-1,447,448,471,470,-1,448,449,472,471,-1,449,450,473,472,-1,450,451,474,473,-1,451,452,475,474,-1,452,453,476,475,-1,453,454,477,476,-1,454,455,478,477,-1,455,456,479,478,-1,456,457,480,479,-1,457,458,481,480,-1,458,459,482,481,-1,460,461,484,483,-1,461,462,485,484,-1,462,463,486,485,-1,463,464,487,486,-1,464,465,488,487,-1,465,466,489,488,-1,466,467,490,489,-1,467,468,491,490,-1,468,469,492,491,-1,469,470,493,492,-1,470,471,494,493,-1,471,472,495,494,-1,472,473,496,495,-1,473,474,497,496,-1,474,475,498,497,-1,475,476,499,498,-1,476,477,500,499,-1,477,478,501,500,-1,478,479,502,501,-1,479,480,503,502,-1,480,481,504,503,-1,481,482,505,504,-1,483,484,507,506,-1,484,485,508,507,-1,485,486,509,508,-1,486,487,510,509,-1,487,488,511,510,-1,488,489,512,511,-1,489,490,513,512,-1,490,491,514,513,-1,491,492,515,514,-1,492,493,516,515,-1,493,494,517,516,-1,494,495,518,517,-1,495,496,519,518,-1,496,497,520,519,-1,497,498,521,520,-1,498,499,522,521,-1,499,500,523,522,-1,500,501,524,523,-1,501,502,525,524,-1,502,503,526,525,-1,503,504,527,526,-1,504,505,528,527,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_5_32_point_1()
		{
			double[] value = {-1.15,0.0,-1.15,-1.0,.05,0.0,-1.0,.15,-0.95,0.0,-1.0,.15,-0.85,0.0,-1.0,.15,-0.75,0.0,-1.0,.15,-0.65,0.0,-1.0,.15,-0.55,0.0,-1.0,.15,-0.45,0.0,-1.0,.15,-0.35,0.0,-1.0,.15,-0.25,0.0,-1.0,.15,-0.15,0.0,-1.0,.15,-0.05,0.0,-1.0,.15,0.05,0.0,-1.0,.15,0.15,0.0,-1.0,.15,0.25,0.0,-1.0,.15,0.35,0.0,-1.0,.15,0.45,0.0,-1.0,.15,0.55,0.0,-1.0,.15,0.65,0.0,-1.0,.15,0.75,0.0,-1.0,.15,0.85,0.0,-1.0,.15,0.95,0.0,-1.0,.15,1.05,0.0,-1.0,.15,-1.0,.15,0.0,-1.0,.05,-1.0,.05,0.0213225,-1.0,.05,-0.95,0.0422479,-1.0,.05,-0.85,0.0623862,-1.0,.05,-0.75,0.0813624,-1.0,.05,-0.65,0.0988229,-1.0,.05,-0.55,0.114443,-1.0,.05,-0.45,0.12793,-1.0,.05,-0.35,0.139035,-1.0,.05,-0.25,0.14755,-1.0,.05,-0.15,0.153316,-1.0,.05,-0.05,0.156226,-1.0,.05,0.05,0.156226,-1.0,.05,0.15,0.153316,-1.0,.05,0.25,0.14755,-1.0,.05,0.35,0.139035,-1.0,.05,0.45,0.127931,-1.0,.05,0.55,0.114443,-1.0,.05,0.65,0.0988233,-1.0,.05,0.75,0.0813627,-1.0,.05,0.85,0.0623866,-1.0,.05,0.95,0.0422483,-1.0,.05,1.05,0.0213229,-1.0,.05,-1.0,.15,0.0,-0.95,-1.0,.05,0.0422479,-0.95,-0.95,0.0837087,-0.95,-0.85,0.12361,-0.95,-0.75,0.161209,-0.95,-0.65,0.195805,-0.95,-0.55,0.226753,-0.95,-0.45,0.253478,-0.95,-0.35,0.27548,-0.95,-0.25,0.292351,-0.95,-0.15,0.303776,-0.95,-0.05,0.309543,-0.95,0.05,0.309543,-0.95,0.15,0.303777,-0.95,0.25,0.292352,-0.95,0.35,0.275481,-0.95,0.45,0.253478,-0.95,0.55,0.226754,-0.95,0.65,0.195806,-0.95,0.75,0.16121,-0.95,0.85,0.123611,-0.95,0.95,0.0837095,-0.95,1.05,0.0422487,-0.95,-1.0,.15,0.0,-0.85,-1.0,.05,0.0623862,-0.85,-0.95,0.12361,-0.85,-0.85,0.182532,-0.85,-0.75,0.238053,-0.85,-0.65,0.28914,-0.85,-0.55,0.33484,-0.85,-0.45,0.374303,-0.85,-0.35,0.406794,-0.85,-0.25,0.431707,-0.85,-0.15,0.448578,-0.85,-0.05,0.457093,-0.85,0.05,0.457093,-0.85,0.15,0.448578};
			return value;
		}
		private double[] getCoordinate_5_32_point_2()
		{
			double[] value = {-0.85,0.25,0.431707,-0.85,0.35,0.406795,-0.85,0.45,0.374304,-0.85,0.55,0.334841,-0.85,0.65,0.289141,-0.85,0.75,0.238054,-0.85,0.85,0.182533,-0.85,0.95,0.123611,-0.85,1.05,0.0623874,-0.85,-1.0,.15,0.0,-0.75,-1.0,.05,0.0813624,-0.75,-0.95,0.161209,-0.75,-0.85,0.238053,-0.75,-0.75,0.310462,-0.75,-0.65,0.377088,-0.75,-0.55,0.43669,-0.75,-0.45,0.488156,-0.75,-0.35,0.53053,-0.75,-0.25,0.563021,-0.75,-0.15,0.585023,-0.75,-0.05,0.596128,-0.75,0.05,0.596128,-0.75,0.15,0.585024,-0.75,0.25,0.563021,-0.75,0.35,0.530531,-0.75,0.45,0.488157,-0.75,0.55,0.436691,-0.75,0.65,0.377089,-0.75,0.75,0.310463,-0.75,0.85,0.238054,-0.75,0.95,0.161211,-0.75,1.05,0.0813639,-0.75,-1.0,.15,0.0,-0.65,-1.0,.05,0.0988229,-0.65,-0.95,0.195805,-0.65,-0.85,0.28914,-0.65,-0.75,0.377088,-0.65,-0.65,0.458012,-0.65,-0.55,0.530404,-0.65,-0.45,0.592916,-0.65,-0.35,0.644383,-0.65,-0.25,0.683846,-0.65,-0.15,0.710571,-0.65,-0.05,0.724059,-0.65,0.05,0.724059,-0.65,0.15,0.710571,-0.65,0.25,0.683847,-0.65,0.35,0.644384,-0.65,0.45,0.592917,-0.65,0.55,0.530406,-0.65,0.65,0.458014,-0.65,0.75,0.37709,-0.65,0.85,0.289141,-0.65,0.95,0.195807,-0.65,1.05,0.0988249,-0.65,-1.0,.15,0.0,-0.55,-1.0,.05,0.114443,-0.55,-0.95,0.226753,-0.55,-0.85,0.33484,-0.55,-0.75,0.43669,-0.55,-0.65,0.530404,-0.55,-0.55,0.614239,-0.55,-0.45,0.686631,-0.55,-0.35,0.746232,-0.55,-0.25,0.791933,-0.55,-0.15,0.822882,-0.55,-0.05,0.838501,-0.55,0.05,0.838502,-0.55,0.15,0.822882,-0.55,0.25,0.791934,-0.55,0.35,0.746233,-0.55,0.45,0.686632,-0.55,0.55,0.61424,-0.55,0.65,0.530406,-0.55,0.75,0.436692,-0.55,0.85,0.334842,-0.55,0.95,0.226756,-0.55,1.05,0.114445,-0.55,-1.0,.15,0.0,-0.45,-1.0,.05,0.12793,-0.45,-0.95,0.253478,-0.45,-0.85,0.374303,-0.45,-0.75,0.488156,-0.45,-0.65,0.592916,-0.45,-0.55,0.686631,-0.45,-0.45,0.767555,-0.45,-0.35,0.834181,-0.45,-0.25,0.885268,-0.45,-0.15,0.919864,-0.45,-0.05,0.937325,-0.45,0.05,0.937325,-0.45,0.15,0.919864,-0.45,0.25,0.885269,-0.45,0.35,0.834182,-0.45,0.45,0.767556,-0.45,0.55,0.686632,-0.45,0.65,0.592918,-0.45};
			return value;
		}
		private double[] getCoordinate_5_32_point_3()
		{
			double[] value = {0.75,0.488159,-0.45,0.85,0.374306,-0.45,0.95,0.25348,-0.45,1.05,0.127933,-0.45,-1.0,.15,0.0,-0.35,-1.0,.05,0.139035,-0.35,-0.95,0.27548,-0.35,-0.85,0.406794,-0.35,-0.75,0.53053,-0.35,-0.65,0.644383,-0.35,-0.55,0.746232,-0.35,-0.45,0.834181,-0.35,-0.35,0.90659,-0.35,-0.25,0.962112,-0.35,-0.15,0.999711,-0.35,-0.05,1.01869,-0.35,0.05,1.01869,-0.35,0.15,0.999711,-0.35,0.25,0.962113,-0.35,0.35,0.906592,-0.35,0.45,0.834183,-0.35,0.55,0.746234,-0.35,0.65,0.644385,-0.35,0.75,0.530532,-0.35,0.85,0.406797,-0.35,0.95,0.275483,-0.35,1.05,0.139038,-0.35,-1.0,.15,0.0,-0.25,-1.0,.05,0.14755,-0.25,-0.95,0.292351,-0.25,-0.85,0.431707,-0.25,-0.75,0.563021,-0.25,-0.65,0.683846,-0.25,-0.55,0.791933,-0.25,-0.45,0.885268,-0.25,-0.35,0.962112,-0.25,-0.25,1.02103,-0.25,-0.15,1.06093,-0.25,-0.05,1.08107,-0.25,0.05,1.08107,-0.25,0.15,1.06094,-0.25,0.25,1.02103,-0.25,0.35,0.962113,-0.25,0.45,0.885269,-0.25,0.55,0.791935,-0.25,0.65,0.683848,-0.25,0.75,0.563023,-0.25,0.85,0.43171,-0.25,0.95,0.292354,-0.25,1.05,0.147553,-0.25,-1.0,.15,0.0,-0.15,-1.0,.05,0.153316,-0.15,-0.95,0.303776,-0.15,-0.85,0.448578,-0.15,-0.75,0.585023,-0.15,-0.65,0.710571,-0.15,-0.55,0.822882,-0.15,-0.45,0.919864,-0.15,-0.35,0.999711,-0.15,-0.25,1.06093,-0.15,-0.15,1.1024,-0.15,-0.05,1.12332,-0.15,0.05,1.12332,-0.15,0.15,1.1024,-0.15,0.25,1.06094,-0.15,0.35,0.999712,-0.15,0.45,0.919866,-0.15,0.55,0.822884,-0.15,0.65,0.710573,-0.15,0.75,0.585026,-0.15,0.85,0.448581,-0.15,0.95,0.303779,-0.15,1.05,0.153319,-0.15,-1.0,.15,0.0,-0.05,-1.0,.05,0.156226,-0.05,-0.95,0.309543,-0.05,-0.85,0.457093,-0.05,-0.75,0.596128,-0.05,-0.65,0.724059,-0.05,-0.55,0.838501,-0.05,-0.45,0.937325,-0.05,-0.35,1.01869,-0.05,-0.25,1.08107,-0.05,-0.15,1.12332,-0.05,-0.05,1.14464,-0.05,0.05,1.14464,-0.05,0.15,1.12332,-0.05,0.25,1.08107,-0.05,0.35,1.01869,-0.05,0.45,0.937326,-0.05,0.55,0.838504,-0.05,0.65,0.724061,-0.05,0.75,0.596131,-0.05,0.85,0.457096,-0.05,0.95,0.309546,-0.05,1.05,0.156229,-0.05,-1.0,.15,0.0,0.05};
			return value;
		}
		private double[] getCoordinate_5_32_point_4()
		{
			double[] value = {-1.0,.05,0.156226,0.05,-0.95,0.309543,0.05,-0.85,0.457093,0.05,-0.75,0.596128,0.05,-0.65,0.724059,0.05,-0.55,0.838502,0.05,-0.45,0.937325,0.05,-0.35,1.01869,0.05,-0.25,1.08107,0.05,-0.15,1.12332,0.05,-0.05,1.14464,0.05,0.05,1.14464,0.05,0.15,1.12332,0.05,0.25,1.08107,0.05,0.35,1.01869,0.05,0.45,0.937326,0.05,0.55,0.838504,0.05,0.65,0.724061,0.05,0.75,0.596131,0.05,0.85,0.457096,0.05,0.95,0.309546,0.05,1.05,0.156229,0.05,-1.0,.15,0.0,0.15,-1.0,.05,0.153316,0.15,-0.95,0.303777,0.15,-0.85,0.448578,0.15,-0.75,0.585024,0.15,-0.65,0.710571,0.15,-0.55,0.822882,0.15,-0.45,0.919864,0.15,-0.35,0.999711,0.15,-0.25,1.06094,0.15,-0.15,1.1024,0.15,-0.05,1.12332,0.15,0.05,1.12332,0.15,0.15,1.1024,0.15,0.25,1.06094,0.15,0.35,0.999713,0.15,0.45,0.919866,0.15,0.55,0.822884,0.15,0.65,0.710573,0.15,0.75,0.585026,0.15,0.85,0.448581,0.15,0.95,0.30378,0.15,1.05,0.153319,0.15,-1.0,.15,0.0,0.25,-1.0,.05,0.14755,0.25,-0.95,0.292352,0.25,-0.85,0.431707,0.25,-0.75,0.563021,0.25,-0.65,0.683847,0.25,-0.55,0.791934,0.25,-0.45,0.885269,0.25,-0.35,0.962113,0.25,-0.25,1.02103,0.25,-0.15,1.06094,0.25,-0.05,1.08107,0.25,0.05,1.08107,0.25,0.15,1.06094,0.25,0.25,1.02104,0.25,0.35,0.962114,0.25,0.45,0.88527,0.25,0.55,0.791936,0.25,0.65,0.683849,0.25,0.75,0.563024,0.25,0.85,0.43171,0.25,0.95,0.292354,0.25,1.05,0.147553,0.25,-1.0,.15,0.0,0.35,-1.0,.05,0.139035,0.35,-0.95,0.275481,0.35,-0.85,0.406795,0.35,-0.75,0.530531,0.35,-0.65,0.644384,0.35,-0.55,0.746233,0.35,-0.45,0.834182,0.35,-0.35,0.906592,0.35,-0.25,0.962113,0.35,-0.15,0.999712,0.35,-0.05,1.01869,0.35,0.05,1.01869,0.35,0.15,0.999713,0.35,0.25,0.962114,0.35,0.35,0.906593,0.35,0.45,0.834184,0.35,0.55,0.746235,0.35,0.65,0.644386,0.35,0.75,0.530533,0.35,0.85,0.406797,0.35,0.95,0.275483,0.35,1.05,0.139038,0.35,-1.0,.15,0.0,0.45,-1.0,.05,0.127931,0.45,-0.95,0.253478,0.45,-0.85,0.374304,0.45,-0.75,0.488157,0.45,-0.65,0.592917,0.45};
			return value;
		}
		private double[] getCoordinate_5_32_point_5()
		{
			double[] value = {-0.55,0.686632,0.45,-0.45,0.767556,0.45,-0.35,0.834183,0.45,-0.25,0.885269,0.45,-0.15,0.919866,0.45,-0.05,0.937326,0.45,0.05,0.937326,0.45,0.15,0.919866,0.45,0.25,0.88527,0.45,0.35,0.834184,0.45,0.45,0.767558,0.45,0.55,0.686634,0.45,0.65,0.592919,0.45,0.75,0.48816,0.45,0.85,0.374306,0.45,0.95,0.253481,0.45,1.05,0.127933,0.45,-1.0,.15,0.0,0.55,-1.0,.05,0.114443,0.55,-0.95,0.226754,0.55,-0.85,0.334841,0.55,-0.75,0.436691,0.55,-0.65,0.530406,0.55,-0.55,0.61424,0.55,-0.45,0.686632,0.55,-0.35,0.746234,0.55,-0.25,0.791935,0.55,-0.15,0.822884,0.55,-0.05,0.838504,0.55,0.05,0.838504,0.55,0.15,0.822884,0.55,0.25,0.791936,0.55,0.35,0.746235,0.55,0.45,0.686634,0.55,0.55,0.614242,0.55,0.65,0.530407,0.55,0.75,0.436693,0.55,0.85,0.334843,0.55,0.95,0.226756,0.55,1.05,0.114445,0.55,-1.0,.15,0.0,0.65,-1.0,.05,0.0988233,0.65,-0.95,0.195806,0.65,-0.85,0.289141,0.65,-0.75,0.377089,0.65,-0.65,0.458014,0.65,-0.55,0.530406,0.65,-0.45,0.592918,0.65,-0.35,0.644385,0.65,-0.25,0.683848,0.65,-0.15,0.710573,0.65,-0.05,0.724061,0.65,0.05,0.724061,0.65,0.15,0.710573,0.65,0.25,0.683849,0.65,0.35,0.644386,0.65,0.45,0.592919,0.65,0.55,0.530407,0.65,0.65,0.458015,0.65,0.75,0.377091,0.65,0.85,0.289142,0.65,0.95,0.195808,0.65,1.05,0.0988252,0.65,-1.0,.15,0.0,0.75,-1.0,.05,0.0813627,0.75,-0.95,0.16121,0.75,-0.85,0.238054,0.75,-0.75,0.310463,0.75,-0.65,0.37709,0.75,-0.55,0.436692,0.75,-0.45,0.488159,0.75,-0.35,0.530532,0.75,-0.25,0.563023,0.75,-0.15,0.585026,0.75,-0.05,0.596131,0.75,0.05,0.596131,0.75,0.15,0.585026,0.75,0.25,0.563024,0.75,0.35,0.530533,0.75,0.45,0.48816,0.75,0.55,0.436693,0.75,0.65,0.377091,0.75,0.75,0.310465,0.75,0.85,0.238055,0.75,0.95,0.161211,0.75,1.05,0.0813643,0.75,-1.0,.15,0.0,0.85,-1.0,.05,0.0623866,0.85,-0.95,0.123611,0.85,-0.85,0.182533,0.85,-0.75,0.238054,0.85,-0.65,0.289141,0.85,-0.55,0.334842,0.85,-0.45,0.374306,0.85,-0.35,0.406797,0.85,-0.25,0.43171,0.85,-0.15,0.448581,0.85,-0.05};
			return value;
		}
		private double[] getCoordinate_5_32_point_6()
		{
			double[] value = {0.457096,0.85,0.05,0.457096,0.85,0.15,0.448581,0.85,0.25,0.43171,0.85,0.35,0.406797,0.85,0.45,0.374306,0.85,0.55,0.334843,0.85,0.65,0.289142,0.85,0.75,0.238055,0.85,0.85,0.182534,0.85,0.95,0.123612,0.85,1.05,0.0623878,0.85,-1.0,.15,0.0,0.95,-1.0,.05,0.0422483,0.95,-0.95,0.0837095,0.95,-0.85,0.123611,0.95,-0.75,0.161211,0.95,-0.65,0.195807,0.95,-0.55,0.226756,0.95,-0.45,0.25348,0.95,-0.35,0.275483,0.95,-0.25,0.292354,0.95,-0.15,0.303779,0.95,-0.05,0.309546,0.95,0.05,0.309546,0.95,0.15,0.30378,0.95,0.25,0.292354,0.95,0.35,0.275483,0.95,0.45,0.253481,0.95,0.55,0.226756,0.95,0.65,0.195808,0.95,0.75,0.161211,0.95,0.85,0.123612,0.95,0.95,0.0837103,0.95,1.05,0.0422491,0.95,-1.0,.15,0.0,1.05,-1.0,.05,0.0213229,1.05,-0.95,0.0422487,1.05,-0.85,0.0623874,1.05,-0.75,0.0813639,1.05,-0.65,0.0988249,1.05,-0.55,0.114445,1.05,-0.45,0.127933,1.05,-0.35,0.139038,1.05,-0.25,0.147553,1.05,-0.15,0.153319,1.05,-0.05,0.156229,1.05,0.05,0.156229,1.05,0.15,0.153319,1.05,0.25,0.147553,1.05,0.35,0.139038,1.05,0.45,0.127933,1.05,0.55,0.114445,1.05,0.65,0.0988252,1.05,0.75,0.0813643,1.05,0.85,0.0623878,1.05,0.95,0.0422491,1.05,1.05,0.0213233,1.05};
			return value;
		}

		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=4, element #32, 2420 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_4_32_coordIndex()
		{
			MFInt32 IndexedLineSet_4_32_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_4_32_coordIndex_1()))
				.append(new MFInt32(getIndexedLineSet_4_32_coordIndex_2()))
				.append(new MFInt32(getIndexedLineSet_4_32_coordIndex_3()));
			return IndexedLineSet_4_32_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=5, element #32, 1677 total numbers made up of 559 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_5_32_point()
		{
			MFVec3f Coordinate_5_32_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_5_32_point_1()))
				.append(new MFVec3f(getCoordinate_5_32_point_2()))
				.append(new MFVec3f(getCoordinate_5_32_point_3()))
				.append(new MFVec3f(getCoordinate_5_32_point_4()))
				.append(new MFVec3f(getCoordinate_5_32_point_5()))
				.append(new MFVec3f(getCoordinate_5_32_point_6()));
			return Coordinate_5_32_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return IndexedLineCoord model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new IndexedLineCoord().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.IndexedLineCoord\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IndexedLineCoord\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
