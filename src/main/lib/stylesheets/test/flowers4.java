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
 * <p> Example scene flowers4. </p>
 <p> Related links: flowers4.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1)))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"cubemap/BK.png\"")).setBottomUrl(new MFStringObject("\"cubemap/BT.png\"")).setFrontUrl(new MFStringObject("\"cubemap/FR.png\"")).setLeftUrl(new MFStringObject("\"cubemap/LF.png\"")).setRightUrl(new MFStringObject("\"cubemap/RT.png\"")).setTopUrl(new MFStringObject("\"cubemap/TP.png\"")))
    .addChild(new ViewpointObject().setDescription("Transparent rose").setPosition(0.0f,0.0f,40.0f))
    .addChild(new TransformObject("Rose01")
      .addChild(new ShapeObject()
        .addComments(" Sphere/ ")
        .setAppearance(new AppearanceObject("_01_-_Default")
          .setMaterial(new MaterialObject().setSpecularColor(0.5f,0.5f,0.5f).setDiffuseColor(0.7f,0.7f,0.7f))
          .addShaders(new ComposedShaderObject("ComposedShader").setLanguage("GLSL")
            .addParts(new ShaderPartObject().setSourceCode("ecmascript: " + "\n" + 
"\n" + 
"/*" + "\n" + 
"The MIT License (MIT)" + "\n" + 
"Copyright (c) 2011 Authors of J3D. All rights reserved." + "\n" + 
"\n" + 
"Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:" + "\n" + 
"\n" + 
"The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software." + "\n" + 
"\n" + 
"THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." + "\n" + 
"*/" + "\n" + 
"attribute vec3 position;" + "\n" + 
"attribute vec3 normal;" + "\n" + 
"attribute vec2 texcoord;" + "\n" + 
"\n" + 
"uniform mat4 modelViewProjectionMatrix;" + "\n" + 
"uniform mat4 modelViewMatrix;" + "\n" + 
"uniform mat4 modelViewMatrixInverse;" + "\n" + 
"uniform mat4 normalMatrix;" + "\n" + 
"\n" + 
"uniform vec3 chromaticDispertion;" + "\n" + 
"uniform float bias;" + "\n" + 
"uniform float scale;" + "\n" + 
"uniform float power;" + "\n" + 
"\n" + 
"varying vec3 t;" + "\n" + 
"varying vec3 tr;" + "\n" + 
"varying vec3 tg;" + "\n" + 
"varying vec3 tb;" + "\n" + 
"varying float rfac;" + "\n" + 
"\n" + 
"void main()" + "\n" + 
"{" + "\n" + 
"    mat3 mvm3=mat3(" + "\n" + 
"                modelViewMatrix[0].x," + "\n" + 
"                modelViewMatrix[0].y," + "\n" + 
"                modelViewMatrix[0].z," + "\n" + 
"                modelViewMatrix[1].x," + "\n" + 
"                modelViewMatrix[1].y," + "\n" + 
"                modelViewMatrix[1].z," + "\n" + 
"                modelViewMatrix[2].x," + "\n" + 
"                modelViewMatrix[2].y," + "\n" + 
"                modelViewMatrix[2].z" + "\n" + 
"    );" + "\n" + 
"    vec3 fragNormal = mvm3*normal;" + "\n" + 
"    gl_Position = modelViewProjectionMatrix*vec4(position, 1.0);" + "\n" + 
"    vec3 incident = normalize((modelViewMatrix * vec4(position, 1.0)).xyz);" + "\n" + 
"\n" + 
"    t = reflect(incident, fragNormal)*mvm3;" + "\n" + 
"    tr = refract(incident, fragNormal, chromaticDispertion.x)*mvm3;" + "\n" + 
"    tg = refract(incident, fragNormal, chromaticDispertion.y)*mvm3;" + "\n" + 
"    tb = refract(incident, fragNormal, chromaticDispertion.z)*mvm3;" + "\n" + 
"\n" + 
"    rfac = bias + scale * pow(0.5+0.5*dot(incident, fragNormal), power);" + "\n" + 
"}" + "\n"))
            .addParts(new ShaderPartObject().setType("FRAGMENT").setSourceCode("ecmascript: " + "\n" + 
"\n" + 
"/*" + "\n" + 
"The MIT License (MIT)" + "\n" + 
"Copyright (c) 2011 Authors of J3D. All rights reserved." + "\n" + 
"\n" + 
"Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:" + "\n" + 
"\n" + 
"The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software." + "\n" + 
"\n" + 
"THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." + "\n" + 
"*/" + "\n" + 
"#ifdef GL_ES" + "\n" + 
"  precision highp float;" + "\n" + 
"#endif" + "\n" + 
"\n" + 
"uniform samplerCube cube;" + "\n" + 
"\n" + 
"varying vec3 t;" + "\n" + 
"varying vec3 tr;" + "\n" + 
"varying vec3 tg;" + "\n" + 
"varying vec3 tb;" + "\n" + 
"varying float rfac;" + "\n" + 
"\n" + 
"void main()" + "\n" + 
"{" + "\n" + 
"    vec4 ref = textureCube(cube, t);" + "\n" + 
"    vec4 ret = vec4(1.0);" + "\n" + 
"\n" + 
"    ret.r = textureCube(cube, tr).r;" + "\n" + 
"    ret.g = textureCube(cube, tg).g;" + "\n" + 
"    ret.b = textureCube(cube, tb).b;" + "\n" + 
"\n" + 
"    gl_FragColor = ret * rfac + ref * (1.0 - rfac);" + "\n" + 
"}" + "\n"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2.0")))
          .setTexture(new ComposedCubeMapTextureObject()
            .setBack(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/BK.png\" \"http://coderextreme.net/cubemap/BK.png\"")))
            .setBottom(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/BT.png\" \"http://coderextreme.net/cubemap/BT.png\"")))
            .setFront(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/FR.png\" \"http://coderextreme.net/cubemap/FR.png\"")))
            .setLeft(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/LF.png\" \"http://coderextreme.net/cubemap/LF.png\"")))
            .setRight(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/RT.png\" \"http://coderextreme.net/cubemap/RT.png\"")))
            .setTop(new ImageTextureObject().setUrl(new MFStringObject("\"cubemap/TP.png\" \"http://coderextreme.net/cubemap/TP.png\"")))))
        .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit").setCreaseAngle(1.57f)
          .setCoord(new CoordinateObject("OrbitCoordinates")))))
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
"     updateCoordinates(resolution);" + "\n" + 
"     if (typeof coordIndexes == 'undefined' || coordIndexes == null) {" + "\n" + 
"     	coordIndexes = new MFInt32();" + "\n" + 
"     }" + "\n" + 
"     ci = 0;" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     coordIndexes[ci] = i*resolution+j;" + "\n" + 
"	     coordIndexes[ci+1] = i*resolution+j+1;" + "\n" + 
"	     coordIndexes[ci+2] = (i+1)*resolution+j+1;" + "\n" + 
"	     coordIndexes[ci+3] = (i+1)*resolution+j;" + "\n" + 
"	     coordIndexes[ci+4] = -1;" + "\n" + 
"	     ci += 5;" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function updateCoordinates(resolution) {" + "\n" + 
"     theta = 0.0;" + "\n" + 
"     phi = 0.0;" + "\n" + 
"     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     if (typeof coordinates == 'undefined' || coordinates == null) {" + "\n" + 
"     	coordinates = new MFVec3f();" + "\n" + 
"     }" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		coordinates[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);" + "\n" + 
"		coordinates[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);" + "\n" + 
"		coordinates[i*resolution+j][2] = rho * Math.sin(phi);" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
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
      .addField(new fieldObject().setAccessType("inputOutput").setName("coordIndexes").setType("MFInt32")))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(16.0).setLoop(true))
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
        X3DObject thisExampleX3dObject = new flowers4().getX3dModel();

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
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
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
			System.out.println("WARNING: \"flowers4\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"flowers4\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
