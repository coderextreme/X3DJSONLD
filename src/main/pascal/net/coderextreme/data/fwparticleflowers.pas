unit fwparticleflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createfwparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group14: TGroupNode;
  WorldInfo15: TWorldInfoNode;
  NavigationInfo16: TNavigationInfoNode;
  Viewpoint17: TViewpointNode;
  Background18: TBackgroundNode;
  Transform19: TTransformNode;
  ParticleSystem20: TParticleSystemNode;
  BoundedPhysicsModel21: TBoundedPhysicsModelNode;
  Sphere22: TSphereNode;
  ExplosionEmitter23: TExplosionEmitterNode;
  Sphere24: TSphereNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ComposedShader34: TComposedShaderNode;
  FieldVal35: TSFVec3f;
  FieldVal36: TSFNode;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  ShaderPart47: TShaderPartNode;
  ShaderPart48: TShaderPartNode;
  Script49: TScriptNode;
  FieldVal50: TSFVec3f;
  FieldVal51: TSFVec3f;
  FieldVal52: TX3DEvent;
  FieldVal53: TSFFloat;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  TimeSensor59: TTimeSensorNode;

procedure InitfwparticleflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['title'] := 'particleflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0, 0, 12);
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;
end;

procedure InitfwparticleflowersPart1;
begin
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 100;
BoundedPhysicsModel21.Geometry := Sphere22;
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
ParticleSystem20.Emitter := ExplosionEmitter23;
Sphere24 := TSphereNode.Create;
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material26.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture27.X3DName := 'texture';
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture27.FdBackTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture27.FdBottomTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture27.FdFrontTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture27.FdLeftTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture27.FdRightTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture27.FdTopTexture.Set(ImageTexture33);
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.X3DName := 'fw';
ComposedShader34.Language := 'GLSL';
FieldVal35 := TSFVec3f.Create(ComposedShader34, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
end;

procedure InitfwparticleflowersPart2;
begin
ComposedShader34.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFNode.CreateUndefined(ComposedShader34, True, 'cube');
ComposedShader34.AddCustomFieldOrEvent(FieldVal36);
FieldVal36.Value := ComposedCubeMapTexture27;
FieldVal38 := TSFFloat.Create(ComposedShader34, True, 'bias', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader34, True, 'scale', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader34, True, 'power', 2);
ComposedShader34.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader34, True, 'a', 2);
ComposedShader34.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader34, True, 'b', 1);
ComposedShader34.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader34, True, 'c', 5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader34, True, 'd', 5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader34, True, 'tdelta', 0);
ComposedShader34.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader34, True, 'pdelta', 0);
ComposedShader34.AddCustomFieldOrEvent(FieldVal46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
ComposedShader34.Parts := ShaderPart48;
Appearance25.AddChildren([ComposedShader34]);
ParticleSystem20.Appearance := Appearance25;
Transform19.FdChildren.Add(ParticleSystem20);
Script49 := TScriptNode.Create;
Script49.X3DName := 'Animate';
FieldVal50 := TSFVec3f.Create(Script49, True, 'translation', Vector3(0, 0, 0));
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.Create(Script49, True, 'velocity', Vector3(0, 0, 0));
Script49.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(Script49, 'set_fraction', True);
end;

procedure InitfwparticleflowersPart3;
begin
Script49.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.Create(Script49, True, 'a', 0.5);
Script49.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.Create(Script49, True, 'b', 0.5);
Script49.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script49, True, 'c', 3);
Script49.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script49, True, 'd', 3);
Script49.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script49, True, 'tdelta', 0.5);
Script49.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.Create(Script49, True, 'pdelta', 0.5);
Script49.AddCustomFieldOrEvent(FieldVal58);
Script49.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '			function initialize() {' + LineEnding +
  '			    translation = new SFVec3f(0, 0, 0);' + LineEnding +
  '			    velocity = new SFVec3f(' + LineEnding +
  '			    	Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5);' + LineEnding +
  '			}' + LineEnding +
  '			function set_fraction() {' + LineEnding +
  '			    translation = new SFVec3f(' + LineEnding +
  '			    	translation.x + velocity.x,' + LineEnding +
  '				translation.y + velocity.y,' + LineEnding +
  '				translation.z + velocity.z);' + LineEnding +
  '			    for (var j = 0; j <= 2; j++) {' + LineEnding +
  '				    if (Math.abs(translation.x) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.y) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.z) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else {' + LineEnding +
  '					velocity.x += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.y += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.z += Math.random() * 0.2 - 0.1;' + LineEnding +
  '				    }' + LineEnding +
  '			    }' + LineEnding +
  '			    animate_flowers();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function animate_flowers(fraction, eventTime) {' + LineEnding +
  '				var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '				switch (choice) {' + LineEnding +
  '				case 0:' + LineEnding +
  '					a += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 1:' + LineEnding +
  '					b += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 2:' + LineEnding +
  '					c += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 3:' + LineEnding +
  '					d += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				}' + LineEnding +
  '				tdelta = tdelta + 0.05;' + LineEnding +
  '				pdelta = pdelta + 0.05;' + LineEnding +
  '				if (a > 1) {' + LineEnding +
  '					a =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (b > 1) {' + LineEnding +
  '					b =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (c < 1) {' + LineEnding +
  '					c =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d < 1) {' + LineEnding +
  '					d =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (c > 10) {' + LineEnding +
  '					c = 4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d > 10) {' + LineEnding +
  '					d = 4;' + LineEnding +
  '				}' + LineEnding +
  '			}');
Transform19.FdChildren.Add(Script49);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.X3DName := 'TourTime';
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
Transform19.FdChildren.Add(TimeSensor59);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform19.AddRoute(TimeSensor59.EventFraction_changed, FieldVal52);
{ ROUTE Animate.a TO fw.a }
Transform19.AddRoute(FieldVal53, ComposedShader34.a);
{ ROUTE Animate.b TO fw.b }
Transform19.AddRoute(FieldVal54, ComposedShader34.b);
{ ROUTE Animate.c TO fw.c }
Transform19.AddRoute(FieldVal55, ComposedShader34.c);
{ ROUTE Animate.d TO fw.d }
Transform19.AddRoute(FieldVal56, ComposedShader34.d);
{ ROUTE Animate.pdelta TO fw.pdelta }
Transform19.AddRoute(FieldVal58, ComposedShader34.pdelta);
{ ROUTE Animate.tdelta TO fw.tdelta }
Transform19.AddRoute(FieldVal57, ComposedShader34.tdelta);
Group14.FdChildren.Add(Transform19);
X3D0.AddChildren([Group14]);
end;

function Createfwparticleflowers: TX3DRootNode;
begin
  InitfwparticleflowersPart0;
  InitfwparticleflowersPart1;
  InitfwparticleflowersPart2;
  InitfwparticleflowersPart3;
  Result := X3D0;
end;

begin
end.
