package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This example shows how to use the IntegerSequencer prototype in an animated scenario. </p>
 <p> Related links: <a href="../../../development/IntegerSequencerExample.java">IntegerSequencerExample.java</a> source, <a href="../../../development/IntegerSequencerExampleIndex.html" target="_top">IntegerSequencerExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/IntegerSequencerExample.x3d">IntegerSequencerExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows how to use the IntegerSequencer prototype in an animated scenario. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 13 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> integer sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d</a> </td>
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

public class IntegerSequencerExample
{
	/** Default constructor to create this object. */
	public IntegerSequencerExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IntegerSequencerExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This example shows how to use the IntegerSequencer prototype in an animated scenario."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("13 April 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("integer sequencer"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IntegerSequencerExample.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.2,0.2,0.2})).setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new TimeSensor("Clock").setCycleInterval(12).setEnabled(false).setLoop(true))
    .addChild(new IntegerSequencer("IntegerSequencerInstance").setKey(new double[] {0.0,0.08333,0.1667,0.25,0.3333,0.4167,0.5,0.5833,0.6666,0.75,0.8333,0.9167,1.0}).setKeyValue(new int[] {10,9,8,7,6,5,4,3,2,1,0,-1,10}))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("IntegerSequencerInstance").setToField("set_fraction"))
    .addChild(new Transform().setTranslation(0.0,2.0,0.0)
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"IntegerSequencer => Switch","touch blue text to count down"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.4,0.6,0.8))))
      .addChild(new TouchSensor("TouchToStart").setDescription("Touch To Start"))
      .addChild(new ROUTE().setFromNode("TouchToStart").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
      .addChild(new ROUTE().setFromNode("TouchToStart").setFromField("isOver").setToNode("Clock").setToField("enabled"))
      .addComments(" background box to simplify touching ")
      .addChild(new Transform().setTranslation(0.0,0.0,-0.5)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(11.0,2.0,0.1))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.2).setTransparency(0.95))))))
    .addChild(new Transform().setTranslation(-3.0,-2.5,0.0)
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"click for","previous key","(count up)"})
          .setFontStyle(new FontStyle("PreviousNextFont").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.7)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.4))))
      .addChild(new TouchSensor("TouchPrevious").setDescription("touch for previous"))
      .addChild(new ROUTE().setFromNode("TouchPrevious").setFromField("isActive").setToNode("IntegerSequencerInstance").setToField("previous")))
    .addChild(new Transform().setTranslation(3.0,-2.5,0.0)
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"click for","next key","(count down)"})
          .setFontStyle(new FontStyle().setUSE("PreviousNextFont")))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.4))))
      .addChild(new TouchSensor("TouchNext").setDescription("touch for next"))
      .addChild(new ROUTE().setFromNode("TouchNext").setFromField("isActive").setToNode("IntegerSequencerInstance").setToField("next")))
    .addComments(" Interesting materials from Universal Media library ")
    .addChild(new ExternProtoDeclare("ArtDeco02").setName("ArtDeco02").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco02","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco02"}))
    .addChild(new ExternProtoDeclare("ArtDeco04").setName("ArtDeco04").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco04","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco04"}))
    .addChild(new ExternProtoDeclare("ArtDeco05").setName("ArtDeco05").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco05","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco05"}))
    .addChild(new ExternProtoDeclare("ArtDeco08").setName("ArtDeco08").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco08","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco08"}))
    .addChild(new ExternProtoDeclare("ArtDeco09").setName("ArtDeco09").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco09","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco09"}))
    .addChild(new ExternProtoDeclare("ArtDeco13").setName("ArtDeco13").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco13","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco13"}))
    .addChild(new ExternProtoDeclare("ArtDeco18").setName("ArtDeco18").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco18","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco18"}))
    .addChild(new ExternProtoDeclare("ArtDeco21").setName("ArtDeco21").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco21","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco21"}))
    .addChild(new ExternProtoDeclare("ArtDeco24").setName("ArtDeco24").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco24","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco24"}))
    .addChild(new ExternProtoDeclare("ArtDeco25").setName("ArtDeco25").setUrl(new String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco25","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco25"}))
    .addChild(new Transform().setTranslation(0.0,-0.5,0.0)
      .addChild(new Switch("CountDownSwitch").setWhichChoice(0)
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 0"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco02").setContainerField("material")))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 1"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco09").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 2"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco08").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 3"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco18").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 4"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco21").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 5"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco24").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 6"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco25").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 7"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco13").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 8"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco05").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 9"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco04").setContainerField("material"))))
        .addChild(new Shape()
          .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"child choice 10"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new ProtoInstance("ArtDeco02").setContainerField("material"))))))
    .addChild(new ROUTE().setFromNode("IntegerSequencerInstance").setFromField("value_changed").setToNode("CountDownSwitch").setToField("whichChoice")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return IntegerSequencerExample model
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
        X3D thisExampleX3dModel = new IntegerSequencerExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.IntegerSequencerExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IntegerSequencerExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
