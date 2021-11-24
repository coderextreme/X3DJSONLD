package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Networked control of master/slave viewpoints using DIS EspduTransform node. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/NetworkedCamera.java">NetworkedCamera.java</a> source, <a href="../../../DistributedInteractiveSimulation/NetworkedCameraIndex.html" target="_top">NetworkedCamera catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/NetworkedCamera.x3d">NetworkedCamera.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Networked control of master/slave viewpoints using DIS EspduTransform node. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> LT Patrick Sullivan </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 April 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 19 April 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development. will split into simple Inline-capable camera scene and usage example. Xj3D chat-server fallback needs to be checked. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/DIS.html" target="_blank">http://www.xj3d.org/extensions/DIS.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.yumetech.com" target="_blank">http://www.yumetech.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/NetworkedCamera.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/NetworkedCamera.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

	* @author Alan Hudson and Don Brutzman
 */

public class NetworkedCamera
{
	/** Default constructor to create this object. */
	public NetworkedCamera ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NetworkedCamera.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Networked control of master/slave viewpoints using DIS EspduTransform node."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("LT Patrick Sullivan"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("19 April 2005"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("19 April 2005"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development. will split into simple Inline-capable camera scene and usage example. Xj3D chat-server fallback needs to be checked."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/DIS.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.yumetech.com"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/NetworkedCamera.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NetworkedCamera.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {1.45,1.57}).setGroundColor(new MFColor(new double[] {.005,.05,.03,.01,.13,.09,.025,.22,.17})).setSkyAngle(new double[] {.9,1.57}).setSkyColor(new MFColor(new double[] {0.0,0.0,.2,.1,.1,.8,.7,.7,1.0})))
    .addChild(new Viewpoint().setDescription("Free Navigation").setPosition(28.85,3.978,-98.85))
    .addChild(new Viewpoint("MasterViewpoint").setDescription("Master Viewpoint").setOrientation(0.001188,-1.0,-0.008389,-2.86).setPosition(28.85,3.978,-98.85))
    .addChild(new ProximitySensor("WorldProximitySensor").setSize(1000000.0,1000000.0,1000000.0))
    .addChild(new EspduTransform("CameraEspduTransform").setAddress("224.2.181.145").setNetworkMode("networkWriter").setPort(62040).setWriteInterval(.01)
      .addChild(new Viewpoint("SlavedViewpoint").setDescription("Slaved Viewpoint").setPosition(0.0,0.0,0.0)))
    .addChild(new Script("ViewpointControlScript").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function bindMaster (value)" + "\n" + 
"{" + "\n" + 
"	Browser.print('[NetworkedCamera] Master viewpoint bound');" + "\n" + 
"	isMaster = value;" + "\n" + 
"	if (isMaster) networkMode ='networkWriter';" + "\n" + 
"}" + "\n" + 
"\n" + 
"function bindSlave (value)" + "\n" + 
"{" + "\n" + 
"	Browser.print('[NetworkedCamera] Slave viewpoint bound');" + "\n" + 
"	isSlave = value;" + "\n" + 
"	if (isSlave) networkMode ='networkReader';" + "\n" + 
"}" + "\n" + 
"\n" + 
"function user_translation(value)" + "\n" + 
"{" + "\n" + 
"	if (isMaster) sharedTranslation = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function user_rotation(value)" + "\n" + 
"{" + "\n" + 
"	if (isMaster) sharedRotation = value;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("bindMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("bindSlave").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("user_translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("user_rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("sharedTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("sharedRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
      .addField(new field().setName("isSlave").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false)))
    .addChild(new ROUTE().setFromNode("MasterViewpoint").setFromField("isBound").setToNode("ViewpointControlScript").setToField("bindMaster"))
    .addChild(new ROUTE().setFromNode("MasterViewpoint").setFromField("isBound").setToNode("WorldProximitySensor").setToField("enabled"))
    .addChild(new ROUTE().setFromNode("SlavedViewpoint").setFromField("isBound").setToNode("ViewpointControlScript").setToField("bindSlave"))
    .addChild(new ROUTE().setFromNode("WorldProximitySensor").setFromField("position_changed").setToNode("ViewpointControlScript").setToField("user_translation"))
    .addChild(new ROUTE().setFromNode("WorldProximitySensor").setFromField("orientation_changed").setToNode("ViewpointControlScript").setToField("user_rotation"))
    .addChild(new ROUTE().setFromNode("ViewpointControlScript").setFromField("sharedTranslation").setToNode("CameraEspduTransform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("ViewpointControlScript").setFromField("sharedRotation").setToNode("CameraEspduTransform").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("ViewpointControlScript").setFromField("networkMode").setToNode("CameraEspduTransform").setToField("networkMode"))
    .addComments(" ====================================================== ")
    .addComments(" Integrate heads-up display with onscreen networkMode selection and position/orientation tracing ")
    .addComments(" use of HeadsUpDislay and ViewPositionOrientation prototypes will be helpful if Xj3D supports them ")
    .addComments(" consider entity discovery as well ")
    .addComments(" ====================================================== ")
    .addComments(" Example background viewing scene, split out into separate example next ")
    .addChild(new Background().setGroundAngle(new double[] {1.45,1.57}).setGroundColor(new MFColor(new double[] {.005,.05,.03,.01,.13,.09,.025,.22,.17})).setSkyAngle(new double[] {.9,1.57}).setSkyColor(new MFColor(new double[] {0.0,0.0,.2,.1,.1,.8,.7,.7,1.0})))
    .addChild(new NavigationInfo().setSpeed(10).setType("\"WALK\" \"ANY\""))
    .addChild(new Transform().setTranslation(0.0,-0.1,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture("PT").setImage(new int[] {2,2,3,0x0,0x00FF00,0x0000FF,0xFF0000}))
          .setTextureTransform(new TextureTransform().setScale(100.0,100.0)))
        .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setCoordIndex(new int[] {0,1,2,3,0,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1000.0,0.0,1000.0,1000.0,0.0,-1000.0,-1000.0,0.0,-1000.0,-1000.0,0.0,1000.0})))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NetworkedCamera model
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
        X3D thisExampleX3dModel = new NetworkedCamera().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NetworkedCamera\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NetworkedCamera\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
