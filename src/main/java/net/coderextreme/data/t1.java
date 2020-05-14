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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class t1 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new t1().initialize().toFileJSON("../data/t1.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
ProtoInstanceObject ProtoInstance13 = null;
ProtoInstanceObject ProtoInstance14 = null;
ProtoInstanceObject ProtoInstance15 = null;
ProtoInstanceObject ProtoInstance16 = null;
ProtoInstanceObject ProtoInstance17 = null;
ProtoInstanceObject ProtoInstance18 = null;
ProtoInstanceObject ProtoInstance19 = null;
ProtoInstanceObject ProtoInstance20 = null;
ProtoInstanceObject ProtoInstance21 = null;
ProtoInstanceObject ProtoInstance22 = null;
ProtoInstanceObject ProtoInstance23 = null;
ProtoInstanceObject ProtoInstance24 = null;
ProtoInstanceObject ProtoInstance25 = null;
ProtoInstanceObject ProtoInstance26 = null;
ProtoInstanceObject ProtoInstance27 = null;
ProtoInstanceObject ProtoInstance28 = null;
ProtoInstanceObject ProtoInstance29 = null;
ProtoInstanceObject ProtoInstance30 = null;
ProtoInstanceObject ProtoInstance31 = null;
ProtoInstanceObject ProtoInstance32 = null;
ProtoInstanceObject ProtoInstance33 = null;
ProtoInstanceObject ProtoInstance34 = null;
ProtoInstanceObject ProtoInstance35 = null;
ProtoInstanceObject ProtoInstance36 = null;
ProtoInstanceObject ProtoInstance37 = null;
ProtoInstanceObject ProtoInstance38 = null;
ProtoInstanceObject ProtoInstance39 = null;
ProtoInstanceObject ProtoInstance40 = null;
ProtoInstanceObject ProtoInstance41 = null;
ProtoInstanceObject ProtoInstance42 = null;
ProtoInstanceObject ProtoInstance43 = null;
ProtoInstanceObject ProtoInstance44 = null;
ProtoInstanceObject ProtoInstance45 = null;
ProtoInstanceObject ProtoInstance46 = null;
ProtoInstanceObject ProtoInstance47 = null;
ProtoInstanceObject ProtoInstance48 = null;
ProtoInstanceObject ProtoInstance49 = null;
ProtoInstanceObject ProtoInstance50 = null;
ProtoInstanceObject ProtoInstance51 = null;
ProtoInstanceObject ProtoInstance52 = null;
ProtoInstanceObject ProtoInstance53 = null;
ProtoInstanceObject ProtoInstance54 = null;
ProtoInstanceObject ProtoInstance55 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new metaObject().setName("source").setContent("t1.wrl")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","WALK"}).setSpeed(3f).setAvatarSize(new MFFloatObject(new MFFloat0().getArray())))
        .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
        .addChild(new ViewpointObject().setDescription("looking North").setPosition(new float[] {0f,60f,110f}).setOrientation(new float[] {1f,0f,0f,-0.699999988079071f}).setFieldOfView(0.785398125648499f))
        .addChild(new ViewpointObject().setDescription("looking East").setPosition(new float[] {-140f,30f,0f}).setOrientation(new float[] {0f,0.400000005960464f,0f,-1.39999997615814f}).setFieldOfView(0.785398125648499f))
        .addChild(new ViewpointObject().setDescription("Overhead").setPosition(new float[] {0f,150f,0f}).setOrientation(new float[] {1f,0f,0f,-1.57000005245209f}).setFieldOfView(0.785398125648499f))
        .addChild(new ProtoDeclareObject().setName("school")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setTransparency(0.200000002980232f).setDiffuseColor(new float[] {0.5f,0f,1f})))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray())))))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("institute")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setTransparency(0.200000002980232f).setDiffuseColor(new float[] {1f,1f,0f})))
                .setGeometry(new BoxObject().setSize(new float[] {0.699999988079071f,0.699999988079071f,0.699999988079071f})))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("disart_org")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f})))
                .setGeometry(new SphereObject().setRadius(0.699999988079071f)))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("org")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("posi").setValue("0 0 0"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("col").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setTransparency(0.400000005960464f)
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new SphereObject().setRadius(1.10000002384186f)))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclareObject().setName("l")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("r")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("n")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("i")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("pos").setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new TransformObject().setTranslation(new float[] {-468f,0f,315f})
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString3().getArray())))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString4().getArray())).setDescription("Derby Women's Centre")
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString5().getArray())).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString6().getArray())).setDescription("Charlesworth Primary School")
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString7().getArray())).setDescription("Hope Valley College")
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString8().getArray())).setDescription("People Express")
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString9().getArray())).setDescription("QArts/Studios")
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString10().getArray())).setDescription("Stroke Unit, Derbyshire Royal Infirmary")
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString11().getArray())).setDescription("Park View Primary, Derby")
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString12().getArray())).setDescription("First Movement")
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString13().getArray())).setDescription("St. Benedict R.C. School, Visual Impairment Unit")
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString14().getArray())).setDescription("Beckett Primary, Derby")
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString15().getArray())).setDescription("Brackensdale Junior School, Communty Unit")
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString16().getArray())).setDescription("Moorhead Primary, Derby")
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString17().getArray())).setDescription("Derby Deaf Club")
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString18().getArray())).setDescription("Nightingale Junior, Derby")
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString19().getArray())).setDescription("St Mary's Primary, Derby")
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString20().getArray())).setDescription("Griffe Field Primary, Derby")
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString21().getArray())).setDescription("Leicester Road Day Centre, Melton Mowbray")
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString22().getArray())).setDescription("Ivy House Special School, Derby")
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString23().getArray())).setDescription("Oakham Day Centre, Rutland")
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString24().getArray())).setDescription("Parkwood School, Alfreton")
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString25().getArray())).setDescription("Ash Green, Specialist Learning Disability Resource")
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString26().getArray())).setDescription("Ashgate Croft School, Chesterfield")
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString27().getArray())).setDescription("Highfields School, Matlock")
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString28().getArray())).setDescription("City Arts")
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString29().getArray())).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString30().getArray())).setDescription("Watering Seeds")
            .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString31().getArray())).setDescription("Red oaks")
            .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString32().getArray())).setDescription("West Notts College")
            .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString33().getArray())).setDescription("Willow Wood Day Centre")
            .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString34().getArray())).setDescription("Fased In The Arts")
            .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString35().getArray())).setDescription("27a Access Artspace")
            .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString36().getArray())).setDescription("Roman Way Day Centre, Market Harborough")
            .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString37().getArray())).setDescription("Mosaic, Leicester Disability Services")
            .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString38().getArray())).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString39().getArray())).setDescription("Ellesmere College, Leicester")
            .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString40().getArray())).setDescription("Ashmount School, Loughborough")
            .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString41().getArray())).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString42().getArray())).setDescription("Forrest Way School")
            .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString43().getArray())).setDescription("Ibstock Community College")
            .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString44().getArray())).setDescription("Artlink East")
            .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString45().getArray())).setDescription("United Hospitals and NHS Trust Lincolnshire")
            .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString46().getArray())).setDescription("Ancaster Day Centre")
            .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString47().getArray())).setDescription("Creations")
            .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString48().getArray())).setDescription("Nene Day Centre, Northamtpon")
            .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString49().getArray())).setDescription("Delapre Middle School, Northampton")
            .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString50().getArray())).setDescription("The Links, Brackley")
            .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString51().getArray())).setDescription("New Perspectives")
            .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString52().getArray())).setDescription("UKan2")
            .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString53().getArray())).setDescription("Silverstone County Infants School")
            .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("school")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString54().getArray())).setDescription("Riverside Resource Centre, Towcester")
            .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("institute")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString55().getArray())).setDescription("Daventry Tertiary College")
            .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("school")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.200000002980232f).setEmissiveColor(new float[] {1f,0f,0f})))
            .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3256().getArray()))
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f57().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.200000002980232f).setEmissiveColor(new float[] {0f,1f,0f})))
            .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3258().getArray()))
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f59().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.200000002980232f).setEmissiveColor(new float[] {1f,0f,1f})))
            .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3260().getArray()))
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f61().getArray())))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.600000023841858 0"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("col").setValue("1 0 0.200000002980232"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("col").setValue("0.600000023841858 0 0.600000023841858"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("pos").setValue("435.299987792969 0.100000001490116 -335.600006103516"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("pos").setValue("400 0.100000001490116 -385"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("pos").setValue("400.600006103516 0.100000001490116 -392.899993896484"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("pos").setValue("416.700012207031 0.100000001490116 -383.399993896484"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("pos").setValue("430 0.100000001490116 -335"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("pos").setValue("435.799987792969 0.100000001490116 -335.299987792969"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("pos").setValue("438.299987792969 0.100000001490116 -338.600006103516"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("pos").setValue("434.600006103516 0.100000001490116 -338.600006103516"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("pos").setValue("434.799987792969 0.100000001490116 -336"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("pos").setValue("432.700012207031 0.100000001490116 -336.600006103516"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("pos").setValue("437.600006103516 0.100000001490116 -332.600006103516"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("pos").setValue("434.700012207031 0.100000001490116 -336.899993896484"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("pos").setValue("436.299987792969 0.100000001490116 -333.399993896484"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("pos").setValue("435.200012207031 0.100000001490116 -336.799987792969"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("pos").setValue("432.5 0.100000001490116 -332.5"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("pos").setValue("474.700012207031 0.100000001490116 -318.799987792969"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("pos").setValue("436.100006103516 0.100000001490116 -334.899993896484"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("pos").setValue("485.600006103516 0.100000001490116 -309"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("pos").setValue("440.5 0.100000001490116 -355.5"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("pos").setValue("434.799987792969 0.100000001490116 -371.5"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("pos").setValue("436.299987792969 0.100000001490116 -371.700012207031"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("pos").setValue("431.200012207031 0.100000001490116 -361.200012207031"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"));
ProtoInstance29
              .addFieldValue(new fieldValueObject().setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"));
ProtoInstance30
              .addFieldValue(new fieldValueObject().setName("pos").setValue("454 0.100000001490116 -361.299987792969"));
ProtoInstance31
              .addFieldValue(new fieldValueObject().setName("pos").setValue("457.399993896484 0.100000001490116 -359.600006103516"));
ProtoInstance32
              .addFieldValue(new fieldValueObject().setName("pos").setValue("454.200012207031 0.100000001490116 -358.600006103516"));
ProtoInstance33
              .addFieldValue(new fieldValueObject().setName("pos").setValue("450.600006103516 0.100000001490116 -358.600006103516"));
ProtoInstance34
              .addFieldValue(new fieldValueObject().setName("pos").setValue("440 0.100000001490116 -350"));
ProtoInstance35
              .addFieldValue(new fieldValueObject().setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"));
ProtoInstance36
              .addFieldValue(new fieldValueObject().setName("pos").setValue("473.5 0.100000001490116 -287.5"));
ProtoInstance37
              .addFieldValue(new fieldValueObject().setName("pos").setValue("458 0.100000001490116 -304.5"));
ProtoInstance38
              .addFieldValue(new fieldValueObject().setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"));
ProtoInstance39
              .addFieldValue(new fieldValueObject().setName("pos").setValue("456.799987792969 0.100000001490116 -302.600006103516"));
ProtoInstance40
              .addFieldValue(new fieldValueObject().setName("pos").setValue("453.299987792969 0.100000001490116 -318.600006103516"));
ProtoInstance41
              .addFieldValue(new fieldValueObject().setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"));
ProtoInstance42
              .addFieldValue(new fieldValueObject().setName("pos").setValue("444.600006103516 0.100000001490116 -313.700012207031"));
ProtoInstance43
              .addFieldValue(new fieldValueObject().setName("pos").setValue("440.600006103516 0.100000001490116 -310.399993896484"));
ProtoInstance44
              .addFieldValue(new fieldValueObject().setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"));
ProtoInstance45
              .addFieldValue(new fieldValueObject().setName("pos").setValue("491.399993896484 0.100000001490116 -336.799987792969"));
ProtoInstance46
              .addFieldValue(new fieldValueObject().setName("pos").setValue("496.899993896484 0.100000001490116 -368.899993896484"));
ProtoInstance47
              .addFieldValue(new fieldValueObject().setName("pos").setValue("467 0.100000001490116 -243.899993896484"));
ProtoInstance48
              .addFieldValue(new fieldValueObject().setName("pos").setValue("477.100006103516 0.100000001490116 -260"));
ProtoInstance49
              .addFieldValue(new fieldValueObject().setName("pos").setValue("474.700012207031 0.100000001490116 -259.100006103516"));
ProtoInstance50
              .addFieldValue(new fieldValueObject().setName("pos").setValue("459 0.100000001490116 -236.399993896484"));
ProtoInstance51
              .addFieldValue(new fieldValueObject().setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"));
ProtoInstance52
              .addFieldValue(new fieldValueObject().setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"));
ProtoInstance53
              .addFieldValue(new fieldValueObject().setName("pos").setValue("466.899993896484 0.100000001490116 -243.800003051758"));
ProtoInstance54
              .addFieldValue(new fieldValueObject().setName("pos").setValue("469.5 0.100000001490116 -249.800003051758"));
ProtoInstance55
              .addFieldValue(new fieldValueObject().setName("pos").setValue("456.700012207031 0.100000001490116 -261.799987792969"));
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {200f,200f,120f});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.349999994039536f,-0.349999994039536f,0.349999994039536f,0.349999994039536f,-0.349999994039536f,0.349999994039536f,0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,-0.349999994039536f,0f,0.349999994039536f,0f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"t.wrl"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFInt3256 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
protected class MFVec3f57 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {430f,0.0199999995529652f,-335f,435.799987792969f,0.100000001490116f,-335.299987792969f,430f,0.0199999995529652f,-335f,434.600006103516f,0.100000001490116f,-338.600006103516f,430f,0.0199999995529652f,-335f,432.700012207031f,0.100000001490116f,-336.600006103516f,430f,0.0199999995529652f,-335f,434.700012207031f,0.100000001490116f,-336.899993896484f,429.899993896484f,0.0199999995529652f,-360.299987792969f,474.700012207031f,0.100000001490116f,-318.799987792969f,429.899993896484f,0.0199999995529652f,-360.299987792969f,485.600006103516f,0.100000001490116f,-309f,429.899993896484f,0.0199999995529652f,-360.299987792969f,434.799987792969f,0.100000001490116f,-371.5f,454f,0.0199999995529652f,-361.299987792969f,457.399993896484f,0.100000001490116f,-359.600006103516f,454f,0.0199999995529652f,-361.299987792969f,454.200012207031f,0.100000001490116f,-358.600006103516f,454f,0.0199999995529652f,-361.299987792969f,450.600006103516f,0.100000001490116f,-358.600006103516f,458.899993896484f,0.0199999995529652f,-304.299987792969f,473.5f,0.100000001490116f,-287.5f,458.899993896484f,0.0199999995529652f,-304.299987792969f,458f,0.100000001490116f,-304.5f,491.600006103516f,0.0199999995529652f,-335.700012207031f,491.399993896484f,0.100000001490116f,-336.799987792969f,491.600006103516f,0.0199999995529652f,-335.700012207031f,496.899993896484f,0.100000001490116f,-368.899993896484f,467f,0.0199999995529652f,-243.899993896484f,477.100006103516f,0.100000001490116f,-260f,467f,0.0199999995529652f,-243.899993896484f,459f,0.100000001490116f,-236.399993896484f,458.700012207031f,0.0199999995529652f,-262.700012207031f,469.5f,0.100000001490116f,-249.800003051758f,458.700012207031f,0.0199999995529652f,-262.700012207031f,456.700012207031f,0.100000001490116f,-261.799987792969f});
  }
}
protected class MFInt3258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
protected class MFVec3f59 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {400f,0.0199999995529652f,-385f,400.600006103516f,0.100000001490116f,-392.899993896484f,400f,0.0199999995529652f,-385f,416.700012207031f,0.100000001490116f,-383.399993896484f,430f,0.0199999995529652f,-335f,438.299987792969f,0.100000001490116f,-338.600006103516f,430f,0.0199999995529652f,-335f,434.799987792969f,0.100000001490116f,-336f,430f,0.0199999995529652f,-335f,437.600006103516f,0.100000001490116f,-332.600006103516f,430f,0.0199999995529652f,-335f,436.299987792969f,0.100000001490116f,-333.399993896484f,430f,0.0199999995529652f,-335f,435.200012207031f,0.100000001490116f,-336.799987792969f,430f,0.0199999995529652f,-335f,432.5f,0.100000001490116f,-332.5f,429.899993896484f,0.0199999995529652f,-360.299987792969f,436.100006103516f,0.100000001490116f,-334.899993896484f,429.899993896484f,0.0199999995529652f,-360.299987792969f,440.5f,0.100000001490116f,-355.5f,429.899993896484f,0.0199999995529652f,-360.299987792969f,436.299987792969f,0.100000001490116f,-371.700012207031f,429.899993896484f,0.0199999995529652f,-360.299987792969f,431.200012207031f,0.100000001490116f,-361.200012207031f,457.100006103516f,0.0199999995529652f,-300.799987792969f,456.799987792969f,0.100000001490116f,-302.600006103516f,457.100006103516f,0.0199999995529652f,-300.799987792969f,453.299987792969f,0.100000001490116f,-318.600006103516f,442.399993896484f,0.0199999995529652f,-314.5f,444.600006103516f,0.100000001490116f,-313.700012207031f,442.399993896484f,0.0199999995529652f,-314.5f,440.600006103516f,0.100000001490116f,-310.399993896484f,467f,0.0199999995529652f,-243.899993896484f,474.700012207031f,0.100000001490116f,-259.100006103516f,457.399993896484f,0.0199999995529652f,-262.700012207031f,466.899993896484f,0.100000001490116f,-243.800003051758f});
  }
}
protected class MFInt3260 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1});
  }
}
protected class MFVec3f61 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {430f,0.0199999995529652f,-335f,429.899993896484f,0.100000001490116f,-360.299987792969f,442.399993896484f,0.0199999995529652f,-314.5f,429.899993896484f,0.100000001490116f,-319.600006103516f,457.399993896484f,0.0199999995529652f,-262.700012207031f,467f,0.100000001490116f,-243.899993896484f,458.700012207031f,0.0199999995529652f,-262.700012207031f,457.399993896484f,0.100000001490116f,-262.700012207031f,458.700012207031f,0.0199999995529652f,-262.700012207031f,467f,0.100000001490116f,-243.899993896484f});
  }
}
}
