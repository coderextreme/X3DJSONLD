unit mirror;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createmirror: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
Viewpoint16: TViewpointNode;
TextureBackground17: TTextureBackgroundNode;
ImageTexture18: TImageTextureNode;
ImageTexture19: TImageTextureNode;
ImageTexture20: TImageTextureNode;
ImageTexture21: TImageTextureNode;
ImageTexture22: TImageTextureNode;
ImageTexture23: TImageTextureNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
ComposedCubeMapTexture28: TComposedCubeMapTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ImageTexture34: TImageTextureNode;
ComposedShader35: TComposedShaderNode;
SFVec3f36: TSFVec3f;
SFInt3237: TSFInt32;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
ComposedShader43: TComposedShaderNode;
SFVec3f44: TSFVec3f;
SFInt3245: TSFInt32;
SFFloat46: TSFFloat;
SFFloat47: TSFFloat;
SFFloat48: TSFFloat;
ShaderPart49: TShaderPartNode;
ShaderPart50: TShaderPartNode;
Sphere51: TSphereNode;
Script52: TScriptNode;
MFString53: TMFString;
MFString54: TMFString;
MFString55: TMFString;
MFString56: TMFString;
MFString57: TMFString;
MFString58: TMFString;
MFString59: TMFString;
MFString60: TMFString;
MFString61: TMFString;
MFString62: TMFString;
MFString63: TMFString;
MFString64: TMFString;
SFFloat65: TSFFloat;
SFInt3266: TSFInt32;
TimeSensor67: TTimeSensorNode;

procedure InitmirrorPart0;
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
X3D0.Meta['title'] := 'mirror.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'sphere with alternating backgrounds';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0,5,100);
Viewpoint16.Description := 'Switch background and images texture';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint16);
TextureBackground17 := TTextureBackgroundNode.Create;
ImageTexture18 := TImageTextureNode.Create;
ImageTexture18.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ METHOD .SetLeftTexture }
TextureBackground17.LeftTexture := ImageTexture18;
ImageTexture19 := TImageTextureNode.Create;
ImageTexture19.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ METHOD .SetRightTexture }
TextureBackground17.RightTexture := ImageTexture19;
ImageTexture20 := TImageTextureNode.Create;
ImageTexture20.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ METHOD .SetFrontTexture }
TextureBackground17.FrontTexture := ImageTexture20;
ImageTexture21 := TImageTextureNode.Create;
ImageTexture21.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ METHOD .SetBackTexture }
TextureBackground17.BackTexture := ImageTexture21;
ImageTexture22 := TImageTextureNode.Create;
ImageTexture22.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ METHOD .SetTopTexture }
TextureBackground17.TopTexture := ImageTexture22;
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
end;

procedure InitmirrorPart1;
begin

{ METHOD .SetBottomTexture }
TextureBackground17.BottomTexture := ImageTexture23;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(TextureBackground17);
Transform24 := TTransformNode.Create;
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0.7,0.7,0.7);
Material27.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
ComposedCubeMapTexture28 := TComposedCubeMapTextureNode.Create;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture28.BackTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture28.BottomTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture28.FrontTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture28.LeftTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture28.RightTexture := ImageTexture33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture28.TopTexture := ImageTexture34;
{ METHOD .Texture }
Appearance26.Texture := ComposedCubeMapTexture28;
ComposedShader35 := TComposedShaderNode.Create;
ComposedShader35.Language := 'GLSL';
SFVec3f36 := TSFVec3f.CreateUndefined(ComposedShader35, false, 'chromaticDispertion');
SFVec3f36.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader35.AddSFVec3f([SFVec3f36]);
SFInt3237 := TSFInt32.CreateUndefined(ComposedShader35, false, 'cube');
SFInt3237.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader35.AddSFInt32([SFInt3237]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader35, false, 'bias');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader35.AddSFFloat([SFFloat38]);
end;

procedure InitmirrorPart2;
begin

