'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var Fog = require('./x3d.mjs');
var LocalFog = require('./x3d.mjs');
var TextureBackground = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var TransformSensor = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var ColorChaser = require('./x3d.mjs');
var ColorDamper = require('./x3d.mjs');
var CoordinateChaser = require('./x3d.mjs');
var CoordinateDamper = require('./x3d.mjs');
var OrientationChaser = require('./x3d.mjs');
var OrientationDamper = require('./x3d.mjs');
var PositionChaser = require('./x3d.mjs');
var PositionChaser2D = require('./x3d.mjs');
var PositionDamper = require('./x3d.mjs');
var PositionDamper2D = require('./x3d.mjs');
var ScalarChaser = require('./x3d.mjs');
var ScalarDamper = require('./x3d.mjs');
var TexCoordChaser2D = require('./x3d.mjs');
var TexCoordDamper2D = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var StaticGroup = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
var CoordinateInterpolator = require('./x3d.mjs');
var CoordinateInterpolator2D = require('./x3d.mjs');
var EaseInEaseOut = require('./x3d.mjs');
var NormalInterpolator = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var PositionInterpolator2D = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var SplinePositionInterpolator = require('./x3d.mjs');
var SplinePositionInterpolator2D = require('./x3d.mjs');
var SplineScalarInterpolator = require('./x3d.mjs');
var SquadOrientationInterpolator = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var EnvironmentLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ViewpointGroup = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var LoadSensor = require('./x3d.mjs');
var CylinderSensor = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var SphereSensor = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var ClipPlane = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Analyser = require('./x3d.mjs');
var AudioDestination = require('./x3d.mjs');
var BiquadFilter = require('./x3d.mjs');
var BufferAudioSource = require('./x3d.mjs');
var ChannelMerger = require('./x3d.mjs');
var ChannelSelector = require('./x3d.mjs');
var ChannelSplitter = require('./x3d.mjs');
var Convolver = require('./x3d.mjs');
var Delay = require('./x3d.mjs');
var DynamicsCompressor = require('./x3d.mjs');
var Gain = require('./x3d.mjs');
var ListenerPointSource = require('./x3d.mjs');
var MicrophoneSource = require('./x3d.mjs');
var OscillatorSource = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SpatialSound = require('./x3d.mjs');
var StreamAudioDestination = require('./x3d.mjs');
var StreamAudioSource = require('./x3d.mjs');
var WaveShaper = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var CADAssembly = require('./x3d.mjs');
var CADFace = require('./x3d.mjs');
var CADLayer = require('./x3d.mjs');
var CADPart = require('./x3d.mjs');
var DISEntityManager = require('./x3d.mjs');
var DISEntityTypeMapping = require('./x3d.mjs');
var EspduTransform = require('./x3d.mjs');
var ReceiverPdu = require('./x3d.mjs');
var SignalPdu = require('./x3d.mjs');
var TransmitterPdu = require('./x3d.mjs');
var BooleanFilter = require('./x3d.mjs');
var BooleanSequencer = require('./x3d.mjs');
var BooleanToggle = require('./x3d.mjs');
var BooleanTrigger = require('./x3d.mjs');
var IntegerSequencer = require('./x3d.mjs');
var IntegerTrigger = require('./x3d.mjs');
var TimeTrigger = require('./x3d.mjs');
var KeySensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var StringSensor = require('./x3d.mjs');
var TextureProjector = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TextureProjectorParallel = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimPose = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var FontLibrary = require('./x3d.mjs');
var CollidableOffset = require('./x3d.mjs');
var CollidableShape = require('./x3d.mjs');
var CollisionSensor = require('./x3d.mjs');
var CollisionSpace = require('./x3d.mjs');
var RigidBodyCollection = require('./x3d.mjs');
var IsoSurfaceVolumeData = require('./x3d.mjs');
var SegmentedVolumeData = require('./x3d.mjs');
var VolumeData = require('./x3d.mjs');
var GeoLOD = require('./x3d.mjs');
var GeoLocation = require('./x3d.mjs');
var GeoMetadata = require('./x3d.mjs');
var GeoPositionInterpolator = require('./x3d.mjs');
var GeoProximitySensor = require('./x3d.mjs');
var GeoTouchSensor = require('./x3d.mjs');
var GeoTransform = require('./x3d.mjs');
var GeoViewpoint = require('./x3d.mjs');
var ContourPolyline2D = require('./x3d.mjs');
var NurbsCurve2D = require('./x3d.mjs');
var NurbsOrientationInterpolator = require('./x3d.mjs');
var NurbsPositionInterpolator = require('./x3d.mjs');
var NurbsSet = require('./x3d.mjs');
var NurbsSurfaceInterpolator = require('./x3d.mjs');
var LayoutGroup = require('./x3d.mjs');
var ScreenGroup = require('./x3d.mjs');
var LinePickSensor = require('./x3d.mjs');
var PickableGroup = require('./x3d.mjs');
var PointPickSensor = require('./x3d.mjs');
var PrimitivePickSensor = require('./x3d.mjs');
var VolumePickSensor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.1"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Tue, 10 Feb 2026 12:09:57 GMT")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 10 Feb 2026 12:34:21 GMT")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({}),

            new Background({}),

            new Fog({}),

            new LocalFog({}),

            new TextureBackground({}),

            new ProximitySensor({}),

            new TransformSensor({}),

            new VisibilitySensor({}),

            new ColorChaser({}),

            new ColorDamper({}),

            new CoordinateChaser({}),

            new CoordinateDamper({}),

            new OrientationChaser({}),

            new OrientationDamper({}),

            new PositionChaser({}),

            new PositionChaser2D({}),

            new PositionDamper({}),

            new PositionDamper2D({}),

            new ScalarChaser({}),

            new ScalarDamper({}),

            new TexCoordChaser2D({}),

            new TexCoordDamper2D({}),

            new Group({}),

            new StaticGroup({}),

            new Switch({
              whichChoice : new SFInt32(-1)}),

            new Transform({}),

            new ColorInterpolator({}),

            new CoordinateInterpolator({}),

            new CoordinateInterpolator2D({}),

            new EaseInEaseOut({}),

            new NormalInterpolator({}),

            new OrientationInterpolator({}),

            new PositionInterpolator({}),

            new PositionInterpolator2D({}),

            new ScalarInterpolator({}),

            new SplinePositionInterpolator({}),

            new SplinePositionInterpolator2D({}),

            new SplineScalarInterpolator({}),

            new SquadOrientationInterpolator({}),
          layerSet : new SFNode(
            new LayerSet({})]),

            new DirectionalLight({}),

            new EnvironmentLight({
              origin : new SFVec3f([0,0,0]),
              rotation : new SFRotation([0,0,1,0])}),

            new PointLight({}),

            new SpotLight({
              beamWidth : new SFFloat(0.589049)}),

            new Billboard({}),

            new Collision({}),

            new LOD({}),

            new NavigationInfo({}),

            new OrthoViewpoint({}),

            new Viewpoint({}),

            new ViewpointGroup({}),

            new Anchor({}),

            new Inline({}),

            new LoadSensor({}),

            new CylinderSensor({}),

            new PlaneSensor({}),

            new SphereSensor({}),

            new TouchSensor({}),

            new ClipPlane({}),

            new Shape({}),

            new Analyser({}),

            new AudioDestination({}),

            new BiquadFilter({
              type : field.TYPE_LOWPASS}),

            new BufferAudioSource({}),

            new ChannelMerger({}),

            new ChannelSelector({}),

            new ChannelSplitter({}),

            new Convolver({}),

            new Delay({}),

            new DynamicsCompressor({}),

            new Gain({}),

            new ListenerPointSource({}),

            new MicrophoneSource({}),

            new OscillatorSource({}),

            new Sound({}),

            new SpatialSound({}),

            new StreamAudioDestination({}),

            new StreamAudioSource({}),

            new WaveShaper({}),

            new TimeSensor({}),

            new CADAssembly({}),

            new CADFace({}),

            new CADLayer({}),

            new CADPart({}),

            new DISEntityManager({}),

            new DISEntityTypeMapping({}),

            new EspduTransform({}),

            new ReceiverPdu({}),

            new SignalPdu({}),

            new TransmitterPdu({}),

            new BooleanFilter({}),

            new BooleanSequencer({}),

            new BooleanToggle({}),

            new BooleanTrigger({}),

            new IntegerSequencer({}),

            new IntegerTrigger({}),

            new TimeTrigger({}),

            new KeySensor({
              enabled : new SFBool(false)}),

            new StringSensor({}),

            new TextureProjector({
              ambientIntensity : new SFFloat(0),
              color : new SFColor([1,1,1]),
              fieldOfView : new SFFloat(0.7854),
              intensity : new SFFloat(0.7854),
              upVector : new SFVec3f([0,1,0])}),

            new TextureProjectorParallel({
              ambientIntensity : new SFFloat(0),
              color : new SFColor([1,1,1]),
              intensity : new SFFloat(0.7854),
              upVector : new SFVec3f([0,1,0])}),

            new HAnimHumanoid({
              version : new SFString("2.0")}),

            new HAnimJoint({
              ulimit : new MFFloat([0,0,0]),
              llimit : new MFFloat([0,0,0])}),

            new HAnimPose({
              loa : new SFInt32(-1),
              transitionDuration : new SFTime(0)}),

            new HAnimSegment({}),

            new HAnimSite({}),

            new ParticleSystem({}),

            new Script({}),

            new FontLibrary({}),

            new CollidableOffset({}),

            new CollidableShape({}),

            new CollisionSensor({}),

            new CollisionSpace({}),

            new RigidBodyCollection({}),

            new IsoSurfaceVolumeData({}),

            new SegmentedVolumeData({}),

            new VolumeData({}),

            new GeoLOD({}),

            new GeoLocation({}),

            new GeoMetadata({}),

            new GeoPositionInterpolator({}),

            new GeoProximitySensor({}),

            new GeoTouchSensor({}),

            new GeoTransform({}),

            new GeoViewpoint({}),

            new ContourPolyline2D({}),

            new NurbsCurve2D({}),

            new NurbsOrientationInterpolator({}),

            new NurbsPositionInterpolator({}),

            new NurbsSet({}),

            new NurbsSurfaceInterpolator({}),

            new LayoutGroup({}),

            new ScreenGroup({}),

            new LinePickSensor({}),

            new PickableGroup({}),

            new PointPickSensor({}),

            new PrimitivePickSensor({}),

            new VolumePickSensor({})}))});
console.log(X3D0.toXMLNode());
