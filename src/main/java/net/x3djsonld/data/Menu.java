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
 <p> Related links:  source Menu.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Menu&nbsp; Document Metadata </td>
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

public class Menu
{
	/** Default constructor to create this object. */
	public Menu ()
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
    .addComments(" Menu prototype declaration ")
    .addChild(new ProtoDeclare("Menu").setName("Menu")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("menuItems").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform("TextMenuTransform").setTranslation(48.0,27.0,0.0)
            .addChild(new TouchSensor("MenuTouchSensor"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
              .setGeometry(new Text("MenuText")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("string").setProtoField("menuItems")))
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2.4).setSpacing(1.2))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
              .setGeometry(new IndexedFaceSet("Backing").setDEF("Backing").setCoordIndex(new int[] {0,1,2,3,-1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {25.0,36.0,-0.01,-25.0,36.0,-0.01,-25.0,-51.0,-0.01,25.0,-51.0,-0.01}))))))
          .addChild(new Switch("SceneSwitcher").setWhichChoice(0)
            .addChild(new Inline("OPTION1").setUrl(new String[] {"../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"}))
            .addChild(new Inline("OPTION2").setUrl(new String[] {"../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"}))
            .addChild(new Inline("OPTION3").setUrl(new String[] {"../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"}))
            .addChild(new Inline("OPTION4").setUrl(new String[] {"../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"}))
            .addChild(new Inline("OPTION5").setUrl(new String[] {"../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"}))
            .addChild(new Inline("OPTION6").setUrl(new String[] {"../resources/JinLidTightener.x3d","JinLidTightener.x3d"}))
            .addChild(new Inline("OPTION7").setUrl(new String[] {"../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"}))
            .addChild(new Inline("OPTION8").setUrl(new String[] {"../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"}))
            .addChild(new Inline("OPTION9").setUrl(new String[] {"../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"}))
            .addChild(new Inline("OPTION10").setUrl(new String[] {"../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"}))
            .addChild(new Inline("OPTION11").setUrl(new String[] {"../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"}))
            .addChild(new Inline("OPTION12").setUrl(new String[] {"../resources/JinDimpler.x3d","JinDimpler.x3d"}))
            .addChild(new Inline("OPTION13").setUrl(new String[] {"../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"}))
            .addChild(new Inline("OPTION14").setUrl(new String[] {"../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"}))
            .addChild(new Inline("OPTION15").setUrl(new String[] {"../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"}))
            .addChild(new Inline("OPTION16").setUrl(new String[] {"../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"}))
            .addChild(new Inline("OPTION17").setUrl(new String[] {"../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"}))
            .addChild(new Inline("OPTION18").setUrl(new String[] {"../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"}))
            .addChild(new Inline("OPTION19").setUrl(new String[] {"../resources/JinLipTightener.x3d","JinLipTightener.x3d"}))
            .addChild(new Inline("OPTION20").setUrl(new String[] {"../resources/JinLipPressor.x3d","JinLipPressor.x3d"}))
            .addChild(new Inline("OPTION21").setUrl(new String[] {"../resources/JinLipsPart.x3d","JinLipsPart.x3d"}))
            .addChild(new Inline("OPTION22").setUrl(new String[] {"../resources/JinJawDrop.x3d","JinJawDrop.x3d"}))
            .addChild(new Inline("OPTION23").setUrl(new String[] {"../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"}))
            .addChild(new Inline("OPTION24").setUrl(new String[] {"../resources/JinLipSuck.x3d","JinLipSuck.x3d"}))
            .addChild(new Inline("OPTION25").setUrl(new String[] {"../resources/JinLidDroop.x3d","JinLidDroop.x3d"}))
            .addChild(new Inline("OPTION26").setUrl(new String[] {"../resources/JinSlit.x3d","JinSlit.x3d"}))
            .addChild(new Inline("OPTION27").setUrl(new String[] {"../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"}))
            .addChild(new Inline("OPTION28").setUrl(new String[] {"../resources/JinSquint.x3d","JinSquint.x3d"}))
            .addChild(new Inline("OPTION29").setUrl(new String[] {"../resources/JinBlink.x3d","JinBlink.x3d"}))
            .addChild(new Inline("OPTION30").setUrl(new String[] {"../resources/JinWink.x3d","JinWink.x3d"})))
          .addComments(" Script to handle selection logic ")
          .addChild(new Script("MenuScript").setSourceCode("""
ecmascript:
        function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        function touchPoint(value) {
          Browser.print("Hit "+value+" "+selection+"\n");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"\n");
          }
        }
""")
            .addField(new field().setName("menuItems").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("selection").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("touchPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("spacing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.2))
            .addField(new field().setName("size").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(2.4))
            .addField(new field().setName("menuCenterY").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("itemHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("menuItems").setProtoField("menuItems"))))
          .addComments(" ROUTEs to connect everything ")
          .addChild(new ROUTE().setFromNode("MenuTouchSensor").setFromField("hitPoint_changed").setToNode("MenuScript").setToField("touchPoint"))
          .addChild(new ROUTE().setFromNode("MenuScript").setFromField("selection").setToNode("SceneSwitcher").setToField("whichChoice")))))
    .addChild(new ProtoInstance("Menu", "MainMenu").setContainerField("children")
      .addFieldValue(new fieldValue().setName("menuItems").setValue(new String[] {"JinInnerBrowRaiser.x3d","JinOuterBrowRaiser.x3d","JinBrowLowerer.x3d","JinUpperLidRaiser.x3d","JinCheekRaiser.x3d","JinLidTightener.x3d","JinNoseWrinkler.x3d","JinUpperLipRaiser.x3d","JinNasolabialDeepener.x3d","JinLipCornerPuller.x3d","JinCheekPuffer.x3d","JinDimpler.x3d","JinLipCornerDepressor.x3d","JinLowerLipDepressor.x3d","JinChinRaiser.x3d","JinLipPuckerer.x3d","JinLipStretcher.x3d","JinLipFunneler.x3d","JinLipTightener.x3d","JinLipPressor.x3d","JinLipsPart.x3d","JinJawDrop.x3d","JinMouthStretch.x3d","JinLipSuck.x3d","JinLidDroop.x3d","JinSlit.x3d","JinEyesClosed.x3d","JinSquint.x3d","JinBlink.x3d","JinWink.x3d" }))));
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
	 * @return Menu model
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
        X3D thisExampleX3dModel = new Menu().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.Menu\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Menu self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./Menu_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./Menu_JavaExport.x3d"; 
                String filenameX3DV = "./Menu_JavaExport.x3dv"; 
                String filenameJSON = "./Menu_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
