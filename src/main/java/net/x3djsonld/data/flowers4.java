package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> an animated flower. </p>
 <p> Related links: flowers4.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers4&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers4.x3d">flowers4.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers4.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/flowers4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> an animated flower </td>
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

public class flowers4
{
	/** Default constructor to create this object. */
	public flowers4 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("flowers4.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d"))
    .addMeta(new metaObject().setName("description").setContent("an animated flower")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new TransformObject("transform")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(.5f,.5f,.5f).setDiffuseColor(.7f,.7f,.7f))
          .setTexture(new ComposedCubeMapTextureObject()
            .setBack(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottom(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFront(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeft(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRight(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTop(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addShaders(new ComposedShaderObject("shader").setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs\"")))
            .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject("\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs\"")))))
        .addComments(new String[] {"",
"                <Sphere>"})
        .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit").setConvex(false)
          .setCoord(new CoordinateObject("OrbitCoordinates")))))
    .addChild(new ScriptObject("OrbitScript").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var e = 5;" + "\n" + 
"var f = 5;" + "\n" + 
"var g = 5;" + "\n" + 
"var h = 5;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"     resolution = 100;" + "\n" + 
"     updateCoordinates(resolution);" + "\n" + 
"     var cis = [];" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     cis.push(i*resolution+j);" + "\n" + 
"	     cis.push(i*resolution+j+1);" + "\n" + 
"	     cis.push((i+1)*resolution+j+1);" + "\n" + 
"	     cis.push((i+1)*resolution+j);" + "\n" + 
"	     cis.push(-1);" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = new MFInt32(cis);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function updateCoordinates(resolution) {" + "\n" + 
"     theta = 0.0;" + "\n" + 
"     phi = 0.0;" + "\n" + 
"     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var crds = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		crds.push(new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		));" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = new MFVec3f(crds);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(fraction, eventTime) {" + "\n" + 
"	choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		e += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		f += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		g += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		h += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	if (f < 1) {" + "\n" + 
"		f = 10;" + "\n" + 
"	}" + "\n" + 
"	if (g < 1) {" + "\n" + 
"		g = 4;" + "\n" + 
"	}" + "\n" + 
"	if (h < 1) {" + "\n" + 
"		h = 4;" + "\n" + 
"	}" + "\n" + 
"	resolution = 100;" + "\n" + 
"	updateCoordinates(resolution);" + "\n" + 
"}" + "\n")
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("coordinates").setType("MFVec3f"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32")))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(16).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("set_point"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return flowers4 model
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
        X3DObject exampleObject = new flowers4().getX3dModel();

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
			System.out.print("flowers4 self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
