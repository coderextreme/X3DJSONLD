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
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("source").setContent("t1.wrl")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"WALK\"").setSpeed(3f).setAvatarSize(new MFFloat0().getArray()))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(new float[] {0f,60f,110f}).setOrientation(new float[] {1f,0f,0f,-0.699999988079071f}).setFieldOfView(0.7853981256484985f))
        .addChild(new Viewpoint().setDescription("looking East").setPosition(new float[] {-140f,30f,0f}).setOrientation(new float[] {0f,0.4000000059604645f,0f,-1.399999976158142f}).setFieldOfView(0.7853981256484985f))
        .addChild(new Viewpoint().setDescription("Overhead").setPosition(new float[] {0f,150f,0f}).setOrientation(new float[] {1f,0f,0f,-1.5700000524520874f}).setFieldOfView(0.7853981256484985f))
        .addChild(new ProtoDeclare().setName("school")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.20000000298023224f).setDiffuseColor(new float[] {0.5f,0f,1f})))
                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt321().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("institute")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.20000000298023224f).setDiffuseColor(new float[] {1f,1f,0f})))
                .setGeometry(new Box().setSize(new float[] {0.699999988079071f,0.699999988079071f,0.699999988079071f})))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("disart_org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f})))
                .setGeometry(new Sphere().setRadius(0.699999988079071f)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("posi").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType("SFColor").setName("col").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(0.4000000059604645f)
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(1.100000023841858f)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("l")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("pos").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance3 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new Transform().setTranslation(new float[] {-468f,0f,315f})
          .addChild(new Inline().setUrl(new MFString3().getArray()))
          .addChild(new Anchor().setUrl(new MFString4().getArray()).setDescription("Derby Women's Centre")
            .addChild(ProtoInstance4 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString5().getArray()).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance5 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString6().getArray()).setDescription("Charlesworth Primary School")
            .addChild(ProtoInstance6 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString7().getArray()).setDescription("Hope Valley College")
            .addChild(ProtoInstance7 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString8().getArray()).setDescription("People Express")
            .addChild(ProtoInstance8 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(new MFString9().getArray()).setDescription("QArts/Studios")
            .addChild(ProtoInstance9 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(new MFString10().getArray()).setDescription("Stroke Unit, Derbyshire Royal Infirmary")
            .addChild(ProtoInstance10 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString11().getArray()).setDescription("Park View Primary, Derby")
            .addChild(ProtoInstance11 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString12().getArray()).setDescription("First Movement")
            .addChild(ProtoInstance12 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(new MFString13().getArray()).setDescription("St. Benedict R.C. School, Visual Impairment Unit")
            .addChild(ProtoInstance13 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString14().getArray()).setDescription("Beckett Primary, Derby")
            .addChild(ProtoInstance14 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString15().getArray()).setDescription("Brackensdale Junior School, Communty Unit")
            .addChild(ProtoInstance15 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString16().getArray()).setDescription("Moorhead Primary, Derby")
            .addChild(ProtoInstance16 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString17().getArray()).setDescription("Derby Deaf Club")
            .addChild(ProtoInstance17 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString18().getArray()).setDescription("Nightingale Junior, Derby")
            .addChild(ProtoInstance18 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString19().getArray()).setDescription("St Mary's Primary, Derby")
            .addChild(ProtoInstance19 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString20().getArray()).setDescription("Griffe Field Primary, Derby")
            .addChild(ProtoInstance20 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString21().getArray()).setDescription("Leicester Road Day Centre, Melton Mowbray")
            .addChild(ProtoInstance21 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString22().getArray()).setDescription("Ivy House Special School, Derby")
            .addChild(ProtoInstance22 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString23().getArray()).setDescription("Oakham Day Centre, Rutland")
            .addChild(ProtoInstance23 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString24().getArray()).setDescription("Parkwood School, Alfreton")
            .addChild(ProtoInstance24 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString25().getArray()).setDescription("Ash Green, Specialist Learning Disability Resource")
            .addChild(ProtoInstance25 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString26().getArray()).setDescription("Ashgate Croft School, Chesterfield")
            .addChild(ProtoInstance26 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString27().getArray()).setDescription("Highfields School, Matlock")
            .addChild(ProtoInstance27 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString28().getArray()).setDescription("City Arts")
            .addChild(ProtoInstance28 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setUrl(new MFString29().getArray()).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance29 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString30().getArray()).setDescription("Watering Seeds")
            .addChild(ProtoInstance30 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString31().getArray()).setDescription("Red oaks")
            .addChild(ProtoInstance31 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString32().getArray()).setDescription("West Notts College")
            .addChild(ProtoInstance32 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString33().getArray()).setDescription("Willow Wood Day Centre")
            .addChild(ProtoInstance33 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString34().getArray()).setDescription("Fased In The Arts")
            .addChild(ProtoInstance34 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString35().getArray()).setDescription("27a Access Artspace")
            .addChild(ProtoInstance35 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(new MFString36().getArray()).setDescription("Roman Way Day Centre, Market Harborough")
            .addChild(ProtoInstance36 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString37().getArray()).setDescription("Mosaic, Leicester Disability Services")
            .addChild(ProtoInstance37 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString38().getArray()).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance38 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString39().getArray()).setDescription("Ellesmere College, Leicester")
            .addChild(ProtoInstance39 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString40().getArray()).setDescription("Ashmount School, Loughborough")
            .addChild(ProtoInstance40 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString41().getArray()).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance41 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString42().getArray()).setDescription("Forrest Way School")
            .addChild(ProtoInstance42 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString43().getArray()).setDescription("Ibstock Community College")
            .addChild(ProtoInstance43 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString44().getArray()).setDescription("Artlink East")
            .addChild(ProtoInstance44 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString45().getArray()).setDescription("United Hospitals and NHS Trust Lincolnshire")
            .addChild(ProtoInstance45 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString46().getArray()).setDescription("Ancaster Day Centre")
            .addChild(ProtoInstance46 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString47().getArray()).setDescription("Creations")
            .addChild(ProtoInstance47 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString48().getArray()).setDescription("Nene Day Centre, Northamtpon")
            .addChild(ProtoInstance48 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString49().getArray()).setDescription("Delapre Middle School, Northampton")
            .addChild(ProtoInstance49 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString50().getArray()).setDescription("The Links, Brackley")
            .addChild(ProtoInstance50 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString51().getArray()).setDescription("New Perspectives")
            .addChild(ProtoInstance51 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setUrl(new MFString52().getArray()).setDescription("UKan2")
            .addChild(ProtoInstance52 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setUrl(new MFString53().getArray()).setDescription("Silverstone County Infants School")
            .addChild(ProtoInstance53 = new ProtoInstance().setName("school")))
          .addChild(new Anchor().setUrl(new MFString54().getArray()).setDescription("Riverside Resource Centre, Towcester")
            .addChild(ProtoInstance54 = new ProtoInstance().setName("institute")))
          .addChild(new Anchor().setUrl(new MFString55().getArray()).setDescription("Daventry Tertiary College")
            .addChild(ProtoInstance55 = new ProtoInstance().setName("school")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.20000000298023224f).setEmissiveColor(new float[] {1f,0f,0f})))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3256().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.20000000298023224f).setEmissiveColor(new float[] {0f,1f,0f})))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3258().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.20000000298023224f).setEmissiveColor(new float[] {1f,0f,1f})))
            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3260().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.6000000238418579 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.30000001192092896 1"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.20000000298023224"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("col").setValue("0.6000000238418579 0 0.6000000238418579"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("435.29998779296875 0.10000000149011612 -335.6000061035156"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.10000000149011612 -385"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("400.6000061035156 0.10000000149011612 -392.8999938964844"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("416.70001220703125 0.10000000149011612 -383.3999938964844"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("429.8999938964844 0.10000000149011612 -319.6000061035156"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.10000000149011612 -335"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("435.79998779296875 0.10000000149011612 -335.29998779296875"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("438.29998779296875 0.10000000149011612 -338.6000061035156"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("429.8999938964844 0.10000000149011612 -360.29998779296875"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("434.6000061035156 0.10000000149011612 -338.6000061035156"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("434.79998779296875 0.10000000149011612 -336"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("432.70001220703125 0.10000000149011612 -336.6000061035156"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("437.6000061035156 0.10000000149011612 -332.6000061035156"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("434.70001220703125 0.10000000149011612 -336.8999938964844"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("pos").setValue("436.29998779296875 0.10000000149011612 -333.3999938964844"));
ProtoInstance19
              .addFieldValue(new fieldValue().setName("pos").setValue("435.20001220703125 0.10000000149011612 -336.79998779296875"));
ProtoInstance20
              .addFieldValue(new fieldValue().setName("pos").setValue("432.5 0.10000000149011612 -332.5"));
ProtoInstance21
              .addFieldValue(new fieldValue().setName("pos").setValue("474.70001220703125 0.10000000149011612 -318.79998779296875"));
ProtoInstance22
              .addFieldValue(new fieldValue().setName("pos").setValue("436.1000061035156 0.10000000149011612 -334.8999938964844"));
ProtoInstance23
              .addFieldValue(new fieldValue().setName("pos").setValue("485.6000061035156 0.10000000149011612 -309"));
ProtoInstance24
              .addFieldValue(new fieldValue().setName("pos").setValue("440.5 0.10000000149011612 -355.5"));
ProtoInstance25
              .addFieldValue(new fieldValue().setName("pos").setValue("434.79998779296875 0.10000000149011612 -371.5"));
ProtoInstance26
              .addFieldValue(new fieldValue().setName("pos").setValue("436.29998779296875 0.10000000149011612 -371.70001220703125"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("pos").setValue("431.20001220703125 0.10000000149011612 -361.20001220703125"));
ProtoInstance28
              .addFieldValue(new fieldValue().setName("pos").setValue("455.8999938964844 0.10000000149011612 -341.29998779296875"));
ProtoInstance29
              .addFieldValue(new fieldValue().setName("pos").setValue("456.1000061035156 0.10000000149011612 -341.5"));
ProtoInstance30
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.10000000149011612 -361.29998779296875"));
ProtoInstance31
              .addFieldValue(new fieldValue().setName("pos").setValue("457.3999938964844 0.10000000149011612 -359.6000061035156"));
ProtoInstance32
              .addFieldValue(new fieldValue().setName("pos").setValue("454.20001220703125 0.10000000149011612 -358.6000061035156"));
ProtoInstance33
              .addFieldValue(new fieldValue().setName("pos").setValue("450.6000061035156 0.10000000149011612 -358.6000061035156"));
ProtoInstance34
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.10000000149011612 -350"));
ProtoInstance35
              .addFieldValue(new fieldValue().setName("pos").setValue("458.8999938964844 0.10000000149011612 -304.29998779296875"));
ProtoInstance36
              .addFieldValue(new fieldValue().setName("pos").setValue("473.5 0.10000000149011612 -287.5"));
ProtoInstance37
              .addFieldValue(new fieldValue().setName("pos").setValue("458 0.10000000149011612 -304.5"));
ProtoInstance38
              .addFieldValue(new fieldValue().setName("pos").setValue("457.1000061035156 0.10000000149011612 -300.79998779296875"));
ProtoInstance39
              .addFieldValue(new fieldValue().setName("pos").setValue("456.79998779296875 0.10000000149011612 -302.6000061035156"));
ProtoInstance40
              .addFieldValue(new fieldValue().setName("pos").setValue("453.29998779296875 0.10000000149011612 -318.6000061035156"));
ProtoInstance41
              .addFieldValue(new fieldValue().setName("pos").setValue("442.3999938964844 0.10000000149011612 -314.5"));
ProtoInstance42
              .addFieldValue(new fieldValue().setName("pos").setValue("444.6000061035156 0.10000000149011612 -313.70001220703125"));
ProtoInstance43
              .addFieldValue(new fieldValue().setName("pos").setValue("440.6000061035156 0.10000000149011612 -310.3999938964844"));
ProtoInstance44
              .addFieldValue(new fieldValue().setName("pos").setValue("491.6000061035156 0.10000000149011612 -335.70001220703125"));
ProtoInstance45
              .addFieldValue(new fieldValue().setName("pos").setValue("491.3999938964844 0.10000000149011612 -336.79998779296875"));
ProtoInstance46
              .addFieldValue(new fieldValue().setName("pos").setValue("496.8999938964844 0.10000000149011612 -368.8999938964844"));
ProtoInstance47
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.10000000149011612 -243.89999389648438"));
ProtoInstance48
              .addFieldValue(new fieldValue().setName("pos").setValue("477.1000061035156 0.10000000149011612 -260"));
ProtoInstance49
              .addFieldValue(new fieldValue().setName("pos").setValue("474.70001220703125 0.10000000149011612 -259.1000061035156"));
ProtoInstance50
              .addFieldValue(new fieldValue().setName("pos").setValue("459 0.10000000149011612 -236.39999389648438"));
ProtoInstance51
              .addFieldValue(new fieldValue().setName("pos").setValue("457.3999938964844 0.10000000149011612 -262.70001220703125"));
ProtoInstance52
              .addFieldValue(new fieldValue().setName("pos").setValue("458.70001220703125 0.10000000149011612 -262.70001220703125"));
ProtoInstance53
              .addFieldValue(new fieldValue().setName("pos").setValue("466.8999938964844 0.10000000149011612 -243.8000030517578"));
ProtoInstance54
              .addFieldValue(new fieldValue().setName("pos").setValue("469.5 0.10000000149011612 -249.8000030517578"));
ProtoInstance55
              .addFieldValue(new fieldValue().setName("pos").setValue("456.70001220703125 0.10000000149011612 -261.79998779296875"));
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {200f,200f,120f});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3499999940395355f,-0.3499999940395355f,0.3499999940395355f,0.3499999940395355f,-0.3499999940395355f,0.3499999940395355f,0.3499999940395355f,-0.3499999940395355f,-0.3499999940395355f,-0.3499999940395355f,-0.3499999940395355f,-0.3499999940395355f,0f,0.3499999940395355f,0f});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"t.wrl"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString24 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString25 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString26 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString27 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString28 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString29 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString30 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString31 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString32 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString33 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString34 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString35 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString36 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString37 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString38 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString39 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString40 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString42 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString43 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString44 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString45 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString46 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString47 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString48 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString49 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString50 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString51 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString52 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString53 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString54 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString55 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
protected class MFVec3f57 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {430f,0.019999999552965164f,-335f,435.79998779296875f,0.10000000149011612f,-335.29998779296875f,430f,0.019999999552965164f,-335f,434.6000061035156f,0.10000000149011612f,-338.6000061035156f,430f,0.019999999552965164f,-335f,432.70001220703125f,0.10000000149011612f,-336.6000061035156f,430f,0.019999999552965164f,-335f,434.70001220703125f,0.10000000149011612f,-336.8999938964844f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,474.70001220703125f,0.10000000149011612f,-318.79998779296875f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,485.6000061035156f,0.10000000149011612f,-309f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,434.79998779296875f,0.10000000149011612f,-371.5f,454f,0.019999999552965164f,-361.29998779296875f,457.3999938964844f,0.10000000149011612f,-359.6000061035156f,454f,0.019999999552965164f,-361.29998779296875f,454.20001220703125f,0.10000000149011612f,-358.6000061035156f,454f,0.019999999552965164f,-361.29998779296875f,450.6000061035156f,0.10000000149011612f,-358.6000061035156f,458.8999938964844f,0.019999999552965164f,-304.29998779296875f,473.5f,0.10000000149011612f,-287.5f,458.8999938964844f,0.019999999552965164f,-304.29998779296875f,458f,0.10000000149011612f,-304.5f,491.6000061035156f,0.019999999552965164f,-335.70001220703125f,491.3999938964844f,0.10000000149011612f,-336.79998779296875f,491.6000061035156f,0.019999999552965164f,-335.70001220703125f,496.8999938964844f,0.10000000149011612f,-368.8999938964844f,467f,0.019999999552965164f,-243.89999389648438f,477.1000061035156f,0.10000000149011612f,-260f,467f,0.019999999552965164f,-243.89999389648438f,459f,0.10000000149011612f,-236.39999389648438f,458.70001220703125f,0.019999999552965164f,-262.70001220703125f,469.5f,0.10000000149011612f,-249.8000030517578f,458.70001220703125f,0.019999999552965164f,-262.70001220703125f,456.70001220703125f,0.10000000149011612f,-261.79998779296875f});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {400f,0.019999999552965164f,-385f,400.6000061035156f,0.10000000149011612f,-392.8999938964844f,400f,0.019999999552965164f,-385f,416.70001220703125f,0.10000000149011612f,-383.3999938964844f,430f,0.019999999552965164f,-335f,438.29998779296875f,0.10000000149011612f,-338.6000061035156f,430f,0.019999999552965164f,-335f,434.79998779296875f,0.10000000149011612f,-336f,430f,0.019999999552965164f,-335f,437.6000061035156f,0.10000000149011612f,-332.6000061035156f,430f,0.019999999552965164f,-335f,436.29998779296875f,0.10000000149011612f,-333.3999938964844f,430f,0.019999999552965164f,-335f,435.20001220703125f,0.10000000149011612f,-336.79998779296875f,430f,0.019999999552965164f,-335f,432.5f,0.10000000149011612f,-332.5f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,436.1000061035156f,0.10000000149011612f,-334.8999938964844f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,440.5f,0.10000000149011612f,-355.5f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,436.29998779296875f,0.10000000149011612f,-371.70001220703125f,429.8999938964844f,0.019999999552965164f,-360.29998779296875f,431.20001220703125f,0.10000000149011612f,-361.20001220703125f,457.1000061035156f,0.019999999552965164f,-300.79998779296875f,456.79998779296875f,0.10000000149011612f,-302.6000061035156f,457.1000061035156f,0.019999999552965164f,-300.79998779296875f,453.29998779296875f,0.10000000149011612f,-318.6000061035156f,442.3999938964844f,0.019999999552965164f,-314.5f,444.6000061035156f,0.10000000149011612f,-313.70001220703125f,442.3999938964844f,0.019999999552965164f,-314.5f,440.6000061035156f,0.10000000149011612f,-310.3999938964844f,467f,0.019999999552965164f,-243.89999389648438f,474.70001220703125f,0.10000000149011612f,-259.1000061035156f,457.3999938964844f,0.019999999552965164f,-262.70001220703125f,466.8999938964844f,0.10000000149011612f,-243.8000030517578f});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1});
  }
}
protected class MFVec3f61 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {430f,0.019999999552965164f,-335f,429.8999938964844f,0.10000000149011612f,-360.29998779296875f,442.3999938964844f,0.019999999552965164f,-314.5f,429.8999938964844f,0.10000000149011612f,-319.6000061035156f,457.3999938964844f,0.019999999552965164f,-262.70001220703125f,467f,0.10000000149011612f,-243.89999389648438f,458.70001220703125f,0.019999999552965164f,-262.70001220703125f,457.3999938964844f,0.10000000149011612f,-262.70001220703125f,458.70001220703125f,0.019999999552965164f,-262.70001220703125f,467f,0.10000000149011612f,-243.89999389648438f});
  }
}
}
