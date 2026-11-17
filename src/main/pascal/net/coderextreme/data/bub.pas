unit bub;

interface

uses X3DNodes;

function Createbub: TX3DRootNode;

implementation

uses CastleVectors;

function Createbub: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
X3DPrototype19: TX3DPrototype;
X3DPrototype20: TX3DPrototype;
Transform21: TTransformNode;
Shape22: TShapeNode;
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
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
X3DField41: TX3DField;
ComposedCubeMapTexture42: TComposedCubeMapTextureNode;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
TimeSensor54: TTimeSensorNode;
X3DPrototype57: TX3DPrototypeNode;
X3DPrototype58: TX3DPrototypeNode;
X3DPrototype59: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'bub.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0,0,20);
Viewpoint18.Description := 'Look at the bubbles flying';
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
X3DPrototype19 := TX3DPrototype.Create;
X3DPrototype19.NameField := 'Bubble';
X3DPrototype20 := TX3DPrototype.Create;
Transform21 := TTransformNode.Create;
Shape22 := TShapeNode.Create;
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
{ <ComposedShader DEF='gl' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='freewrl' language="GLSL"> }
{ <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='instant' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'cube';
X3DField33.Type := 'SFInt32';
X3DField33.AccessType := 'inputOutput';
X3DField33.Value := '0';
{ .SetX3DField }
ComposedShader32.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'chromaticDispertion';
X3DField34.Type := 'SFVec3f';
X3DField34.AccessType := 'inputOutput';
X3DField34.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'bias';
X3DField35.Type := 'SFFloat';
X3DField35.AccessType := 'inputOutput';
X3DField35.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'scale';
X3DField36.Type := 'SFFloat';
X3DField36.AccessType := 'inputOutput';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'power';
X3DField37.Type := 'SFFloat';
X3DField37.AccessType := 'inputOutput';
X3DField37.Value := '2';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/pc_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs']);
ShaderPart39.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart39;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.Language := 'GLSL';
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'cube';
X3DField41.Type := 'SFNode';
X3DField41.AccessType := 'inputOutput';
ComposedCubeMapTexture42 := ComposedCubeMapTexture25;
{ .SetComposedCubeMapTexture }
X3DField41.ComposedCubeMapTexture := ComposedCubeMapTexture42;
{ .SetX3DField }
ComposedShader40.X3DField := X3DField41;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'chromaticDispertion';
X3DField43.Type := 'SFVec3f';
X3DField43.AccessType := 'inputOutput';
X3DField43.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'bias';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '0.5';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'scale';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '0.5';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'power';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '2';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_itebubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader40.Parts := ShaderPart48;
{ .AddShaders }
Appearance23.Shaders := ComposedShader40;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere49 := TSphereNode.Create;
{ .SetGeometry }
Shape22.Geometry := Sphere49;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .SetTransform }
X3DPrototype20.Transform := Transform21;
Script50 := TScriptNode.Create;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'translation';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
X3DField51.Value := '0 0 0';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'velocity';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFVec3f';
X3DField52.Value := '0 0 0';
{ .AddX3DField }
Script50.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'set_fraction';
X3DField53.AccessType := 'inputOnly';
X3DField53.Type := 'SFTime';
{ .AddX3DField }
Script50.X3DField := X3DField53;

Script50.SetSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}''');
{ .AddScript }
X3DPrototype20.Script := Script50;
TimeSensor54 := TTimeSensorNode.Create;
TimeSensor54.CycleInterval := 0.15;
TimeSensor54.Loop := True;
{ .AddTimeSensor }
X3DPrototype20.TimeSensor := TimeSensor54;
X3DPrototype20.AddRoute(TimeSensor54.FdCycletime, Script50.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script50.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
{ .SetX3DPrototype }
X3DPrototype19.X3DPrototype := X3DPrototype20;
{ .AddX3DPrototype }
Group15.X3DPrototype := X3DPrototype19;
X3DPrototype57 := TX3DPrototypeNode.Create;
X3DPrototype57.NameField := 'Bubble';
{ .AddX3DPrototype }
Group15.X3DPrototype := X3DPrototype57;
X3DPrototype58 := TX3DPrototypeNode.Create;
X3DPrototype58.NameField := 'Bubble';
{ .AddX3DPrototype }
Group15.X3DPrototype := X3DPrototype58;
X3DPrototype59 := TX3DPrototypeNode.Create;
X3DPrototype59.NameField := 'Bubble';
{ .AddX3DPrototype }
Group15.X3DPrototype := X3DPrototype59;
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
