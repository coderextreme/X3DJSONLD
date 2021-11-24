package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> ViewpointGroup contains Viewpoint and ViewpointGroup nodes, allowing nested lists and viewpoint scoping in viewpoint lists. This is a developmental example for potential specification improvement. It is needed because (a) currently specified rules for X3D/VRML node binding state that behavior of child Viewpoints beneath Switch/LOD/etc. is undefined, and (b) browser viewpoint list display behavior is undefined. </p>
 <p> Related links: <a href="../../../development/ViewpointGroupPrototype.java">ViewpointGroupPrototype.java</a> source, <a href="../../../development/ViewpointGroupPrototypeIndex.html" target="_top">ViewpointGroupPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ViewpointGroupPrototype.x3d">ViewpointGroupPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> ViewpointGroup contains Viewpoint and ViewpointGroup nodes, allowing nested lists and viewpoint scoping in viewpoint lists. This is a developmental example for potential specification improvement. It is needed because (a) currently specified rules for X3D/VRML node binding state that behavior of child Viewpoints beneath Switch/LOD/etc. is undefined, and (b) browser viewpoint list display behavior is undefined. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 29 October 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> this prototype is for development purposes only, do not override native player support for ViewpointGroup </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/ViewpointListViewpointGroupProse.html">ViewpointListViewpointGroupProse.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/ViewpointGroupExample.x3d">ViewpointGroupExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#Viewpoint" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#Viewpoint</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> ViewpointGroup Viewpoint </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.x3d</a> </td>
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

