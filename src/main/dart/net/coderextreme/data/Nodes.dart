// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.1'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('creator'),
              content_ : SFString('Holger Seelig')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('Tue, 10 Feb 2026 12:09:57 GMT')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Tue, 10 Feb 2026 12:34:21 GMT')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(),

            Background(),

            Fog(),

            LocalFog(),

            TextureBackground(),

            ProximitySensor(),

            TransformSensor(),

            VisibilitySensor(),

            ColorChaser(),

            ColorDamper(),

            CoordinateChaser(),

            CoordinateDamper(),

            OrientationChaser(),

            OrientationDamper(),

            PositionChaser(),

            PositionChaser2D(),

            PositionDamper(),

            PositionDamper2D(),

            ScalarChaser(),

            ScalarDamper(),

            TexCoordChaser2D(),

            TexCoordDamper2D(),

            Group(),

            StaticGroup(),

            Switch(
              whichChoice_ : -1),

            Transform(),

            ColorInterpolator(),

            CoordinateInterpolator(),

            CoordinateInterpolator2D(),

            EaseInEaseOut(),

            NormalInterpolator(),

            OrientationInterpolator(),

            PositionInterpolator(),

            PositionInterpolator2D(),

            ScalarInterpolator(),

            SplinePositionInterpolator(),

            SplinePositionInterpolator2D(),

            SplineScalarInterpolator(),

            SquadOrientationInterpolator(),
          layerSet_ : 
            LayerSet()],

            DirectionalLight(),

            EnvironmentLight(
              origin_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(0)])),

            PointLight(),

            SpotLight(
              beamWidth_ : 0.589049),

            Billboard(),

            Collision(),

            LOD(),

            NavigationInfo(),

            OrthoViewpoint(),

            Viewpoint(),

            ViewpointGroup(),

            Anchor(),

            Inline(),

            LoadSensor(),

            CylinderSensor(),

            PlaneSensor(),

            SphereSensor(),

            TouchSensor(),

            ClipPlane(),

            Shape(),

            Analyser(),

            AudioDestination(),

            BiquadFilter(
              type_ : SFString("LOWPASS")),

            BufferAudioSource(),

            ChannelMerger(),

            ChannelSelector(),

            ChannelSplitter(),

            Convolver(),

            Delay(),

            DynamicsCompressor(),

            Gain(),

            ListenerPointSource(),

            MicrophoneSource(),

            OscillatorSource(),

            Sound(),

            SpatialSound(),

            StreamAudioDestination(),

            StreamAudioSource(),

            WaveShaper(),

            TimeSensor(),

            CADAssembly(),

            CADFace(),

            CADLayer(),

            CADPart(),

            DISEntityManager(),

            DISEntityTypeMapping(),

            EspduTransform(),

            ReceiverPdu(),

            SignalPdu(),

            TransmitterPdu(),

            BooleanFilter(),

            BooleanSequencer(),

            BooleanToggle(),

            BooleanTrigger(),

            IntegerSequencer(),

            IntegerTrigger(),

            TimeTrigger(),

            KeySensor(
              enabled_ : false),

            StringSensor(),

            TextureProjector(
              ambientIntensity_ : 0,
              color_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
              fieldOfView_ : 0.7854,
              intensity_ : 0.7854,
              upVector_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)])),

            TextureProjectorParallel(
              ambientIntensity_ : 0,
              color_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
              intensity_ : 0.7854,
              upVector_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)])),

            HAnimHumanoid(
              version_ : SFString('2.0')),

            HAnimJoint(
              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

            HAnimPose(
              loa_ : -1,
              transitionDuration_ : 0),

            HAnimSegment(),

            HAnimSite(),

            ParticleSystem(),

            Script(),

            FontLibrary(),

            CollidableOffset(),

            CollidableShape(),

            CollisionSensor(),

            CollisionSpace(),

            RigidBodyCollection(),

            IsoSurfaceVolumeData(),

            SegmentedVolumeData(),

            VolumeData(),

            GeoLOD(),

            GeoLocation(),

            GeoMetadata(),

            GeoPositionInterpolator(),

            GeoProximitySensor(),

            GeoTouchSensor(),

            GeoTransform(),

            GeoViewpoint(),

            ContourPolyline2D(),

            NurbsCurve2D(),

            NurbsOrientationInterpolator(),

            NurbsPositionInterpolator(),

            NurbsSet(),

            NurbsSurfaceInterpolator(),

            LayoutGroup(),

            ScreenGroup(),

            LinePickSensor(),

            PickableGroup(),

            PointPickSensor(),

            PrimitivePickSensor(),

            VolumePickSensor()));
void main() { exit(0); }
