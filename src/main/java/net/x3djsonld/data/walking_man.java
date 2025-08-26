package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example scene walking_man. </p>
 <p> Related links:  source walking_man.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

 */

public class walking_man
{
	/** Default constructor to create this object. */
	public walking_man ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1)))
  .setScene(new Scene()
    .addChild(new HAnimHumanoid("HAnim").setName("humanoid").setVersion("2.0")
      .addSkeleton(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(0.0,0.9,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimJoint("hanim_vt1").setName("vt1").setCenter(0.0,1.15,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment()
            .addChild(new HAnimSite().setRotation(1.0,0.0,0.0,3.14159).setTranslation(0.0,1.15,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                .setGeometry(new Cone().setBottomRadius(0.25).setHeight(0.5)))))
          .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(0.0,1.5,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(0.0,1.5,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Sphere().setRadius(0.15))))))
          .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(0.25,1.35,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(0.25,1.20,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.04)))))
            .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(0.25,1.05,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment()
                .addChild(new HAnimSite().setTranslation(0.25,0.90,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                    .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.04)))))
              .addChild(new HAnimJoint("hanim_l_wrist").setName("l_wrist").setCenter(0.25,0.75,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
          .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(-0.25,1.35,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(-0.25,1.20,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.04)))))
            .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(-0.25,1.05,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
              .addChild(new HAnimSegment()
                .addChild(new HAnimSite().setTranslation(-0.25,0.90,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                    .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.04)))))
              .addChild(new HAnimJoint("hanim_r_wrist").setName("r_wrist").setCenter(-0.25,0.75,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
        .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(0.15,0.9,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment()
            .addChild(new HAnimSite().setTranslation(0.15,0.7,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                .setGeometry(new Cylinder().setHeight(0.4).setRadius(0.05)))))
          .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(0.15,0.5,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(0.15,0.3,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Cylinder().setHeight(0.4).setRadius(0.05)))))
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(0.15,0.1,0.05)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Sphere().setRadius(0.07)))))
            .addChild(new HAnimJoint("hanim_l_ankle").setName("l_ankle").setCenter(0.15,0.1,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0}))))
        .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(-0.15,0.9,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment()
            .addChild(new HAnimSite().setTranslation(-0.15,0.7,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                .setGeometry(new Cylinder().setHeight(0.4).setRadius(0.05)))))
          .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(-0.15,0.5,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(-0.15,0.3,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Cylinder().setHeight(0.4).setRadius(0.05)))))
            .addChild(new HAnimSegment()
              .addChild(new HAnimSite().setTranslation(-0.15,0.1,0.05)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.6)))
                  .setGeometry(new Sphere().setRadius(0.07)))))
            .addChild(new HAnimJoint("hanim_r_ankle").setName("r_ankle").setCenter(-0.15,0.1,0.0).setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})))))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt1"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_wrist"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_wrist"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_ankle"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_ankle")))
    .addChild(new TimeSensor("Clock").setCycleInterval(2).setLoop(true))
    .addChild(new OrientationInterpolator("LHipAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,-0.5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.5})))
    .addChild(new OrientationInterpolator("RHipAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5})))
    .addChild(new OrientationInterpolator("KneeAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0})))
    .addChild(new OrientationInterpolator("LShoulderAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.4})))
    .addChild(new OrientationInterpolator("RShoulderAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,-0.4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.4})))
    .addChild(new OrientationInterpolator("ElbowAnimator").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,-0.3,1.0,0.0,0.0,-0.8,1.0,0.0,0.0,-0.3,1.0,0.0,0.0,-0.3,1.0,0.0,0.0,-0.3})))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("LHipAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("LHipAnimator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("RHipAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RHipAnimator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("KneeAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("KneeAnimator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("KneeAnimator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("LShoulderAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("LShoulderAnimator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("RShoulderAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RShoulderAnimator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("ElbowAnimator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("ElbowAnimator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("ElbowAnimator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation")));
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
	 * @return walking_man model
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
        X3D thisExampleX3dModel = new walking_man().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.walking_man\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.walking_man self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./walking_man_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./walking_man_JavaExport.x3d"; 
                String filenameX3DV = "./walking_man_JavaExport.x3dv"; 
                String filenameJSON = "./walking_man_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
