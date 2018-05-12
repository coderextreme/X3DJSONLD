package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene flower. </p>
 <p> Related links: flower.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

 */

public class flower
{
	/** Default constructor to create this object. */
	public flower ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new DirectionalLightObject().setDirection(new SFVec3fObject(new float[] {0.0f,-0.8f,-0.2f})).setIntensity(0.5f))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {1.000f,1.000f,1.000f})))
    .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(new SFVec3fObject(new float[] {0.0f,0.0f,50.0f})))
    .addChild(new TransformObject().setTranslation(new SFVec3fObject(new float[] {0.0f,-1.0f,1.0f})).setRotation(new SFRotationObject(new float[] {0.0f,1.0f,0.0f,3.1415926f})).setScale(new SFVec3fObject(new float[] {1.5f,1.5f,1.5f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.1f).setShininess(0.145f).setSpecularColor(new SFColorObject(new float[] {0.8f,0.8f,0.8f})).setDiffuseColor(new SFColorObject(new float[] {0.9f,0.3f,0.3f}))))
        .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit").setCcw(false).setConvex(false).setCoordIndex(new int[] {0,1,2,-1})
          .setCoord(new CoordinateObject("OrbitCoordinates").setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f}))))))
    .addChild(new ScriptObject("OrbitScript").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var e = 5;" + "\n" + 
"var f = 5;" + "\n" + 
"var g = 5;" + "\n" + 
"var h = 5;" + "\n" + 
"var resolution = 100;" + "\n" + 
"var t = 0;" + "\n" + 
"var p = 0;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
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
"     var theta = 0.0;" + "\n" + 
"     var phi = 0.0;" + "\n" + 
"     var delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var localc = [];" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
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
"	t += 0.5;" + "\n" + 
"	p += 0.5;" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
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
"	generateCoordinates(resolution);" + "\n" + 
"}" + "\n")
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("coordinates").setType("MFVec3f"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("coordIndexes").setType("MFInt32"))
      .addComments(new String[] {"",
"        <field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>",
"        <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>",
"        <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>"}))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(16).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
    .addChild(new ROUTEObject().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return flower model
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
        X3DObject thisExampleX3dObject = new flower().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					//  arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"flower\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"flower\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
