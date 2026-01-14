package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. </p>
 <p> Related links: Catalog page <a href="../../../HelloWorldScenes/HAnimPosePrototypeIndex.html" target="_blank">HAnimPosePrototype</a>,  source <a href="../../../HelloWorldScenes/HAnimPosePrototype.java">HAnimPosePrototype.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HelloWorldScenes/HAnimPosePrototype.x3d">HAnimPosePrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 April 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 5 April 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HelloWorldScenes/HAnimPoseDesignNotes19MAR2025.pdf">HAnimPoseDesignNotes19MAR2025.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
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

	* @author Don Brutzman
	* @author Joe Williams
 */

public class HAnimPosePrototype
{
	/** Default constructor to create this object. */
	public HAnimPosePrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimPosePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 April 2025"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("5 April 2025"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnimPoseDesignNotes19MAR2025.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
  .setScene(new Scene()
    .addComments(" Example scene to illustrate X3D nodes and fields (XML elements and attributes) ")
    .addChild(new WorldInfo("ModelInfo").setInfo(new String[] {"Design to illustrate a potential HAnimPose node"}).setTitle("HAnimPose Prototype"))
    .addChild(new NavigationInfo())
    .addChild(new ProtoDeclare("HAnimPose").setName("HAnimPose").setAppinfo("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("default value true"))
        .addField(new field().setName("setPose").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to do it's thing!"))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("PoseName").setAppinfo("name of this pose"))
        .addField(new field().setName("namesPoseJoints").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {"nameJoint1","nameJoint2","nameJoint3","nameJoint4"}).setAppinfo("names of joints in pose"))
        .addField(new field().setName("positionsPoseJoints").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("positions of joints in pose"))
        .addField(new field().setName("rotationsPoseJoints").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("rotations of joints in pose"))
        .addField(new field().setName("whichChoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("selects one of the HAnimHumanoid nodes"))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("debug trace to Browser output console")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addChild(new Switch("PrototypeRootNode").setWhichChoice(-1)
          .setIS(new IS()
            .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichChoice"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .setChildren(new MetadataString().setName("interface").setReference("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy").setValue(new String[] {"X3DGroupingNode"}))
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addChild(new Script("HAnimPoseScriptOperations").setDirectOutput(true).setSourceCode("""
ecmascript:

// Needed functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output functions ==================

function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================
""")
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value true"))
          .addField(new field().setName("setPose").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to do it's thing!"))
          .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("name of this pose"))
          .addField(new field().setName("namesPoseJoints").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("names of joints in pose"))
          .addField(new field().setName("positionsPoseJoints").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("positions of joints in pose"))
          .addField(new field().setName("rotationsPoseJoints").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("rotations of joints in pose"))
          .addField(new field().setName("whichChoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("selects one of the HAnimHumanoid nodes"))
          .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
          .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
          .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
          .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("debug trace to Browser output console"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("setPose").setProtoField("setPose"))
            .addConnect(new connect().setNodeField("name").setProtoField("name"))
            .addConnect(new connect().setNodeField("namesPoseJoints").setProtoField("namesPoseJoints"))
            .addConnect(new connect().setNodeField("positionsPoseJoints").setProtoField("positionsPoseJoints"))
            .addConnect(new connect().setNodeField("rotationsPoseJoints").setProtoField("rotationsPoseJoints"))
            .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichChoice"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
        .addComments(" Add any ROUTEs here that connect Script to/from prior nodes within ProtoBody ")
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addComments(" Add any ROUTEs here that connect Script to/from prior nodes within ProtoBody ")))
    .addChild(new ProtoInstance("HAnimPose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("A"))
      .addFieldValue(new fieldValue().setName("namesPoseJoints").setValue(new String[] {"l_hip","r_hip"}))
      .addFieldValue(new fieldValue().setName("positionsPoseJoints").setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0}))))
      .addFieldValue(new fieldValue().setName("rotationsPoseJoints").setValue(new MFRotation(new MFRotation(new double[] {0.0,0.0,1.0,0.2,0.0,0.0,1.0,-0.2})))))
    .addChild(new ProtoInstance("HAnimPose").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue("T"))
      .addFieldValue(new fieldValue().setName("namesPoseJoints").setValue(new String[] {"l_shoulder","r_shoulder"}))
      .addFieldValue(new fieldValue().setName("positionsPoseJoints").setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0}))))
      .addFieldValue(new fieldValue().setName("rotationsPoseJoints").setValue(new MFRotation(new MFRotation(new double[] {0.0,0.0,1.0,1.57,0.0,0.0,1.0,-1.57})))))
    .addComments(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) "));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HAnimPosePrototype model
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
        X3D thisExampleX3dModel = new HAnimPosePrototype().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimPosePrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimPosePrototype self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./HAnimPosePrototype_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./HAnimPosePrototype_JavaExport.x3d"; 
                String filenameX3DV = "./HAnimPosePrototype_JavaExport.x3dv"; 
                String filenameJSON = "./HAnimPosePrototype_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
