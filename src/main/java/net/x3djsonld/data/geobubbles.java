package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> geo bubbles. </p>
 <p> Related links: geobubbles.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geobubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geobubbles.x3d">geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geobubbles.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> geo bubbles </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author John Carlson
 */

public class geobubbles
{
	/** Default constructor to create this object. */
	public geobubbles ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Geospatial").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("geobubbles.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
    .addMeta(new metaObject().setName("description").setContent("geo bubbles")))
  .setScene(new SceneObject()
    .addComments("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/")
    .addComments("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/")
    .addChild(new GeoViewpointObject("Tour").setDescription("Tour Views").setPosition(0.0f,0.0f,4.0f).setOrientation(1.0f,0.0f,0.0f,0.0f))
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/BK.png\" \"https://coderextreme.net/X3DJSONLD/images/BK.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/BT.png\" \"https://coderextreme.net/X3DJSONLD/images/BT.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/FR.png\" \"https://coderextreme.net/X3DJSONLD/images/FR.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/LF.png\" \"https://coderextreme.net/X3DJSONLD/images/LF.png\"")).setRightUrl(new MFStringObject("\"../resources/images/RT.png\" \"https://coderextreme.net/X3DJSONLD/images/RT.png\"")).setTopUrl(new MFStringObject("\"../resources/images/TP.png\" \"https://coderextreme.net/X3DJSONLD/images/TP.png\"")))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(0.5f,0.5f,0.5f).setDiffuseColor(0.7f,0.7f,0.7f)))))
    .addChild(new TimeSensorObject("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new GeoPositionInterpolatorObject("TourPosition").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFVec3dObject(new double[] {0.0015708,0.0,4.0,0.0,0.0015708,4.0})))
    .addChild(new ScriptObject("RandomTourTime").setSourceCode("ecmascript:" + "\n" + 
"\n" + 
"               function set_cycle(value) {" + "\n" + 
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo" + "\n" + 
"                        var ov = val;" + "\n" + 
"			// Browser.print('old '+ov);" + "\n" + 
"                        do {" + "\n" + 
"                                val = Math.floor(Math.random()*2);" + "\n" + 
"                                var vc = val;" + "\n" + 
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);" + "\n" + 
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);" + "\n" + 
"			// Browser.println(positions[ov]);" + "\n" + 
"			// Browser.println(positions[vc]);" + "\n" + 
"                        position = new MFVec3d();" + "\n" + 
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);" + "\n" + 
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);" + "\n" + 
"               }")
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_cycle").setType("SFTime"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("val").setType("SFFloat").setValue("0"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("positions").setType("MFVec3d").setValue("0.0015708 0 4 0 0.0015708 4"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("position").setType("MFVec3d").setValue("0.0015708 0 4 0 0.0015708 4")))
    .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
    .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
    .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return geobubbles model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new geobubbles().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("geobubbles self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
