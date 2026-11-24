unit mirror2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createmirror2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
Viewpoint16: TViewpointNode;
Background17: TBackgroundNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
ComposedCubeMapTexture22: TComposedCubeMapTextureNode;
ImageTexture23: TImageTextureNode;
ImageTexture24: TImageTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ComposedShader29: TComposedShaderNode;
SFVec3f30: TSFVec3f;
SFInt3231: TSFInt32;
SFFloat32: TSFFloat;
SFFloat33: TSFFloat;
SFFloat34: TSFFloat;
ShaderPart35: TShaderPartNode;
ShaderPart36: TShaderPartNode;
ComposedShader37: TComposedShaderNode;
SFVec3f38: TSFVec3f;
SFInt3239: TSFInt32;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
ShaderPart43: TShaderPartNode;
ShaderPart44: TShaderPartNode;
Sphere45: TSphereNode;
Script46: TScriptNode;
MFString47: TMFString;
MFString48: TMFString;
MFString49: TMFString;
MFString50: TMFString;
MFString51: TMFString;
MFString52: TMFString;
MFString53: TMFString;
MFString54: TMFString;
MFString55: TMFString;
MFString56: TMFString;
MFString57: TMFString;
MFString58: TMFString;
SFFloat59: TSFFloat;
SFInt3260: TSFInt32;
TimeSensor61: TTimeSensorNode;

procedure Initmirror2Part0;
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
X3D0.Meta['title'] := 'mirror2.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a mirrored sphere';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
Viewpoint16 := TViewpointNode.Create;;
Viewpoint16.Position := Vector3(0,5,100);
Viewpoint16.Description := 'Switch background and images texture';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint16);
Background17 := TBackgroundNode.Create;;
Background17.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background17.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background17.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background17);
Transform18 := TTransformNode.Create;;
Shape19 := TShapeNode.Create;;
Appearance20 := TAppearanceNode.Create;;
Material21 := TMaterialNode.Create;
end;

procedure Initmirror2Part1;
begin
;
Material21.DiffuseColor := Vector3(0.7,0.7,0.7);
Material21.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance20.Material := Material21;
ComposedCubeMapTexture22 := TComposedCubeMapTextureNode.Create;;
ImageTexture23 := TImageTextureNode.Create;;
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture22.FdBackTexture.Set(ImageTexture23);
ImageTexture24 := TImageTextureNode.Create;;
ImageTexture24.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture22.FdBottomTexture.Set(ImageTexture24);
ImageTexture25 := TImageTextureNode.Create;;
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture22.FdFrontTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture22.FdLeftTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture22.FdRightTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture22.FdTopTexture.Set(ImageTexture28);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance20.Texture := ComposedCubeMapTexture22;
ComposedShader29 := TComposedShaderNode.Create;;
ComposedShader29.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
SFVec3f30 := TSFVec3f.CreateUndefined(ComposedShader29, false, 'chromaticDispertion');
SFVec3f30.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader29.AddSFVec3f([SFVec3f30]);
SFInt3231 := TSFInt32.CreateUndefined(ComposedShader29, false, 'cube');
SFInt3231.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader29.AddSFInt32([SFInt3231]);
end;

procedure Initmirror2Part2;
begin

SFFloat32 := TSFFloat.CreateUndefined(ComposedShader29, false, 'bias');
SFFloat32.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader29.AddSFFloat([SFFloat32]);
SFFloat33 := TSFFloat.CreateUndefined(ComposedShader29, false, 'scale');
SFFloat33.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader29.AddSFFloat([SFFloat33]);
SFFloat34 := TSFFloat.CreateUndefined(ComposedShader29, false, 'power');
SFFloat34.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader29.AddSFFloat([SFFloat34]);
ShaderPart35 := TShaderPartNode.Create;;
ShaderPart35.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart35.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader29.Parts := ShaderPart35;
ShaderPart36 := TShaderPartNode.Create;;
ShaderPart36.SetUrl(['../shaders/x_itemix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart36.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader29.Parts := ShaderPart36;
{ METHOD .AddChildren }
Appearance20.AddChildren([ComposedShader29]);
ComposedShader37 := TComposedShaderNode.Create;;
ComposedShader37.Language := 'GLSL';
SFVec3f38 := TSFVec3f.CreateUndefined(ComposedShader37, false, 'chromaticDispertion');
SFVec3f38.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader37.AddSFVec3f([SFVec3f38]);
SFInt3239 := TSFInt32.CreateUndefined(ComposedShader37, false, 'cube');
SFInt3239.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader37.AddSFInt32([SFInt3239]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader37, false, 'bias');
SFFloat40.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader37.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader37, false, 'scale');
SFFloat41.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader37.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader37, false, 'power');
SFFloat42.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader37.AddSFFloat([SFFloat42]);
ShaderPart43 := TShaderPartNode.Create;;
end;

procedure Initmirror2Part3;
begin