SFFloat39 := TSFFloat.CreateUndefined(ComposedShader35, false, 'scale');
SFFloat39.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader35.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader35, false, 'power');
SFFloat40.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader35.AddSFFloat([SFFloat40]);
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart41.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader35.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['../shaders/mix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart42.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader35.Parts := ShaderPart42;
{ METHOD .AddChildren }
Appearance26.AddChildren([ComposedShader35]);
ComposedShader43 := TComposedShaderNode.Create;
ComposedShader43.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
SFVec3f44 := TSFVec3f.CreateUndefined(ComposedShader43, false, 'chromaticDispertion');
SFVec3f44.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader43.AddSFVec3f([SFVec3f44]);
SFInt3245 := TSFInt32.CreateUndefined(ComposedShader43, false, 'cube');
SFInt3245.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader43.AddSFInt32([SFInt3245]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader43, false, 'bias');
SFFloat46.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader43.AddSFFloat([SFFloat46]);
SFFloat47 := TSFFloat.CreateUndefined(ComposedShader43, false, 'scale');
SFFloat47.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader43.AddSFFloat([SFFloat47]);
SFFloat48 := TSFFloat.CreateUndefined(ComposedShader43, false, 'power');
SFFloat48.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader43.AddSFFloat([SFFloat48]);
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart49.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader43.Parts := ShaderPart49;
ShaderPart50 := TShaderPartNode.Create;
ShaderPart50.SetUrl(['../shaders/x_itemix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart50.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader43.Parts := ShaderPart50;
end;

procedure InitmirrorPart3;
begin

{ METHOD .AddChildren }
Appearance26.AddChildren([ComposedShader43]);
{ METHOD .Appearance }
Shape25.Appearance := Appearance26;
Sphere51 := TSphereNode.Create;
Sphere51.Radius := 30;
{ METHOD .Geometry }
Shape25.Geometry := Sphere51;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
Script52 := TScriptNode.Create;
Script52.DirectOutput := True;
MFString53 := TMFString.CreateUndefined(Script52, false, 'frontUrls');
MFString53.Value := '\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString53);
MFString54 := TMFString.CreateUndefined(Script52, false, 'backUrls');
MFString54.Value := '\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString54);
MFString55 := TMFString.CreateUndefined(Script52, false, 'leftUrls');
MFString55.Value := '\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString55);
MFString56 := TMFString.CreateUndefined(Script52, false, 'rightUrls');
MFString56.Value := '\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString56);
MFString57 := TMFString.CreateUndefined(Script52, false, 'topUrls');
MFString57.Value := '\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString57);
MFString58 := TMFString.CreateUndefined(Script52, false, 'bottomUrls');
MFString58.Value := '\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString58);
MFString59 := TMFString.CreateUndefined(Script52, false, 'front_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString59);
MFString60 := TMFString.CreateUndefined(Script52, false, 'back_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString60);
MFString61 := TMFString.CreateUndefined(Script52, false, 'left_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString61);
MFString62 := TMFString.CreateUndefined(Script52, false, 'right_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString62);
MFString63 := TMFString.CreateUndefined(Script52, false, 'top_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString63);
MFString64 := TMFString.CreateUndefined(Script52, false, 'bottom_changed');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(MFString64);
SFFloat65 := TSFFloat.CreateUndefined(Script52, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFFloat65);
end;

procedure InitmirrorPart4;
begin

SFInt3266 := TSFInt32.CreateUndefined(Script52, false, 'old');
SFInt3266.Value := '-1';
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFInt3266);

Script52.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
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
Transform24.FdChildren.Add(Script52);
TimeSensor67 := TTimeSensorNode.Create;
TimeSensor67.CycleInterval := 45;
TimeSensor67.Loop := True;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(TimeSensor67);
{ Original "Clock.EventFraction_changed TO UrlSelector.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO UrlSelector.EventSet_fraction}
Transform24.AddRoute(TimeSensor67.EventFraction_changed, Script52.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventFront_changed TO frontBackgroundTexture.url }
{ Sample UrlSelector.EventFront_changed TO frontBackgroundTexture.url}
Transform24.AddRoute(Script52.EventFront_changed, ImageTexture20.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBack_changed TO backBackgroundTexture.url }
{ Sample UrlSelector.EventBack_changed TO backBackgroundTexture.url}
Transform24.AddRoute(Script52.EventBack_changed, ImageTexture21.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventLeft_changed TO leftBackgroundTexture.url }
{ Sample UrlSelector.EventLeft_changed TO leftBackgroundTexture.url}
Transform24.AddRoute(Script52.EventLeft_changed, ImageTexture18.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventRight_changed TO rightBackgroundTexture.url }
{ Sample UrlSelector.EventRight_changed TO rightBackgroundTexture.url}
Transform24.AddRoute(Script52.EventRight_changed, ImageTexture19.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventTop_changed TO topBackgroundTexture.url }
{ Sample UrlSelector.EventTop_changed TO topBackgroundTexture.url}
Transform24.AddRoute(Script52.EventTop_changed, ImageTexture22.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBottom_changed TO bottomBackgroundTexture.url }
{ Sample UrlSelector.EventBottom_changed TO bottomBackgroundTexture.url}
Transform24.AddRoute(Script52.EventBottom_changed, ImageTexture23.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventFront_changed TO frontShader.url }
{ Sample UrlSelector.EventFront_changed TO frontShader.url}
Transform24.AddRoute(Script52.EventFront_changed, ImageTexture31.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBack_changed TO backShader.url }
{ Sample UrlSelector.EventBack_changed TO backShader.url}
Transform24.AddRoute(Script52.EventBack_changed, ImageTexture29.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventLeft_changed TO leftShader.url }
{ Sample UrlSelector.EventLeft_changed TO leftShader.url}
Transform24.AddRoute(Script52.EventLeft_changed, ImageTexture32.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventRight_changed TO rightShader.url }
{ Sample UrlSelector.EventRight_changed TO rightShader.url}
Transform24.AddRoute(Script52.EventRight_changed, ImageTexture33.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventTop_changed TO topShader.url }
{ Sample UrlSelector.EventTop_changed TO topShader.url}
Transform24.AddRoute(Script52.EventTop_changed, ImageTexture34.set_url);
{ METHOD .AddX3DROUTE }
{ Original "UrlSelector.EventBottom_changed TO bottomShader.url }
{ Sample UrlSelector.EventBottom_changed TO bottomShader.url}
Transform24.AddRoute(Script52.EventBottom_changed, ImageTexture30.set_url);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform24);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createmirror: TX3DRootNode;
begin
InitmirrorPart0;
InitmirrorPart1;
InitmirrorPart2;
InitmirrorPart3;
InitmirrorPart4;
Result := X3D0;
end;

begin
end.
