package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A generic slider bar prototype. Colors, size of the bar and name are changable. </p>
 <p> Related links: <a href="../../../StudentProjects/ProjectileSliderBarPrototype.java">ProjectileSliderBarPrototype.java</a> source, <a href="../../../StudentProjects/ProjectileSliderBarPrototypeIndex.html" target="_top">ProjectileSliderBarPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/ProjectileSliderBarPrototype.x3d">ProjectileSliderBarPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A generic slider bar prototype. Colors, size of the bar and name are changable. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Ozan APAYDIN </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d</a> </td>
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

	* @author Ozan APAYDIN
 */

public class ProjectileSliderBarPrototype
{
	/** Default constructor to create this object. */
	public ProjectileSliderBarPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ProjectileSliderBarPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A generic slider bar prototype. Colors, size of the bar and name are changable."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Ozan APAYDIN"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ProjectileSliderBarPrototype.x3d"))
    .addChild(new ProtoDeclare("ProjectileSliderBar").setName("ProjectileSliderBar")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Name of the Slider Bar. It appears on the left side of the bar."))
        .addField(new field().setName("length").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1).setAppinfo("Length of the Slider bar. According to given value bar will arrange itself."))
        .addField(new field().setName("width").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1).setAppinfo("Width of the Slider bar. According to given value bar will arrange itself."))
        .addField(new field().setName("maxValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1).setAppinfo("Max. value of Slider Bar.It can be assigned a positive or a negative value."))
        .addField(new field().setName("minValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("Min. value of Slider Bar. It can be assigned a positive or a negative value."))
        .addField(new field().setName("barColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,0.0,0.0)).setAppinfo("Color of Slider Bar."))
        .addField(new field().setName("pointerColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,1.0,0.0)).setAppinfo("Pointer Color of Slider Bar."))
        .addField(new field().setName("nameColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,0.0,1.0)).setAppinfo("Slider Bar Name Color."))
        .addField(new field().setName("currentValueColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.2,0.8,0.2)).setAppinfo("Color of Current Value text."))
        .addField(new field().setName("currentValueInt").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("If the precision is 0 current Value will be output in this eventOut field as Integer else in currentValueFloat eventOut field as Float."))
        .addField(new field().setName("currentValueFloat").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("If the precision is NOT 0 current Value will be output in this eventOut field as Float else in currentValueInt eventOut field as Integer."))
        .addField(new field().setName("precision").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(2).setAppinfo("Count of the numbers after Decimal Point. Example : If precision is 2 1.562777 -> 1.56"))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Translation values of Slider Bar to define its location on the screen.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group("HUDGroup")
          .addChild(new Collision().setEnabled(false)
            .addChild(new ProximitySensor("HudProx").setSize(1000000.0,1000000.0,1000000.0))
            .addChild(new Transform("HudTransform")
              .addChild(new Transform().setTranslation(0.0,0.0,-0.2)
                .addChild(new Transform("SliderTransform")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new Group("SliderShape")
                    .addChild(new Transform("barTransform")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("BarColor").setDiffuseColor(0.0,0.0,1.0)
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("diffuseColor").setProtoField("barColor")))))
                        .setGeometry(new Box("bar").setSize(0.05,0.001,0.000001))))
                    .addChild(new Transform("pointerTransform")
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("PointerColor").setDiffuseColor(1.0,1.0,0.0)
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("diffuseColor").setProtoField("pointerColor")))))
                        .setGeometry(new Cone("pointer").setBottomRadius(0.0025).setHeight(0.005)))
                      .addChild(new PlaneSensor("SVPlaneSensor").setMaxPosition(0.025,0.0).setMinPosition(-0.025,0.0)))
                    .addChild(new Transform("sliderNameTransform")
                      .addChild(new Shape()
                        .setGeometry(new Text("SliderName")
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("string").setProtoField("name")))
                          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_END).setSize(0.0085).setCssStyle("BOLD")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("sliderNameColor")
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("diffuseColor").setProtoField("nameColor")))))))
                    .addChild(new Transform("currentValueTransform")
                      .addChild(new Shape("currentValue")
                        .setGeometry(new Text("currentValueText")
                          .setFontStyle(new FontStyle("currentValueFont").setJustify(FontStyle.JUSTIFY_BEGIN_MIDDLE).setSize(0.0085).setCssStyle("BOLD")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("valueColor")
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("diffuseColor").setProtoField("currentValueColor")))))))))))))
        .addChild(new Script("ShapeOrganizer").setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"      " + "\n" + 
"   for(i = 0; i < 3; i++) { " + "\n" + 
"      BarTransformNode.scale[i] = 1;" + "\n" + 
"      if(i == 2) {" + "\n" + 
"         PointerTransformNode.scale[i] = 0.1; " + "\n" + 
"      }" + "\n" + 
"      else {" + "\n" + 
"         PointerTransformNode.scale[i] = 1;" + "\n" + 
"      }" + "\n" + 
"   } " + "\n" + 
"   setBarSize();" + "\n" + 
"   setPointerSize();" + "\n" + 
"   setCurrentValueTransform();" + "\n" + 
"   setNameTransform();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBarSize() {" + "\n" + 
"   BarTransformNode.scale[0] = Length * BarTransformNode.scale[0];" + "\n" + 
"   BarTransformNode.scale[1] = Width * BarTransformNode.scale[1];" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setPointerSize() {" + "\n" + 
"   PointerTransformNode.scale[0] = Width * PointerTransformNode.scale[0];" + "\n" + 
"   PointerTransformNode.scale[1] = Width * PointerTransformNode.scale[1];" + "\n" + 
"   SVPlaneSensorNode.minPosition[0] = Length * SVPlaneSensorNode.minPosition[0];" + "\n" + 
"   SVPlaneSensorNode.maxPosition[0] = Length * SVPlaneSensorNode.maxPosition[0];" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setCurrentValueTransform() {" + "\n" + 
"   CurrentValueTransformNode.translation[0] = (BarTransformNode.scale[0] * 0.05 / 2) + (BarTransformNode.scale[1] * 0.001 * 2);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setNameTransform() {" + "\n" + 
"   SliderNameTransformNode.translation[0] = -((BarTransformNode.scale[0] * 0.05 / 2) + (BarTransformNode.scale[1] * 0.001 * 2));" + "\n" + 
"}" + "\n")
          .addField(new field().setName("Length").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("Width").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("SliderNameTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Transform().setUSE("sliderNameTransform")))
          .addField(new field().setName("CurrentValueTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Transform().setUSE("currentValueTransform")))
          .addField(new field().setName("BarTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Transform().setUSE("barTransform")))
          .addField(new field().setName("PointerTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Transform().setUSE("pointerTransform")))
          .addField(new field().setName("CurrentValueText").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Text().setUSE("currentValueText")))
          .addField(new field().setName("SVPlaneSensorNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PlaneSensor().setUSE("SVPlaneSensor")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("Length").setProtoField("length"))
            .addConnect(new connect().setNodeField("Width").setProtoField("width"))))
        .addChild(new Script("CurrentValueFinder").setDirectOutput(true).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var totalLength;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"   realValue = (MaxValue + MinValue) / 2;" + "\n" + 
"   realValue = roundOff(realValue, Precision);" + "\n" + 
"   CurrentValueFloat = realValue;" + "\n" + 
"   CurrentValueInt = Math.round(realValue);" + "\n" + 
"   totalLength = SVPlaneSensorNode.maxPosition[0] - SVPlaneSensorNode.minPosition[0];" + "\n" + 
"   updateCurrentValueText(realValue.toString()); " + "\n" + 
"}" + "\n" + 
"\n" + 
"//Map pointer translation value to the real value" + "\n" + 
"function updateCurrentValue(translation, timeEvent) {" + "\n" + 
"   var displayString;" + "\n" + 
"   var curPositionOnBar = translation[0] + totalLength / 2;" + "\n" + 
"   var x = (MaxValue - MinValue) * curPositionOnBar / totalLength;" + "\n" + 
"   " + "\n" + 
"   var realValue = MinValue + x;" + "\n" + 
"\n" + 
"   if(Precision == 0) { //If " + "\n" + 
"      CurrentValueInt = Math.round(realValue);" + "\n" + 
"      displayString = CurrentValueInt.toString();" + "\n" + 
"   }" + "\n" + 
"   else {" + "\n" + 
"      CurrentValueFloat = roundOff(realValue, Precision);       " + "\n" + 
"      displayString = CurrentValueFloat.toString();" + "\n" + 
"   } " + "\n" + 
"      " + "\n" + 
"   updateCurrentValueText(displayString);" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function updateCurrentValueText(dispStr) {" + "\n" + 
"   CurrentValueTextNode.string[0] = dispStr;" + "\n" + 
"}" + "\n" + 
"\n" + 
"//A function to round the values regarding to given precision." + "\n" + 
"function roundOff(value, precision) {" + "\n" + 
"\n" + 
"   var result;" + "\n" + 
"   var isNegative = false;" + "\n" + 
"   var wholeInt = Math.round(value * Math.pow(10, precision));" + "\n" + 
" " + "\n" + 
"   //Negative numbers creates exceptional condition, therefor they are converted" + "\n" + 
"   //to positive values." + "\n" + 
"   if(wholeInt < 0) {" + "\n" + 
"      wholeInt = -wholeInt;" + "\n" + 
"      isNegative = true;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   var whole = wholeInt.toString();" + "\n" + 
"   " + "\n" + 
"   var decPoint = whole.length - precision;" + "\n" + 
"   " + "\n" + 
"   //Exception when precision is bigger than the string length   " + "\n" + 
"   if(decPoint < 0) {" + "\n" + 
"      i = -decPoint;" + "\n" + 
"      for(i; i > 0; i--) {  " + "\n" + 
"         whole ='0' + whole;" + "\n" + 
"      }" + "\n" + 
"\n" + 
"      //Calculate decPoint according to new string expanded with 0s      " + "\n" + 
"      decPoint = whole.length - precision;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if(whole !='0') {" + "\n" + 
"      //Put the decimal point on the appropriate place" + "\n" + 
"      result = whole.substring(0, decPoint);" + "\n" + 
"      result +='.';" + "\n" + 
"      result += whole.substring(decPoint, whole.length);" + "\n" + 
"   }" + "\n" + 
"   else { //If the string is'0', then result is'0'" + "\n" + 
"      result = whole;" + "\n" + 
"   }" + "\n" + 
"   " + "\n" + 
"   //Negative numbers are altered." + "\n" + 
"   if(isNegative) {" + "\n" + 
"      result ='-' + result;" + "\n" + 
"   }" + "\n" + 
"   //Convert the String value to Float." + "\n" + 
"   resultFloat = parseFloat(result); " + "\n" + 
"  " + "\n" + 
"  " + "\n" + 
"   return resultFloat;" + "\n" + 
"  " + "\n" + 
"}" + "\n")
          .addField(new field().setName("SVPlaneSensorNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PlaneSensor().setUSE("SVPlaneSensor")))
          .addField(new field().setName("MaxValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("MinValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("CurrentValueTextNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Text().setUSE("currentValueText")))
          .addField(new field().setName("updateCurrentValue").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("CurrentValueInt").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("CurrentValueFloat").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("Precision").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("MaxValue").setProtoField("maxValue"))
            .addConnect(new connect().setNodeField("MinValue").setProtoField("minValue"))
            .addConnect(new connect().setNodeField("CurrentValueInt").setProtoField("currentValueInt"))
            .addConnect(new connect().setNodeField("CurrentValueFloat").setProtoField("currentValueFloat"))
            .addConnect(new connect().setNodeField("Precision").setProtoField("precision"))))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudTransform").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudProx").setToField("center"))
        .addChild(new ROUTE().setFromNode("SVPlaneSensor").setFromField("translation_changed").setToNode("pointerTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("SVPlaneSensor").setFromField("translation_changed").setToNode("CurrentValueFinder").setToField("updateCurrentValue"))))
    .addChild(new Viewpoint().setDescription("Slider bar").setPosition(0.0,0.0,5.0))
    .addChild(new ProtoInstance("ProjectileSliderBar").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"AFAA"}))
      .addFieldValue(new fieldValue().setName("length").setValue(1.5))
      .addFieldValue(new fieldValue().setName("width").setValue(1))
      .addFieldValue(new fieldValue().setName("maxValue").setValue(10))
      .addFieldValue(new fieldValue().setName("minValue").setValue(-2))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ProjectileSliderBarPrototype model
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
        X3D thisExampleX3dModel = new ProjectileSliderBarPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ProjectileSliderBarPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ProjectileSliderBarPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
