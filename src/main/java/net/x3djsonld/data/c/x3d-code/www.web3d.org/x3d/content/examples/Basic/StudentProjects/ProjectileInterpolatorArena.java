package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A projectile motion application which displays range and max height values accoding to Vi and theta inputs. Calculations for drag force with air density are also taken into account. </p>
 <p> Related links: <a href="../../../StudentProjects/ProjectileInterpolatorArena.java">ProjectileInterpolatorArena.java</a> source, <a href="../../../StudentProjects/ProjectileInterpolatorArenaIndex.html" target="_top">ProjectileInterpolatorArena catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/ProjectileInterpolatorArena.x3d">ProjectileInterpolatorArena.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A projectile motion application which displays range and max height values accoding to Vi and theta inputs. Calculations for drag force with air density are also taken into account. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Ozan APAYDIN </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 10 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d</a> </td>
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

public class ProjectileInterpolatorArena
{
	/** Default constructor to create this object. */
	public ProjectileInterpolatorArena ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ProjectileInterpolatorArena.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A projectile motion application which displays range and max height values accoding to Vi and theta inputs. Calculations for drag force with air density are also taken into account."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Ozan APAYDIN"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("10 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ProjectileInterpolatorArena.x3d"))
    .addChild(new ExternProtoDeclare("ProjectileSliderBar").setName("ProjectileSliderBar").setUrl(new String[] {"ProjectileSliderBarPrototype.wrl#ProjectileSliderBar","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.wrl#ProjectileSliderBar","ProjectileSliderBarPrototype.x3d#ProjectileSliderBar","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d#ProjectileSliderBar"})
      .addField(new field().setName("name").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("length").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("width").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("maxValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("minValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("barColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("pointerColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("nameColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("currentValueColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("currentValueInt").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("currentValueFloat").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("precision").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("ProjectileInterpolator").setName("ProjectileInterpolator").setUrl(new String[] {"ProjectileInterpolatorPrototype.wrl#ProjectileInterpolator","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.wrl#ProjectileInterpolator","ProjectileInterpolatorPrototype.x3d#ProjectileInterpolator","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d#ProjectileInterpolator"})
      .addField(new field().setName("Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("B_m").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("dt").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Viewpoint("FirstView").setDescription("First view").setPosition(60.0,15.0,150.0))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyAngle(new double[] {1.309,1.571}).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_back.jpg","space_1_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_bottom.jpg","space_1_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_front.jpg","space_1_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_left.jpg","space_1_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_right.jpg","space_1_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/space_1_top.jpg","space_1_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_top.jpg"}))
    .addChild(new DirectionalLight().setDirection(0.0,-1.0,0.0).setIntensity(0.5))
    .addChild(new ProtoInstance("ProjectileSliderBar", "SliderVelocity").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"Vi"}))
      .addFieldValue(new fieldValue().setName("length").setValue(1.5))
      .addFieldValue(new fieldValue().setName("width").setValue(1))
      .addFieldValue(new fieldValue().setName("maxValue").setValue(30))
      .addFieldValue(new fieldValue().setName("minValue").setValue(0))
      .addFieldValue(new fieldValue().setName("barColor").setValue(new SFColor(0.0,0.0,1.0)))
      .addFieldValue(new fieldValue().setName("pointerColor").setValue(new SFColor(1.0,1.0,0.0)))
      .addFieldValue(new fieldValue().setName("nameColor").setValue(new SFColor(1.0,0.0,1.0)))
      .addFieldValue(new fieldValue().setName("precision").setValue(1))
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.04,0.06,0.0))))
    .addChild(new ProtoInstance("ProjectileSliderBar", "SliderAngle").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"Theta"}))
      .addFieldValue(new fieldValue().setName("length").setValue(1.5))
      .addFieldValue(new fieldValue().setName("width").setValue(1))
      .addFieldValue(new fieldValue().setName("maxValue").setValue(90))
      .addFieldValue(new fieldValue().setName("minValue").setValue(0))
      .addFieldValue(new fieldValue().setName("barColor").setValue(new SFColor(1.0,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("pointerColor").setValue(new SFColor(1.0,1.0,0.0)))
      .addFieldValue(new fieldValue().setName("nameColor").setValue(new SFColor(0.0,1.0,1.0)))
      .addFieldValue(new fieldValue().setName("precision").setValue(1))
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.04,0.05,0.0))))
    .addChild(new ProtoInstance("ProjectileSliderBar", "TimeCycle").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"CycleInterval"}))
      .addFieldValue(new fieldValue().setName("length").setValue(1.5))
      .addFieldValue(new fieldValue().setName("width").setValue(1))
      .addFieldValue(new fieldValue().setName("maxValue").setValue(5))
      .addFieldValue(new fieldValue().setName("minValue").setValue(1))
      .addFieldValue(new fieldValue().setName("barColor").setValue(new SFColor(0.0,1.0,0.0)))
      .addFieldValue(new fieldValue().setName("pointerColor").setValue(new SFColor(1.0,1.0,0.0)))
      .addFieldValue(new fieldValue().setName("nameColor").setValue(new SFColor(0.0,0.3,1.0)))
      .addFieldValue(new fieldValue().setName("precision").setValue(1))
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.04,0.04,0.0))))
    .addChild(new ProtoInstance("ProjectileInterpolator", "ProjectileInterpolator").setContainerField("children"))
    .addChild(new ROUTE().setFromNode("SliderVelocity").setFromField("currentValueFloat").setToNode("ProjectileInterpolator").setToField("set_Vi"))
    .addChild(new ROUTE().setFromNode("SliderAngle").setFromField("currentValueFloat").setToNode("ProjectileInterpolator").setToField("set_theta"))
    .addChild(new Transform()
      .addChild(new Group("HUDGroup")
        .addChild(new Collision().setEnabled(false)
          .addChild(new ProximitySensor("HudProx").setSize(1000000.0,1000000.0,1000000.0))
          .addChild(new Transform("HudTransform")
            .addChild(new Transform().setTranslation(0.05,0.06,-0.2)
              .addChild(new Transform("TrajectoryTextTransform")
                .addChild(new Shape()
                  .setGeometry(new Text("RangeText").setString(new String[] {"Range 0.0"})
                    .setFontStyle(new FontStyle().setSize(0.01).setCssStyle("BOLD")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.9,0.7,0.0)))))
              .addChild(new Transform().setTranslation(0.0,-0.015,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("HeightText").setString(new String[] {"Max Height 0.0"})
                    .setFontStyle(new FontStyle().setSize(0.01).setCssStyle("BOLD")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0))))))))))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudTransform").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudProx").setToField("center"))
    .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudTransform").setToField("set_rotation"))
    .addChild(new Script("ValueDisplayer").setDirectOutput(true).setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"var maxValue;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"   maxValue = 0;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTextValues(values, timeEvent) {" + "\n" + 
"   var precision = 2;" + "\n" + 
"   RangeText.string[0] ='Range            ' + roundOff(values[0], precision);" + "\n" + 
"   if(values[1] > maxValue) {" + "\n" + 
"      maxValue = roundOff(values[1], precision);" + "\n" + 
"      Browser.print ('maximum' + maxValue);" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   Browser.print ('values' + values[1]);" + "\n" + 
"   HeightText.string[0] ='Max Height   ' + maxValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function reset(bool, eventTime) {" + "\n" + 
"   maxValue = 0;" + "\n" + 
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
      .addField(new field().setName("setTextValues").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("reset").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("RangeText").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("RangeText")))
      .addField(new field().setName("HeightText").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("HeightText"))))
    .addChild(new ROUTE().setFromNode("ProjectileInterpolator").setFromField("value_changed").setToNode("ValueDisplayer").setToField("setTextValues"))
    .addChild(new Transform().setTranslation(0.0,-0.7,0.0)
      .addChild(new Collision()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"grass_1.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass_1.jpg","https://www.web3d.org/WorkingGroups/media/textures/nature/grass_1.jpg"}))
            .setTextureTransform(new TextureTransform().setScale(8.0,4.0)))
          .setGeometry(new ElevationGrid().setXDimension(4).setXSpacing(40).setZSpacing(25).setHeight(new double[] {-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75})))))
    .addChild(new Transform().setTranslation(0.0,0.0,12.5)
      .addChild(new Transform("BallTransform")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Sphere().setRadius(1.5)))
        .addChild(new Viewpoint().setDescription("BallView").setPosition(0.0,10.0,70.0))
        .addChild(new TouchSensor("HitSensor"))))
    .addChild(new TimeSensor("Timer").setCycleInterval(3.5))
    .addChild(new ROUTE().setFromNode("Timer").setFromField("fraction_changed").setToNode("ProjectileInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("HitSensor").setFromField("touchTime").setToNode("Timer").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("HitSensor").setFromField("isActive").setToNode("ValueDisplayer").setToField("reset"))
    .addChild(new ROUTE().setFromNode("ProjectileInterpolator").setFromField("value_changed").setToNode("BallTransform").setToField("set_translation"))
    .addChild(new Script("TimeConverter").setDirectOutput(true).setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTime(inputTime, timeEvent) {" + "\n" + 
"   TimerNode.cycleInterval = inputTime;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("TimerNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new TimeSensor().setUSE("Timer")))
      .addField(new field().setName("setTime").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("TimeCycle").setFromField("currentValueFloat").setToNode("TimeConverter").setToField("setTime")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ProjectileInterpolatorArena model
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
        X3D thisExampleX3dModel = new ProjectileInterpolatorArena().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ProjectileInterpolatorArena\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ProjectileInterpolatorArena\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
