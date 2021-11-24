package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Controller buttons and slider for a propeller. </p>
 <p> Related links: <a href="../../../StudentProjects/PropellerControlPanel.java">PropellerControlPanel.java</a> source, <a href="../../../StudentProjects/PropellerControlPanelIndex.html" target="_top">PropellerControlPanel catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/PropellerControlPanel.x3d">PropellerControlPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Controller buttons and slider for a propeller. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Dan DeVos </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> *if manually translating VRML-to-X3D, enter name of person translating here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 August 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> mismatched typing in some ROUTEs still needs fixing </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PropellerControlPanel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PropellerControlPanel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Dan DeVos
 */

public class PropellerControlPanel
{
	/** Default constructor to create this object. */
	public PropellerControlPanel ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("PropellerControlPanel.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Controller buttons and slider for a propeller."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Dan DeVos"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("8 August 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("mismatched typing in some ROUTEs still needs fixing"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PropellerControlPanel.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("PropellerControlPanel.x3d"))
    .addChild(new Viewpoint().setDescription("Fan").setPosition(1.0,0.0,10.0))
    .addChild(new Viewpoint().setDescription("Control Panel").setPosition(-1.0,0.0,5.0))
    .addChild(new Viewpoint().setDescription("Watch Fan Spin").setOrientation(0.0,1.0,0.0,1.571).setPosition(10.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Remote Control").setOrientation(1.0,0.0,0.0,-1.571).setPosition(0.0,3.0,20.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {.3,.6,.4})).setSkyColor(new MFColor(new double[] {.6,.6,.9})))
    .addComments(" Rotating Fan ")
    .addChild(new Group("MaterialGroup")
      .addChild(new Shape()
        .setGeometry(new Sphere().setRadius(.001))
        .setAppearance(new Appearance("DarkBlueGreyMetal")
          .setMaterial(new Material().setDiffuseColor(0.4,0.4,0.4).setSpecularColor(0.4,0.4,0.6))))
      .addChild(new Shape()
        .setGeometry(new Sphere().setRadius(.001))
        .setAppearance(new Appearance("LightGreyMetal")
          .setMaterial(new Material().setDiffuseColor(0.7,0.7,0.7).setShininess(0.1).setSpecularColor(0.9,0.9,0.9)))))
    .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.571).setTranslation(2.0,0.0,0.0)
      .addChild(new Group("RotatingFanGroup")
        .addChild(new Transform("Fan")
          .addChild(new Transform("FanHub")
            .addChild(new Shape("FanHubMiddle")
              .setAppearance(new Appearance().setUSE("DarkBlueGreyMetal"))
              .setGeometry(new Cylinder().setHeight(.4).setRadius(.25)))
            .addChild(new Transform().setTranslation(0.0,.2,0.0)
              .addChild(new Shape("FanHubTop")
                .setGeometry(new Sphere().setRadius(.255))
                .setAppearance(new Appearance().setUSE("DarkBlueGreyMetal")))))
          .addChild(new Transform("RightFanBlade").setRotation(1.0,0.0,0.0,-.2).setScale(2.0,.1,.5).setTranslation(1.8,0.0,0.0)
            .addChild(new Shape("FanBlade")
              .setGeometry(new Sphere())
              .setAppearance(new Appearance().setUSE("LightGreyMetal"))))
          .addChild(new Transform("LeftFanBlade").setRotation(1.0,0.0,0.0,.2).setScale(2.0,.1,.5).setTranslation(-1.8,0.0,0.0)
            .addChild(new Shape().setUSE("FanBlade"))))
        .addChild(new TimeSensor("FanClock").setStartTime(10).setStopTime(0.1))
        .addChild(new OrientationInterpolator("FanPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28})))))
    .addComments(" This is where the motor goes. ")
    .addChild(new Transform()
      .addChild(new Group("MotorHousingGroup")
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Box().setSize(3.65,3.65,3.65))
            .setAppearance(new Appearance()
              .setMaterial(new Material()))))))
    .addComments(" ")
    .addChild(new Group("ControlPanel")
      .addComments(" This switch is used to control the fan ")
      .addChild(new Transform().setScale(.2,.2,.2).setTranslation(-1.0,-.3,1.825)
        .addChild(new Group("SwitchGroup")
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.571)
            .addChild(new Transform().setRotation(1.0,0.0,0.0,1.571)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("DarkBlueGreyMetal"))
                .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.0,1.2,0.0,1.0,-2.0,1.0,-2.0,-1.0,2.0,-1.0,2.0,1.0,0.0,1.0,0.0,1.2,2.2,1.2,2.2,-1.2,-2.2,-1.2,-2.2,1.2,0.0,1.2})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,.5,0.0}))))))
          .addChild(new Transform().setTranslation(0.0,-1.5,.251)
            .addChild(new Transform("SwitchTransform")
              .addChild(new Shape("SwitchNob")
                .setGeometry(new Box().setSize(2.0,1.0,.499))
                .setAppearance(new Appearance().setUSE("LightGreyMetal")))
              .addChild(new PlaneSensor("SwitchPlaneSensor").setMaxPosition(0.0,3.0))
              .addChild(new TouchSensor("SwitchTouchSensor"))))
          .addChild(new Transform().setTranslation(0.0,0.0,.1)
            .addChild(new Shape("SwitchBack")
              .setGeometry(new Box().setSize(2.0,4.0,.2))
              .setAppearance(new Appearance().setUSE("DarkBlueGreyMetal"))))))
      .addComments(" Fan Status Display ")
      .addChild(new Transform().setTranslation(.5,-.5,1.83)
        .addChild(new Group("Display")
          .addChild(new Transform().setTranslation(0.0,0.0,.01)
            .addChild(new Shape()
              .setGeometry(new Text("SpeedDisplay").setString(new String[] {"OFF"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
              .setAppearance(new Appearance("BlackText")
                .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
          .addChild(new Shape("DisplayField")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(0.0,1.0,1.0).setTransparency(.7)))
            .setGeometry(new Box().setSize(2.0,.6,.01)))
          .addChild(new Transform().setTranslation(0.0,.5,.01)
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"Fan Status:"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
              .setAppearance(new Appearance().setUSE("BlackText"))))))
      .addChild(new Script("MotorAmp").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function switchPosition(pos)" + "\n" + 
"{" + "\n" + 
"	if (switchPosition.pos.y == 0){" + "\n" + 
"		fanCycleTime[0] = switchPosition.pos.y;" + "\n" + 
"		displayFanSpeed[0] ='OFF';" + "\n" + 
"	}" + "\n" + 
"	else{if (switchPosition.pos.y == 3){" + "\n" + 
"		fanCycleTime[0] = .01;" + "\n" + 
"		displayFanSpeed[0] ='MAX';" + "\n" + 
"	}" + "\n" + 
"	else {" + "\n" + 
"		fanCycleTime[0] = (6 - (switchPosition.pos.y*2));" + "\n" + 
"		displayFanSpeed[0] = (Math.round((1/fanCycleTime[0])*6000)/100) + ' RPM';" + "\n" + 
"	}}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("switchPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("fanCycleTime").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("displayFanSpeed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addComments(" Motor On/Off Buttons ")
      .addChild(new Transform().setTranslation(-1.0,1.0,1.6)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.571)
          .addChild(new Transform("OffButton").setTranslation(0.0,.1,.3)
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.45).setRadius(.2))
                .setAppearance(new Appearance("RedStatus")
                  .setMaterial(new Material().setDiffuseColor(1.0,0.3,0.3))))
              .addChild(new TouchSensor("SensorOffButton"))
              .addChild(new PositionInterpolator("OffButtonDownPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.3,0.3,0.0,0.2,0.3,0.0,0.1,0.3})))
              .addChild(new PositionInterpolator("OffButtonUpPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.1,0.3,0.0,0.2,0.3,0.0,0.3,0.3})))))
          .addChild(new Transform("OnButton").setTranslation(0.0,.3,-.3)
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.45).setRadius(.2))
                .setAppearance(new Appearance("GreenStatus")
                  .setMaterial(new Material().setDiffuseColor(0.3,1.0,.3))))
              .addChild(new TouchSensor("SensorOnButton"))
              .addChild(new PositionInterpolator("OnButtonDownPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.3,-0.3,0.0,0.2,-0.3,0.0,0.1,-0.3})))
              .addChild(new PositionInterpolator("OnButtonUpPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.1,-0.3,0.0,0.2,-0.3,0.0,0.3,-0.3})))))
          .addChild(new TimeSensor("MotorClockOff"))
          .addChild(new TimeSensor("MotorClockOn"))))
      .addComments(" Motor Status Display ")
      .addChild(new Transform().setTranslation(.5,.8,1.83)
        .addChild(new Group("MotorStatus")
          .addChild(new Transform().setTranslation(0.0,.5,.01)
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"Motor Status:"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
              .setAppearance(new Appearance().setUSE("BlackText"))))
          .addChild(new Transform().setTranslation(0.0,0.0,.01)
            .addChild(new Shape()
              .setGeometry(new Text("StatusDisplay").setString(new String[] {"OFF"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
              .setAppearance(new Appearance()
                .setMaterial(new Material("MotorDisplayMaterial").setDiffuseColor(1.0,.3,.3)))))
          .addChild(new Shape().setUSE("DisplayField"))))
      .addChild(new Script("MotorButtonActionOn").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function onButtonAction(bool)" + "\n" + 
"{" + "\n" + 
"	if (onButtonAction.bool == true)" + "\n" + 
"	{" + "\n" + 
"		displayMotorStatus[0] ='ON';" + "\n" + 
"		fanOnButtonAction = 1;" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("onButtonAction").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("displayMotorStatus").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("fanOnButtonAction").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new Script("MotorButtonActionOff").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function offButtonAction(bool)" + "\n" + 
"{" + "\n" + 
"	if (offButtonAction.bool == true)" + "\n" + 
"	{" + "\n" + 
"		displayMotorStatus[0] ='OFF';" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("offButtonAction").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("displayMotorStatus").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new ColorInterpolator("RtoGColorInerp").setKey(new double[] {0.0,.1,.1,1.0}).setKeyValue(new MFColor(new double[] {1.0,.3,.3,1.0,.3,.3,.3,1.0,.3,.3,1.0,.3})))
      .addChild(new ColorInterpolator("GtoRColorInerp").setKey(new double[] {0.0,.1,.1,1.0}).setKeyValue(new MFColor(new double[] {.3,1.0,.3,.3,1.0,.3,1.0,.3,.3,1.0,.3,.3}))))
    .addChild(new Group("RemoteControl")
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.571)
        .addChild(new Transform().setScale(.2,.5,.5).setTranslation(0.0,-20.0,0.0)
          .addChild(new Group().setUSE("ControlPanel"))
          .addChild(new Transform().setTranslation(0.0,0.0,1.325)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(3.0,3.0,1.0))
              .setAppearance(new Appearance().setUSE("DarkBlueGreyMetal")))))))
    .addComments(" Route for controling Switch movement ")
    .addChild(new ROUTE().setFromNode("SwitchPlaneSensor").setFromField("translation_changed").setToNode("SwitchTransform").setToField("set_translation"))
    .addComments(" Routes for controling Fan w/ Switch ")
    .addChild(new ROUTE().setFromNode("SwitchPlaneSensor").setFromField("translation_changed").setToNode("MotorAmp").setToField("switchPosition"))
    .addChild(new ROUTE().setFromNode("MotorAmp").setFromField("fanCycleTime").setToNode("FanClock").setToField("set_cycleInterval"))
    .addChild(new ROUTE().setFromNode("FanClock").setFromField("fraction_changed").setToNode("FanPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("FanPath").setFromField("value_changed").setToNode("Fan").setToField("set_rotation"))
    .addComments(" Button Movement Routes ")
    .addChild(new ROUTE().setFromNode("SensorOffButton").setFromField("touchTime").setToNode("MotorClockOff").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("SensorOffButton").setFromField("isActive").setToNode("MotorButtonActionOff").setToField("offButtonAction"))
    .addChild(new ROUTE().setFromNode("SensorOnButton").setFromField("touchTime").setToNode("MotorClockOn").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("SensorOnButton").setFromField("isActive").setToNode("MotorButtonActionOn").setToField("onButtonAction"))
    .addChild(new ROUTE().setFromNode("MotorClockOn").setFromField("fraction_changed").setToNode("OnButtonDownPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MotorClockOn").setFromField("fraction_changed").setToNode("OffButtonUpPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MotorClockOff").setFromField("fraction_changed").setToNode("OffButtonDownPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MotorClockOff").setFromField("fraction_changed").setToNode("OnButtonUpPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("OnButtonDownPath").setFromField("value_changed").setToNode("OnButton").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("OffButtonDownPath").setFromField("value_changed").setToNode("OffButton").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("OnButtonUpPath").setFromField("value_changed").setToNode("OnButton").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("OffButtonUpPath").setFromField("value_changed").setToNode("OffButton").setToField("set_translation"))
    .addComments(" Route for Fan display ")
    .addChild(new ROUTE().setFromNode("MotorAmp").setFromField("displayFanSpeed").setToNode("SpeedDisplay").setToField("set_string"))
    .addComments(" Route for Motor display ")
    .addChild(new ROUTE().setFromNode("MotorClockOn").setFromField("fraction_changed").setToNode("RtoGColorInerp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MotorClockOff").setFromField("fraction_changed").setToNode("GtoRColorInerp").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MotorButtonActionOn").setFromField("displayMotorStatus").setToNode("StatusDisplay").setToField("set_string"))
    .addChild(new ROUTE().setFromNode("RtoGColorInerp").setFromField("value_changed").setToNode("MotorDisplayMaterial").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("GtoRColorInerp").setFromField("value_changed").setToNode("MotorDisplayMaterial").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("MotorButtonActionOff").setFromField("displayMotorStatus").setToNode("StatusDisplay").setToField("set_string"))
    .addComments(" Buttons control Fan ")
    .addChild(new ROUTE().setFromNode("MotorButtonActionOn").setFromField("fanOnButtonAction").setToNode("FanClock").setToField("set_cycleInterval"))
    .addComments(" "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return PropellerControlPanel model
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
        X3D thisExampleX3dModel = new PropellerControlPanel().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.PropellerControlPanel\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.PropellerControlPanel\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
