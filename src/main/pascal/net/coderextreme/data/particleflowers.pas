unit particleflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  NavigationInfo17: TNavigationInfoNode;
  Viewpoint18: TViewpointNode;
  Background19: TBackgroundNode;
  Group20: TGroupNode;
  ParticleSystem21: TParticleSystemNode;
  BoundedPhysicsModel22: TBoundedPhysicsModelNode;
  Sphere23: TSphereNode;
  ExplosionEmitter24: TExplosionEmitterNode;
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
  Sphere49: TSphereNode;
  Script50: TScriptNode;
  FieldVal51: TSFVec3f;
  FieldVal52: TSFVec3f;
  FieldVal53: TX3DEvent;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  FieldVal59: TSFFloat;
  TimeSensor60: TTimeSensorNode;

procedure InitparticleflowersPart0;
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
X3D0.Meta['description'] := 'A flower particle system';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
X3D0.Meta['generator'] := 'Vim';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'particleflowers.x3d';
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0, 0, 12);
Group15.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background19);
Group20 := TGroupNode.Create;
ParticleSystem21 := TParticleSystemNode.Create;
ParticleSystem21.MaxParticles := 20;
ParticleSystem21.GeometryType := 'GEOMETRY';
end;

procedure InitparticleflowersPart1;
begin
BoundedPhysicsModel22 := TBoundedPhysicsModelNode.Create;
Sphere23 := TSphereNode.Create;
Sphere23.Radius := 100;
BoundedPhysicsModel22.Geometry := Sphere23;
ParticleSystem21.Physics := BoundedPhysicsModel22;
ExplosionEmitter24 := TExplosionEmitterNode.Create;
ExplosionEmitter24.Speed := 2;
ExplosionEmitter24.Variation := 0.75;
ParticleSystem21.Emitter := ExplosionEmitter24;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material26.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture27.X3DName := 'texture';
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture27.FdBackTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture27.FdBottomTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture27.FdFrontTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture27.FdLeftTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture27.FdRightTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture27.FdTopTexture.Set(ImageTexture33);
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;
ComposedShader34.X3DName := 'x_ite';
ComposedShader34.Language := 'GLSL';
FieldVal35 := TSFVec3f.Create(ComposedShader34, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader34.AddCustomFieldOrEvent(FieldVal35);
end;

procedure InitparticleflowersPart2;
begin
FieldVal36 := TSFNode.CreateUndefined(ComposedShader34, False, 'cube');
ComposedShader34.AddCustomFieldOrEvent(FieldVal36);
FieldVal36.Value := ComposedCubeMapTexture27;
FieldVal38 := TSFFloat.Create(ComposedShader34, False, 'bias', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader34, False, 'scale', 0.5);
ComposedShader34.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader34, False, 'power', 2);
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
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs', '../shaders/x_ite_flower_particles.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
ComposedShader34.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs', '../shaders/commonnew.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
ComposedShader34.Parts := ShaderPart48;
Appearance25.AddChildren([ComposedShader34]);
ParticleSystem21.Appearance := Appearance25;
Sphere49 := TSphereNode.Create;
ParticleSystem21.Geometry := Sphere49;
Group20.FdChildren.Add(ParticleSystem21);
Script50 := TScriptNode.Create;
Script50.X3DName := 'Animate';
FieldVal51 := TSFVec3f.Create(Script50, True, 'translation', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.Create(Script50, True, 'velocity', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal52);
end;

procedure InitparticleflowersPart3;
begin
FieldVal53 := TSFFloat.CreateEvent(Script50, 'set_fraction', True);
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.Create(Script50, True, 'a', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script50, True, 'b', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script50, True, 'c', 3);
Script50.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script50, True, 'd', 3);
Script50.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.Create(Script50, True, 'tdelta', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.Create(Script50, True, 'pdelta', 0.5);
Script50.AddCustomFieldOrEvent(FieldVal59);
Script50.SetSourceCode('ecmascript:' + LineEnding +
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
Group20.FdChildren.Add(Script50);
TimeSensor60 := TTimeSensorNode.Create;
TimeSensor60.X3DName := 'TourTime';
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
Group20.FdChildren.Add(TimeSensor60);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Group20.AddRoute(TimeSensor60.EventFraction_changed, FieldVal53);
{ ROUTE Animate.a TO x_ite.a }
Group20.AddRoute(FieldVal54, ComposedShader34.a);
{ ROUTE Animate.b TO x_ite.b }
Group20.AddRoute(FieldVal55, ComposedShader34.b);
{ ROUTE Animate.c TO x_ite.c }
Group20.AddRoute(FieldVal56, ComposedShader34.c);
{ ROUTE Animate.d TO x_ite.d }
Group20.AddRoute(FieldVal57, ComposedShader34.d);
{ ROUTE Animate.pdelta TO x_ite.pdelta }
Group20.AddRoute(FieldVal59, ComposedShader34.pdelta);
{ ROUTE Animate.tdelta TO x_ite.tdelta }
Group20.AddRoute(FieldVal58, ComposedShader34.tdelta);
Group15.FdChildren.Add(Group20);
X3D0.AddChildren([Group15]);
end;

function Createparticleflowers: TX3DRootNode;
begin
  InitparticleflowersPart0;
  InitparticleflowersPart1;
  InitparticleflowersPart2;
  InitparticleflowersPart3;
  Result := X3D0;
end;

begin
end.
