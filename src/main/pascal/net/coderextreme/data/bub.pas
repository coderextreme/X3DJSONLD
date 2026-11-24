unit bub;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbub: TX3DRootNode;

implementation

uses CastleVectors;

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
SFInt3233: TSFInt32;
SFVec3f34: TSFVec3f;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
SFNode41: TSFNode;
ComposedCubeMapTexture42: TComposedCubeMapTextureNode;
SFVec3f43: TSFVec3f;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
Sphere49: TSphereNode;
Script50: TScriptNode;
SFVec3f51: TSFVec3f;
SFVec3f52: TSFVec3f;
SFTime53: TSFTime;
TimeSensor54: TTimeSensorNode;
X3DPrototype57: TX3DPrototypeNode;
X3DPrototype58: TX3DPrototypeNode;
X3DPrototype59: TX3DPrototypeNode;

procedure InitbubPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
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
X3D0.Meta['title'] := 'bub.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 prismatic spheres';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
NavigationInfo16 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo16);
Background17 := TBackgroundNode.Create;;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background17);
Viewpoint18 := TViewpointNode.Create;;
Viewpoint18.Position := Vector3(0,0,20);
Viewpoint18.Description := 'Look at the bubbles flying';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint18);
X3DPrototype19 := TX3DPrototype.Create;;
X3DPrototype20 := TX3DPrototype.Create;;
end;

procedure InitbubPart1;
begin

Transform21 := TTransformNode.Create;;
Shape22 := TShapeNode.Create;;
Appearance23 := TAppearanceNode.Create;;
Material24 := TMaterialNode.Create;;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;;
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture25.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture25.FdBottomTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture25.FdFrontTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture25.FdLeftTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture25.FdRightTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture25.FdTopTexture.Set(ImageTexture31);
{ METHOD .Texture }
{ METHOD.SET .Texture }
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
ComposedShader32 := TComposedShaderNode.Create;;
end;

procedure InitbubPart2;
begin

ComposedShader32.Language := 'GLSL';
SFInt3233 := TSFInt32.CreateUndefined(ComposedShader32, false, 'cube');
SFInt3233.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader32.AddSFInt32([SFInt3233]);
SFVec3f34 := TSFVec3f.CreateUndefined(ComposedShader32, false, 'chromaticDispertion');
SFVec3f34.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader32.AddSFVec3f([SFVec3f34]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader32, false, 'bias');
SFFloat35.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader32, false, 'scale');
SFFloat36.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader32, false, 'power');
SFFloat37.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat37]);
ShaderPart38 := TShaderPartNode.Create;;
ShaderPart38.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;;
ShaderPart39.SetUrl(['../shaders/pc_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs']);
ShaderPart39.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart39;
{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader32]);
ComposedShader40 := TComposedShaderNode.Create;;
ComposedShader40.Language := 'GLSL';
SFNode41 := TSFNode.CreateUndefined(ComposedShader40, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode41.AddComposedCubeMapTexture([ComposedCubeMapTexture25]);
{ METHOD .AddSFNode }
ComposedShader40.AddSFNode([SFNode41]);
SFVec3f43 := TSFVec3f.CreateUndefined(ComposedShader40, false, 'chromaticDispertion');
SFVec3f43.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader40.AddSFVec3f([SFVec3f43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader40, false, 'bias');
SFFloat44.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader40, false, 'scale');
end;

procedure InitbubPart3;
begin

SFFloat45.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat45]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader40, false, 'power');
SFFloat46.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat46]);
ShaderPart47 := TShaderPartNode.Create;;
ShaderPart47.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;;
ShaderPart48.SetUrl(['../shaders/x_itebubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader40.Parts := ShaderPart48;
{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader40]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape22.Appearance := Appearance23;
Sphere49 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape22.Geometry := Sphere49;
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(Shape22);
{ METHOD .AddTransform }
X3DPrototype20.AddTransform([Transform21]);
Script50 := TScriptNode.Create;;
SFVec3f51 := TSFVec3f.CreateUndefined(Script50, false, 'translation');
SFVec3f51.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f51);
SFVec3f52 := TSFVec3f.CreateUndefined(Script50, false, 'velocity');
SFVec3f52.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f52);
SFTime53 := TSFTime.CreateUndefined(Script50, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFTime53);

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
{ METHOD .AddScript }
X3DPrototype20.AddScript([Script50]);
TimeSensor54 := TTimeSensorNode.Create;;
TimeSensor54.CycleInterval := 0.15;
TimeSensor54.Loop := True;
{ METHOD .AddTimeSensor }
X3DPrototype20.AddTimeSensor([TimeSensor54]);
{ Original "TourTime.EventCycleTime TO Bounce.EventSet_fraction }
{ Sample TourTime.EventCycleTime TO Bounce.EventSet_fraction}
X3DPrototype20.AddRoute(TimeSensor54.EventCycleTime, Script50.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Bounce.EventTranslation_changed TO transform.FdTranslation.EventIn }
{ Sample Bounce.EventTranslation_changed TO transform.FdTranslation.EventIn}
X3DPrototype20.AddRoute(Script50.EventTranslation_changed, Transform21.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype20]);
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype19]);
X3DPrototype57 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype57]);
X3DPrototype58 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype58]);
X3DPrototype59 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group15.AddX3DPrototype([X3DPrototype59]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createbub: TX3DRootNode;
begin
InitbubPart0;
InitbubPart1;
InitbubPart2;
InitbubPart3;
Result := X3D0;
end;

begin
end.
