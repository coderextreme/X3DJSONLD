package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi). </p>
 <p> Related links: flowers2.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> flowers2.x3d </i> </td>
			<td> title </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> author </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> transcriber </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 January 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> url </i> </td>
			<td> <a href="https://coderextreme.net/x3d/flowers2.x3d" target="_blank">https://coderextreme.net/x3d/flowers2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manually written </td>
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

 */

public class flowers2
{
	/** Default constructor to create this object. */
	public flowers2 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("flowers2.x3d").setContent("title"))
    .addMeta(new metaObject().setName("author").setContent("John Carlson"))
    .addMeta(new metaObject().setName("transcriber").setContent("John Carlson"))
    .addMeta(new metaObject().setName("created").setContent("23 January 2005"))
    .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
    .addMeta(new metaObject().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
    .addMeta(new metaObject().setName("url").setContent("https://coderextreme.net/x3d/flowers2.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("manually written")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new ViewpointObject().setDescription("Two mathematical orbitals").setPosition(0.0f,0.0f,50.0f))
    .addChild(new GroupObject()
      .addChild(new DirectionalLightObject().setDirection(1.0f,1.0f,1.0f))
      .addChild(new TransformObject("OrbitTransform").setTranslation(8.0f,0.0f,0.0f)
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.5f,1.0f).setSpecularColor(0.0f,0.5f,1.0f)))
          .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit").setConvex(false)
            .setCoord(new CoordinateObject("OrbitCoordinates")))))
      .addChild(new TransformObject("OrbitTransform2").setTranslation(-8.0f,0.0f,0.0f)
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(0.75f).setDiffuseColor(1.0f,0.5f,0.0f).setSpecularColor(1.0f,0.5f,0.0f)))
          .setGeometry(new IndexedFaceSetObject("Orbit2").setDEF("Orbit2")
            .setCoord(new CoordinateObject("OrbitCoordinates2")))))
      .addChild(new TimeSensorObject("Clock").setCycleInterval(16).setLoop(true))
      .addChild(new OrientationInterpolatorObject("OrbitPath").setKey(new float[] {0.0f,0.50f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,3.14f,1.0f,0.0f,0.0f,6.28f})))
      .addChild(new ScriptObject("OrbitScript").setSourceCode("\n" + 
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
"     generateCoordinates(resolution);" + "\n" + 
"     var localci = [];" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     localci.push(i*resolution+j);" + "\n" + 
"	     localci.push(i*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j);" + "\n" + 
"	     localci.push(-1);" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = new MFInt32(localci);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function generateCoordinates(resolution) {" + "\n" + 
"     theta = 0.0;" + "\n" + 
"     phi = 0.0;" + "\n" + 
"     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var localc = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		localc.push(new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		));" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = new MFVec3f(localc);" + "\n" + 
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
"	generateCoordinates(resolution);" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("coordinates").setType("MFVec3f"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32")))
      .addChild(new ScriptObject("OrbitScript2").setSourceCode("\n" + 
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
"     generateCoordinates(resolution);" + "\n" + 
"     var localci = [];" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     localci.push(i*resolution+j);" + "\n" + 
"	     localci.push(i*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j);" + "\n" + 
"	     localci.push(-1);" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = new MFInt32(localci);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function generateCoordinates(resolution) {" + "\n" + 
"     theta = 0.0;" + "\n" + 
"     phi = 0.0;" + "\n" + 
"     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var localc = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		localc.push(new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		));" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     " + "\n" + 
"     coordinates = new MFVec3f(localc);" + "\n" + 
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
"	generateCoordinates(resolution);" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("coordinates").setType("MFVec3f"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32"))))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("OrbitScript2").setFromField("coordIndexes").setToNode("Orbit2").setToField("coordIndex"))
    .addChild(new ROUTEObject().setFromNode("OrbitScript2").setFromField("coordinates").setToNode("OrbitCoordinates2").setToField("point"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript2").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
    .addChild(new ROUTEObject().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform2").setToField("rotation")));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return flowers2 model
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
        X3DObject exampleObject = new flowers2().getX3dModel();

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
			System.out.print("flowers2 self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
