package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event. </p>
 <p> Related links: <a href="../../../Chapter04ViewingNavigation/BindingOperations.java">BindingOperations.java</a> source, <a href="../../../Chapter04ViewingNavigation/BindingOperationsIndex.html" target="_top">BindingOperations catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter04ViewingNavigation/BindingOperations.x3d">BindingOperations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 January 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 22 July 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BindingOperations.console.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BindingStackOperations.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D for Web Authors, Section 2.5.1, Figure 4.1 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">https://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright Don Brutzman and Leonard Daly 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter04ViewingNavigation/../license.html">../license.html</a> </td>
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

public class BindingOperations
{
	/** Default constructor to create this object. */
	public BindingOperations ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BindingOperations.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("5 January 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("22 July 2013"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BindingOperations.console.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BindingStackOperations.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://X3dGraphics.com"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright Don Brutzman and Leonard Daly 2007"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint("View1").setDescription("Viewpoint 1").setCenterOfRotation(-6.0,0.0,0.0).setPosition(-6.0,0.0,5.0))
    .addChild(new Viewpoint("View2").setDescription("Viewpoint 2").setCenterOfRotation(-2.0,0.0,0.0).setPosition(-2.0,0.0,5.0))
    .addChild(new Viewpoint("View3").setDescription("Viewpoint 3").setCenterOfRotation(2.0,0.0,0.0).setPosition(2.0,0.0,5.0))
    .addChild(new Viewpoint("View4").setDescription("Viewpoint 4").setCenterOfRotation(6.0,0.0,0.0).setPosition(6.0,0.0,5.0))
    .addComments(" Script initialization ought to first bind view5 below. ")
    .addChild(new Group()
      .addChild(new Transform("Text1").setTranslation(-6.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"View","# 1"})
            .setFontStyle(new FontStyle("CenterJustify").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
      .addChild(new Transform("Text2").setTranslation(-2.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"View","# 2"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0)))))
      .addChild(new Transform("Text3").setTranslation(2.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"View","# 3"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
      .addChild(new Transform("Text4").setTranslation(6.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"View","# 4"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance()
            .setMaterial(new Material())))))
    .addComments(" The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9. ")
    .addComments(" It does not need to be studied in this chapter. ")
    .addChild(new Transform().setTranslation(0.0,-3.0,8.0)
      .addComments(" notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script. ")
      .addChild(new Viewpoint("ClickToAnimateView").setDescription("Select animation sequence").setPosition(0.0,0.0,7.0))
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"Click here to animate"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_BEGIN)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.4,0.0))))
      .addChild(new Shape()
        .setGeometry(new Box().setSize(7.0,1.0,0.02))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(1))))
      .addChild(new TouchSensor("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
      .addChild(new TimeSensor("Clock").setCycleInterval(10))
      .addChild(new ROUTE().setFromNode("TextTouchSensor").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
      .addChild(new IntegerSequencer("TimingSequencer").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1.0}).setKeyValue(new int[] {0,1,2,3,4,5,6,7,8,10}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("TimingSequencer").setToField("set_fraction"))
      .addChild(new Script("BindingSequencerEngine").setSourceCode("""
        ecmascript:

function initialize ()
{
    bindView5 = true;
    Browser.print ('Timing script initialized and ready for activation');
}
function set_timeEvent (inputValue)
{
    if (inputValue == priorInputvalue)
    {
        return; // ignore repeated inputs
    }
    // new value provided
    priorInputvalue = inputValue;
    // Browser.print ('\ntimeEvent inputValue=' + inputValue);
        
    // mimics user execution of Figure 4.1 steps t_0 through t_8
    if (inputValue == 0)
    {
        Browser.print ('\n===========\n time t0');
        bindView1 = true;
    }
    else if (inputValue == 1)
    {
        Browser.print ('\n===========\n time t1');
        bindView2 = true;
    }
    else if (inputValue == 2)
    {
        Browser.print ('\n===========\n time t2');
        bindView3 = true;
    }
    else if (inputValue == 3)
    {
        Browser.print ('\n===========\n time t3');
        bindView3 = false;
    }
    else if (inputValue == 4)
    {
        Browser.print ('\n===========\n time t4');
        bindView1 = true;
    }
    else if (inputValue == 5)
    {
        Browser.print ('\n===========\n time t5');
        bindView2 = false;
    }
    else if (inputValue == 6)
    {
        Browser.print ('\n===========\n time t6');
        bindView1 = false;
    }
    else if (inputValue == 7)
    {
        Browser.print ('\n===========\n time t7');
        bindView4 = true;

    }
    else if (inputValue == 8)
    {
        Browser.print ('\n===========\n time t8');
        Browser.print (', no action, all done');
        Browser.print ('\n\n');
    }
}

function view1Bound (inputValue)
{
    Browser.print (', view1Bound ' + (inputValue));
    if (priorInputvalue == -1) Browser.print ('\n');
}
function view2Bound (inputValue)
{
    Browser.print (', view2Bound ' + (inputValue));
}
function view3Bound (inputValue)
{
    Browser.print (', view3Bound ' + (inputValue));
}
function view4Bound (inputValue)
{
    Browser.print (', view4Bound ' + (inputValue));
}
function view5Bound (inputValue)
{
    Browser.print (', view5Bound ' + (inputValue));
}

      """)
        .addField(new field().setName("set_timeEvent").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("bindView1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("bindView2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("bindView3").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("bindView4").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("bindView5").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("view1Bound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("view2Bound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("view3Bound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("view4Bound").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("priorInputvalue").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(-1)))
      .addComments(" drive Script with TimeSensor clock ")
      .addChild(new ROUTE().setFromNode("TimingSequencer").setFromField("value_changed").setToNode("BindingSequencerEngine").setToField("set_timeEvent"))
      .addComments(" Script will bind and unbind Viewpoint nodes ")
      .addChild(new ROUTE().setFromNode("BindingSequencerEngine").setFromField("bindView1").setToNode("View1").setToField("set_bind"))
      .addChild(new ROUTE().setFromNode("BindingSequencerEngine").setFromField("bindView2").setToNode("View2").setToField("set_bind"))
      .addChild(new ROUTE().setFromNode("BindingSequencerEngine").setFromField("bindView3").setToNode("View3").setToField("set_bind"))
      .addChild(new ROUTE().setFromNode("BindingSequencerEngine").setFromField("bindView4").setToNode("View4").setToField("set_bind"))
      .addChild(new ROUTE().setFromNode("BindingSequencerEngine").setFromField("bindView5").setToNode("ClickToAnimateView").setToField("set_bind"))
      .addComments(" Viewpoint nodes report bind and unbind events ")
      .addChild(new ROUTE().setFromNode("View1").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view1Bound"))
      .addChild(new ROUTE().setFromNode("View2").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view2Bound"))
      .addChild(new ROUTE().setFromNode("View3").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view3Bound"))
      .addChild(new ROUTE().setFromNode("View4").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view4Bound"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BindingOperations model
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
        X3D thisExampleX3dModel = new BindingOperations().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BindingOperations\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BindingOperations\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
