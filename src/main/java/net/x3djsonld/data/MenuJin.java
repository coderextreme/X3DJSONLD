package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> X3D scene with a Switch of Inlines controlled by a menu. </p>
 <p> Related links:  source MenuJin.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.MenuJin&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="Menu.x3d">Menu.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D scene with a Switch of Inlines controlled by a menu </td>
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

 */

public class MenuJin
{
	/** Default constructor to create this object. */
	public MenuJin ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Menu.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D scene with a Switch of Inlines controlled by a menu")))
  .setScene(new Scene()
    .addComments(" Viewpoint and any other scene setup ")
    .addChild(new Viewpoint().setPosition(0.0,20.0,110.0))
    .addChild(new Group()
      .addChild(new Switch("SceneSwitcher").setWhichChoice(0)
        .addChild(new Group()
          .addChild(new Script("Choice0").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 0;
      }
      function touchTime(value) {
          choice = 0;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinBlink").setUrl(new String[] {"../resources/JinBlink.x3d","JinBlink.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice1").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 1;
      }
      function touchTime(value) {
          choice = 1;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinBrowLowerer").setUrl(new String[] {"../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice2").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 2;
      }
      function touchTime(value) {
          choice = 2;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinCheekPuffer").setUrl(new String[] {"../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice3").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 3;
      }
      function touchTime(value) {
          choice = 3;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinCheekRaiser").setUrl(new String[] {"../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice4").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 4;
      }
      function touchTime(value) {
          choice = 4;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinChinRaiser").setUrl(new String[] {"../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice5").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 5;
      }
      function touchTime(value) {
          choice = 5;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinDimpler").setUrl(new String[] {"../resources/JinDimpler.x3d","JinDimpler.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice6").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 6;
      }
      function touchTime(value) {
          choice = 6;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinEyesClosed").setUrl(new String[] {"../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice7").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 7;
      }
      function touchTime(value) {
          choice = 7;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinInnerBrowRaiser").setUrl(new String[] {"../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice8").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 8;
      }
      function touchTime(value) {
          choice = 8;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinJawDrop").setUrl(new String[] {"../resources/JinJawDrop.x3d","JinJawDrop.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice9").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 9;
      }
      function touchTime(value) {
          choice = 9;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLidDroop").setUrl(new String[] {"../resources/JinLidDroop.x3d","JinLidDroop.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice10").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 10;
      }
      function touchTime(value) {
          choice = 10;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLidTightener").setUrl(new String[] {"../resources/JinLidTightener.x3d","JinLidTightener.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice11").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 11;
      }
      function touchTime(value) {
          choice = 11;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipCornerDepressor").setUrl(new String[] {"../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice12").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 12;
      }
      function touchTime(value) {
          choice = 12;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipCornerPuller").setUrl(new String[] {"../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice13").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 13;
      }
      function touchTime(value) {
          choice = 13;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipFunneler").setUrl(new String[] {"../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice14").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 14;
      }
      function touchTime(value) {
          choice = 14;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipPressor").setUrl(new String[] {"../resources/JinLipPressor.x3d","JinLipPressor.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice15").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 15;
      }
      function touchTime(value) {
          choice = 15;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipPuckerer").setUrl(new String[] {"../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice16").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 16;
      }
      function touchTime(value) {
          choice = 16;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipsPart").setUrl(new String[] {"../resources/JinLipsPart.x3d","JinLipsPart.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice17").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 17;
      }
      function touchTime(value) {
          choice = 17;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipStretcher").setUrl(new String[] {"../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice18").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 18;
      }
      function touchTime(value) {
          choice = 18;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipSuck").setUrl(new String[] {"../resources/JinLipSuck.x3d","JinLipSuck.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice19").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 19;
      }
      function touchTime(value) {
          choice = 19;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLipTightener").setUrl(new String[] {"../resources/JinLipTightener.x3d","JinLipTightener.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice20").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 20;
      }
      function touchTime(value) {
          choice = 20;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinLowerLipDepressor").setUrl(new String[] {"../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice21").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 21;
      }
      function touchTime(value) {
          choice = 21;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinMouthStretch").setUrl(new String[] {"../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice22").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 22;
      }
      function touchTime(value) {
          choice = 22;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinNasolabialDeepener").setUrl(new String[] {"../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice23").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 23;
      }
      function touchTime(value) {
          choice = 23;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinNoseWrinkler").setUrl(new String[] {"../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice24").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 24;
      }
      function touchTime(value) {
          choice = 24;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinOuterBrowRaiser").setUrl(new String[] {"../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice25").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 25;
      }
      function touchTime(value) {
          choice = 25;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinSlit").setUrl(new String[] {"../resources/JinSlit.x3d","JinSlit.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice26").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 26;
      }
      function touchTime(value) {
          choice = 26;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinSquint").setUrl(new String[] {"../resources/JinSquint.x3d","JinSquint.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice27").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 27;
      }
      function touchTime(value) {
          choice = 27;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinUpperLidRaiser").setUrl(new String[] {"../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice28").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 28;
      }
      function touchTime(value) {
          choice = 28;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinUpperLipRaiser").setUrl(new String[] {"../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"})))
        .addChild(new Group()
          .addChild(new Script("Choice29").setSourceCode("""
ecmascript:
      function set_touchTime(value) {
          choice = 29;
      }
      function touchTime(value) {
          choice = 29;
      }
""")
            .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("choice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new Inline("JinWink").setUrl(new String[] {"../resources/JinWink.x3d","JinWink.x3d"}))))
      .addChild(new Transform().setTranslation(48.0,63.4,0.0)
        .addChild(new TouchSensor("JinBlink_Sensor").setDescription("TSJinBlink"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinBlink"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinBlink_Sensor").setFromField("touchTime").setToNode("Choice0").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice0").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,60.4,0.0)
        .addChild(new TouchSensor("JinBrowLowerer_Sensor").setDescription("TSJinBrowLowerer"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinBrowLowerer"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinBrowLowerer_Sensor").setFromField("touchTime").setToNode("Choice1").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice1").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,57.39999999999999,0.0)
        .addChild(new TouchSensor("JinCheekPuffer_Sensor").setDescription("TSJinCheekPuffer"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinCheekPuffer"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinCheekPuffer_Sensor").setFromField("touchTime").setToNode("Choice2").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice2").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,54.39999999999999,0.0)
        .addChild(new TouchSensor("JinCheekRaiser_Sensor").setDescription("TSJinCheekRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinCheekRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinCheekRaiser_Sensor").setFromField("touchTime").setToNode("Choice3").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice3").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,51.39999999999999,0.0)
        .addChild(new TouchSensor("JinChinRaiser_Sensor").setDescription("TSJinChinRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinChinRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinChinRaiser_Sensor").setFromField("touchTime").setToNode("Choice4").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice4").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,48.39999999999999,0.0)
        .addChild(new TouchSensor("JinDimpler_Sensor").setDescription("TSJinDimpler"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinDimpler"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinDimpler_Sensor").setFromField("touchTime").setToNode("Choice5").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice5").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,45.39999999999999,0.0)
        .addChild(new TouchSensor("JinEyesClosed_Sensor").setDescription("TSJinEyesClosed"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinEyesClosed"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinEyesClosed_Sensor").setFromField("touchTime").setToNode("Choice6").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice6").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,42.39999999999999,0.0)
        .addChild(new TouchSensor("JinInnerBrowRaiser_Sensor").setDescription("TSJinInnerBrowRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinInnerBrowRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinInnerBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice7").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice7").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,39.39999999999999,0.0)
        .addChild(new TouchSensor("JinJawDrop_Sensor").setDescription("TSJinJawDrop"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinJawDrop"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinJawDrop_Sensor").setFromField("touchTime").setToNode("Choice8").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice8").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,36.39999999999999,0.0)
        .addChild(new TouchSensor("JinLidDroop_Sensor").setDescription("TSJinLidDroop"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLidDroop"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLidDroop_Sensor").setFromField("touchTime").setToNode("Choice9").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice9").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,33.39999999999999,0.0)
        .addChild(new TouchSensor("JinLidTightener_Sensor").setDescription("TSJinLidTightener"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLidTightener"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLidTightener_Sensor").setFromField("touchTime").setToNode("Choice10").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice10").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,30.399999999999995,0.0)
        .addChild(new TouchSensor("JinLipCornerDepressor_Sensor").setDescription("TSJinLipCornerDepressor"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipCornerDepressor"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipCornerDepressor_Sensor").setFromField("touchTime").setToNode("Choice11").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice11").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,27.399999999999995,0.0)
        .addChild(new TouchSensor("JinLipCornerPuller_Sensor").setDescription("TSJinLipCornerPuller"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipCornerPuller"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipCornerPuller_Sensor").setFromField("touchTime").setToNode("Choice12").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice12").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,24.399999999999995,0.0)
        .addChild(new TouchSensor("JinLipFunneler_Sensor").setDescription("TSJinLipFunneler"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipFunneler"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipFunneler_Sensor").setFromField("touchTime").setToNode("Choice13").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice13").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,21.399999999999995,0.0)
        .addChild(new TouchSensor("JinLipPressor_Sensor").setDescription("TSJinLipPressor"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipPressor"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipPressor_Sensor").setFromField("touchTime").setToNode("Choice14").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice14").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,18.4,0.0)
        .addChild(new TouchSensor("JinLipPuckerer_Sensor").setDescription("TSJinLipPuckerer"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipPuckerer"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipPuckerer_Sensor").setFromField("touchTime").setToNode("Choice15").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice15").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,15.399999999999997,0.0)
        .addChild(new TouchSensor("JinLipsPart_Sensor").setDescription("TSJinLipsPart"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipsPart"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipsPart_Sensor").setFromField("touchTime").setToNode("Choice16").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice16").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,12.399999999999999,0.0)
        .addChild(new TouchSensor("JinLipStretcher_Sensor").setDescription("TSJinLipStretcher"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipStretcher"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipStretcher_Sensor").setFromField("touchTime").setToNode("Choice17").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice17").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,9.399999999999999,0.0)
        .addChild(new TouchSensor("JinLipSuck_Sensor").setDescription("TSJinLipSuck"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipSuck"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipSuck_Sensor").setFromField("touchTime").setToNode("Choice18").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice18").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,6.399999999999999,0.0)
        .addChild(new TouchSensor("JinLipTightener_Sensor").setDescription("TSJinLipTightener"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLipTightener"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLipTightener_Sensor").setFromField("touchTime").setToNode("Choice19").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice19").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,3.399999999999995,0.0)
        .addChild(new TouchSensor("JinLowerLipDepressor_Sensor").setDescription("TSJinLowerLipDepressor"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinLowerLipDepressor"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinLowerLipDepressor_Sensor").setFromField("touchTime").setToNode("Choice20").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice20").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,0.399999999999995,0.0)
        .addChild(new TouchSensor("JinMouthStretch_Sensor").setDescription("TSJinMouthStretch"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinMouthStretch"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinMouthStretch_Sensor").setFromField("touchTime").setToNode("Choice21").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice21").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-2.6000000000000085,0.0)
        .addChild(new TouchSensor("JinNasolabialDeepener_Sensor").setDescription("TSJinNasolabialDeepener"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinNasolabialDeepener"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinNasolabialDeepener_Sensor").setFromField("touchTime").setToNode("Choice22").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice22").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-5.6000000000000085,0.0)
        .addChild(new TouchSensor("JinNoseWrinkler_Sensor").setDescription("TSJinNoseWrinkler"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinNoseWrinkler"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinNoseWrinkler_Sensor").setFromField("touchTime").setToNode("Choice23").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice23").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-8.600000000000009,0.0)
        .addChild(new TouchSensor("JinOuterBrowRaiser_Sensor").setDescription("TSJinOuterBrowRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinOuterBrowRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinOuterBrowRaiser_Sensor").setFromField("touchTime").setToNode("Choice24").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice24").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-11.600000000000009,0.0)
        .addChild(new TouchSensor("JinSlit_Sensor").setDescription("TSJinSlit"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinSlit"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinSlit_Sensor").setFromField("touchTime").setToNode("Choice25").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice25").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-14.600000000000001,0.0)
        .addChild(new TouchSensor("JinSquint_Sensor").setDescription("TSJinSquint"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinSquint"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinSquint_Sensor").setFromField("touchTime").setToNode("Choice26").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice26").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-17.6,0.0)
        .addChild(new TouchSensor("JinUpperLidRaiser_Sensor").setDescription("TSJinUpperLidRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinUpperLidRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinUpperLidRaiser_Sensor").setFromField("touchTime").setToNode("Choice27").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice27").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-20.6,0.0)
        .addChild(new TouchSensor("JinUpperLipRaiser_Sensor").setDescription("TSJinUpperLipRaiser"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinUpperLipRaiser"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinUpperLipRaiser_Sensor").setFromField("touchTime").setToNode("Choice28").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice28").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))
      .addChild(new Transform().setTranslation(48.0,-23.599999999999994,0.0)
        .addChild(new TouchSensor("JinWink_Sensor").setDescription("TSJinWink"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"JinWink"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}))))))
      .addChild(new ROUTE().setFromNode("JinWink_Sensor").setFromField("touchTime").setToNode("Choice29").setToField("touchTime"))
      .addChild(new ROUTE().setFromNode("Choice29").setFromField("choice").setToNode("SceneSwitcher").setToField("whichChoice"))));
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
	 * @return MenuJin model
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
        X3D thisExampleX3dModel = new MenuJin().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.MenuJin\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.MenuJin self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./MenuJin_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./MenuJin_JavaExport.x3d"; 
                String filenameX3DV = "./MenuJin_JavaExport.x3dv"; 
                String filenameJSON = "./MenuJin_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
