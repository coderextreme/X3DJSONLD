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
public class Nodes implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Nodes().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Nodes.new.java.x3d");
    model.toFileJSON("../data/Nodes.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.1"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Holger Seelig")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("Tue, 10 Feb 2026 12:09:57 GMT")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("Tue, 10 Feb 2026 12:34:21 GMT")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/"))))
      .setScene(new Scene()
        .addChild(new WorldInfo())
        .addChild(new Background())
        .addChild(new Fog())
        .addChild(new LocalFog())
        .addChild(new TextureBackground())
        .addChild(new ProximitySensor())
        .addChild(new TransformSensor())
        .addChild(new VisibilitySensor())
        .addChild(new ColorChaser())
        .addChild(new ColorDamper())
        .addChild(new CoordinateChaser())
        .addChild(new CoordinateDamper())
        .addChild(new OrientationChaser())
        .addChild(new OrientationDamper())
        .addChild(new PositionChaser())
        .addChild(new PositionChaser2D())
        .addChild(new PositionDamper())
        .addChild(new PositionDamper2D())
        .addChild(new ScalarChaser())
        .addChild(new ScalarDamper())
        .addChild(new TexCoordChaser2D())
        .addChild(new TexCoordDamper2D())
        .addChild(new Group())
        .addChild(new StaticGroup())
        .addChild(new Switch().setWhichChoice(-1))
        .addChild(new Transform())
        .addChild(new ColorInterpolator())
        .addChild(new CoordinateInterpolator())
        .addChild(new CoordinateInterpolator2D())
        .addChild(new EaseInEaseOut())
        .addChild(new NormalInterpolator())
        .addChild(new OrientationInterpolator())
        .addChild(new PositionInterpolator())
        .addChild(new PositionInterpolator2D())
        .addChild(new ScalarInterpolator())
        .addChild(new SplinePositionInterpolator())
        .addChild(new SplinePositionInterpolator2D())
        .addChild(new SplineScalarInterpolator())
        .addChild(new SquadOrientationInterpolator())
        .addLayerSet(new LayerSet())
        .addChild(new DirectionalLight())
        .addChild(new EnvironmentLight().setOrigin(new float[] {0f ,0f ,0f }).setRotation(new float[] {0f ,0f ,1f ,0f }))
        .addChild(new PointLight())
        .addChild(new SpotLight().setBeamWidth(0.589049f ))
        .addChild(new Billboard())
        .addChild(new Collision())
        .addChild(new LOD())
        .addChild(new NavigationInfo())
        .addChild(new OrthoViewpoint())
        .addChild(new Viewpoint())
        .addChild(new ViewpointGroup())
        .addChild(new Anchor())
        .addChild(new Inline())
        .addChild(new LoadSensor())
        .addChild(new CylinderSensor())
        .addChild(new PlaneSensor())
        .addChild(new SphereSensor())
        .addChild(new TouchSensor())
        .addChild(new ClipPlane())
        .addChild(new Shape())
        .addChild(new Analyser())
        .addChild(new AudioDestination())
        .addChild(new BiquadFilter().setType("LOWPASS"))
        .addChild(new BufferAudioSource())
        .addChild(new ChannelMerger())
        .addChild(new ChannelSelector())
        .addChild(new ChannelSplitter())
        .addChild(new Convolver())
        .addChild(new Delay())
        .addChild(new DynamicsCompressor())
        .addChild(new Gain())
        .addChild(new ListenerPointSource())
        .addChild(new MicrophoneSource())
        .addChild(new OscillatorSource())
        .addChild(new Sound())
        .addChild(new SpatialSound())
        .addChild(new StreamAudioDestination())
        .addChild(new StreamAudioSource())
        .addChild(new WaveShaper())
        .addChild(new TimeSensor())
        .addChild(new CADAssembly())
        .addChild(new CADFace())
        .addChild(new CADLayer())
        .addChild(new CADPart())
        .addChild(new DISEntityManager())
        .addChild(new DISEntityTypeMapping())
        .addChild(new EspduTransform())
        .addChild(new ReceiverPdu())
        .addChild(new SignalPdu())
        .addChild(new TransmitterPdu())
        .addChild(new BooleanFilter())
        .addChild(new BooleanSequencer())
        .addChild(new BooleanToggle())
        .addChild(new BooleanTrigger())
        .addChild(new IntegerSequencer())
        .addChild(new IntegerTrigger())
        .addChild(new TimeTrigger())
        .addChild(new KeySensor().setEnabled(false))
        .addChild(new StringSensor())
        .addChild(new TextureProjector().setAmbientIntensity(0f ).setColor(new float[] {1f ,1f ,1f }).setFieldOfView(0.7854f ).setIntensity(0.7854f ).setUpVector(new float[] {0f ,1f ,0f }))
        .addChild(new TextureProjectorParallel().setAmbientIntensity(0f ).setColor(new float[] {1f ,1f ,1f }).setIntensity(0.7854f ).setUpVector(new float[] {0f ,1f ,0f }))
        .addChild(new HAnimHumanoid().setVersion(new SFString("2.0")))
        .addChild(new HAnimJoint().setUlimit(new MFFloat0().getArray()).setLlimit(new MFFloat1().getArray()))
        .addChild(new HAnimPose().setLoa(-1).setTransitionDuration(0d))
        .addChild(new HAnimSegment())
        .addChild(new HAnimSite())
        .addChild(new ParticleSystem())
        .addChild(new Script())
        .addChild(new FontLibrary())
        .addChild(new CollidableOffset())
        .addChild(new CollidableShape())
        .addChild(new CollisionSensor())
        .addChild(new CollisionSpace())
        .addChild(new RigidBodyCollection())
        .addChild(new IsoSurfaceVolumeData())
        .addChild(new SegmentedVolumeData())
        .addChild(new VolumeData())
        .addChild(new GeoLOD())
        .addChild(new GeoLocation())
        .addChild(new GeoMetadata())
        .addChild(new GeoPositionInterpolator())
        .addChild(new GeoProximitySensor())
        .addChild(new GeoTouchSensor())
        .addChild(new GeoTransform())
        .addChild(new GeoViewpoint())
        .addChild(new ContourPolyline2D())
        .addChild(new NurbsCurve2D())
        .addChild(new NurbsOrientationInterpolator())
        .addChild(new NurbsPositionInterpolator())
        .addChild(new NurbsSet())
        .addChild(new NurbsSurfaceInterpolator())
        .addChild(new LayoutGroup())
        .addChild(new ScreenGroup())
        .addChild(new LinePickSensor())
        .addChild(new PickableGroup())
        .addChild(new PointPickSensor())
        .addChild(new PrimitivePickSensor())
        .addChild(new VolumePickSensor()));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
}
