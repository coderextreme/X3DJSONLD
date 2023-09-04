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
public class t1 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new t1().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/t1.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
ProtoInstance ProtoInstance35 = null;
ProtoInstance ProtoInstance36 = null;
ProtoInstance ProtoInstance37 = null;
ProtoInstance ProtoInstance38 = null;
ProtoInstance ProtoInstance39 = null;
ProtoInstance ProtoInstance40 = null;
ProtoInstance ProtoInstance41 = null;
ProtoInstance ProtoInstance42 = null;
ProtoInstance ProtoInstance43 = null;
ProtoInstance ProtoInstance44 = null;
ProtoInstance ProtoInstance45 = null;
ProtoInstance ProtoInstance46 = null;
ProtoInstance ProtoInstance47 = null;
ProtoInstance ProtoInstance48 = null;
ProtoInstance ProtoInstance49 = null;
ProtoInstance ProtoInstance50 = null;
ProtoInstance ProtoInstance51 = null;
ProtoInstance ProtoInstance52 = null;
ProtoInstance ProtoInstance53 = null;
ProtoInstance ProtoInstance54 = null;
ProtoInstance ProtoInstance55 = null;
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("school")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.5f,0f,1f}).setTransparency(0.2f)))
                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt320().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray()))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("institute")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.2f)))
                .setGeometry(new Box().setSize(new float[] {0.7f,0.7f,0.7f})))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("disart_org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f})))
                .setGeometry(new Sphere().setRadius(0.7f)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField(new field().setType("SFColor").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.4f)
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(1.1f)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("l")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance3 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"WALK\"").setAvatarSize(new MFFloat2().getArray()).setSpeed(3f))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(new float[] {0f,60f,110f}).setOrientation(new float[] {1f,0f,0f,-0.699999988079071f}).setFieldOfView(0.7853981f))
        .addChild(new Viewpoint().setDescription("looking East").setPosition(new float[] {-140f,30f,0f}).setOrientation(new float[] {0f,0.400000005960465f,0f,-1.39999997615814f}).setFieldOfView(0.7853981f))
        .addChild(new Viewpoint().setDescription("Overhead").setPosition(new float[] {0f,150f,0f}).setOrientation(new float[] {1f,0f,0f,-1.57000005245209f}).setFieldOfView(0.7853981f))
        .addChild(new Transform().setTranslation(new float[] {-468f,0f,315f})
          .addChild(new Inline().setGlobal(true).setUrl(new MFString3().getArray()))
          .addChild(new Anchor().setDescription("Derby Women's Centre").setUrl(new MFString4().getArray())
            .addChild(ProtoInstance4 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(new MFString5().getArray())
            .addChild(ProtoInstance5 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Charlesworth Primary School").setUrl(new MFString6().getArray())
            .addChild(ProtoInstance6 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Hope Valley College").setUrl(new MFString7().getArray())
            .addChild(ProtoInstance7 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("People Express").setUrl(new MFString8().getArray())
            .addChild(ProtoInstance8 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("QArts/Studios").setUrl(new MFString9().getArray())
            .addChild(ProtoInstance9 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new MFString10().getArray())
            .addChild(ProtoInstance10 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Park View Primary, Derby").setUrl(new MFString11().getArray())
            .addChild(ProtoInstance11 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("First Movement").setUrl(new MFString12().getArray())
            .addChild(ProtoInstance12 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new MFString13().getArray())
            .addChild(ProtoInstance13 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Beckett Primary, Derby").setUrl(new MFString14().getArray())
            .addChild(ProtoInstance14 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Brackensdale Junior School, Communty Unit").setUrl(new MFString15().getArray())
            .addChild(ProtoInstance15 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Moorhead Primary, Derby").setUrl(new MFString16().getArray())
            .addChild(ProtoInstance16 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Derby Deaf Club").setUrl(new MFString17().getArray())
            .addChild(ProtoInstance17 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Nightingale Junior, Derby").setUrl(new MFString18().getArray())
            .addChild(ProtoInstance18 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("St Mary's Primary, Derby").setUrl(new MFString19().getArray())
            .addChild(ProtoInstance19 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Griffe Field Primary, Derby").setUrl(new MFString20().getArray())
            .addChild(ProtoInstance20 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new MFString21().getArray())
            .addChild(ProtoInstance21 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ivy House Special School, Derby").setUrl(new MFString22().getArray())
            .addChild(ProtoInstance22 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Oakham Day Centre, Rutland").setUrl(new MFString23().getArray())
            .addChild(ProtoInstance23 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Parkwood School, Alfreton").setUrl(new MFString24().getArray())
            .addChild(ProtoInstance24 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new MFString25().getArray())
            .addChild(ProtoInstance25 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ashgate Croft School, Chesterfield").setUrl(new MFString26().getArray())
            .addChild(ProtoInstance26 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Highfields School, Matlock").setUrl(new MFString27().getArray())
            .addChild(ProtoInstance27 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("City Arts").setUrl(new MFString28().getArray())
            .addChild(ProtoInstance28 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new MFString29().getArray())
            .addChild(ProtoInstance29 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Watering Seeds").setUrl(new MFString30().getArray())
            .addChild(ProtoInstance30 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Red oaks").setUrl(new MFString31().getArray())
            .addChild(ProtoInstance31 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("West Notts College").setUrl(new MFString32().getArray())
            .addChild(ProtoInstance32 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Willow Wood Day Centre").setUrl(new MFString33().getArray())
            .addChild(ProtoInstance33 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(new MFString34().getArray())
            .addChild(ProtoInstance34 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(new MFString35().getArray())
            .addChild(ProtoInstance35 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("Roman Way Day Centre, Market Harborough").setUrl(new MFString36().getArray())
            .addChild(ProtoInstance36 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Mosaic, Leicester Disability Services").setUrl(new MFString37().getArray())
            .addChild(ProtoInstance37 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(new MFString38().getArray())
            .addChild(ProtoInstance38 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Ellesmere College, Leicester").setUrl(new MFString39().getArray())
            .addChild(ProtoInstance39 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ashmount School, Loughborough").setUrl(new MFString40().getArray())
            .addChild(ProtoInstance40 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(new MFString41().getArray())
            .addChild(ProtoInstance41 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Forrest Way School").setUrl(new MFString42().getArray())
            .addChild(ProtoInstance42 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Ibstock Community College").setUrl(new MFString43().getArray())
            .addChild(ProtoInstance43 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Artlink East").setUrl(new MFString44().getArray())
            .addChild(ProtoInstance44 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new MFString45().getArray())
            .addChild(ProtoInstance45 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Ancaster Day Centre").setUrl(new MFString46().getArray())
            .addChild(ProtoInstance46 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Creations").setUrl(new MFString47().getArray())
            .addChild(ProtoInstance47 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Nene Day Centre, Northamtpon").setUrl(new MFString48().getArray())
            .addChild(ProtoInstance48 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Delapre Middle School, Northampton").setUrl(new MFString49().getArray())
            .addChild(ProtoInstance49 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("The Links, Brackley").setUrl(new MFString50().getArray())
            .addChild(ProtoInstance50 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("New Perspectives").setUrl(new MFString51().getArray())
            .addChild(ProtoInstance51 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("UKan2").setUrl(new MFString52().getArray())
            .addChild(ProtoInstance52 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Silverstone County Infants School").setUrl(new MFString53().getArray())
            .addChild(ProtoInstance53 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setDescription("Riverside Resource Centre, Towcester").setUrl(new MFString54().getArray())
            .addChild(ProtoInstance54 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setDescription("Daventry Tertiary College").setUrl(new MFString55().getArray())
            .addChild(ProtoInstance55 = new ProtoInstance().setName("school")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(new float[] {1f,0f,0f}).setTransparency(0.2f)))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3256().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(new float[] {0f,1f,0f}).setTransparency(0.2f)))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3258().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(new float[] {1f,0f,1f}).setTransparency(0.2f)))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3260().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.6 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.3 1"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.2"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("col").setValue("0.6 0 0.6"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("435.3 0.1 -335.6"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.1 -385"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("400.6 0.1 -392.9"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("416.7 0.1 -383.4"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.1 -335"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("435.8 0.1 -335.3"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("438.3 0.1 -338.6"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("434.6 0.1 -338.6"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("434.8 0.1 -336"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("432.7 0.1 -336.6"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("437.6 0.1 -332.6"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("434.7 0.1 -336.9"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("pos").setValue("436.3 0.1 -333.4"));
ProtoInstance19
              .addFieldValue(new fieldValue().setName("pos").setValue("435.2 0.1 -336.8"));
ProtoInstance20
              .addFieldValue(new fieldValue().setName("pos").setValue("432.5 0.1 -332.5"));
ProtoInstance21
              .addFieldValue(new fieldValue().setName("pos").setValue("474.7 0.1 -318.8"));
ProtoInstance22
              .addFieldValue(new fieldValue().setName("pos").setValue("436.1 0.1 -334.9"));
ProtoInstance23
              .addFieldValue(new fieldValue().setName("pos").setValue("485.6 0.1 -309"));
ProtoInstance24
              .addFieldValue(new fieldValue().setName("pos").setValue("440.5 0.1 -355.5"));
ProtoInstance25
              .addFieldValue(new fieldValue().setName("pos").setValue("434.8 0.1 -371.5"));
ProtoInstance26
              .addFieldValue(new fieldValue().setName("pos").setValue("436.3 0.1 -371.7"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("pos").setValue("431.2 0.1 -361.2"));
ProtoInstance28
              .addFieldValue(new fieldValue().setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance29
              .addFieldValue(new fieldValue().setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance30
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance31
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -359.6"));
ProtoInstance32
              .addFieldValue(new fieldValue().setName("pos").setValue("454.2 0.1 -358.6"));
ProtoInstance33
              .addFieldValue(new fieldValue().setName("pos").setValue("450.6 0.1 -358.6"));
ProtoInstance34
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.1 -350"));
ProtoInstance35
              .addFieldValue(new fieldValue().setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance36
              .addFieldValue(new fieldValue().setName("pos").setValue("473.5 0.1 -287.5"));
ProtoInstance37
              .addFieldValue(new fieldValue().setName("pos").setValue("458 0.1 -304.5"));
ProtoInstance38
              .addFieldValue(new fieldValue().setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance39
              .addFieldValue(new fieldValue().setName("pos").setValue("456.8 0.1 -302.6"));
ProtoInstance40
              .addFieldValue(new fieldValue().setName("pos").setValue("453.3 0.1 -318.6"));
ProtoInstance41
              .addFieldValue(new fieldValue().setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance42
              .addFieldValue(new fieldValue().setName("pos").setValue("444.6 0.1 -313.7"));
ProtoInstance43
              .addFieldValue(new fieldValue().setName("pos").setValue("440.6 0.1 -310.4"));
ProtoInstance44
              .addFieldValue(new fieldValue().setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance45
              .addFieldValue(new fieldValue().setName("pos").setValue("491.4 0.1 -336.8"));
ProtoInstance46
              .addFieldValue(new fieldValue().setName("pos").setValue("496.9 0.1 -368.9"));
ProtoInstance47
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance48
              .addFieldValue(new fieldValue().setName("pos").setValue("477.1 0.1 -260"));
ProtoInstance49
              .addFieldValue(new fieldValue().setName("pos").setValue("474.7 0.1 -259.1"));
ProtoInstance50
              .addFieldValue(new fieldValue().setName("pos").setValue("459 0.1 -236.4"));
ProtoInstance51
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance52
              .addFieldValue(new fieldValue().setName("pos").setValue("458.7 0.1 -262.7"));
ProtoInstance53
              .addFieldValue(new fieldValue().setName("pos").setValue("466.9 0.1 -243.8"));
ProtoInstance54
              .addFieldValue(new fieldValue().setName("pos").setValue("469.5 0.1 -249.8"));
ProtoInstance55
              .addFieldValue(new fieldValue().setName("pos").setValue("456.7 0.1 -261.8"));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.35f,-0.35f,0.35f,0.35f,-0.35f,0.35f,0.35f,-0.35f,-0.35f,-0.35f,-0.35f,-0.35f,0f,0.35f,0f});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {200f,200f,120f});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"t.wrl"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString28 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString30 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString32 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString33 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString34 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString36 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString37 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString40 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString42 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString44 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString45 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString46 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString48 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString49 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString51 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString52 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString53 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString54 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString55 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {430f,0.02f,-335f,435.8f,0.1f,-335.3f,430f,0.02f,-335f,434.6f,0.1f,-338.6f,430f,0.02f,-335f,432.7f,0.1f,-336.6f,430f,0.02f,-335f,434.7f,0.1f,-336.9f,429.9f,0.02f,-360.3f,474.7f,0.1f,-318.8f,429.9f,0.02f,-360.3f,485.6f,0.1f,-309f,429.9f,0.02f,-360.3f,434.8f,0.1f,-371.5f,454f,0.02f,-361.3f,457.4f,0.1f,-359.6f,454f,0.02f,-361.3f,454.2f,0.1f,-358.6f,454f,0.02f,-361.3f,450.6f,0.1f,-358.6f,458.9f,0.02f,-304.3f,473.5f,0.1f,-287.5f,458.9f,0.02f,-304.3f,458f,0.1f,-304.5f,491.6f,0.02f,-335.7f,491.4f,0.1f,-336.8f,491.6f,0.02f,-335.7f,496.9f,0.1f,-368.9f,467f,0.02f,-243.9f,477.1f,0.1f,-260f,467f,0.02f,-243.9f,459f,0.1f,-236.4f,458.7f,0.02f,-262.7f,469.5f,0.1f,-249.8f,458.7f,0.02f,-262.7f,456.7f,0.1f,-261.8f});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {400f,0.02f,-385f,400.6f,0.1f,-392.9f,400f,0.02f,-385f,416.7f,0.1f,-383.4f,430f,0.02f,-335f,438.3f,0.1f,-338.6f,430f,0.02f,-335f,434.8f,0.1f,-336f,430f,0.02f,-335f,437.6f,0.1f,-332.6f,430f,0.02f,-335f,436.3f,0.1f,-333.4f,430f,0.02f,-335f,435.2f,0.1f,-336.8f,430f,0.02f,-335f,432.5f,0.1f,-332.5f,429.9f,0.02f,-360.3f,436.1f,0.1f,-334.9f,429.9f,0.02f,-360.3f,440.5f,0.1f,-355.5f,429.9f,0.02f,-360.3f,436.3f,0.1f,-371.7f,429.9f,0.02f,-360.3f,431.2f,0.1f,-361.2f,457.1f,0.02f,-300.8f,456.8f,0.1f,-302.6f,457.1f,0.02f,-300.8f,453.3f,0.1f,-318.6f,442.4f,0.02f,-314.5f,444.6f,0.1f,-313.7f,442.4f,0.02f,-314.5f,440.6f,0.1f,-310.4f,467f,0.02f,-243.9f,474.7f,0.1f,-259.1f,457.4f,0.02f,-262.7f,466.9f,0.1f,-243.8f});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {430f,0.02f,-335f,429.9f,0.1f,-360.3f,442.4f,0.02f,-314.5f,429.9f,0.1f,-319.6f,457.4f,0.02f,-262.7f,467f,0.1f,-243.9f,458.7f,0.02f,-262.7f,457.4f,0.1f,-262.7f,458.7f,0.02f,-262.7f,467f,0.1f,-243.9f});
  }
}
}
