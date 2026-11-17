unit flowers;

interface

uses X3DNodes;

function Createflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
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
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
ShaderPart45: TShaderPartNode;
ShaderPart46: TShaderPartNode;
Sphere47: TSphereNode;
Script48: TScriptNode;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
TimeSensor58: TTimeSensorNode;
X3DPrototype67: TX3DPrototypeNode;
X3DPrototype68: TX3DPrototypeNode;
X3DPrototype69: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group16.AddChildren([Background18]);
X3DPrototype19 := TX3DPrototype.Create;
X3DPrototype19.NameField := 'flower';
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
{ <ComposedShader DEF='x3dom' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"'></ShaderPart> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'cube';
X3DField33.Type := 'SFNode';
X3DField33.AccessType := 'inputOutput';
ComposedCubeMapTexture34 := ComposedCubeMapTexture25;
{ .SetComposedCubeMapTexture }
X3DField33.ComposedCubeMapTexture := ComposedCubeMapTexture34;
{ .SetX3DField }
ComposedShader32.X3DField := X3DField33;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'chromaticDispertion';
X3DField35.AccessType := 'initializeOnly';
X3DField35.Type := 'SFVec3f';
X3DField35.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'bias';
X3DField36.Type := 'SFFloat';
X3DField36.AccessType := 'inputOnly';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'scale';
X3DField37.Type := 'SFFloat';
X3DField37.AccessType := 'inputOnly';
X3DField37.Value := '0.5';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'power';
X3DField38.Type := 'SFFloat';
X3DField38.AccessType := 'inputOnly';
X3DField38.Value := '2';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'a';
X3DField39.Type := 'SFFloat';
X3DField39.AccessType := 'inputOnly';
X3DField39.Value := '10';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'b';
X3DField40.Type := 'SFFloat';
X3DField40.AccessType := 'inputOnly';
X3DField40.Value := '1';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'c';
X3DField41.Type := 'SFFloat';
X3DField41.AccessType := 'inputOnly';
X3DField41.Value := '20';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'd';
X3DField42.Type := 'SFFloat';
X3DField42.AccessType := 'inputOnly';
X3DField42.Value := '20';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'tdelta';
X3DField43.Type := 'SFFloat';
X3DField43.AccessType := 'inputOnly';
X3DField43.Value := '0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'pdelta';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOnly';
X3DField44.Value := '0';
{ .AddX3DField }
ComposedShader32.X3DField := X3DField44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart45.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart45;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart46.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart46;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere47 := TSphereNode.Create;
{ .SetGeometry }
Shape22.Geometry := Sphere47;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .SetTransform }
X3DPrototype20.Transform := Transform21;
Script48 := TScriptNode.Create;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'translation';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'SFVec3f';
X3DField49.Value := '0 0 0';
{ .SetX3DField }
Script48.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'velocity';
X3DField50.AccessType := 'inputOutput';
X3DField50.Type := 'SFVec3f';
X3DField50.Value := '0 0 0';
{ .AddX3DField }
Script48.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'set_fraction';
X3DField51.AccessType := 'inputOnly';
X3DField51.Type := 'SFFloat';
{ .AddX3DField }
Script48.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'a';
X3DField52.Type := 'SFFloat';
X3DField52.AccessType := 'inputOutput';
X3DField52.Value := '0.5';
{ .AddX3DField }
Script48.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'b';
X3DField53.Type := 'SFFloat';
X3DField53.AccessType := 'inputOutput';
X3DField53.Value := '0.5';
{ .AddX3DField }
Script48.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'c';
X3DField54.Type := 'SFFloat';
X3DField54.AccessType := 'inputOutput';
X3DField54.Value := '3';
{ .AddX3DField }
Script48.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'd';
X3DField55.Type := 'SFFloat';
X3DField55.AccessType := 'inputOutput';
X3DField55.Value := '3';
{ .AddX3DField }
Script48.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'tdelta';
X3DField56.Type := 'SFFloat';
X3DField56.AccessType := 'inputOutput';
X3DField56.Value := '0.5';
{ .AddX3DField }
Script48.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'pdelta';
X3DField57.Type := 'SFFloat';
X3DField57.AccessType := 'inputOutput';
X3DField57.Value := '0.5';
{ .AddX3DField }
Script48.X3DField := X3DField57;

Script48.SetSourceCode('''ecmascript:\n"+
"\n"+
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
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''');
{ .AddScript }
X3DPrototype20.Script := Script48;
TimeSensor58 := TTimeSensorNode.Create;
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
{ .AddTimeSensor }
X3DPrototype20.TimeSensor := TimeSensor58;
X3DPrototype20.AddRoute(TimeSensor58.EventFraction_changed, Script48.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdA, ComposedShader32.FdA);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdB, ComposedShader32.FdB);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdC, ComposedShader32.FdC);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdD, ComposedShader32.FdD);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdPdelta, ComposedShader32.FdPdelta);
{ .AddX3DRoute }
X3DPrototype20.AddRoute(Script48.FdTdelta, ComposedShader32.FdTdelta);
{ .AddX3DRoute }
{ <ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> }
{ <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> }
{ <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> }
{ <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> }
{ <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> }
{ <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/> }
{ .SetX3DPrototype }
X3DPrototype19.X3DPrototype := X3DPrototype20;
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype19;
X3DPrototype67 := TX3DPrototypeNode.Create;
X3DPrototype67.NameField := 'flower';
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype67;
X3DPrototype68 := TX3DPrototypeNode.Create;
X3DPrototype68.NameField := 'flower';
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype68;
X3DPrototype69 := TX3DPrototypeNode.Create;
X3DPrototype69.NameField := 'flower';
{ .AddX3DPrototype }
Group16.X3DPrototype := X3DPrototype69;
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
