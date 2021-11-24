package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.ProjectiveTextureMapping.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test Schematron diagnostics capabilities for detecting various content errors and style warnings. </p>
 <p> Related links: <a href="../../../development/TestSchematronDiagnostics.java">TestSchematronDiagnostics.java</a> source, <a href="../../../development/TestSchematronDiagnosticsIndex.html" target="_top">TestSchematronDiagnostics catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/TestSchematronDiagnostics.x3d">TestSchematronDiagnostics.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test Schematron diagnostics capabilities for detecting various content errors and style warnings. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Second meta tag to test warning that two description meta tags are present. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 October 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 25 October 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> The regex is not finding IllegalMinusSignsTest. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> Test scene with many errors, primarily intended to exercise most of the rules in the X3D Schematron diagnostic set. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Test scene with many warnings embedded in comments. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Test scene with many hints embedded in comments. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Perhaps the most erroneous X3D scene in the world! </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Perhaps the most erroneous X3D scene in the world! </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/tools/schematron/X3dSchematronValidityChecks.sch" target="_blank">https://www.web3d.org/x3d/tools/schematron/X3dSchematronValidityChecks.sch</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/tools/schematron/X3dSchematron.html" target="_blank">https://www.web3d.org/x3d/tools/schematron/X3dSchematron.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html#QualityAssurance" target="_blank">https://www.web3d.org/x3d/content/examples/X3dResources.html#QualityAssurance</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d</a> </td>
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

