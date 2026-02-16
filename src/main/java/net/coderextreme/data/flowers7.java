package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class flowers7 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new flowers7().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/flowers7.new.java.x3d");
    model.toFileJSON("../data/flowers7.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("Scripting")).setLevel(1))
        .addComponent(new component().setName(new SFString("EnvironmentalEffects")).setLevel(3))
        .addComponent(new component().setName(new SFString("Shaders")).setLevel(1))
        .addComponent(new component().setName(new SFString("CubeMapTexturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Texturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Rendering")).setLevel(1))
        .addComponent(new component().setName(new SFString("Shape")).setLevel(4))
        .addComponent(new component().setName(new SFString("Grouping")).setLevel(3))
        .addComponent(new component().setName(new SFString("Core")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("flowers7.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("a flower"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new Background().setDEF(new SFString("background")).setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setLeftUrl(new MFString3().getArray()).setRightUrl(new MFString4().getArray()).setTopUrl(new MFString5().getArray()))
        .addChild(new Viewpoint().setPosition(new float[] {0f ,0f ,40f }).setDescription(new SFString("Transparent rose")))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,0.7f ,0.7f }).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f }))
              .setTexture(new ComposedCubeMapTexture().setDEF(new SFString("texture"))
                .setBackTexture(new ImageTexture().setDEF(new SFString("backShader")).setUrl(new MFString6().getArray()))
                .setBottomTexture(new ImageTexture().setDEF(new SFString("bottomShader")).setUrl(new MFString7().getArray()))
                .setFrontTexture(new ImageTexture().setDEF(new SFString("frontShader")).setUrl(new MFString8().getArray()))
                .setLeftTexture(new ImageTexture().setDEF(new SFString("leftShader")).setUrl(new MFString9().getArray()))
                .setRightTexture(new ImageTexture().setDEF(new SFString("rightShader")).setUrl(new MFString10().getArray()))
                .setTopTexture(new ImageTexture().setDEF(new SFString("topShader")).setUrl(new MFString11().getArray())))
              .addShaders(new ComposedShader().setDEF(new SFString("x3dom")).setLanguage(new SFString("GLSL"))
                .addComments(new CommentsBlock("TODO VERIFY"))
                .addComments(new CommentsBlock("<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>"))
                .addField(new field().setType("SFNode").setName(new SFString("cube")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTexture().setUSE(new SFString("texture"))))
                .addField(new field().setType("SFVec3f").setName(new SFString("chromaticDispertion")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.98 1 1.033")))
                .addField(new field().setType("SFFloat").setName(new SFString("bias")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("scale")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("power")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("2")))
                .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("10")))
                .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1")))
                .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("20")))
                .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("20")))
                .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
                .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString12().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString13().getArray())))
              .addShaders(new ComposedShader().setDEF(new SFString("x_ite")).setLanguage(new SFString("GLSL"))
                .addField(new field().setType("SFNode").setName(new SFString("cube")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTexture().setUSE(new SFString("texture"))))
                .addField(new field().setType("SFVec3f").setName(new SFString("chromaticDispertion")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.98 1 1.033")))
                .addField(new field().setType("SFFloat").setName(new SFString("bias")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("scale")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("power")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("2")))
                .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("10")))
                .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("1")))
                .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("20")))
                .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("20")))
                .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0")))
                .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0")))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString14().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString15().getArray()))))
            .setGeometry(new Sphere())))
        .addChild(new Script().setDEF(new SFString("UrlSelector")).setDirectOutput(true)
          .addField(new field().setType("MFString").setName(new SFString("frontUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("backUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("leftUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("rightUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("topUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("bottomUrls")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"")))
          .addField(new field().setType("MFString").setName(new SFString("front")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFString").setName(new SFString("back")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFString").setName(new SFString("left")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFString").setName(new SFString("right")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFString").setName(new SFString("top")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFString").setName(new SFString("bottom")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFInt32").setName(new SFString("old")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("-1")))
          .setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }"))
        .addComments(new CommentsBlock("<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>"))
        .addComments(new CommentsBlock("<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"))
        .addChild(new Script().setDEF(new SFString("Animate")).setDirectOutput(true)
          .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("10")))
          .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1")))
          .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("20")))
          .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("20")))
          .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
          .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}"))
        .addChild(new TimeSensor().setDEF(new SFString("TourTime")).setCycleInterval(5d).setLoop(true))
        .addChild(new ROUTE().setFromNode(new SFString("TourTime")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("Animate")).setToField(new SFString("set_fraction")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("a")).setToNode(new SFString("x_ite")).setToField(new SFString("a")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("b")).setToNode(new SFString("x_ite")).setToField(new SFString("b")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("c")).setToNode(new SFString("x_ite")).setToField(new SFString("c")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("d")).setToNode(new SFString("x_ite")).setToField(new SFString("d")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("pdelta")).setToNode(new SFString("x_ite")).setToField(new SFString("pdelta")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("tdelta")).setToNode(new SFString("x_ite")).setToField(new SFString("tdelta")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("a")).setToNode(new SFString("x3dom")).setToField(new SFString("a")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("b")).setToNode(new SFString("x3dom")).setToField(new SFString("b")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("c")).setToNode(new SFString("x3dom")).setToField(new SFString("c")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("d")).setToNode(new SFString("x3dom")).setToField(new SFString("d")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("pdelta")).setToNode(new SFString("x3dom")).setToField(new SFString("pdelta")))
        .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("tdelta")).setToNode(new SFString("x3dom")).setToField(new SFString("tdelta"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"});
  }
}
}
