unit variationalflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createvariationalflowers: TX3DRootNode;

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
ExplosionEmitter21: TExplosionEmitterNode;
Sphere22: TSphereNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
ComposedCubeMapTexture25: TComposedCubeMapTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ComposedShader32: TComposedShaderNode;
SFVec3f33: TSFVec3f;
SFNode34: TSFNode;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
MFFloat39: TMFFloat;
ShaderPart40: TShaderPartNode;
ShaderPart41: TShaderPartNode;
Script42: TScriptNode;
SFFloat43: TSFFloat;
MFFloat44: TMFFloat;
MFFloat45: TMFFloat;
SFFloat46: TSFFloat;
SFFloat47: TSFFloat;
TimeSensor48: TTimeSensorNode;

procedure InitvariationalflowersPart0;
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
X3D0.Meta['title'] := 'particleflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'particleflowers.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
ParticleSystem20 := TParticleSystemNode.Create;
ParticleSystem20.MaxParticles := 100;
ParticleSystem20.GeometryType := 'GEOMETRY';
{ * values - array of MFFloats to pass to ComposedShader }
{ * variations in values - array of MFFloats to pass to ComposedShader that varies values }
{ * lastFrame - last frame that was rendered (0 for default) }
{ * updateRate - update rate is amount of time between frames }
{ <VariationPhysicsModel values="2 2 5 5 0 0" varations="2 1 3 3 0.1 0.1" lastFrame='0' updateRate='0.1'> }
{ </VariationPhysicsModel> }
ExplosionEmitter21 := TExplosionEmitterNode.Create;
end;

procedure InitvariationalflowersPart1;
begin

ExplosionEmitter21.Speed := 1;
ExplosionEmitter21.Variation := 0.75;
{ METHOD .Emitter }
ParticleSystem20.Emitter := ExplosionEmitter21;
Sphere22 := TSphereNode.Create;
{ METHOD .Geometry }
ParticleSystem20.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
{ METHOD .Texture }
Appearance23.Texture := ComposedCubeMapTexture25;
{ <ComposedShader language='GLSL'> }
{ <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
{ <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> }
{ <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> }
{ <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/freewrl.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF="shader" language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <ShaderPart url='"../shaders/castle.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'/> }
{ <ShaderPart type='FRAGMENT' url='"../shaders/castle.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"'/> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
SFVec3f33 := TSFVec3f.CreateUndefined(ComposedShader32, false, 'chromaticDispertion');
SFVec3f33.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader32.AddSFVec3f([SFVec3f33]);
SFNode34 := TSFNode.CreateUndefined(ComposedShader32, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode34.AddComposedCubeMapTexture([ComposedCubeMapTexture25]);
{ METHOD .AddSFNode }
ComposedShader32.AddSFNode([SFNode34]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader32, false, 'bias');
SFFloat36.Value := '0.5';
end;

procedure InitvariationalflowersPart2;
begin

{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader32, false, 'scale');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader32, false, 'power');
SFFloat38.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat38]);
MFFloat39 := TMFFloat.CreateUndefined(ComposedShader32, false, 'x3d_ParticleValues');
MFFloat39.Value := '2 1 4 4 0 0';
{ METHOD .AddMFFloat }
ComposedShader32.AddMFFloat([MFFloat39]);
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.SetUrl(['../shaders/x_ite_variations.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs']);
ShaderPart40.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader32.Parts := ShaderPart40;
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/commonnew.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart41.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader32.Parts := ShaderPart41;
{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader32]);
{ METHOD .Appearance }
ParticleSystem20.Appearance := Appearance23;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(ParticleSystem20);
Script42 := TScriptNode.Create;
SFFloat43 := TSFFloat.CreateUndefined(Script42, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script42.AddCustomField(SFFloat43);
MFFloat44 := TMFFloat.CreateUndefined(Script42, false, 'values');
MFFloat44.Value := '2 2 5 5 0 0';
{ METHOD .Fd.AddCustomField }
Script42.AddCustomField(MFFloat44);
MFFloat45 := TMFFloat.CreateUndefined(Script42, false, 'variations');
MFFloat45.Value := '0.2 0.1 0.3 0.3 0.01 0.01';
{ METHOD .Fd.AddCustomField }
Script42.AddCustomField(MFFloat45);
SFFloat46 := TSFFloat.CreateUndefined(Script42, false, 'lastframe');
SFFloat46.Value := '0';
{ METHOD .Fd.AddCustomField }
Script42.AddCustomField(SFFloat46);
SFFloat47 := TSFFloat.CreateUndefined(Script42, false, 'updaterate');
SFFloat47.Value := '0.1';
{ METHOD .Fd.AddCustomField }
Script42.AddCustomField(SFFloat47);

Script42.SetSourceCode('''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}''');
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Script42);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.CycleInterval := 45;
TimeSensor48.Loop := True;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(TimeSensor48);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform19.AddRoute(TimeSensor48.EventFraction_changed, Script42.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventValues TO x_ite.x3d_ParticleValues }
{ Sample Animate.EventValues TO x_ite.x3d_ParticleValues}
Transform19.AddRoute(Script42.EventValues, ComposedShader32.set_x3d_ParticleValues);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createvariationalflowers: TX3DRootNode;
begin
InitvariationalflowersPart0;
InitvariationalflowersPart1;
InitvariationalflowersPart2;
Result := X3D0;
end;

begin
end.
