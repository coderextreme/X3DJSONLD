package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> geo bubbles. </p>
 <p> Related links: geobubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geobubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d">geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> geo bubbles </td>
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

	* @author John Carlson
 */

import net.coderextreme.X3DRoots;import java.util.List;import java.util.ArrayList;public class geobubbles implements X3DRoots 
{
	/** Default constructor to create this object. */
	public geobubbles ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("geobubbles.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("geo bubbles")))
  .setScene(new Scene()
    .addComments("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/")
    .addComments("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/")
    .addChild(new GeoViewpoint("Tour").setDescription("Tour Views").setOrientation(1.0,0.0,0.0,0.0).setPosition(0.0,0.0,4.0))
    .addChild(new Background().setBackUrl(new String[] {"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}).setBottomUrl(new String[] {"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}).setFrontUrl(new String[] {"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}).setLeftUrl(new String[] {"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}).setRightUrl(new String[] {"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}).setTopUrl(new String[] {"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}))
    .addChild(new Transform()
      .addChild(new Shape()
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.7,0.7,0.7).setSpecularColor(0.5,0.5,0.5)))))
    .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new GeoPositionInterpolator("TourPosition").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3d(new double[] {0.0015708,0.0,4.0,0.0,0.0015708,4.0})))
    .addChild(new Script("RandomTourTime").setSourceCode("""
ecmascript:

               function set_cycle(value) {
                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
                        var ov = val;
			// Browser.print('old '+ov);
                        do {
                                val = Math.floor(Math.random()*2);
                                var vc = val;
                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
			// Browser.println(positions[ov]);
			// Browser.println(positions[vc]);
                        position = new MFVec3d();
                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
               }
""")
      .addField(new field().setName("set_cycle").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("val").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
      .addField(new field().setName("positions").setType(field.TYPE_MFVEC3D).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3d(new MFVec3d(new double[] {0.0015708,0.0,4.0,0.0,0.0015708,4.0}))))
      .addField(new field().setName("position").setType(field.TYPE_MFVEC3D).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3d(new MFVec3d(new double[] {0.0015708,0.0,4.0,0.0,0.0015708,4.0})))))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
    .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")));
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
	 * @return geobubbles model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	public List<X3D> getRootNodeList() {
		List<X3D> list = new ArrayList<X3D>(1);
		list.add(x3dModel);
		return list;
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
        X3D thisExampleX3dModel = new geobubbles().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.geobubbles\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.geobubbles self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