ShaderPart43.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart43.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader37.Parts := ShaderPart43;
ShaderPart44 := TShaderPartNode.Create;;
ShaderPart44.SetUrl(['../shaders/mix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart44.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader37.Parts := ShaderPart44;
{ METHOD .AddChildren }
Appearance20.AddChildren([ComposedShader37]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape19.Appearance := Appearance20;
Sphere45 := TSphereNode.Create;;
Sphere45.Radius := 30;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape19.Geometry := Sphere45;
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Shape19);
Script46 := TScriptNode.Create;;
Script46.DirectOutput := True;
MFString47 := TMFString.CreateUndefined(Script46, false, 'frontUrls');
MFString47.Value := '\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString47);
MFString48 := TMFString.CreateUndefined(Script46, false, 'backUrls');
MFString48.Value := '\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString48);
MFString49 := TMFString.CreateUndefined(Script46, false, 'leftUrls');
MFString49.Value := '\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString49);
MFString50 := TMFString.CreateUndefined(Script46, false, 'rightUrls');
MFString50.Value := '\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString50);
MFString51 := TMFString.CreateUndefined(Script46, false, 'topUrls');
MFString51.Value := '\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString51);
MFString52 := TMFString.CreateUndefined(Script46, false, 'bottomUrls');
MFString52.Value := '\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString52);
MFString53 := TMFString.CreateUndefined(Script46, false, 'front_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString53);
MFString54 := TMFString.CreateUndefined(Script46, false, 'back_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString54);
end;

procedure Initmirror2Part4;
begin

MFString55 := TMFString.CreateUndefined(Script46, false, 'left_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString55);
MFString56 := TMFString.CreateUndefined(Script46, false, 'right_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString56);
MFString57 := TMFString.CreateUndefined(Script46, false, 'top_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString57);
MFString58 := TMFString.CreateUndefined(Script46, false, 'bottom_changed');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(MFString58);
SFFloat59 := TSFFloat.CreateUndefined(Script46, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFFloat59);
SFInt3260 := TSFInt32.CreateUndefined(Script46, false, 'old');
SFInt3260.Value := '-1';
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFInt3260);

Script46.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''');
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Script46);
TimeSensor61 := TTimeSensorNode.Create;;
TimeSensor61.CycleInterval := 45;
TimeSensor61.Loop := True;
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(TimeSensor61);
{ Original "Clock.EventFraction_changed TO UrlSelector.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO UrlSelector.EventSet_fraction}
Transform18.AddRoute(TimeSensor61.EventFraction_changed, Script46.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventFront_changed TO cube.frontUrl }
{ Sample UrlSelector.EventFront_changed TO cube.frontUrl}
Transform18.AddRoute(Script46.EventFront_changed, Background17.frontUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBack_changed TO cube.backUrl }
{ Sample UrlSelector.EventBack_changed TO cube.backUrl}
Transform18.AddRoute(Script46.EventBack_changed, Background17.backUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventLeft_changed TO cube.leftUrl }
{ Sample UrlSelector.EventLeft_changed TO cube.leftUrl}
Transform18.AddRoute(Script46.EventLeft_changed, Background17.leftUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventRight_changed TO cube.rightUrl }
{ Sample UrlSelector.EventRight_changed TO cube.rightUrl}
Transform18.AddRoute(Script46.EventRight_changed, Background17.rightUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventTop_changed TO cube.topUrl }
{ Sample UrlSelector.EventTop_changed TO cube.topUrl}
Transform18.AddRoute(Script46.EventTop_changed, Background17.topUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBottom_changed TO cube.bottomUrl }
{ Sample UrlSelector.EventBottom_changed TO cube.bottomUrl}
Transform18.AddRoute(Script46.EventBottom_changed, Background17.bottomUrl);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventFront_changed TO frontShader.url }
{ Sample UrlSelector.EventFront_changed TO frontShader.url}
Transform18.AddRoute(Script46.EventFront_changed, ImageTexture25.url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBack_changed TO backShader.url }
{ Sample UrlSelector.EventBack_changed TO backShader.url}
Transform18.AddRoute(Script46.EventBack_changed, ImageTexture23.url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventLeft_changed TO leftShader.url }
{ Sample UrlSelector.EventLeft_changed TO leftShader.url}
Transform18.AddRoute(Script46.EventLeft_changed, ImageTexture26.url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventRight_changed TO rightShader.url }
{ Sample UrlSelector.EventRight_changed TO rightShader.url}
Transform18.AddRoute(Script46.EventRight_changed, ImageTexture27.url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventTop_changed TO topShader.url }
{ Sample UrlSelector.EventTop_changed TO topShader.url}
Transform18.AddRoute(Script46.EventTop_changed, ImageTexture28.url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBottom_changed TO bottomShader.url }
{ Sample UrlSelector.EventBottom_changed TO bottomShader.url}
Transform18.AddRoute(Script46.EventBottom_changed, ImageTexture24.url);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform18);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createmirror2: TX3DRootNode;
begin
Initmirror2Part0;
Initmirror2Part1;
Initmirror2Part2;
Initmirror2Part3;
Initmirror2Part4;
Result := X3D0;
end;

begin
end.
