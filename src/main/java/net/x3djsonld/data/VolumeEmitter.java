package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.VolumeRendering.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example scene VolumeEmitter. </p>
 <p> Related links:  source VolumeEmitter.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> comment </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> Sun, 01 May 2016 01:57:45 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> holger </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Holger Seelig </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Titania V1.4.2, <a href="http://titania.create3000.de" target="_blank">http://titania.create3000.de</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Sunrize X3D Editor V1.6.10, <a href="https://create3000.github.io/sunrize/" target="_blank">https://create3000.github.io/sunrize/</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter.x3d </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Mon, 22 Apr 2024 19:55:06 GMT </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author holger
	* @author Holger Seelig
 */

public class VolumeEmitter
{
	/** Default constructor to create this object. */
	public VolumeEmitter ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("ParticleSystems").setLevel(3))
    .addMeta(new meta().setName("comment").setContent("World of Titania"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("Sun, 01 May 2016 01:57:45 GMT"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("holger"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Holger Seelig"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Titania V1.4.2, http://titania.create3000.de"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter.x3d"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("Mon, 22 Apr 2024 19:55:06 GMT")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("VolumeEmitter")
      .setMetadata(new MetadataSet("Titania").setName("Titania").setReference("http://titania.create3000.de")
        .setMetadata(new MetadataSet("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataString("type").setName("type").setReference("http://titania.create3000.de").setValue(new String[] {"EXAMINE"})))
        .setMetadata(new MetadataSet("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataDouble("position").setName("position").setReference("http://titania.create3000.de").setValue(new double[] {0.0,0.0,10.0}))
          .setMetadata(new MetadataDouble("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(new double[] {0.0,0.0,1.0,0.0}))
          .setMetadata(new MetadataDouble("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(new double[] {0.0,0.0,0.0})))
        .setMetadata(new MetadataSet("Selection").setName("Selection").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataSet("previous").setName("previous").setReference("http://titania.create3000.de")))))
    .addChild(new Background("Gray").setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new OrthoViewpoint().setDescription("OrthoViewpoint").setFieldOfView(-1.5,-1.5,1.5,1.5))
    .addChild(new Viewpoint().setDescription("Viewpoint").setPosition(0.0,0.0,8.0))
    .addChild(new ParticleSystem().setColorKey(new double[] {0.0,0.1,0.4,1.0}).setGeometryType("POINT").setLifetimeVariation(0.01).setMaxParticles(100000).setParticleLifetime(60).setParticleSize(0.1,0.1)
      .setEmitter(new /*avoid name collision with file name by defining full package*/org.web3d.x3d.jsail.VolumeEmitter().setDirection(0.0,0.0,0.0).setMass(0.01).setSurfaceArea(0.01)
        .setCoord(new Coordinate().setPoint(getCoordinate_5_24_point())))
      .setAppearance(new Appearance()
        .setPointProperties(new PointProperties().setPointSizeMaxValue(2).setPointSizeScaleFactor(2))))
    .addChild(new ClipPlane().setPlane(0.0,0.0,1.0,0.2))
    .addChild(new ClipPlane().setPlane(0.0,0.0,-1.0,0.2))
    .addChild(new Transform("IndexedLineSet")
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1})
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0})))
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0})))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getVolumeEmitter_4_24_coordIndex_1()
		{
			int[] value = {0,1,2,3,-1,5,4,7,6,-1,3,2,6,7,-1,4,5,1,0,-1,4,0,3,7,-1,1,5,6,2,-1,8,9,10,-1,8,10,11,-1,8,11,12,-1,8,12,13,-1,8,13,14,-1,8,14,15,-1,8,15,16,-1,8,16,17,-1,8,17,18,-1,8,18,19,-1,8,19,20,-1,8,20,21,-1,8,21,22,-1,8,22,23,-1,8,23,24,-1,8,24,25,-1,8,25,26,-1,8,26,27,-1,8,27,28,-1,8,28,29,-1,8,29,30,-1,8,30,31,-1,8,31,32,-1,8,32,33,-1,8,33,34,-1,8,34,35,-1,8,35,36,-1,8,36,37,-1,8,37,38,-1,8,38,9,-1,9,39,40,10,-1,10,40,41,11,-1,11,41,42,12,-1,12,42,43,13,-1,13,43,44,14,-1,14,44,45,15,-1,15,45,46,16,-1,16,46,47,17,-1,17,47,48,18,-1,18,48,49,19,-1,19,49,50,20,-1,20,50,51,21,-1,21,51,52,22,-1,22,52,53,23,-1,23,53,54,24,-1,24,54,55,25,-1,25,55,56,26,-1,26,56,57,27,-1,27,57,58,28,-1,28,58,59,29,-1,29,59,60,30,-1,30,60,61,31,-1,31,61,62,32,-1,32,62,63,33,-1,33,63,64,34,-1,34,64,65,35,-1,35,65,66,36,-1,36,66,67,37,-1,37,67,68,38,-1,38,68,39,9,-1,39,69,70,40,-1,40,70,71,41,-1,41,71,72,42,-1,42,72,73,43,-1,43,73,74,44,-1,44,74,75,45,-1,45,75,76,46,-1,46,76,77,47,-1,47,77,78,48,-1,48,78,79,49,-1,49,79,80,50,-1,50,80,81,51,-1,51,81,82,52,-1,52,82,83,53,-1,53,83,84,54,-1,54,84,85,55,-1,55,85,86,56,-1,56,86,87,57,-1,57,87,88,58,-1,58,88,89,59,-1,59,89,90,60,-1,60,90,91,61,-1,61,91,92,62,-1,62,92,93,63,-1,63,93,94,64,-1,64,94,95,65,-1,65,95,96,66,-1,66,96,97,67,-1,67,97,98,68,-1,68,98,69,39,-1,69,99,100,70,-1,70,100,101,71,-1,71,101,102,72,-1,72,102,103,73,-1,73,103,104,74,-1,74,104,105,75,-1,75,105,106,76,-1,76,106,107,77,-1,77,107,108,78,-1,78,108,109,79,-1,79,109,110,80,-1,80,110,111,81,-1,81,111,112,82,-1,82,112,113,83,-1,83,113,114,84,-1,84,114,115,85,-1,85,115,116,86,-1,86,116,117,87,-1,87,117,118,88,-1,88,118,119,89,-1,89,119,120,90,-1,90,120,121,91,-1,91,121,122,92,-1,92,122,123,93,-1,93,123,124,94,-1,94,124,125,95,-1,95,125,126,96,-1,96,126,127,97,-1,97,127,128,98,-1,98,128,99,69,-1,99,129,130,100,-1,100,130,131,101,-1,101,131,132,102,-1,102,132,133,103,-1,103,133,134,104,-1,104,134,135,105,-1,105,135,136,106,-1,106,136,137,107,-1,107,137,138,108,-1,108,138,139,109,-1,109,139,140,110,-1,110,140,141,111,-1,111,141,142,112,-1,112,142,143,113,-1,113,143,144,114,-1,114,144,145,115,-1,115,145,146,116,-1,116,146,147,117,-1,117,147,148,118,-1,118,148,149,119,-1,119,149,150,120,-1,120,150,151,121,-1,121,151,152,122,-1,122,152,153,123,-1,123,153,154,124,-1,124,154,155,125,-1,125,155,156,126,-1,126,156,157,127,-1,127,157,158,128,-1,128,158,129,99,-1,129,159,160,130,-1,130,160,161,131,-1,131,161,162,132,-1,132,162,163,133,-1,133,163,164,134,-1,134,164,165,135,-1,135,165,166,136,-1,136,166,167,137,-1,137,167,168,138,-1,138,168,169,139,-1,139,169,170,140,-1,140,170,171,141,-1,141,171,172,142,-1,142,172,173,143,-1,143,173,174,144,-1,144,174,175,145,-1,145,175,176,146,-1,146,176,177,147,-1,147,177,178,148,-1,148,178,179,149,-1,149,179,180,150,-1,150,180,181,151,-1,151,181,182,152,-1,152,182,183,153,-1,153,183,184,154,-1,154,184,185,155,-1,155,185,186,156,-1,156,186,187,157,-1,157,187,188,158,-1,158,188,159,129,-1,159,189,190,160,-1,160,190,191,161,-1,161,191,192,162,-1,162,192,193,163,-1,163,193,194,164,-1,164,194,195,165,-1,165,195,196,166,-1,166,196,197,167,-1,167,197,198,168,-1,168,198,199,169,-1,169,199,200,170,-1,170,200,201,171,-1,171,201,202,172,-1,172,202,203,173,-1,173,203,204,174,-1,174,204,205,175,-1,175,205,206,176,-1,176,206,207,177,-1,177,207,208,178,-1,178,208,209,179,-1};
			return value;
		}
		private int[] getVolumeEmitter_4_24_coordIndex_2()
		{
			int[] value = {179,209,210,180,-1,180,210,211,181,-1,181,211,212,182,-1,182,212,213,183,-1,183,213,214,184,-1,184,214,215,185,-1,185,215,216,186,-1,186,216,217,187,-1,187,217,218,188,-1,188,218,189,159,-1,189,219,220,190,-1,190,220,221,191,-1,191,221,222,192,-1,192,222,223,193,-1,193,223,224,194,-1,194,224,225,195,-1,195,225,226,196,-1,196,226,227,197,-1,197,227,228,198,-1,198,228,229,199,-1,199,229,230,200,-1,200,230,231,201,-1,201,231,232,202,-1,202,232,233,203,-1,203,233,234,204,-1,204,234,235,205,-1,205,235,236,206,-1,206,236,237,207,-1,207,237,238,208,-1,208,238,239,209,-1,209,239,240,210,-1,210,240,241,211,-1,211,241,242,212,-1,212,242,243,213,-1,213,243,244,214,-1,214,244,245,215,-1,215,245,246,216,-1,216,246,247,217,-1,217,247,248,218,-1,218,248,219,189,-1,219,249,250,220,-1,220,250,251,221,-1,221,251,252,222,-1,222,252,253,223,-1,223,253,254,224,-1,224,254,255,225,-1,225,255,256,226,-1,226,256,257,227,-1,227,257,258,228,-1,228,258,259,229,-1,229,259,260,230,-1,230,260,261,231,-1,231,261,262,232,-1,232,262,263,233,-1,233,263,264,234,-1,234,264,265,235,-1,235,265,266,236,-1,236,266,267,237,-1,237,267,268,238,-1,238,268,269,239,-1,239,269,270,240,-1,240,270,271,241,-1,241,271,272,242,-1,242,272,273,243,-1,243,273,274,244,-1,244,274,275,245,-1,245,275,276,246,-1,246,276,277,247,-1,247,277,278,248,-1,248,278,249,219,-1,249,279,280,250,-1,250,280,281,251,-1,251,281,282,252,-1,252,282,283,253,-1,253,283,284,254,-1,254,284,285,255,-1,255,285,286,256,-1,256,286,287,257,-1,257,287,288,258,-1,258,288,289,259,-1,259,289,290,260,-1,260,290,291,261,-1,261,291,292,262,-1,262,292,293,263,-1,263,293,294,264,-1,264,294,295,265,-1,265,295,296,266,-1,266,296,297,267,-1,267,297,298,268,-1,268,298,299,269,-1,269,299,300,270,-1,270,300,301,271,-1,271,301,302,272,-1,272,302,303,273,-1,273,303,304,274,-1,274,304,305,275,-1,275,305,306,276,-1,276,306,307,277,-1,277,307,308,278,-1,278,308,279,249,-1,279,309,310,280,-1,280,310,311,281,-1,281,311,312,282,-1,282,312,313,283,-1,283,313,314,284,-1,284,314,315,285,-1,285,315,316,286,-1,286,316,317,287,-1,287,317,318,288,-1,288,318,319,289,-1,289,319,320,290,-1,290,320,321,291,-1,291,321,322,292,-1,292,322,323,293,-1,293,323,324,294,-1,294,324,325,295,-1,295,325,326,296,-1,296,326,327,297,-1,297,327,328,298,-1,298,328,329,299,-1,299,329,330,300,-1,300,330,331,301,-1,301,331,332,302,-1,302,332,333,303,-1,303,333,334,304,-1,304,334,335,305,-1,305,335,336,306,-1,306,336,337,307,-1,307,337,338,308,-1,308,338,309,279,-1,309,339,340,310,-1,310,340,341,311,-1,311,341,342,312,-1,312,342,343,313,-1,313,343,344,314,-1,314,344,345,315,-1,315,345,346,316,-1,316,346,347,317,-1,317,347,348,318,-1,318,348,349,319,-1,319,349,350,320,-1,320,350,351,321,-1,321,351,352,322,-1,322,352,353,323,-1,323,353,354,324,-1,324,354,355,325,-1,325,355,356,326,-1,326,356,357,327,-1,327,357,358,328,-1,328,358,359,329,-1,329,359,360,330,-1,330,360,361,331,-1,331,361,362,332,-1,332,362,363,333,-1,333,363,364,334,-1,334,364,365,335,-1,335,365,366,336,-1,336,366,367,337,-1,337,367,368,338,-1,338,368,339,309,-1,339,369,370,340,-1,340,370,371,341,-1,341,371,372,342,-1,342,372,373,343,-1,343,373,374,344,-1,344,374,375,345,-1,345,375,376,346,-1,346,376,377,347,-1,347,377,378,348,-1,348,378,379,349,-1,349,379,380,350,-1,350,380,381,351,-1,351,381,382,352,-1,352,382,383,353,-1,353,383,384,354,-1,354,384,385,355,-1,355,385,386,356,-1,356,386,387,357,-1,357,387,388,358,-1,358,388,389,359,-1,359,389,390,360,-1,360,390,391,361,-1,361,391,392,362,-1,362,392,393,363,-1,363,393,394,364,-1,364,394,395,365,-1,365,395,396,366,-1,366,396,397,367,-1,367,397,398,368,-1,368,398,369,339,-1,369,399,370,-1,370,399,371,-1,371,399,372,-1,372,399,373,-1,373,399,374,-1,374,399,375,-1,375,399,376,-1,376,399,377,-1,377,399,378,-1,378,399,379,-1,379,399,380,-1,380,399,381,-1,381,399};
			return value;
		}
		private int[] getVolumeEmitter_4_24_coordIndex_3()
		{
			int[] value = {382,-1,382,399,383,-1,383,399,384,-1,384,399,385,-1,385,399,386,-1,386,399,387,-1,387,399,388,-1,388,399,389,-1,389,399,390,-1,390,399,391,-1,391,399,392,-1,392,399,393,-1,393,399,394,-1,394,399,395,-1,395,399,396,-1,396,399,397,-1,397,399,398,-1,398,399,369,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_5_24_point_1()
		{
			double[] value = {0.0277709,-1.0,1.0,2.02777,-1.0,1.0,2.02777,1.0,1.0,0.0277709,1.0,1.0,0.0277709,-1.0,-1.0,2.02777,-1.0,-1.0,2.02777,1.0,-1.0,0.0277709,1.0,-1.0,-1.01983,1.0,0.0,-1.01983,0.974928,-0.222521,-1.06609,0.974928,-0.217658,-1.11034,0.974928,-0.203283,-1.15062,0.974928,-0.180023,-1.18519,0.974928,-0.148896,-1.21254,0.974928,-0.11126,-1.23146,0.974928,-0.0687627,-1.24113,0.974928,-0.0232598,-1.24113,0.974928,0.0232598,-1.23146,0.974928,0.0687627,-1.21254,0.974928,0.11126,-1.18519,0.974928,0.148896,-1.15062,0.974928,0.180023,-1.11034,0.974928,0.203283,-1.06609,0.974928,0.217658,-1.01983,0.974928,0.222521,-0.973561,0.974928,0.217658,-0.929318,0.974928,0.203283,-0.889031,0.974928,0.180023,-0.85446,0.974928,0.148896,-0.827116,0.974928,0.11126,-0.808195,0.974928,0.0687627,-0.798523,0.974928,0.0232598,-0.798523,0.974928,-0.0232598,-0.808195,0.974928,-0.0687627,-0.827116,0.974928,-0.11126,-0.85446,0.974928,-0.148896,-0.889031,0.974928,-0.180023,-0.929318,0.974928,-0.203283,-0.973561,0.974928,-0.217658,-1.01983,0.900969,-0.433884,-1.11004,0.900969,-0.424402,-1.19631,0.900969,-0.396373,-1.27486,0.900969,-0.351019,-1.34227,0.900969,-0.290325,-1.39558,0.900969,-0.216942,-1.43248,0.900969,-0.134077,-1.45134,0.900969,-0.0453532,-1.45134,0.900969,0.0453532,-1.43248,0.900969,0.134077,-1.39558,0.900969,0.216942,-1.34227,0.900969,0.290325,-1.27486,0.900969,0.351019,-1.19631,0.900969,0.396373,-1.11004,0.900969,0.424402,-1.01983,0.900969,0.433884,-0.929616,0.900969,0.424402,-0.843349,0.900969,0.396373,-0.764795,0.900969,0.351019,-0.697387,0.900969,0.290325,-0.644071,0.900969,0.216942,-0.607177,0.900969,0.134077,-0.588318,0.900969,0.0453532,-0.588318,0.900969,-0.0453532,-0.607177,0.900969,-0.134077,-0.644071,0.900969,-0.216942,-0.697387,0.900969,-0.290325,-0.764795,0.900969,-0.351019,-0.843349,0.900969,-0.396373,-0.929616,0.900969,-0.424402,-1.01983,0.781832,-0.62349,-1.14946,0.781832,-0.609865,-1.27343,0.781832,-0.569586,-1.38631,0.781832,-0.504414,-1.48317,0.781832,-0.417196,-1.55979,0.781832,-0.311745,-1.6128,0.781832,-0.192669,-1.6399,0.781832,-0.0651724,-1.6399,0.781832,0.0651724,-1.6128,0.781832,0.192669,-1.55979,0.781832,0.311745,-1.48317,0.781832,0.417196,-1.38631,0.781832,0.504414,-1.27343,0.781832,0.569586,-1.14946,0.781832,0.609865,-1.01983,0.781832,0.62349,-0.890194,0.781832,0.609865,-0.766229,0.781832,0.569586,-0.653347,0.781832,0.504414,-0.556482,0.781832,0.417196,-0.479867,0.781832,0.311745,-0.426851,0.781832,0.192669,-0.399751,0.781832,0.0651724,-0.399751,0.781832,-0.0651724,-0.426851,0.781832,-0.192669,-0.479867,0.781832,-0.311745,-0.556482,0.781832,-0.417196,-0.653347,0.781832,-0.504414,-0.766229,0.781832,-0.569586,-0.890194,0.781832,-0.609865,-1.01983,0.62349,-0.781832};
			return value;
		}
		private double[] getCoordinate_5_24_point_2()
		{
			double[] value = {-1.18238,0.62349,-0.764747,-1.33783,0.62349,-0.714239,-1.47938,0.62349,-0.632515,-1.60084,0.62349,-0.523147,-1.69692,0.62349,-0.390916,-1.7634,0.62349,-0.241599,-1.79738,0.62349,-0.0817236,-1.79738,0.62349,0.0817236,-1.7634,0.62349,0.241599,-1.69692,0.62349,0.390916,-1.60084,0.62349,0.523147,-1.47938,0.62349,0.632515,-1.33783,0.62349,0.714239,-1.18238,0.62349,0.764747,-1.01983,0.62349,0.781832,-0.857273,0.62349,0.764747,-0.701826,0.62349,0.714239,-0.560276,0.62349,0.632515,-0.438811,0.62349,0.523147,-0.342739,0.62349,0.390916,-0.276259,0.62349,0.241599,-0.242277,0.62349,0.0817236,-0.242277,0.62349,-0.0817236,-0.276259,0.62349,-0.241599,-0.342739,0.62349,-0.390916,-0.438811,0.62349,-0.523147,-0.560276,0.62349,-0.632515,-0.701826,0.62349,-0.714239,-0.857273,0.62349,-0.764747,-1.01983,0.433884,-0.900969,-1.20715,0.433884,-0.881281,-1.38629,0.433884,-0.823076,-1.54941,0.433884,-0.728899,-1.68938,0.433884,-0.602866,-1.80009,0.433884,-0.450484,-1.8767,0.433884,-0.278415,-1.91586,0.433884,-0.0941769,-1.91586,0.433884,0.0941769,-1.8767,0.433884,0.278415,-1.80009,0.433884,0.450484,-1.68938,0.433884,0.602866,-1.54941,0.433884,0.728899,-1.38629,0.433884,0.823076,-1.20715,0.433884,0.881281,-1.01983,0.433884,0.900969,-0.832503,0.433884,0.881281,-0.653368,0.433884,0.823076,-0.490249,0.433884,0.728899,-0.350275,0.433884,0.602866,-0.239563,0.433884,0.450484,-0.162953,0.433884,0.278415,-0.123792,0.433884,0.0941769,-0.123792,0.433884,-0.0941769,-0.162953,0.433884,-0.278415,-0.239563,0.433884,-0.450484,-0.350275,0.433884,-0.602866,-0.490249,0.433884,-0.728899,-0.653368,0.433884,-0.823076,-0.832503,0.433884,-0.881281,-1.01983,0.222521,-0.974928,-1.22253,0.222521,-0.953623,-1.41637,0.222521,-0.890641,-1.59288,0.222521,-0.788733,-1.74434,0.222521,-0.652354,-1.86414,0.222521,-0.487464,-1.94704,0.222521,-0.301269,-1.98942,0.222521,-0.101908,-1.98942,0.222521,0.101908,-1.94704,0.222521,0.301269,-1.86414,0.222521,0.487464,-1.74434,0.222521,0.652354,-1.59288,0.222521,0.788733,-1.41637,0.222521,0.890641,-1.22253,0.222521,0.953623,-1.01983,0.222521,0.974928,-0.817126,0.222521,0.953623,-0.623286,0.222521,0.890641,-0.446777,0.222521,0.788733,-0.295313,0.222521,0.652354,-0.175513,0.222521,0.487464,-0.0926139,0.222521,0.301269,-0.0502383,0.222521,0.101908,-0.0502383,0.222521,-0.101908,-0.0926139,0.222521,-0.301269,-0.175513,0.222521,-0.487464,-0.295313,0.222521,-0.652354,-0.446777,0.222521,-0.788733,-0.623286,0.222521,-0.890641,-0.817126,0.222521,-0.953623,-1.01983,6.12323e-17,-1,-1.22774,6.12323e-17,-0.978148,-1.42657,6.12323e-17,-0.913545,-1.60761,6.12323e-17,-0.809017,-1.76297,6.12323e-17,-0.669131,-1.88585,6.12323e-17,-0.5,-1.97089,6.12323e-17,-0.309017,-2.01435,6.12323e-17,-0.104528,-2.01435,6.12323e-17,0.104528,-1.97089,6.12323e-17,0.309017,-1.88585,6.12323e-17,0.5};
			return value;
		}
		private double[] getCoordinate_5_24_point_3()
		{
			double[] value = {-1.76297,6.12323e-17,0.669131,-1.60761,6.12323e-17,0.809017,-1.42657,6.12323e-17,0.913545,-1.22774,6.12323e-17,0.978148,-1.01983,6.12323e-17,1,-0.811914,6.12323e-17,0.978148,-0.613089,6.12323e-17,0.913545,-0.43204,6.12323e-17,0.809017,-0.27668,6.12323e-17,0.669131,-0.1538,6.12323e-17,0.5,-0.0687689,6.12323e-17,0.309017,-0.0253035,6.12323e-17,0.104528,-0.0253035,6.12323e-17,-0.104528,-0.0687689,6.12323e-17,-0.309017,-0.1538,6.12323e-17,-0.5,-0.27668,6.12323e-17,-0.669131,-0.43204,6.12323e-17,-0.809017,-0.613089,6.12323e-17,-0.913545,-0.811914,6.12323e-17,-0.978148,-1.01983,-0.222521,-0.974928,-1.22253,-0.222521,-0.953623,-1.41637,-0.222521,-0.890641,-1.59288,-0.222521,-0.788733,-1.74434,-0.222521,-0.652354,-1.86414,-0.222521,-0.487464,-1.94704,-0.222521,-0.301269,-1.98942,-0.222521,-0.101908,-1.98942,-0.222521,0.101908,-1.94704,-0.222521,0.301269,-1.86414,-0.222521,0.487464,-1.74434,-0.222521,0.652354,-1.59288,-0.222521,0.788733,-1.41637,-0.222521,0.890641,-1.22253,-0.222521,0.953623,-1.01983,-0.222521,0.974928,-0.817126,-0.222521,0.953623,-0.623286,-0.222521,0.890641,-0.446777,-0.222521,0.788733,-0.295313,-0.222521,0.652354,-0.175513,-0.222521,0.487464,-0.0926139,-0.222521,0.301269,-0.0502383,-0.222521,0.101908,-0.0502383,-0.222521,-0.101908,-0.0926139,-0.222521,-0.301269,-0.175513,-0.222521,-0.487464,-0.295313,-0.222521,-0.652354,-0.446777,-0.222521,-0.788733,-0.623286,-0.222521,-0.890641,-0.817126,-0.222521,-0.953623,-1.01983,-0.433884,-0.900969,-1.20715,-0.433884,-0.881281,-1.38629,-0.433884,-0.823076,-1.54941,-0.433884,-0.728899,-1.68938,-0.433884,-0.602866,-1.80009,-0.433884,-0.450484,-1.8767,-0.433884,-0.278415,-1.91586,-0.433884,-0.0941769,-1.91586,-0.433884,0.0941769,-1.8767,-0.433884,0.278415,-1.80009,-0.433884,0.450484,-1.68938,-0.433884,0.602866,-1.54941,-0.433884,0.728899,-1.38629,-0.433884,0.823076,-1.20715,-0.433884,0.881281,-1.01983,-0.433884,0.900969,-0.832503,-0.433884,0.881281,-0.653368,-0.433884,0.823076,-0.490249,-0.433884,0.728899,-0.350275,-0.433884,0.602866,-0.239563,-0.433884,0.450484,-0.162953,-0.433884,0.278415,-0.123792,-0.433884,0.0941769,-0.123792,-0.433884,-0.0941769,-0.162953,-0.433884,-0.278415,-0.239563,-0.433884,-0.450484,-0.350275,-0.433884,-0.602866,-0.490249,-0.433884,-0.728899,-0.653368,-0.433884,-0.823076,-0.832503,-0.433884,-0.881281,-1.01983,-0.62349,-0.781832,-1.18238,-0.62349,-0.764747,-1.33783,-0.62349,-0.714239,-1.47938,-0.62349,-0.632515,-1.60084,-0.62349,-0.523147,-1.69692,-0.62349,-0.390916,-1.7634,-0.62349,-0.241599,-1.79738,-0.62349,-0.0817236,-1.79738,-0.62349,0.0817236,-1.7634,-0.62349,0.241599,-1.69692,-0.62349,0.390916,-1.60084,-0.62349,0.523147,-1.47938,-0.62349,0.632515,-1.33783,-0.62349,0.714239,-1.18238,-0.62349,0.764747,-1.01983,-0.62349,0.781832,-0.857273,-0.62349,0.764747,-0.701826,-0.62349,0.714239,-0.560276,-0.62349,0.632515,-0.438811,-0.62349,0.523147,-0.342739,-0.62349,0.390916};
			return value;
		}
		private double[] getCoordinate_5_24_point_4()
		{
			double[] value = {-0.276259,-0.62349,0.241599,-0.242277,-0.62349,0.0817236,-0.242277,-0.62349,-0.0817236,-0.276259,-0.62349,-0.241599,-0.342739,-0.62349,-0.390916,-0.438811,-0.62349,-0.523147,-0.560276,-0.62349,-0.632515,-0.701826,-0.62349,-0.714239,-0.857273,-0.62349,-0.764747,-1.01983,-0.781832,-0.62349,-1.14946,-0.781832,-0.609865,-1.27343,-0.781832,-0.569586,-1.38631,-0.781832,-0.504414,-1.48317,-0.781832,-0.417196,-1.55979,-0.781832,-0.311745,-1.6128,-0.781832,-0.192669,-1.6399,-0.781832,-0.0651724,-1.6399,-0.781832,0.0651724,-1.6128,-0.781832,0.192669,-1.55979,-0.781832,0.311745,-1.48317,-0.781832,0.417196,-1.38631,-0.781832,0.504414,-1.27343,-0.781832,0.569586,-1.14946,-0.781832,0.609865,-1.01983,-0.781832,0.62349,-0.890194,-0.781832,0.609865,-0.766229,-0.781832,0.569586,-0.653347,-0.781832,0.504414,-0.556482,-0.781832,0.417196,-0.479867,-0.781832,0.311745,-0.426851,-0.781832,0.192669,-0.399751,-0.781832,0.0651724,-0.399751,-0.781832,-0.0651724,-0.426851,-0.781832,-0.192669,-0.479867,-0.781832,-0.311745,-0.556482,-0.781832,-0.417196,-0.653347,-0.781832,-0.504414,-0.766229,-0.781832,-0.569586,-0.890194,-0.781832,-0.609865,-1.01983,-0.900969,-0.433884,-1.11004,-0.900969,-0.424402,-1.19631,-0.900969,-0.396373,-1.27486,-0.900969,-0.351019,-1.34227,-0.900969,-0.290325,-1.39558,-0.900969,-0.216942,-1.43248,-0.900969,-0.134077,-1.45134,-0.900969,-0.0453532,-1.45134,-0.900969,0.0453532,-1.43248,-0.900969,0.134077,-1.39558,-0.900969,0.216942,-1.34227,-0.900969,0.290325,-1.27486,-0.900969,0.351019,-1.19631,-0.900969,0.396373,-1.11004,-0.900969,0.424402,-1.01983,-0.900969,0.433884,-0.929616,-0.900969,0.424402,-0.843349,-0.900969,0.396373,-0.764795,-0.900969,0.351019,-0.697387,-0.900969,0.290325,-0.644071,-0.900969,0.216942,-0.607177,-0.900969,0.134077,-0.588318,-0.900969,0.0453532,-0.588318,-0.900969,-0.0453532,-0.607177,-0.900969,-0.134077,-0.644071,-0.900969,-0.216942,-0.697387,-0.900969,-0.290325,-0.764795,-0.900969,-0.351019,-0.843349,-0.900969,-0.396373,-0.929616,-0.900969,-0.424402,-1.01983,-0.974928,-0.222521,-1.06609,-0.974928,-0.217658,-1.11034,-0.974928,-0.203283,-1.15062,-0.974928,-0.180023,-1.18519,-0.974928,-0.148896,-1.21254,-0.974928,-0.11126,-1.23146,-0.974928,-0.0687627,-1.24113,-0.974928,-0.0232598,-1.24113,-0.974928,0.0232598,-1.23146,-0.974928,0.0687627,-1.21254,-0.974928,0.11126,-1.18519,-0.974928,0.148896,-1.15062,-0.974928,0.180023,-1.11034,-0.974928,0.203283,-1.06609,-0.974928,0.217658,-1.01983,-0.974928,0.222521,-0.973561,-0.974928,0.217658,-0.929318,-0.974928,0.203283,-0.889031,-0.974928,0.180023,-0.85446,-0.974928,0.148896,-0.827116,-0.974928,0.11126,-0.808195,-0.974928,0.0687627,-0.798523,-0.974928,0.0232598,-0.798523,-0.974928,-0.0232598,-0.808195,-0.974928,-0.0687627,-0.827116,-0.974928,-0.11126,-0.85446,-0.974928,-0.148896,-0.889031,-0.974928,-0.180023,-0.929318,-0.974928,-0.203283,-0.973561,-0.974928,-0.217658,-1.01983,-1.0,0.0};
			return value;
		}

		/** Large attribute array: VolumeEmitter coordIndex field, scene-graph level=4, element #24, 2070 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getVolumeEmitter_4_24_coordIndex()
		{
			MFInt32 VolumeEmitter_4_24_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getVolumeEmitter_4_24_coordIndex_1()))
				.append(new MFInt32(getVolumeEmitter_4_24_coordIndex_2()))
				.append(new MFInt32(getVolumeEmitter_4_24_coordIndex_3()));
			return VolumeEmitter_4_24_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=5, element #24, 1200 total numbers made up of 400 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_5_24_point()
		{
			MFVec3f Coordinate_5_24_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_5_24_point_1()))
				.append(new MFVec3f(getCoordinate_5_24_point_2()))
				.append(new MFVec3f(getCoordinate_5_24_point_3()))
				.append(new MFVec3f(getCoordinate_5_24_point_4()));
			return Coordinate_5_24_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return VolumeEmitter model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new VolumeEmitter().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.VolumeEmitter\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.VolumeEmitter self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./VolumeEmitter_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./VolumeEmitter_JavaExport.x3d"; 
                String filenameX3DV = "./VolumeEmitter_JavaExport.x3dv"; 
                String filenameJSON = "./VolumeEmitter_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
