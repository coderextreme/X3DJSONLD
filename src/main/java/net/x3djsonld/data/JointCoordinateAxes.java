package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example scene JointCoordinateAxes. </p>
 <p> Related links: JointCoordinateAxes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converter </i> </td>
			<td> x3d-tidy V1.0.56, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converted </i> </td>
			<td> Mon, 31 Jul 2023 03:48:04 GMT </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

 */

import net.coderextreme.X3DRoots;
import java.util.List;
import java.util.ArrayList;
public class JointCoordinateAxes implements X3DRoots
{
	/** Default constructor to create this object. */
	public JointCoordinateAxes ()
	{
	  initialize();
	}
        public List<X3D> getRootNodeList() {
                List<X3D> list = new ArrayList<X3D>(1);
                list.add(x3dModel);
                return list;
        }

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta(new meta().setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setHeadlight(false))
    .addChild(new Group()
      .addChild(new Group("ARROW")
        .addChild(new Shape()
          .setAppearance(new Appearance("ARROW_APPEARANCE")
            .setMaterial(new Material().setDiffuseColor(0.3,0.3,1.0).setEmissiveColor(0.3,0.3,0.33)))
          .setGeometry(new Cylinder().setBottom(false).setRadius(0.025).setTop(false)))
        .addChild(new Transform().setTranslation(0.0,1.0,0.0)
          .addChild(new Shape("ARROW_POINTER")
            .setAppearance(new Appearance().setUSE("ARROW_APPEARANCE"))
            .setGeometry(new Cone().setBottomRadius(0.05).setHeight(0.1))))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,3.1416).setTranslation(0.0,-1.0,0.0)
          .addChild(new Shape().setUSE("ARROW_POINTER"))))
      .addChild(new Transform().setTranslation(0.0,1.08,0.0)
        .addChild(new Billboard()
          .addChild(new Shape()
            .setAppearance(new Appearance("LABEL_APPEARANCE")
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.3).setEmissiveColor(0.33,0.33,0.1)))
            .setGeometry(new Text().setString(new String[] {"Y"})
              .setFontStyle(new FontStyle("LABEL_FONT").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE).setSize(0.2)))))))
    .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.5708)
      .addChild(new Group()
        .addChild(new Group().setUSE("ARROW"))
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.5708).setTranslation(0.072,1.1,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
              .setGeometry(new Text().setString(new String[] {"X"})
                .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.5708)
      .addChild(new Group()
        .addChild(new Group().setUSE("ARROW"))
        .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.5708).setTranslation(0.0,1.1,0.072)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
              .setGeometry(new Text().setString(new String[] {"Z"})
                .setFontStyle(new FontStyle().setUSE("LABEL_FONT")))))))));
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
	 * @return JointCoordinateAxes model
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
        X3D thisExampleX3dModel = new JointCoordinateAxes().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.JointCoordinateAxes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.JointCoordinateAxes self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
