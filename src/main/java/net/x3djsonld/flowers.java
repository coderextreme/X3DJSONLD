package net.x3djsonld;

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
 * <p> 5 or more prismatic flowers. </p>
 <p> Related links: flowers.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.flowers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/flowers.x3d">flowers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 5 or more prismatic flowers </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/flowers.x3d" target="_blank">http://coderextreme.net/X3DJSONLD/flowers.x3d</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

public class flowers
{
  /** Default constructor to create this object. */
  public flowers ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("flowers.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("description").setContent("5 or more prismatic flowers"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers.x3d")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_back.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_bottom.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_front.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_left.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_right.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_top.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new ProtoDeclareObject().setName("flower")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("transform")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setSpecularColor(.5f,.5f,.5f).setDiffuseColor(.7f,.7f,.7f))
              .setTexture(new ComposedCubeMapTextureObject("texture")
                .setBack(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_back.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottom(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_bottom.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFront(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_front.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeft(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_left.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRight(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_right.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject("\"images/all_probes/stpeters_cross/stpeters_top.png\" \"http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addShaders(new ComposedShaderObject("shader").setLanguage("GLSL")
                .addField(new fieldObject().setAccessType("inputOutput").setName("xxxcube").setType("SFInt32").setValue("0"))
                .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFNode")
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
                .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("10"))
                .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("10"))
                .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2.0"))
                .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"cobweb.vs\" \"http://coderextreme.net/X3DJSONLD/cobweb.vs\"")))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject("\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"")))))
            .setGeometry(new IndexedFaceSetObject("Orbit").setDEF("Orbit")
              .setCoord(new CoordinateObject("OrbitCoordinates")))))
        .addChild(new ScriptObject("Bounce").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"			function set_translation(value) {" + "\n" + 
"				translation = value;" + "\n" + 
"			}" + "\n" + 
"			function translation_changed() {" + "\n" + 
"				return translation;" + "\n" + 
"			}" + "\n" + 
"			function initialize() {" + "\n" + 
"			    translation = new SFVec3f(0, 0, 0);" + "\n" + 
"			    velocity = new SFVec3f(" + "\n" + 
"			    	Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5);" + "\n" + 
"			}" + "\n" + 
"			function set_fraction() {" + "\n" + 
"			    translation = new SFVec3f(" + "\n" + 
"			    	translation[0] + velocity[0]," + "\n" + 
"				translation[1] + velocity[1]," + "\n" + 
"				translation[2] + velocity[2]);" + "\n" + 
"			    for (var j = 0; j <= 2; j++) {" + "\n" + 
"				    if (Math.abs(translation[j]) > 10) {" + "\n" + 
"					initialize();" + "\n" + 
"				    } else {" + "\n" + 
"					velocity[0] += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity[1] += Math.random() * 0.2 - 0.1;" + "\n" + 
"					velocity[2] += Math.random() * 0.2 - 0.1;" + "\n" + 
"				    }" + "\n" + 
"			    }" + "\n" + 
"			    animate_flowers();" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function initialize() {" + "\n" + 
"			     resolution = 100;" + "\n" + 
"			     updateCoordinates(resolution);" + "\n" + 
"			     if (typeof coordIndexes == 'undefined' || coordIndexes == null) {" + "\n" + 
"				coordIndexes = new MFInt32();" + "\n" + 
"			     }" + "\n" + 
"			     ci = 0;" + "\n" + 
"			     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"				for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"				     coordIndexes[ci] = i*resolution+j;" + "\n" + 
"				     coordIndexes[ci+1] = i*resolution+j+1;" + "\n" + 
"				     coordIndexes[ci+2] = (i+1)*resolution+j+1;" + "\n" + 
"				     coordIndexes[ci+3] = (i+1)*resolution+j;" + "\n" + 
"				     coordIndexes[ci+4] = -1;" + "\n" + 
"				     ci += 5;" + "\n" + 
"				}" + "\n" + 
"			    }" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function updateCoordinates(resolution) {" + "\n" + 
"			     theta = 0.0;" + "\n" + 
"			     phi = 0.0;" + "\n" + 
"			     delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"			     if (typeof coordinates == 'undefined' || coordinates == null) {" + "\n" + 
"				coordinates = new MFVec3f();" + "\n" + 
"			     }" + "\n" + 
"			     for ( i = 0; i < resolution; i++) {" + "\n" + 
"				for ( j = 0; j < resolution; j++) {" + "\n" + 
"					rho = a + b * Math.cos(c * theta) * Math.cos(d * phi);" + "\n" + 
"					coordinates[i*resolution+j] = new SFVec3f();" + "\n" + 
"					coordinates[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);" + "\n" + 
"					coordinates[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);" + "\n" + 
"					coordinates[i*resolution+j][2] = rho * Math.sin(phi);" + "\n" + 
"					theta += delta;" + "\n" + 
"				}" + "\n" + 
"				phi += delta;" + "\n" + 
"			     }" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function animate_flowers(fraction, eventTime) {" + "\n" + 
"				choice = Math.floor(Math.random() * 4);" + "\n" + 
"				switch (choice) {" + "\n" + 
"				case 0:" + "\n" + 
"					a += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 1:" + "\n" + 
"					b += Math.random() * 0.2 - 0.1;" + "\n" + 
"					break;" + "\n" + 
"				case 2:" + "\n" + 
"					c += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 3:" + "\n" + 
"					d += Math.random() * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				}" + "\n" + 
"				if (a > 1) {" + "\n" + 
"					a =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (b > 1) {" + "\n" + 
"					b =  0.5;" + "\n" + 
"				}" + "\n" + 
"				if (c < 1) {" + "\n" + 
"					c =  4;" + "\n" + 
"				}" + "\n" + 
"				if (d < 1) {" + "\n" + 
"					d =  4;" + "\n" + 
"				}" + "\n" + 
"				if (c > 10) {" + "\n" + 
"					c = 4;" + "\n" + 
"				}" + "\n" + 
"				if (d > 10) {" + "\n" + 
"					d = 4;" + "\n" + 
"				}" + "\n" + 
"				resolution = 100;" + "\n" + 
"				updateCoordinates(resolution);" + "\n" + 
"			}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFTime"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("coordinates").setType("MFVec3f"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("coordIndexes").setType("MFInt32"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("a").setType("SFFloat").setValue("0.5"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("b").setType("SFFloat").setValue("0.5"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("c").setType("SFFloat").setValue("3"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("d").setType("SFFloat").setValue("3"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("tdelta").setType("SFFloat").setValue("0.5"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("pdelta").setType("SFFloat").setValue("0.5")))
        .addChild(new TimeSensorObject("TourTime").setCycleInterval(0.150).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
        .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
        .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("set_point"))))
    .addChild(new TransformObject()
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))));
  }
  // end of initialize() method

  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return flowers model
   */
  public X3DObject getX3dModel()
  {	  
	  return x3dModel;
  }
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  public String validateSelf()
  {
	String       metaResult = new String();
	String validationResult = new String();
	String  exceptionResult = new String();
	try
	{
		initialize();
		
		if ((getX3dModel() == null) || (getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		for (metaObject meta : getX3dModel().getHead().getMetaList())
		{
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (Exception e)
	{
		exceptionResult = e.getMessage(); // report exception failures, if any
	}
	if  (metaResult.isEmpty() && exceptionResult.isEmpty() && validationResult.isEmpty())
	     return "success";
	else
	{
		String returnMessage = metaResult;
		if  (!exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  }
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    public static void main(String argv[])
    {
		flowers testObject = new flowers();
		System.out.println ("flowers execution self-validation test results: " + testObject.validateSelf());
	}
}
