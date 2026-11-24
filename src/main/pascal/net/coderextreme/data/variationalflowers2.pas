unit variationalflowers2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createvariationalflowers2: TX3DRootNode;

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
VariationPhysicsModel21: TVariationPhysicsModelNode;
ExplosionEmitter22: TExplosionEmitterNode;
Sphere23: TSphereNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ComposedShader33: TComposedShaderNode;
SFVec3f34: TSFVec3f;
SFNode35: TSFNode;
ComposedCubeMapTexture36: TComposedCubeMapTextureNode;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
MFFloat40: TMFFloat;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
Script43: TScriptNode;
SFFloat44: TSFFloat;
MFFloat45: TMFFloat;
MFFloat46: TMFFloat;
SFFloat47: TSFFloat;
SFFloat48: TSFFloat;
TimeSensor49: TTimeSensorNode;

procedure Initvariationalflowers2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Components['ParticleSystems'] := 3;
{ METHOD .Component }
X3D0.Meta['title'] := 'variationalflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower particle system';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;;
WorldInfo15 := TWorldInfoNode.Create;;
WorldInfo15.Title := 'variationalflowers.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
end;

procedure Initvariationalflowers2Part1;
begin

Transform19 := TTransformNode.Create;;
ParticleSystem20 := TParticleSystemNode.Create;;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
{ * values - array of MFFloats to pass to ComposedShader }
{ * variations in values - array of MFFloats to pass to ComposedShader that varies values }
VariationPhysicsModel21 := TVariationPhysicsModelNode.Create;;
VariationPhysicsModel21.Values := '2 2 5 5 0 0';
VariationPhysicsModel21.Variations := '0.2 0.1 0.3 0.3 0.01 0.01';
{ METHOD .AddVariationPhysicsModel }
ParticleSystem20.AddVariationPhysicsModel([VariationPhysicsModel21]);
ExplosionEmitter22 := TExplosionEmitterNode.Create;;
ExplosionEmitter22.Speed := 1;
ExplosionEmitter22.Variation := 0.75;
{ METHOD .Emitter }
{ METHOD.SET .Emitter }
ParticleSystem20.Emitter := ExplosionEmitter22;
Sphere23 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
ParticleSystem20.Geometry := Sphere23;
Appearance24 := TAppearanceNode.Create;;
Material25 := TMaterialNode.Create;;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;;
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture26.FdBackTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture26.FdBottomTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture26.FdFrontTexture.Set(ImageTexture29);
end;

procedure Initvariationalflowers2Part2;
begin

ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture26.FdLeftTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture26.FdRightTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture26.FdTopTexture.Set(ImageTexture32);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;;
ComposedShader33.Language := 'GLSL';
SFVec3f34 := TSFVec3f.CreateUndefined(ComposedShader33, false, 'chromaticDispertion');
SFVec3f34.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader33.AddSFVec3f([SFVec3f34]);
SFNode35 := TSFNode.CreateUndefined(ComposedShader33, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode35.AddComposedCubeMapTexture([ComposedCubeMapTexture26]);
{ METHOD .AddSFNode }
ComposedShader33.AddSFNode([SFNode35]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader33, false, 'bias');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader33, false, 'scale');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader33, false, 'power');
SFFloat39.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat39]);
MFFloat40 := TMFFloat.CreateUndefined(ComposedShader33, false, 'x3d_ParticleValues');
MFFloat40.Value := '2 1 4 4 0 0';
{ METHOD .AddMFFloat }
ComposedShader33.AddMFFloat([MFFloat40]);
ShaderPart41 := TShaderPartNode.Create;;
ShaderPart41.SetUrl(['../shaders/x_ite_variations.vs']);
ShaderPart41.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader33.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
end;

procedure Initvariationalflowers2Part3;
begin
;
ShaderPart42.SetUrl(['../shaders/commonnew.fs']);
ShaderPart42.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader33.Parts := ShaderPart42;
{ METHOD .AddChildren }
Appearance24.AddChildren([ComposedShader33]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
ParticleSystem20.Appearance := Appearance24;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(ParticleSystem20);
Script43 := TScriptNode.Create;;
SFFloat44 := TSFFloat.CreateUndefined(Script43, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(SFFloat44);
MFFloat45 := TMFFloat.CreateUndefined(Script43, false, 'values');
MFFloat45.Value := '2 2 5 5 0 0';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(MFFloat45);
MFFloat46 := TMFFloat.CreateUndefined(Script43, false, 'variations');
MFFloat46.Value := '0.2 0.1 0.3 0.3 0.01 0.01';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(MFFloat46);
SFFloat47 := TSFFloat.CreateUndefined(Script43, false, 'lastframe');
SFFloat47.Value := '0';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(SFFloat47);
SFFloat48 := TSFFloat.CreateUndefined(Script43, false, 'updaterate');
SFFloat48.Value := '0.1';
{ METHOD .Fd.AddCustomField }
Script43.AddCustomField(SFFloat48);

Script43.SetSourceCode('''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}''');
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Script43);
TimeSensor49 := TTimeSensorNode.Create;;
TimeSensor49.CycleInterval := 45;
TimeSensor49.Loop := True;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(TimeSensor49);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform19.AddRoute(TimeSensor49.EventFraction_changed, Script43.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventValues TO x_ite.x3d_ParticleValues }
{ Sample Animate.EventValues TO x_ite.x3d_ParticleValues}
Transform19.AddRoute(Script43.EventValues, ComposedShader33.x3d_ParticleValues);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createvariationalflowers2: TX3DRootNode;
begin
Initvariationalflowers2Part0;
Initvariationalflowers2Part1;
Initvariationalflowers2Part2;
Initvariationalflowers2Part3;
Result := X3D0;
end;

begin
end.
