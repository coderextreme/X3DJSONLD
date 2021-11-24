package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Expose functionality of Browser class in Java/ECMAscript annexes of VRML 97 specification. Consider promotion to a native node in X3D/VRML 200x scenes. </p>
 <p> Related links: <a href="../../../development/SceneNodePrototype.java">SceneNodePrototype.java</a> source, <a href="../../../development/SceneNodePrototypeIndex.html" target="_top">SceneNodePrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/SceneNodePrototype.x3d">SceneNodePrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 December 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Expose functionality of Browser class in Java/ECMAscript annexes of VRML 97 specification. Consider promotion to a native node in X3D/VRML 200x scenes. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development, many of these exposed attributes will be eliminated. Scene node will not be used in X3D proper, but may become a valuable prototype via SAI scripting. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/SceneNodePrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/SceneNodePrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

public class SceneNodePrototype
{
	/** Default constructor to create this object. */
	public SceneNodePrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SceneNodePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("19 December 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Expose functionality of Browser class in Java/ECMAscript annexes of VRML 97 specification. Consider promotion to a native node in X3D/VRML 200x scenes."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Under development, many of these exposed attributes will be eliminated. Scene node will not be used in X3D proper, but may become a valuable prototype via SAI scripting."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/SceneNodePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SceneNodePrototype.x3d"))
    .addChild(new ProtoDeclare("Scene").setName("Scene")
      .setProtoInterface(new ProtoInterface()
        .addComments(" Standard browser attributes exposed via VRML 97 Script annexes ")
        .addField(new field().setName("createVrmlFromString").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("createVrmlFromURL").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("createdVrmlNodes").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("currentFrameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("currentSpeed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("evaluate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("loadUrl").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("loadUrlParameter").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("replaceWorld").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("worldUrl").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("addRoute").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("deleteRoute").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("fromNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("fromEventOut").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("toNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("toEventIn").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addComments(" Candidate additions ")
        .addField(new field().setName("boundBackground").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("boundFog").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("boundGeoViewpoint").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("boundNavigationInfo").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("boundViewpoint").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("response").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("dashboardVisible").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new field().setName("pixelWidth").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1))
        .addField(new field().setName("pixelHeight").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1)))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("BrowserScript").setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function evaluate (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	if (inputValue)  // Boolean" + "\n" + 
"	{" + "\n" + 
"		currentFrameRate = Browser.getCurrentFrameRate ();" + "\n" + 
"		currentSpeed = Browser.getCurrentSpeed ();" + "\n" + 
"		version = Browser.getVersion ();" + "\n" + 
"		name = Browser.getName ();" + "\n" + 
"		worldUrl = Browser.getWorldURL ();" + "\n" + 
"\n" + 
"		Browser.print ('currentFrameRate = ' + currentFrameRate);" + "\n" + 
"		Browser.print ('currentSpeed = ' + currentSpeed);" + "\n" + 
"		Browser.print ('version = ' + version);" + "\n" + 
"		Browser.print ('name = ' + name);" + "\n" + 
"		Browser.print ('worldUrl = ' + worldUrl);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function createVrmlFromString (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	// note VRML 97 method name didn't follow capitalization convention" + "\n" + 
"	createdVrmlNodes = Browser.createVrmlFromString (inputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function createVrmlFromUrl (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	// note VRML 97 method name didn't follow capitalization convention" + "\n" + 
"	createdVrmlNodes = Browser.createVrmlFromURL (inputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function description (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('description = ' + inputValue);" + "\n" + 
"	Browser.setDescription (inputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function replaceWorld (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.replaceWorld (inputValue);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function addRoute (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	if (inputValue)  // Boolean" + "\n" + 
"	{" + "\n" + 
"		Browser.addRoute (fromNode, fromEventOut, toNode, toEventIn);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function deleteRoute (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	if (inputValue)  // Boolean" + "\n" + 
"	{" + "\n" + 
"		Browser.deleteRoute (fromNode, fromEventOut, toNode, toEventIn);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function loadURL (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('loadURL = ' + inputValue);" + "\n" + 
"	Browser.print ('loadUrlParameter = ' + loadUrlParameter);" + "\n" + 
"	Browser.loadURL (inputValue, loadUrlParameter);" + "\n" + 
"}" + "\n" + 
"function createVrmlFromURL (SFStringValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function loadUrl (SFStringValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function loadUrlParameter (SFStringValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function fromNode (SFNodeValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function fromEventOut (SFStringValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function toNode (SFNodeValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function toEventIn (SFStringValue, timestamp)" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n")
          .addField(new field().setName("createVrmlFromString").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("createVrmlFromURL").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("createdVrmlNodes").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("currentFrameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("currentSpeed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("evaluate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("loadUrl").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("loadUrlParameter").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("replaceWorld").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("worldUrl").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("addRoute").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("deleteRoute").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("fromNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("fromEventOut").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("toNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("toEventIn").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("response").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("createVrmlFromString").setProtoField("createVrmlFromString"))
            .addConnect(new connect().setNodeField("createVrmlFromURL").setProtoField("createVrmlFromURL"))
            .addConnect(new connect().setNodeField("createdVrmlNodes").setProtoField("createdVrmlNodes"))
            .addConnect(new connect().setNodeField("currentFrameRate").setProtoField("currentFrameRate"))
            .addConnect(new connect().setNodeField("currentSpeed").setProtoField("currentSpeed"))
            .addConnect(new connect().setNodeField("description").setProtoField("description"))
            .addConnect(new connect().setNodeField("evaluate").setProtoField("evaluate"))
            .addConnect(new connect().setNodeField("loadUrl").setProtoField("loadUrl"))
            .addConnect(new connect().setNodeField("loadUrlParameter").setProtoField("loadUrlParameter"))
            .addConnect(new connect().setNodeField("name").setProtoField("name"))
            .addConnect(new connect().setNodeField("replaceWorld").setProtoField("replaceWorld"))
            .addConnect(new connect().setNodeField("version").setProtoField("version"))
            .addConnect(new connect().setNodeField("worldUrl").setProtoField("worldUrl"))
            .addConnect(new connect().setNodeField("addRoute").setProtoField("addRoute"))
            .addConnect(new connect().setNodeField("deleteRoute").setProtoField("deleteRoute"))
            .addConnect(new connect().setNodeField("fromNode").setProtoField("fromNode"))
            .addConnect(new connect().setNodeField("fromEventOut").setProtoField("fromEventOut"))
            .addConnect(new connect().setNodeField("toNode").setProtoField("toNode"))
            .addConnect(new connect().setNodeField("toEventIn").setProtoField("toEventIn"))
            .addConnect(new connect().setNodeField("response").setProtoField("response"))))))
    .addComments(" Example invocation ")
    .addChild(new ProtoInstance("Scene", "SceneNode").setContainerField("children"))
    .addChild(new Shape()
      .setGeometry(new Text("Output3dText").setString(new String[] {"Click text for partial Scene node test"})
        .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(0.0,0.6,0.6))))
    .addChild(new TouchSensor("ClickTextSensor").setDescription("Click text for partial Scene node test"))
    .addChild(new Script("AssembleBrowserOutputText").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	evaluatedResult = new MFString (" + "\n" + 
"		'Click for partial Scene node test:'," + "\n" + 
"		' ', ' ', ' ', ' ', ' ', ' ', ' ');" + "\n" + 
"}" + "\n" + 
"function currentFrameRate (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	evaluatedResult [2] = 'currentFrameRate=' + inputValue;" + "\n" + 
"}" + "\n" + 
"function currentSpeed (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	evaluatedResult [3] = 'currentSpeed=' + inputValue;" + "\n" + 
"}" + "\n" + 
"function version (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	evaluatedResult [4] = 'version=' + inputValue;" + "\n" + 
"}" + "\n" + 
"function name (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	evaluatedResult [5] = 'name=' + inputValue;" + "\n" + 
"}" + "\n" + 
"function worldUrl (inputValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	evaluatedResult [6] = 'worldUrl=';" + "\n" + 
"	evaluatedResult [7] = inputValue;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("currentFrameRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("currentSpeed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("worldUrl").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("evaluatedResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ROUTE().setFromNode("ClickTextSensor").setFromField("isActive").setToNode("SceneNode").setToField("evaluate"))
    .addChild(new ROUTE().setFromNode("SceneNode").setFromField("currentFrameRate").setToNode("AssembleBrowserOutputText").setToField("currentFrameRate"))
    .addChild(new ROUTE().setFromNode("SceneNode").setFromField("currentSpeed").setToNode("AssembleBrowserOutputText").setToField("currentSpeed"))
    .addChild(new ROUTE().setFromNode("SceneNode").setFromField("version").setToNode("AssembleBrowserOutputText").setToField("version"))
    .addChild(new ROUTE().setFromNode("SceneNode").setFromField("name").setToNode("AssembleBrowserOutputText").setToField("name"))
    .addChild(new ROUTE().setFromNode("SceneNode").setFromField("worldUrl").setToNode("AssembleBrowserOutputText").setToField("worldUrl"))
    .addChild(new ROUTE().setFromNode("AssembleBrowserOutputText").setFromField("evaluatedResult").setToNode("Output3dText").setToField("string")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SceneNodePrototype model
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
        X3D thisExampleX3dModel = new SceneNodePrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SceneNodePrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SceneNodePrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
