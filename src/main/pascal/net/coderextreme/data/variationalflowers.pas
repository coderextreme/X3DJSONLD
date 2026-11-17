unit variationalflowers;

interface

uses X3DNodes;

function Createvariationalflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createvariationalflowers: TX3DRootNode;
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
X3DField33: TX3DField;
X3DField34: TX3DField;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
ShaderPart40: TShaderPartNode;
ShaderPart41: TShaderPartNode;
Script42: TScriptNode;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
TimeSensor48: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ .AddChildren }
Group14.AddChildren([Viewpoint17]);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
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
ExplosionEmitter21.Speed := 1;
ExplosionEmitter21.Variation := 0.75;
{ .SetEmitter }
ParticleSystem20.Emitter := ExplosionEmitter21;
Sphere22 := TSphereNode.Create;
{ .SetGeometry }
ParticleSystem20.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
{ .SetTexture }
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
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'chromaticDispertion';
X3DField33.AccessType := 'initializeOnly';
X3DField33.Type := 'SFVec3f';
X3DField33.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader32.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'cube';
X3DField34.Type := 'SFNode';
X3DField34.AccessType := 'initializeOnly';
ComposedCubeMapTexture35 := ComposedCubeMapTexture25;
{ .SetComposedCubeMapTexture }
X3DField34.ComposedCubeMapTexture := ComposedCubeMapTexture35;
{ .AddX3DField }
ComposedShader32.X3DField := X3DField34;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'bias';
X3DField36.AccessType := 'initializeOnly';
X3DField36.Type := 'SFFloat';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'scale';
X3DField37.AccessType := 'initializeOnly';
X3DField37.Type := 'SFFloat';
X3DField37.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'power';
X3DField38.AccessType := 'initializeOnly';
X3DField38.Type := 'SFFloat';
X3DField38.Value := '2';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'x3d_ParticleValues';
X3DField39.Type := 'MFFloat';
X3DField39.AccessType := 'inputOutput';
X3DField39.Value := '2 1 4 4 0 0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField39;
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.SetUrl(['../shaders/x_ite_variations.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs']);
ShaderPart40.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart40;
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/commonnew.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs']);
ShaderPart41.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart41;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
{ .SetAppearance }
ParticleSystem20.Appearance := Appearance23;
{ .AddChildren }
Transform19.AddChildren([ParticleSystem20]);
Script42 := TScriptNode.Create;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'set_fraction';
X3DField43.AccessType := 'inputOnly';
X3DField43.Type := 'SFFloat';
{ .SetX3DField }
Script42.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'values';
X3DField44.Type := 'MFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '2 2 5 5 0 0';
{ .AddX3DField }
Script42.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'variations';
X3DField45.Type := 'MFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '0.2 0.1 0.3 0.3 0.01 0.01';
{ .AddX3DField }
Script42.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'lastframe';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '0';
{ .AddX3DField }
Script42.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'updaterate';
X3DField47.Type := 'SFFloat';
X3DField47.AccessType := 'inputOutput';
X3DField47.Value := '0.1';
{ .AddX3DField }
Script42.X3DField := X3DField47;

Script42.SetSourceCode('''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}''');
{ .AddChildren }
Transform19.AddChildren([Script42]);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.CycleInterval := 45;
TimeSensor48.Loop := True;
{ .AddChildren }
Transform19.AddChildren([TimeSensor48]);
Transform19.AddRoute(TimeSensor48.EventFraction_changed, Script42.EventSet_fraction);
{ .AddX3DRoute }
Transform19.AddRoute(Script42.FdValues, ComposedShader32.FdX3d_particlevalues);
{ .AddX3DRoute }
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