public class TestSchematronDiagnostics
{
	/** Default constructor to create this object. */
	public TestSchematronDiagnostics ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_CORE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setLevel(3))
    .addComponent(new component().setName("Geometry2D"))
    .addComponent(new component().setName("Geometry2D").setLevel(3))
    .addComponent(new component().setName("Geometry2D").setLevel(3))
    .addUnit(new unit().setName("nonPositiveConversionFactor").setCategory("angle").setConversionFactor(-1))
    .addUnit(new unit().setName("nonPositiveConversionFactor").setCategory("angle").setConversionFactor(-1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TestSchematronDiagnostics.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test Schematron diagnostics capabilities for detecting various content errors and style warnings."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Second meta tag to test warning that two description meta tags are present."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("19 October 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("25 October 2020"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("The regex is not finding IllegalMinusSignsTest."))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("Test scene with many errors, primarily intended to exercise most of the rules in the X3D Schematron diagnostic set."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Test scene with many warnings embedded in comments."))
    .addMeta(new meta().setName(meta.NAME_HINT       ).setContent("Test scene with many hints embedded in comments."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Perhaps the most erroneous X3D scene in the world!"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Perhaps the most erroneous X3D scene in the world!"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/tools/schematron/X3dSchematronValidityChecks.sch"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/tools/schematron/X3dSchematron.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html#QualityAssurance"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene("improperDEF").setUSE("improperUSE")
    .addComments(" - illegal comment starts with extra hyphen - character ")
    .addComments(" - illegal comment has intermediate paired-hyphen - - characters ")
    .addChild(new TouchSensor("IllegalCombinationDEFUSE").setUSE("IllegalCombinationDEFUSE"))
    .addChild(new CylinderSensor("DoubleDEF").setEnabled(false))
    .addChild(new TimeSensor("DoubleDEF"))
    .addChild(new WorldInfo("FirstTitle").setTitle("title #1"))
    .addChild(new WorldInfo("SecondTitle").setTitle("title #2"))
    .addChild(new WorldInfo("DEFPrependedSpace"))
    .addChild(new WorldInfo("DEFEmbedded Space"))
    .addChild(new WorldInfo("DEFAppendedSpace"))
    .addChild(new WorldInfo("IllegalInfoQuotes").setInfo(new String[] {"WorldInfo info strings need to be quoted"}))
    .addChild(new WorldInfo("IllegalChild")
      .addChild(new WorldInfo()))
    .addChild(new WorldInfo("LegalChild")
      .setMetadata(new MetadataString()))
    .addChild(new Anchor("NoChildrenNoUrl"))
    .addChild(new Anchor("AnchorBookmark").setParameter(new String[] {"target=unquoted"}).setUrl(new String[] {"#missingBookmark"})
      .addChild(new Group()))
    .addChild(new Inline("HelloWorld").setUrl(new String[] {"../HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/Basic/HelloWorld.x3d","../HelloWorld.wrl"}))
    .addChild(new Inline("UrlDotWrlPrecedesDotX3d").setUrl(new String[] {"test.wrl","test.x3d","adjacent""quote marks"}))
    .addChild(new Inline("NoUrlIllegalChild")
      .addChild(new WorldInfo()))
    .addChild(new Inline("NodeUrlVRML.wrl.PrecedingX3D.x3d").setUrl(new String[] {"HelloWorld.wrl","HelloWorld.x3d"}))
    .addChild(new ExternProtoDeclare("ExternProtoDeclareUrlVRML.wrl.PrecedingX3D.x3d").setName("ExternProtoDeclareUrlVRML.wrl.PrecedingX3D.x3d").setUrl(new String[] {"HelloWorld.wrl","HelloWorld.x3d"}))
    .addChild(new ExternProtoDeclare("ExternProtoDeclareUrlVRML.wrl.MissingX3D.x3d").setName("ExternProtoDeclareUrlVRML.wrl.MissingX3D.x3d").setUrl(new String[] {"HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.x3d","HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"}))
    .addChild(new Shape("NoChildAppearance")
      .setGeometry(new Box()))
    .addChild(new Shape("NoChildGeometry")
      .setAppearance(new Appearance("NoMaterialNoTexture")))
    .addComments(" test no other fields if USE present ")
    .addChild(new Shape().setUSE("NoChildAppearance"))
    .addChild(new Shape().setUSE("NoChildAppearance"))
    .addChild(new Shape().setUSE("NoChildAppearance"))
    .addChild(new Shape("USEwithChildElement")
      .setGeometry(new Box())
      .setAppearance(new Appearance("AppearanceWithProtoInstanceChild")
        .addChild(new ProtoInstance("NodeSubstituteNoDeclaration").setContainerField("children"))))
    .addChild(new Appearance("MissingParentShape"))
    .addChild(new Shape().setUSE("USEwithChildElement")
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape("SingleProtoInstanceChild")
      .addChild(new ProtoInstance("NodeSubstituteNoDeclaration").setContainerField("children")))
    .addComments(" no DEF name ")
    .addChild(new TimeSensor("NoOutputROUTE"))
    .addChild(new TimeSensor("Clock").setCycleInterval(100).setLoop(true))
    .addChild(new ColorInterpolator())
    .addChild(new ColorInterpolator("InterpolatorWithSingleKey").setKey(new double[] {0.0}))
    .addChild(new ColorInterpolator("ColorInterpolatorColorProblems").setKey(new double[] {0.0}).setKeyValue(new MFColor(new double[] {-1.0,1.2,0.3,0.4})))
    .addComments(" no DEF name ")
    .addChild(new PositionInterpolator("NoROUTEsNoKeyValueArray").setKey(new double[] {0.0,0.0}))
    .addChild(new ScalarInterpolator("MismatchedKeyArrays").setKey(new double[] {0.0}).setKeyValue(new double[] {0.0,0.0}))
    .addChild(new NormalInterpolator("MismatchedKeyArraysSFVec3f").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,1.0})))
    .addComments(" bogus ROUTEs to allow trapping deeper error ")
    .addChild(new ROUTE().setFromNode("MismatchedKeyArrays").setFromField("value_changed").setToNode("MismatchedKeyArrays").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MismatchedKeyArraysSFVec3f").setFromField("value_changed").setToNode("MismatchedKeyArraysSFVec3f").setToField("set_fraction"))
    .addChild(new BooleanSequencer())
    .addChild(new BooleanSequencer("NoROUTEs").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new boolean[] {true,false,true}))
    .addChild(new IntegerTrigger())
    .addChild(new IntegerTrigger("NoROUTE"))
    .addChild(new OrientationInterpolator("OI"))
    .addChild(new LoadSensor("ChildrenIncorrectContainerField")
      .addChild(new ImageTexture("textureContainerField").setUrl(new String[] {"http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"})))
    .addChild(new LoadSensor("ChildrenCorrectContainerField")
      .addChild(new ImageTexture("watchListContainerField")))
    .addChild(new LoadSensor("IncorrectChildNodes")
      .addChild(new Group())
      .addChild(new Anchor("IllegalChildForLoadSensor")))
    .addChild(new Script("HasLegalCDATA").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   // initialize() method silences ROUTE check" + "\n" + 
"}" + "\n")
      .addField(new field().setName("duplicatedFieldName").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("duplicatedFieldName").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new Script("HasCDATAwithoutEcmascriptHeader").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"      " + "\n" + 
"// empty Script body" + "\n")
      .addField(new field().setName("noAccessType").setType(field.TYPE_SFBOOL))
      .addField(new field().setName("noType").setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setType("noName").setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("neverSet").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Script("HasUrlNoCDATA").setUrl(new String[] {"TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"}))
    .addChild(new Script("NoUrlNoCDATA"))
    .addChild(new Script("BothUrlAndCDATA").setUrl(new String[] {"TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"}).setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_noInputFunctionAllowed (newValue)" + "\n" + 
"{" + "\n" + 
"    // cannot have input function for output field" + "\n" + 
"}" + "\n" + 
"function set_inputFunctionDefinedTwice (newValue)" + "\n" + 
"{" + "\n" + 
"    // only one definition allowed; this is #1" + "\n" + 
"}" + "\n" + 
"function set_inputFunctionDefinedTwice (newValue)" + "\n" + 
"{" + "\n" + 
"    // only one definition allowed; this is #2" + "\n" + 
"}" + "\n")
      .addField(new field().setName("inputFunctionDefinedTwice").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("noInputFunctionAllowed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Script("RouteButNoFields").setUrl(new String[] {"TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"}))
    .addChild(new ROUTE().setFromNode("NoFields").setFromField("blah").setToNode("NoFields").setToField("blah"))
    .addChild(new ProtoInstance("NoDeclaration").setContainerField("children"))
    .addChild(new ProtoDeclare("MissingProtoBody").setName("MissingProtoBody"))
    .addChild(new WorldInfo("DEFoutsideProtoDeclareScope"))
    .addChild(new ProtoDeclare("DoubleMixedDeclaration").setDEF("DuplicatedDeclaration").setName("DoubleMixedDeclaration")
      .setProtoBody(new ProtoBody()
        .addChild(new Group())
        .addChild(new Viewpoint("ISconnectDescription")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("description").setProtoField("description"))))
        .addComments(" TODO not yet working... ")
        .addChild(new WorldInfo().setUSE("DEFoutsideProtoDeclareScope"))
        .addChild(new WorldInfo("USEoutsideProtoDeclareScope"))
        .addChild(new WorldInfo("DEF_USEinsideProtoDeclareScope"))
        .addChild(new WorldInfo().setUSE("DEF_USEinsideProtoDeclareScope"))))
    .addChild(new WorldInfo().setUSE("USEoutsideProtoDeclareScope"))
    .addChild(new ExternProtoDeclare("DoubleMixedDeclaration").setName("DoubleMixedDeclaration").setUrl(new String[] {"http://bogus#DifferentRemotePrototypeName"}))
    .addChild(new ProtoInstance("DoubleMixedDeclaration", "DoubleDeclaration2").setContainerField("children")
      .addFieldValue(new fieldValue().setName("duplicatedFieldValueName").setValue("blah"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), fieldValue name='duplicatedFieldValueName' value: $isNumeric=false, $attributeType=, value='blah']
))
      .addFieldValue(new fieldValue().setName("duplicatedFieldValueName"))
      .addFieldValue(new fieldValue().setValue("noName"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), fieldValue name='' value: $isNumeric=false, $attributeType=, value='noName']
)))
    .addChild(new ProtoDeclare("DoubleProtoDeclaration").setName("DoubleProtoDeclaration").setUrl(new String[] {"http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"}))
    .addChild(new ProtoDeclare("DoubleProtoDeclaration").setName("DoubleProtoDeclaration").setUrl(new String[] {"http:///bogus"}))
    .addChild(new ExternProtoDeclare("DoubleDeclarationUrlMissingPoundProtoName").setName("DoubleDeclarationUrlMissingPoundProtoName").setUrl(new String[] {"http:///bogus"}))
    .addChild(new ExternProtoDeclare("DoubleDeclarationUrlMissingPoundProtoName").setName("DoubleDeclarationUrlMissingPoundProtoName").setUrl(new String[] {"http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"}))
    .addChild(new ProtoDeclare("EmptyProtoInterfaceEmptyProtoBody").setName("EmptyProtoInterfaceEmptyProtoBody")
      .setProtoInterface(new ProtoInterface())
      .setProtoBody(new ProtoBody()))
    .addChild(new ProtoDeclare("IllegalProtoInterface").setName("IllegalProtoInterface")
      .setProtoInterface(new ProtoInterface()
        .addChild(new Group("OnlyFieldDeclarationsAllowedInProtoInterface")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group())))
    .addChild(new ExternProtoDeclare("ExternProtoDeclareBeforeInstance").setName("ExternProtoDeclareBeforeInstance").setUrl(new String[] {"httpsMissing","https://www.web3d.org/x3d/content/examples/Basic/development/httpsMissing"}))
    .addChild(new ProtoInstance("ExternProtoDeclareBeforeInstance").setContainerField("children"))
    .addChild(new ProtoInstance("ExternProtoDeclareAfterInstance").setContainerField("children"))
    .addChild(new ExternProtoDeclare("ExternProtoDeclareAfterInstance").setName("ExternProtoDeclareAfterInstance").setUrl(new String[] {"httpMissing","https://www.web3d.org/x3d/content/examples/Basic/development/httpMissing"}))
    .addChild(new ProtoDeclare("ProtoDeclareBeforeInstance").setName("ProtoDeclareBeforeInstance")
      .setProtoBody(new ProtoBody()
        .addChild(new Group())))
    .addChild(new ProtoInstance("ProtoDeclareBeforeInstance").setContainerField("children"))
    .addChild(new ProtoInstance("ProtoDeclareAfterInstance").setContainerField("children"))
    .addChild(new ProtoDeclare("ProtoDeclareAfterInstance").setName("ProtoDeclareAfterInstance")
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("danglingConnectNodeField").setProtoField("danglingConnectProtoField"))))))
    .addChild(new Group("ContainsISchildButNoParentProtoDeclare")
      .setIS(new IS()
        .addConnect(new connect().setNodeField("isolatedConnectNodeField").setProtoField("isolatedConnectProtoField"))))
    .addComments(" test isolated (invalid) connect element <connect nodeField=\"isolatedConnectNodeField\" protoField=\"isolatedConnectProtoField\"/> ")
    .addChild(new Shape("BadBoundingBoxValues").setBboxCenter(1a.0,2b.0,3c.0).setBboxSize(-1.0,-2.0,-3.0)
      .setGeometry(new Extrusion("ExtrusionCrossSectionMiscountSpineMismatchCrossSectionMiscount").setCrossSection(new MFVec2f(new double[] {1.0,2.0,3.0})).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,2.0,0.0})))
      .addComments(" check for reserved word in DEF ")
      .setAppearance(new Appearance("DEF")
        .setTwoSidedMaterial(new TwoSidedMaterial("separateBackColorWrong").setBackShininess(0.123))))
    .addChild(new ROUTE().setFromNode("blah").setFromField("set_blah").setToNode("bleah").setToField("bleah_changed"))
    .addChild(new Viewpoint("OKviewpoint").setDescription("this viewpoint is OK"))
    .addChild(new Viewpoint("DEFdescriptionMatch").setDescription("DEFdescriptionMatch"))
    .addChild(new OrthoViewpoint("NoSpacesInDescription").setDescription("NeedToPutSpacesInDescription"))
    .addChild(new GeoViewpoint("IllegalFields").setNavType(new String[] {"OTHER"}))
    .addChild(new GeoMetadata("BadChild")
      .addChild(new GeoViewpoint("BadContainerField")))
    .addComments(" check for reserved word in name definitions ")
    .addChild(new ProtoDeclare("X3D").setName("X3D")
      .setProtoBody(new ProtoBody()
        .addChild(new Group("PrototypeRootNode"))))
    .addChild(new ExternProtoDeclare("X3D").setName("X3D")
      .addField(new field().setName("X3D").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ProtoInstance("X3D", "BadNameBadFieldValueNameMissingInitialization").setContainerField("children")
      .addFieldValue(new fieldValue().setName("X3D")))
    .addChild(new ProtoInstance("X3D").setContainerField("children")
      .addFieldValue(new fieldValue().setName("X3D").setValue("doubleInitialization"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), fieldValue name='X3D' value: $isNumeric=false, $attributeType=, value='doubleInitialization']
)
        .addChild(new Shape())))
    .addChild(new LOD()
      .addChild(new Background("BackgroundWithParentLOD"))
      .addChild(new Fog("FogWithParentLOD"))
      .addChild(new NavigationInfo("NavigationInfoWithParentLOD"))
      .addChild(new Viewpoint("ViewpointWithParentLOD")))
    .addChild(new ViewpointGroup("IllegalViewpointGroupChild")
      .addChild(new Transform()))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setTexture(new PixelTexture("NoImageData"))))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setTexture(new PixelTexture("IllegalImageData").setImage(new int[] {1,a,b,c,d}))))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setTexture(new PixelTexture("DefaultImageData"))))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setTexture(new PixelTexture("DuplicateImageData"))))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setTexture(new PixelTexture("ImageDataTest").setImage(new int[] {1,1,1,0xAA}))))
    .addChild(new WorldInfo("USEandDEFtogether").setUSE("USEandDEFtogether"))
    .addChild(new WorldInfo().setUSE("USEprecedesDEF"))
    .addChild(new WorldInfo("USEprecedesDEF"))
    .addChild(new WorldInfo().setUSE("noDEFforUSE"))
    .addChild(new WorldInfo("noChildNodeforUSE"))
    .addChild(new WorldInfo().setUSE("noChildNodeforUSE")
      .setMetadata(new MetadataSet()
        .setMetadata(new MetadataString().setName("someStringArray").setValue(new String[] {"unquoted string values"}))))
    .addChild(new Group("DEFcontainsUSEcopyOfSelf")
      .addChild(new Group().setUSE("DEFcontainsUSEcopyOfSelf")))
    .addChild(new WorldInfo("USEmismatchDEFnodeType"))
    .addChild(new Group().setUSE("USEmismatchDEFnodeType"))
    .addChild(new LocalFog("NoLocalFogV3.0"))
    .addChild(new PointLight())
    .addChild(new Shape()
      .setGeometry(new IndexedFaceSet("CountTests").setDEF("CountTests").setCreaseAngle(-1.234).setCoordIndex(new int[] {0,1,2,-1})
        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,5.0})))
        .addColor(new Color("IllegalValuesColor").setColor(new MFColor(new double[] {-1.0,2.0,3.0})))
        .addColor(new ColorRGBA("IllegalValuesColorRGBA").setColor(new MFColorRGBA(new double[] {-1.0,1.2,0.3,0.4})))
        .addTexCoord(new TextureCoordinate())
        .addTexCoord(new TextureCoordinateGenerator()))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setGeometry(new Text("CharacterBeforeQuotes").setString(new String[] {x " "})
        .setFontStyle(new FontStyle().setFamily(new String[] {"unquotedFontFamilyName"}).setJustify(FontStyle.JUSTIFY_unquotedIllegalJustification)))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setGeometry(new Text("ThreeUnescapedQuoteMarksMissingSpaceEndsApostrophe").setString(new String[] {"" x" '})
        .setFontStyle(new FontStyle("familyValuesMissingIntermediateQuotes").setFamily(new String[] {"SANS SERIF"}).setJustify(FontStyle.JUSTIFY_BEGIN_BEGIN)))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setGeometry(new Text("EscapedQuoteMarkWarning").setString(new String[] {"here is a single escaped \" quote mark character"})
        .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_IllegalValue)))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setGeometry(new Text("NeedQuoteMarks").setString(new String[] {"quote marks are required for single string"})
        .setFontStyle(new FontStyle()))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setGeometry(new Text("EmbeddedQuoteMarksOK").setString(new String[] {"plain text with \"quote marks\" embedded"})
        .setFontStyle(new FontStyle("FontStyleFieldsContainIllegalQuotes").setLanguage("\"noquo\"").setCssStyle("\"PLAIN\"")))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new Shape()
      .setIndexedQuadSet(new IndexedQuadSet("MissingIndex").setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
        .setCoord(new Coordinate("DuplicatedCoordinatePointArray").setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,5.0}))))
      .setAppearance(new Appearance().setUSE("NoMaterialNoTexture")))
    .addChild(new NormalInterpolator("NormalPath").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,5.0})))
    .addChild(new GeoLocation("LegalGeoSystem").setGeoCoords(36.607,-121.885,0.0))
    .addChild(new ProtoDeclare("ReferenceTest").setName("ReferenceTest")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("defaultTest").setType("SInt32").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("78"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='defaultTest' value: $isNumeric=true, $attributeType=SInt32, value='78']
))
        .addField(new field().setName("incorrectInitializationSFColorRGBA").setType(field.TYPE_SFCOLORRGBA).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColorRGBA(1.0,1.0,1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Script().setUrl(new String[] {"http:///bogus"})
          .addField(new field().setName("missingInitializationValue1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("missingInitializationValue2").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("incorrectInitializationSFVec3f").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0)))
          .addField(new field().setName("incorrectInitializationMFColor").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new MFColor(new MFColor(new double[] {1.0,2.0,3.0,4.0,5.0,6.0,7.0}))))
          .addField(new field().setName("missingInitializationValueHasIS").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
          .addFieldValue(new fieldValue().setName("shouldBeField"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("missingInitializationValue2").setProtoField("defaultTest"))
            .addConnect(new connect().setNodeField("missingInitializationValueHasIS").setProtoField("test"))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")))
    .addChild(new ProtoInstance("ReferenceTest").setContainerField("children")
      .addFieldValue(new fieldValue().setName("defaultTest").setValue("78"
// [*** X3dToJava.xslt error: encountered incorrect type, fieldValue name='defaultTest' value: $isNumeric=true, $attributeType=SInt32, value='78']
))
      .addFieldValue(new fieldValue().setName("incorrectInitializationSFColorRGBA").setValue(new SFColorRGBA(1.0,1.0,1.0,1.0,1.0)))
      .addField(new field().setName("shouldBeFieldValue")))
    .addChild(new Transform("ZeroMagnitudeRotationAxes").setScaleOrientation(0.0,0.0,0.0,0.0))
    .addChild(new Box("GeometryNodeNeedsShapeParent"))
    .addChild(new Collision("IllegalGeometryProxyNode")
      .setProxy(new Box("GeometryNodeCollisionParentNeedsParentShapeWithProxyContainerField")))
    .addChild(new NavigationInfo("UnquotedTypeAndTransitionTypeErrors").setTransitionType(new String[] {"ALTERNATE"}).setType("OTHER"))
    .addChild(new NavigationInfo("NavigationInfoWithTypeALL").setType("\"ALL\""))
    .addChild(new Group("IllegalParentChild-DEF-USE")
      .addChild(new Group().setUSE("IllegalParentChild-DEF-USE")))
    .addChild(new CADLayer().setName("contains whitespace and incorrect boolean value").setVisible(true false wrong))
    .addChild(new Shape()
      .addTexture(new ImageTexture("IllegalParent1"))
      .addTexture(new MovieTexture("IllegalParent2"))
      .addTexture(new PixelTexture("IllegalParent3")))
    .addChild(new Shape()
      .setTextureTransform(new TextureTransform("TextureTransformWithNoSiblingTextureNode")))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setUSE("TextureTransformWithNoSiblingTextureNode"))
        .addTexCoord(new TextureCoordinateGenerator("TextureCoordinateGeneratorIllegalMode").setMode("Bogus"))
        .addTexCoord(new TextureCoordinateGenerator("TextureCoordinateGeneratorIllegalParameterCount").setMode("NOISE").setParameter(new double[] {1.0,2.0,3.0,4.0}))))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setTexture(new MultiTexture("NoTextureChildren").setFunction(new String[] {"BogusFunction1Value","BogusFunction2Value","}).setMode(new String[] {"BogusMode1Value" BogusMode2Value"}).setSource(new String[] {"BogusSourceValue"}))))
    .addChild(new Background("NoBackgroundChildrenAllowed")
      .setTexture(new ImageTexture("IllegalBackgroundChild")))
    .addChild(new TextureBackground()
      .addTexture(new ImageTexture("LegalChild1"))
      .addTexture(new MovieTexture("LegalChild2"))
      .addTexture(new PixelTexture("LegalChild3"))
      .addChild(new Group("IllegalTextureBackgroundChild"))
      .setFrontUrl(new ImageTexture("IllegalTextureBackgroundChildContainerField")))
    .addChild(new Group("Embedded Blanks DEF"))
    .addChild(new Group().setUSE("Embedded Blanks USE"))
    .addChild(new Group(""QuotedDEF""))
    .addChild(new Group().setUSE(""QuotedUSE""))
    .addMetadata(new MetadataSet()
      .setMetadata(new MetadataBoolean())
      .setMetadata(new MetadataFloat())
      .setMetadata(new MetadataDouble()))
    .addMetadata(new MetadataString("IllegalMetadataContainerField"))
    .addChild(new ScalarInterpolator("IllegalDecimalPointsTest").setKey(new double[] {0.00.5,1.0}).setKeyValue(new double[] {1.0,2.0,3.0}))
    .addChild(new ScalarInterpolator("IllegalMinusSignsTest").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new double[] {-1-2.0,3.0}))
    .addComments(" test of NeedsChildNode ")
    .addChild(new Group("EmptyGroup"))
    .addChild(new Switch().setWhichChoice(-1)
      .addComments(" test of NeedsChildNode ")
      .addChild(new Group("EmptyGroupInsideSwitch")))
    .addChild(new Group("EmptyGroupContainsComment")
      .addComments(" test of NeedsChildNode "))
    .addChild(new Switch("EmptySwitchContainsROUTE").setWhichChoice(-1)
      .addComments(" test of NeedsChildNode ")
      .addChild(new ROUTE().setFromNode("NoFields").setFromField("blah").setToNode("NoFields").setToField("blah")))
    .addChild(new CADLayer().setVisible(false)
      .setCADAssembly(new CADAssembly()
        .setCADPart(new CADPart()
          .setCADFace(new CADFace("CADFaceOneShapeChild")
            .setShape(new Transform()
              .addChild(new Shape())))
          .setCADFace(new CADFace("CADFaceMultipleShapeChildren")
            .addChild(new Transform("containerFieldNot_shape")
              .addChild(new Shape())
              .addChild(new Shape()))))))
    .setGeoOrigin(new GeoOrigin("DeprecatedNodeUnquotedGeoSystem").setGeoSystem(new String[] {"GD WE"}))
    .addChild(new Viewpoint("ViewHumanoidMissingCenterOfRotation"))
    .addChild(new Shape("EmptyShapeWithCommentSilencesWarning")
      .addComments(" silence warning "))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material("IllegalColorValuesMaterial").setDiffuseColor(-1.0,1.2,0.3,0.4).setEmissiveColor(-1.0,1.2,0.3,0.4).setSpecularColor(-1.0,1.2,0.3,0.4))))
    .addChild(new Background("BackgroundColorProblems").setGroundColor(new MFColor(new double[] {-1.0,1.2,0.3,0.4})).setSkyColor(new MFColor(new double[] {-1.0,1.2,0.3,0.4})))
    .addChild(new Fog("FogColorProblems").setColor(-1.0,1.2,0.3,0.4))
    .addChild(new DirectionalLight("DirectionalLightColorProblems").setColor(-1.0,1.2,0.3,0.4))
    .addChild(new PointLight("PointLightColorProblems").setColor(-1.0,1.2,0.3,0.4))
    .addChild(new SpotLight("SpotLightColorProblems").setColor(-1.0,1.2,0.3,0.4))
    .addChild(new ClipPlane("IllegalPlaneEquationValues").setPlane(1.0,2.0,3.0,4.0,5.0))
    .addChild(new HAnimHumanoid("notUniqueName1").setName("JimDandy").setVersion("1.1"))
    .addChild(new HAnimHumanoid("notUniqueName2").setName("JimDandy").setVersion("2.0")
      .addComments(" keep the following Group node as first child so that it is reported by diagnostic test ")
      .addChild(new Group("HumanoidCannotContainChildrenNodes").setName("IllegalGroupChildrenNode"))
      .addSkeleton(new HAnimJoint().setName("HumanoidRoot").setStiffness(new double[] {0.0,0.0,0.0})
        .addChild(new HAnimJoint("MissingComponentH-AnimLevel1").setStiffness(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimHumanoid("incorrectlyNestedHumanoidMissingNameAttribute").setVersion("2.0")))
        .addChild(new HAnimJoint("MissingNameAttributeCheckContainerField").setStiffness(new double[] {0.0,0.0,0.0}))
        .addChild(new HAnimJoint().setUSE("MissingNameAttributeCheckContainerField").setStiffness(new double[] {0.0,0.0,0.0}))
        .setHanimJoint(new HanimJoint("ImproperCapitalizationOfNodeName"))
        .addChild(new HAnimJoint("duplicateName1").setName("sacroiliac").setStiffness(new double[] {0.0,0.0,0.0}))
        .addChild(new HAnimJoint("duplicateName2").setName("sacroiliac").setStiffness(new double[] {0.0,0.0,0.0}))
        .setJoints(new HAnimJoint().setUSE("duplicateName1").setStiffness(new double[] {0.0,0.0,0.0}))
        .addChild(new PositionInterpolator("JointInterpolator").setKey(new double[] {0.0,0.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,0.0,0.0})))
        .addChild(new ROUTE().setFromNode("JointInterpolator").setFromField("value_changed").setToNode("MissingNameAttribute").setToField("translation"))
        .addChild(new HAnimJoint("ImproperDEFname").setName("l_acromioclavicular").setStiffness(new double[] {0.0,0.0,0.0}))
        .addChild(new HAnimJoint("hanim_HumanoidRoot").setName("HumanoidRoot").setStiffness(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment("JointNameSegmentNameHierarchyTest").setName("notSacrum")
            .addComments(" the following construct is OK and should not throw errors ")
            .setViewpoints(new HAnimSite("hanim_Top_view").setName("Top_view").setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,3.5,0.0)
              .addChild(new Viewpoint("hanim_Top_viewpoint").setDescription("Top").setCenterOfRotation(0.0,0.9,0.0).setPosition(0.0,0.0,0.0))))
          .addChild(new HAnimJoint("negativeCenterHeight").setName("negativeCenterHeight").setCenter(0.0,-1.0,0.0).setStiffness(new double[] {0.0,0.0,0.0})
            .addChild(new HAnimSegment("IllegalChildrenContainerFields").setName("IllegalChildrenContainerFields")
              .addChild(new HAnimSite("negativeTranslationHeight").setName("negativeTranslationHeight").setTranslation(0.0,-1.0,0.0)
                .setDisplacers(new HAnimDisplacer("IllegalHAnimDisplacerInHAnimSiteNode")))
              .addCoord(new Coordinate())
              .addCoord(new CoordinateDouble())))
          .addChild(new HAnimJoint("MismatchedJointCenter_l_knee").setName("l_knee").setCenter(1.0,2.0,3.0).setStiffness(new double[] {0.0,0.0,0.0}))
          .addChild(new HAnimJoint("MismatchedJointCenter_r_knee").setName("r_knee").setCenter(4.0,5.0,6.0).setStiffness(new double[] {0.0,0.0,0.0}))
          .addChild(new HAnimJoint().setUSE("IllegalEmbeddedHAnimUse").setStiffness(new double[] {0.0,0.0,0.0}))
          .addChild(new HAnimSite("IllegalNameIllegalParent").setName("IllegalNameIllegalParent"))
          .addComments(" TODO test IllegalEmbeddedHAnimUse in another HAnimHumanoid ")))
      .addViewpoints(new HAnimSite().setUSE("hanim_Top_view"))
      .addViewpoints(new HAnimSite().setUSE("hanim_Top_view"))
      .addSegments(new HAnimSegment().setUSE("JointNameSegmentNameHierarchyTest"))
      .addSegments(new HAnimSegment().setUSE("IllegalChildrenContainerFields"))
      .addComments(" test for duplicated USE node ")
      .addSegments(new HAnimSegment().setUSE("IllegalChildrenContainerFields"))
      .setSkinCoord(new Coordinate("HAnimCoordinateCorrectContainerField").setPoint(new MFVec3f(new double[] {0.0,0.0,0.0})))
      .addChild(new Coordinate("HAnimCoordinateIncorrectContainerField"))
      .setSkinCoord(new CoordinateDouble("HAnimCoordinateDoubleCorrectContainerField").setPoint(new MFVec3d(new double[] {0.0,0.0,0.0})))
      .addChild(new CoordinateDouble("HAnimCoordinateDoubleIncorrectContainerField"))
      .addChild(new Normal("HAnimNormalIncorrectContainerField"))
      .addJoints(new HAnimJoint().setUSE("MissingComponentH-AnimLevel1").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("MissingNameAttributeCheckContainerField").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("duplicateName1").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("duplicateName2").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("ImproperDEFname").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("negativeCenterHeight").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("MismatchedJointCenter_l_knee").setStiffness(new double[] {0.0,0.0,0.0}))
      .addJoints(new HAnimJoint().setUSE("MismatchedJointCenter_r_knee").setStiffness(new double[] {0.0,0.0,0.0}))
      .addSites(new HAnimSite().setUSE("hanim_Top_view"))
      .addSites(new HAnimSite().setUSE("negativeTranslationHeight"))
      .addSites(new HAnimSite().setUSE("IllegalNameIllegalParent")))
    .addChild(new Sound("NoChildren"))
    .addChild(new AudioClip("NoParentSoundNode").setDescription("bad clip reference").setUrl(new String[] {"blah","https://www.web3d.org/x3d/content/examples/Basic/development/blah"}))
    .addChild(new Sound().setCssClass("must separate classes with;space characters").setLocation(0.0,2.0,0.0)
      .setSource(new AudioClip().setDescription("bad clip reference").setUrl(new String[] {"blah","https://www.web3d.org/x3d/content/examples/Basic/development/blah"})))
    .addChild(new Sound("SoundDefaults").setLocation(0.0,2.0,0.0)
      .setSource(new AudioClip("ReusableAudioClip").setDescription("reusable").setUrl(new String[] {"../Vrml97Specification/click.wav","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/click.wav"})))
    .addChild(new Sound("SoundMinNegative").setLocation(0.0,2.0,0.0).setMinBack(-1).setMinFront(-1)
      .setSource(new AudioClip().setUSE("ReusableAudioClip")))
    .addChild(new Sound("SoundMaxNegative").setLocation(0.0,2.0,0.0).setMaxBack(-10).setMaxFront(-10)
      .setSource(new AudioClip().setUSE("ReusableAudioClip")))
    .addChild(new Sound("SoundMinGreaterThanMax").setLocation(0.0,2.0,0.0).setMaxBack(11).setMaxFront(11).setMinBack(12).setMinFront(12)
      .setSource(new AudioClip().setUSE("ReusableAudioClip")))
    .addChild(new Sound("SoundMinGreaterThanDefaultMax").setLocation(0.0,2.0,0.0).setMinBack(13).setMinFront(13)
      .setSource(new AudioClip().setUSE("ReusableAudioClip")))
    .addChild(new Sound("SoundMaxLessThanDefaultMin").setLocation(0.0,2.0,0.0).setMaxBack(0.5).setMaxFront(0.5)
      .setSource(new AudioClip().setUSE("ReusableAudioClip")))
    .addChild(new ROUTE().setFromNode("DuplicateROUTE").setFromField("test1").setToNode("test2").setToField("test3"))
    .addChild(new ROUTE().setFromNode("DuplicateROUTE").setFromField("test1").setToNode("test2").setToField("test3"))
    .addChild(new ROUTE().setFromNode("DuplicateROUTE").setFromField("test1").setToNode("test2").setToField("test3"))
    .addChild(new ROUTE().setFromNode("NodeFollowsRoute1").setFromField("children").setToNode("NodeFollowsRoute2").setToField("children"))
    .addChild(new Group("NodeFollowsRoute1")
      .addChild(new Group("NodeFollowsRoute2")
        .addComments(" silence warning ")))
    .addChild(new Shape("ElevationGridInsufficientHeights")
      .setGeometry(new ElevationGrid().setSolid(false).setXSpacing(0).setZDimension(3).setZSpacing(0).setHeight(new double[] {1.0,2.0,3.0,4.0,5.0})))
    .addChild(new Shape("ElevationGridTooManyHeights")
      .setGeometry(new ElevationGrid().setSolid(false).setXSpacing(-1).setZDimension(3).setZSpacing(-1).setHeight(new double[] {1.0,2.0,3.0,4.0,5.0,6.0,7.0})))
    .addChild(new Shape("ElevationGridBadDimensions")
      .setGeometry(new ElevationGrid().setSolid(false).setXDimension(-2).setZDimension(-3).setHeight(new double[] {1.0,2.0,3.0,4.0,5.0,6.0})))
    .addChild(new StaticGroup("StaticGroupChildTests")
      .addChild(new Group()
        .addChild(new TimeSensor("StaticGroupDescendantsCannotProduceEvents"))
        .addChild(new PositionInterpolator("StaticGroupDescendantsCannotConsumeEvents"))
        .addChild(new PositionInterpolator().setUSE("StaticGroupDescendantsCannotBeUsed")))
      .addComments(" note mistake capitalization, correct form is ROUTE ")
      .setRoute(new Route().setFromField("fraction_changed"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), Route fromField: $isNumeric=false, $attributeType=, value='fraction_changed']
).setFromNode("StaticGroupDescendantsCannotProduceEvents"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), Route fromNode: $isNumeric=false, $attributeType=, value='StaticGroupDescendantsCannotProduceEvents']
).setToField("set_fraction"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), Route toField: $isNumeric=false, $attributeType=, value='set_fraction']
).setToNode("StaticGroupDescendantsCannotConsumeEvents"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), Route toNode: $isNumeric=false, $attributeType=, value='StaticGroupDescendantsCannotConsumeEvents']
)))
    .addChild(new Group("CaseSensitive")
      .addComments(" test case sensitivity of DEF/USE "))
    .addChild(new Group().setUSE("CASESENSITIVE"))
    .addChild(new Group()
      .addChild(new TouchSensor("PeerTouchSensor"))
      .addChild(new CylinderSensor("PeerCylinderSensor"))
      .addChild(new Billboard("PeerBillboard")))
    .addChild(new Inline("RecursiveInlineInvocation").setUrl(new String[] {"TestSchematronDiagnostics.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d","TestSchematronDiagnostics.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.wrl"}))
    .addChild(new Shape()
      .setGeometry(new IndexedFaceSet("IfsEmptyChildren").setDEF("IfsEmptyChildren")
        .setCoord(new Coordinate("EmptyCoordinate"))
        .setColor(new Color("EmptyColor"))
        .setNormal(new Normal("EmptyNormal"))
        .setTexCoord(new TextureCoordinate("EmptyTextureCoordinate"))))
    .addChild(new Shape()
      .setGeometry(new IndexedFaceSet("IfsSingletonChildren").setDEF("IfsSingletonChildren")
        .setCoord(new Coordinate("SingleCoordinate").setPoint(new MFVec3f(new double[] {1.0,2.0,3.0})))
        .setColor(new Color("SingleColor").setColor(new MFColor(new double[] {0.1,0.2,0.3})))
        .setNormal(new Normal("SingleNormal").setVector(new MFVec3f(new double[] {0.0,1.0,0.0})))
        .setTexCoord(new TextureCoordinate("SingleTextureCoordinate").setPoint(new MFVec2f(new double[] {0.4,0.8})))))
    .addChild(new GeoLOD()
      .addRootNode(new Shape("rootNodeContainerFieldIsCorrect")))
    .addChild(new TextureProjector())
    .addChild(new TextureProjectorParallel("DistanceMismatchIllegalFieldOfView").setFarDistance(.1).setFieldOfView(1.0,2.0,3.0,4.0,5.0).setNearDistance(20)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TestSchematronDiagnostics model
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
        X3D thisExampleX3dModel = new TestSchematronDiagnostics().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TestSchematronDiagnostics\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TestSchematronDiagnostics\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