public class ViewpointGroupPrototype
{
	/** Default constructor to create this object. */
	public ViewpointGroupPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ViewpointGroupPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("ViewpointGroup contains Viewpoint and ViewpointGroup nodes, allowing nested lists and viewpoint scoping in viewpoint lists. This is a developmental example for potential specification improvement. It is needed because (a) currently specified rules for X3D/VRML node binding state that behavior of child Viewpoints beneath Switch/LOD/etc. is undefined, and (b) browser viewpoint list display behavior is undefined."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("29 October 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("this prototype is for development purposes only, do not override native player support for ViewpointGroup"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ViewpointListViewpointGroupProse.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ViewpointGroupExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#Viewpoint"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("ViewpointGroup Viewpoint"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ViewpointGroupPrototype.x3d"))
    .addChild(new ProtoDeclare("ViewpointGroup").setName("ViewpointGroup").setAppinfo("warning: developmental prototype for X3D v3.2 node do not override native support!")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[Viewpoint | ViewpointGroup] only")
          .addComments(" initialized at runtime, default is empty array of Viewpoint/ViewpointGroup nodes. "))
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text description or navigation hint to be displayed for this ViewpointGroup."))
        .addField(new field().setName("displayed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether this ViewpointGroup description is displayed in current viewpoint list."))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Position offset from origin of local coordinate system."))
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(10).setAppinfo("[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list."))
        .addField(new field().setName("set_radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list."))
        .addField(new field().setName("retainUserOffsets").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Whether viewpoint needs to retain (true) or rezero (false) any prior user navigation offsets from defined viewpoint position orientation.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new ProximitySensor("ProximityZone").setSize(20.0,20.0,20.0)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("center").setProtoField("center"))))
          .addChild(new Switch("ViewpointsSwitch").setWhichChoice(0)
            .addChild(new Group()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children")))))
          .addChild(new Switch("HoldExposedFields").setWhichChoice(-1)
            .addComments(" WorldInfo not used because title field is accessType initializeOnly ")
            .addChild(new Anchor("DescriptionHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))))
            .addChild(new ProximitySensor("DisplayedHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("displayed")))))
          .addChild(new Script("UnbindingControlScript").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	// since Viewpoints remain on binding stack as before," + "\n" + 
"	// no initialization action is necessary when implemented natively." + "\n" + 
"	description = descriptionHolder.description;" + "\n" + 
"	displayed = displayedHolder.enabled;" + "\n" + 
"	tracePrint ('displayed=' + displayed);" + "\n" + 
"	if (!displayed) viewpointsSwitch.whichChoice = -1;" + "\n" + 
"	set_radius (radius);" + "\n" + 
"\n" + 
"	// typecheck valid children nodes:" + "\n" + 
"	tracePrint ('viewpointsSwitch.choice.length=' + viewpointsSwitch.choice.length);" + "\n" + 
"	if (viewpointsSwitch.choice.length >= 1)" + "\n" + 
"		for (i=0; i >= viewpointsSwitch.choice.length; i)" + "\n" + 
"		{" + "\n" + 
"			// how to check type?" + "\n" + 
"			// if (viewpointsSwitch.choice[i].____ etc.)" + "\n" + 
"			// once type checked, warn if Viewpoint position outside proximity box size" + "\n" + 
"		}" + "\n" + 
"	tracePrint ('... initialize() complete');" + "\n" + 
"}" + "\n" + 
"function isActive (activeValue)" + "\n" + 
"{" + "\n" + 
"	// Most likely, viewpoint list actions will be controlled by browser." + "\n" + 
"\n" + 
"	// If viewpoint list is exposed via SAI, could do things here" + "\n" + 
"	// such as setting ViewpointGroup.description as browser label." + "\n" + 
"\n" + 
"	// Current action:  switch child Viewpoints in/out of scope." + "\n" + 
"	tracePrint ('activeValue=' + activeValue);" + "\n" + 
"\n" + 
"	tracePrint ('displayed=' + displayed);" + "\n" + 
"	if (!displayed) return;" + "\n" + 
"\n" + 
"	if (activeValue) viewpointsSwitch.whichChoice =  0;" + "\n" + 
"	else             viewpointsSwitch.whichChoice = -1;" + "\n" + 
"\n" + 
"	tracePrint ('viewpointsSwitch.whichChoice=' + viewpointsSwitch.whichChoice);" + "\n" + 
"}" + "\n" + 
"function set_radius (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	radius = value;" + "\n" + 
"	ProximityZone.size.x = 2 * radius;" + "\n" + 
"	ProximityZone.size.y = 2 * radius;" + "\n" + 
"	ProximityZone.size.z = 2 * radius;" + "\n" + 
"	tracePrint ('set_radius (' + value + '), radius=' + radius + ', ProximityZone.size=' + ProximityZone.size);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[ViewpointGroup' + description + ']' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[ViewpointGroup' + description + ']' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("ProximityZone").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ProximitySensor().setUSE("ProximityZone")))
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list."))
            .addField(new field().setName("set_radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list."))
            .addField(new field().setName("viewpointsSwitch").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("ViewpointsSwitch").setWhichChoice(-1)))
            .addComments(" use node holders to work around VRML 97 Script exposedField restriction ")
            .addField(new field().setName("descriptionHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("DescriptionHolder")))
            .addField(new field().setName("displayedHolder").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ProximitySensor().setUSE("DisplayedHolder")))
            .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("displayed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))
              .addConnect(new connect().setNodeField("set_radius").setProtoField("set_radius"))))
          .addChild(new ROUTE().setFromNode("ProximityZone").setFromField("isActive").setToNode("UnbindingControlScript").setToField("isActive")))))
    .addComments(" ===============Example============== ")
    .addChild(new NavigationInfo().setType("\"FLY\" \"ANY\""))
    .addChild(new Anchor().setDescription("ViewpointGroupExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"ViewpointGroupExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupExample.x3d","ViewpointGroupExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupExample.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"ViewpointGroupPrototype","defines a prototype","","Click on this text to see","ViewpointGroupExample scene"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2)))))
    .addChild(new Viewpoint().setDescription("inside scope: ViewpointGroup").setPosition(0.0,0.0,5.0))
    .addChild(new Viewpoint().setDescription("outside scope: ViewpointGroup").setPosition(0.0,0.0,12.0)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ViewpointGroupPrototype model
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
        X3D thisExampleX3dModel = new ViewpointGroupPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ViewpointGroupPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ViewpointGroupPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
