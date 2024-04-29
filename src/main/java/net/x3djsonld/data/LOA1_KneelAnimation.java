package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links:  source LOA1_KneelAnimation.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_KneelAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d">LOA1_KneelAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Humanoid animation prototype reusable by any Humanoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Tom Miller </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Curt Blais </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 1 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl" target="_blank">http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl" target="_blank">http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org" target="_blank">http://www.HAnim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models" target="_blank">http://HAnim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Nodes" target="_blank">http://HAnim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Nancy kneel Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/../license.html">../license.html</a> </td>
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

	* @author Tom Miller
 */

public class LOA1_KneelAnimation
{
	/** Default constructor to create this object. */
	public LOA1_KneelAnimation ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LOA1_KneelAnimation.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Tom Miller"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Curt Blais"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("1 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 May 2020"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.HAnim.org"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://HAnim.org/Nodes"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Nancy kneel Animation HAnim 2001"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LOA1_KneelAnimation.x3d"))
    .addChild(new ProtoDeclare("LOA1_KneelAnimation").setName("LOA1_KneelAnimation")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new field().setName("loop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false))
        .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1))
        .addField(new field().setName("fraction_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("HumanoidRoot_translation_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("HumanoidRoot_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("lower_body_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_hip_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_knee_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_ankle_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_midtarsal_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_hip_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_knee_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_ankle_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_midtarsal_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("vl5_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("skullbase_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_shoulder_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_elbow_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("l_wrist_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_shoulder_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_elbow_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("r_wrist_rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new TimeSensor("TIMER")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
              .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
              .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))))
          .addChild(new PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-.049999,0.0,0.0,-.195,0.0,0.0,-.439997,0.0}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolator("HUMANOIDROOT_ANIMATOR").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addComments(" no SACROILIAC_ANIMATOR ")
          .addChild(new OrientationInterpolator("L_HIP_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.619393,-1.0,0.0,0.0,1.069302,-1.0,0.0,0.0,1.937315}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_KNEE_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,.615228,1.0,0.0,0.0,.984524,1.0,0.0,0.0,2.076941}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ANKLE_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.017453,-1.0,0.0,0.0,.069812,1.0,0.0,0.0,.261799}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addComments(" no L_MIDTARSAL_ANIMATOR ")
          .addChild(new OrientationInterpolator("R_HIP_ANIMATOR").setKey(new double[] {0.0,.3125,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,.523598,-1.0,0.0,0.0,.157079}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_KNEE_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,.349065,1.0,0.0,0.0,1.023397,.999934,.008043,.008185,1.727938}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ANKLE_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-.991692,-.072372,.106338,.205053,-.981083,-.103267,.163741,.272231,-1.0,0.0,0.0,.349065}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addComments(" no R_MIDTARSAL_ANIMATOR ")
          .addChild(new OrientationInterpolator("VL5_ANIMATOR").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,.174533}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addComments(" no SKULLBASE_ANIMATOR ")
          .addChild(new OrientationInterpolator("L_SHOULDER_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.279252,-1.0,0.0,0.0,.506145,-1.0,0.0,0.0,.191986}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ELBOW_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.052359,-1.0,0.0,0.0,.296706,-1.0,0.0,0.0,1.431169}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addComments(" no L_WRIST_ANIMATOR ")
          .addChild(new OrientationInterpolator("R_SHOULDER_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.104719,-1.0,0.0,0.0,.157079,1.0,0.0,0.0,.314159}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ELBOW_ANIMATOR").setKey(new double[] {0.0,.3125,.625,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,-1.0,0.0,0.0,.837757,-1.0,0.0,0.0,1.239183,-1.0,0.0,0.0,1.500983}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addComments(" no R_WRIST_ANIMATOR "))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))))
    .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2))))));
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
	 * @return LOA1_KneelAnimation model
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
        X3D thisExampleX3dModel = new LOA1_KneelAnimation().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.LOA1_KneelAnimation\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.LOA1_KneelAnimation self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
