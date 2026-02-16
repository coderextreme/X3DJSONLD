function bumpyx_itesliders: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
LayerSet17: TLayerSetNode;
Layer18: TLayerNode;
NavigationInfo19: TNavigationInfoNode;
DirectionalLight20: TDirectionalLightNode;
DirectionalLight21: TDirectionalLightNode;
Viewpoint22: TViewpointNode;
Group23: TGroupNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Cylinder26: TCylinderNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Cone31: TConeNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
Cylinder36: TCylinderNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Cone41: TConeNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Cylinder46: TCylinderNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Cone51: TConeNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Background55: TBackgroundNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
IndexedFaceSet58: TIndexedFaceSetNode;
Coordinate59: TCoordinateNode;
Appearance60: TAppearanceNode;
Material61: TMaterialNode;
ComposedCubeMapTexture62: TComposedCubeMapTextureNode;
ImageTexture63: TImageTextureNode;
ImageTexture64: TImageTextureNode;
ImageTexture65: TImageTextureNode;
ImageTexture66: TImageTextureNode;
ImageTexture67: TImageTextureNode;
ImageTexture68: TImageTextureNode;
ComposedShader69: TComposedShaderNode;
field70: TfieldNode;
field71: TfieldNode;
ComposedCubeMapTexture72: TComposedCubeMapTextureNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
field77: TfieldNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
field81: TfieldNode;
ShaderPart82: TShaderPartNode;
ShaderPart83: TShaderPartNode;
Script84: TScriptNode;
field85: TfieldNode;
field86: TfieldNode;
field87: TfieldNode;
field88: TfieldNode;
field89: TfieldNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
LayoutLayer95: TLayoutLayerNode;
Layout96: TLayoutNode;
Viewport97: TViewportNode;
Transform98: TTransformNode;
Shape99: TShapeNode;
Appearance100: TAppearanceNode;
Material101: TMaterialNode;
Box102: TBoxNode;
Transform103: TTransformNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
Text106: TTextNode;
FontStyle107: TFontStyleNode;
Appearance108: TAppearanceNode;
Material109: TMaterialNode;
ProtoDeclare110: TProtoDeclareNode;
ProtoInterface111: TProtoInterfaceNode;
field112: TfieldNode;
field113: TfieldNode;
field114: TfieldNode;
field115: TfieldNode;
field116: TfieldNode;
field117: TfieldNode;
field118: TfieldNode;
field119: TfieldNode;
ProtoBody120: TProtoBodyNode;
Group121: TGroupNode;
Transform122: TTransformNode;
IS123: TISNode;
connect124: TconnectNode;
Transform125: TTransformNode;
IS126: TISNode;
connect127: TconnectNode;
PlaneSensor128: TPlaneSensorNode;
Transform129: TTransformNode;
TouchSensor130: TTouchSensorNode;
Transform131: TTransformNode;
Shape132: TShapeNode;
Text133: TTextNode;
IS134: TISNode;
connect135: TconnectNode;
FontStyle136: TFontStyleNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
Script139: TScriptNode;
field140: TfieldNode;
field141: TfieldNode;
field142: TfieldNode;
field143: TfieldNode;
field144: TfieldNode;
field145: TfieldNode;
field146: TfieldNode;
IS147: TISNode;
connect148: TconnectNode;
connect149: TconnectNode;
connect150: TconnectNode;
connect151: TconnectNode;
ProtoInstance155: TProtoInstanceNode;
fieldValue156: TfieldValueNode;
fieldValue157: TfieldValueNode;
fieldValue158: TfieldValueNode;
fieldValue159: TfieldValueNode;
fieldValue160: TfieldValueNode;
fieldValue161: TfieldValueNode;
fieldValue162: TfieldValueNode;
fieldValue163: TfieldValueNode;
ComposedShader164: TComposedShaderNode;
ProtoInstance165: TProtoInstanceNode;
fieldValue166: TfieldValueNode;
fieldValue167: TfieldValueNode;
fieldValue168: TfieldValueNode;
fieldValue169: TfieldValueNode;
fieldValue170: TfieldValueNode;
fieldValue171: TfieldValueNode;
fieldValue172: TfieldValueNode;
fieldValue173: TfieldValueNode;
ComposedShader174: TComposedShaderNode;
ProtoInstance175: TProtoInstanceNode;
fieldValue176: TfieldValueNode;
fieldValue177: TfieldValueNode;
fieldValue178: TfieldValueNode;
fieldValue179: TfieldValueNode;
fieldValue180: TfieldValueNode;
fieldValue181: TfieldValueNode;
fieldValue182: TfieldValueNode;
fieldValue183: TfieldValueNode;
ComposedShader184: TComposedShaderNode;
ProtoInstance185: TProtoInstanceNode;
fieldValue186: TfieldValueNode;
fieldValue187: TfieldValueNode;
fieldValue188: TfieldValueNode;
fieldValue189: TfieldValueNode;
fieldValue190: TfieldValueNode;
fieldValue191: TfieldValueNode;
fieldValue192: TfieldValueNode;
fieldValue193: TfieldValueNode;
ComposedShader194: TComposedShaderNode;
ProtoInstance195: TProtoInstanceNode;
fieldValue196: TfieldValueNode;
fieldValue197: TfieldValueNode;
fieldValue198: TfieldValueNode;
fieldValue199: TfieldValueNode;
fieldValue200: TfieldValueNode;
fieldValue201: TfieldValueNode;
fieldValue202: TfieldValueNode;
fieldValue203: TfieldValueNode;
ComposedShader204: TComposedShaderNode;
ProtoInstance205: TProtoInstanceNode;
fieldValue206: TfieldValueNode;
fieldValue207: TfieldValueNode;
fieldValue208: TfieldValueNode;
fieldValue209: TfieldValueNode;
fieldValue210: TfieldValueNode;
fieldValue211: TfieldValueNode;
fieldValue212: TfieldValueNode;
fieldValue213: TfieldValueNode;
ComposedShader214: TComposedShaderNode;
Layer215: TLayerNode;
Viewpoint216: TViewpointNode;
Script217: TScriptNode;
Group218: TGroupNode;
Group219: TGroupNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
{ <component name='Shape' level='4'></component> }
{ <component name='DIS' level='2'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'bumpyx_itesliders.x3d';
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group16 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet17 := TLayerSetNode.Create;
LayerSet17.ActiveLayer := 1;
LayerSet17.SetOrder([1,2,3]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
Layer18 := TLayerNode.Create;
Layer18.Pickable := True;
Layer18.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo19 := TNavigationInfoNode.Create;
NavigationInfo19.SetType(['EXAMINE']);
NavigationInfo19.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Layer18.AddChildren([NavigationInfo19]);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(0,-1,0);
{ .AddChildren }
Layer18.AddChildren([DirectionalLight20]);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Layer18.AddChildren([DirectionalLight21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'My Overview';
Viewpoint22.FieldOfView := 1.570796;
Viewpoint22.Position := Vector3(0,1.75,60);
{ .AddChildren }
Layer18.AddChildren([Viewpoint22]);
{ this group contains the red/green/blue 3D crosshair }
Group23 := TGroupNode.Create;
{ Arrow X }
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(25,0,0);
Transform24.Rotation := Vector4(0,0,-1,1.57);
Shape25 := TShapeNode.Create;
Cylinder26 := TCylinderNode.Create;
Cylinder26.Radius := 0.35;
Cylinder26.Height := 50;
{ .SetGeometry }
Shape25.Geometry := Cylinder26;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(1,0,0);
Material28.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape25.Appearance := Appearance27;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Group23.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(50,0,0);
Transform29.Rotation := Vector4(0,0,-1,1.57);
Shape30 := TShapeNode.Create;
Cone31 := TConeNode.Create;
Cone31.BottomRadius := 0.8;
Cone31.Height := 3;
{ .SetGeometry }
Shape30.Geometry := Cone31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33 := Material28;
{ .SetMaterial }
Appearance32.Material := Material33;
{ .SetAppearance }
Shape30.Appearance := Appearance32;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Group23.AddChildren([Transform29]);
{ Arrow Y }
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,25,0);
Shape35 := TShapeNode.Create;
Cylinder36 := TCylinderNode.Create;
Cylinder36 := Cylinder26;
{ .SetGeometry }
Shape35.Geometry := Cylinder36;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0,1,0);
Material38.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape35.Appearance := Appearance37;
{ .AddChild }
Transform34.AddChildren([Shape35]);
{ .AddChildren }
Group23.AddChildren([Transform34]);
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(0,50,0);
Shape40 := TShapeNode.Create;
Cone41 := TConeNode.Create;
Cone41 := Cone31;
{ .SetGeometry }
Shape40.Geometry := Cone41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43 := Material38;
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape40.Appearance := Appearance42;
{ .AddChild }
Transform39.AddChildren([Shape40]);
{ .AddChildren }
Group23.AddChildren([Transform39]);
{ Arrow Z }
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(0,0,25);
Transform44.Rotation := Vector4(1,0,0,1.57);
Shape45 := TShapeNode.Create;
Cylinder46 := TCylinderNode.Create;
Cylinder46 := Cylinder26;
{ .SetGeometry }
Shape45.Geometry := Cylinder46;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0,0,1);
Material48.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape45.Appearance := Appearance47;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Group23.AddChildren([Transform44]);
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0,50);
Transform49.Rotation := Vector4(1,0,0,1.57);
Shape50 := TShapeNode.Create;
Cone51 := TConeNode.Create;
Cone51 := Cone31;
{ .SetGeometry }
Shape50.Geometry := Cone51;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53 := Material48;
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape50.Appearance := Appearance52;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Group23.AddChildren([Transform49]);
{ .AddChildren }
Layer18.AddChildren([Group23]);
{ the model that is being reviewed by the users of this scene }
Transform54 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyx_ite.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background55 := TBackgroundNode.Create;
Background55.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background55.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background55.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background55.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background55.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background55.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform54.AddChildren([Background55]);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet58 := TIndexedFaceSetNode.Create;
IndexedFaceSet58.Convex := False;
Coordinate59 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet58.Coord := Coordinate59;
{ .SetGeometry }
Shape57.Geometry := IndexedFaceSet58;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(0.7,0.7,0.7);
Material61.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;
ImageTexture63 := TImageTextureNode.Create;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture62.BackTexture := ImageTexture63;
ImageTexture64 := TImageTextureNode.Create;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture62.BottomTexture := ImageTexture64;
ImageTexture65 := TImageTextureNode.Create;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture62.FrontTexture := ImageTexture65;
ImageTexture66 := TImageTextureNode.Create;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture62.LeftTexture := ImageTexture66;
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture62.RightTexture := ImageTexture67;
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture62.TopTexture := ImageTexture68;
{ .SetTexture }
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;
ComposedShader69.Language := 'GLSL';
field70 := TfieldNode.Create;
field70.NameField := 'chromaticDispertion';
field70.AccessType := 'inputOnly';
field70.Type := 'SFVec3f';
field70.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader69.Field := field70;
field71 := TfieldNode.Create;
field71.NameField := 'cube';
field71.Type := 'SFNode';
field71.AccessType := 'inputOnly';
ComposedCubeMapTexture72 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture72 := ComposedCubeMapTexture62;
{ .AddChildren }
field71.AddChildren([ComposedCubeMapTexture72]);
{ .AddField }
ComposedShader69.Field := field71;
field73 := TfieldNode.Create;
field73.NameField := 'bias';
field73.Type := 'SFFloat';
field73.AccessType := 'inputOnly';
field73.Value := '0.5';
{ .AddField }
ComposedShader69.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'scale';
field74.Type := 'SFFloat';
field74.AccessType := 'inputOnly';
field74.Value := '0.5';
{ .AddField }
ComposedShader69.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'power';
field75.Type := 'SFFloat';
field75.AccessType := 'inputOnly';
field75.Value := '2';
{ .AddField }
ComposedShader69.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'a';
field76.Type := 'SFFloat';
field76.AccessType := 'inputOutput';
field76.Value := '15';
{ .AddField }
ComposedShader69.Field := field76;
field77 := TfieldNode.Create;
field77.NameField := 'b';
field77.Type := 'SFFloat';
field77.AccessType := 'inputOutput';
field77.Value := '5';
{ .AddField }
ComposedShader69.Field := field77;
field78 := TfieldNode.Create;
field78.NameField := 'c';
field78.Type := 'SFFloat';
field78.AccessType := 'inputOutput';
field78.Value := '5';
{ .AddField }
ComposedShader69.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'd';
field79.Type := 'SFFloat';
field79.AccessType := 'inputOutput';
field79.Value := '5';
{ .AddField }
ComposedShader69.Field := field79;
field80 := TfieldNode.Create;
field80.NameField := 'tdelta';
field80.Type := 'SFFloat';
field80.AccessType := 'inputOutput';
field80.Value := '0';
{ .AddField }
ComposedShader69.Field := field80;
field81 := TfieldNode.Create;
field81.NameField := 'pdelta';
field81.Type := 'SFFloat';
field81.AccessType := 'inputOutput';
field81.Value := '0';
{ .AddField }
ComposedShader69.Field := field81;
ShaderPart82 := TShaderPartNode.Create;
ShaderPart82.SetUrl(['../shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart82.Type := 'VERTEX';
{ .AddParts }
ComposedShader69.Parts := ShaderPart82;
ShaderPart83 := TShaderPartNode.Create;
ShaderPart83.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart83.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader69.Parts := ShaderPart83;
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart> }
{ <ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> }
{ .AddShaders }
Appearance60.Shaders := ComposedShader69;
{ .SetAppearance }
Shape57.Appearance := Appearance60;
{ .AddChild }
Transform56.AddChildren([Shape57]);
{ .AddChildren }
Transform54.AddChildren([Transform56]);
{ .AddChildren }
Layer18.AddChildren([Transform54]);
Script84 := TScriptNode.Create;
field85 := TfieldNode.Create;
field85.NameField := 'coordinates';
field85.AccessType := 'inputOutput';
field85.Type := 'MFVec3f';
{ .AddField }
Script84.Field := field85;
field86 := TfieldNode.Create;
field86.NameField := 'coordIndexes';
field86.AccessType := 'outputOnly';
field86.Type := 'MFInt32';
{ .AddField }
Script84.Field := field86;
field87 := TfieldNode.Create;
field87.NameField := 'a';
field87.Type := 'SFFloat';
field87.AccessType := 'inputOutput';
field87.Value := '10';
{ .AddField }
Script84.Field := field87;
field88 := TfieldNode.Create;
field88.NameField := 'b';
field88.Type := 'SFFloat';
field88.AccessType := 'inputOutput';
field88.Value := '10';
{ .AddField }
Script84.Field := field88;
field89 := TfieldNode.Create;
field89.NameField := 'c';
field89.Type := 'SFFloat';
field89.AccessType := 'inputOutput';
field89.Value := '2';
{ .AddField }
Script84.Field := field89;
field90 := TfieldNode.Create;
field90.NameField := 'd';
field90.Type := 'SFFloat';
field90.AccessType := 'inputOutput';
field90.Value := '2';
{ .AddField }
Script84.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'pdelta';
field91.Type := 'SFFloat';
field91.AccessType := 'inputOutput';
field91.Value := '0';
{ .AddField }
Script84.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'tdelta';
field92.Type := 'SFFloat';
field92.AccessType := 'inputOutput';
field92.Value := '0';
{ .AddField }
Script84.Field := field92;

Script84.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}''');
{ .AddChildren }
Layer18.AddChildren([Script84]);
Layer18.AddRoute(Script84.FdCoordindexes, IndexedFaceSet58.EventSet_coordindex);
{ .AddX3DRoute }
Layer18.AddRoute(Script84.FdCoordinates, Coordinate59.EventSet_point);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet17.Layers := Layer18;
LayoutLayer95 := TLayoutLayerNode.Create;
LayoutLayer95.Pickable := True;
LayoutLayer95.SetObjectType(['ALL']);
Layout96 := TLayoutNode.Create;
Layout96.SetAlign(['LEFT','BOTTOM']);
Layout96.SetOffset([-0.2,0.19]);
Layout96.SetSize([0.4,0.6]);
{ .SetLayout }
LayoutLayer95.Layout := Layout96;
Viewport97 := TViewportNode.Create;
Viewport97.SetClipBoundary([0,1,0,1]);
{ .SetViewport }
LayoutLayer95.Viewport := Viewport97;
Transform98 := TTransformNode.Create;
Transform98.Translation := Vector3(0,0,-3);
Shape99 := TShapeNode.Create;
Appearance100 := TAppearanceNode.Create;
Material101 := TMaterialNode.Create;
Material101.DiffuseColor := Vector3(0,0,0);
Material101.Transparency := 0.7;
{ .SetMaterial }
Appearance100.Material := Material101;
{ .SetAppearance }
Shape99.Appearance := Appearance100;
Box102 := TBoxNode.Create;
Box102.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape99.Geometry := Box102;
{ .AddChild }
Transform98.AddChildren([Shape99]);
{ .AddChildren }
LayoutLayer95.AddChildren([Transform98]);
Transform103 := TTransformNode.Create;
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0,0,-20);
Shape105 := TShapeNode.Create;
Text106 := TTextNode.Create;
Text106.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle107 := TFontStyleNode.Create;
FontStyle107.Size := 0.09;
{ .SetFontStyle }
Text106.FontStyle := FontStyle107;
{ .SetGeometry }
Shape105.Geometry := Text106;
Appearance108 := TAppearanceNode.Create;
Material109 := TMaterialNode.Create;
Material109.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance108.Material := Material109;
{ .SetAppearance }
Shape105.Appearance := Appearance108;
{ .AddChild }
Transform104.AddChildren([Shape105]);
{ .AddChildren }
Transform103.AddChildren([Transform104]);
{ .AddChildren }
LayoutLayer95.AddChildren([Transform103]);
ProtoDeclare110 := TProtoDeclareNode.Create;
ProtoDeclare110.NameField := 'SliderProto';
ProtoInterface111 := TProtoInterfaceNode.Create;
field112 := TfieldNode.Create;
field112.NameField := 'sliderTranslation';
field112.AccessType := 'inputOutput';
field112.Type := 'SFVec3f';
field112.Value := '0 0.7 0';
{ .AddField }
ProtoInterface111.Field := field112;
field113 := TfieldNode.Create;
field113.NameField := 'transformTranslation';
field113.AccessType := 'inputOutput';
field113.Type := 'SFVec3f';
field113.Value := '0 0 0.1';
{ .AddField }
ProtoInterface111.Field := field113;
field114 := TfieldNode.Create;
field114.NameField := 'sensorTranslation';
field114.AccessType := 'inputOutput';
field114.Type := 'SFVec3f';
field114.Value := '0 0 0';
{ .AddField }
ProtoInterface111.Field := field114;
field115 := TfieldNode.Create;
field115.NameField := 'textString';
field115.AccessType := 'inputOutput';
field115.Type := 'MFString';
field115.Value := '\"a=\"';
{ .AddField }
ProtoInterface111.Field := field115;
field116 := TfieldNode.Create;
field116.NameField := 'parameterScale';
field116.AccessType := 'inputOutput';
field116.Type := 'SFFloat';
field116.Value := '30';
{ .AddField }
ProtoInterface111.Field := field116;
field117 := TfieldNode.Create;
field117.NameField := 'parameterName';
field117.AccessType := 'inputOutput';
field117.Type := 'SFString';
field117.Value := 'a';
{ .AddField }
ProtoInterface111.Field := field117;
field118 := TfieldNode.Create;
field118.NameField := 'petNames';
field118.AccessType := 'inputOutput';
field118.Type := 'MFString';
{ .AddField }
ProtoInterface111.Field := field118;
field119 := TfieldNode.Create;
field119.NameField := 'shaderNode';
field119.AccessType := 'inputOutput';
field119.Type := 'SFNode';
{ .AddField }
ProtoInterface111.Field := field119;
{ .SetProtoInterface }
ProtoDeclare110.ProtoInterface := ProtoInterface111;
ProtoBody120 := TProtoBodyNode.Create;
Group121 := TGroupNode.Create;
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(0,0.7,0);
IS123 := TISNode.Create;
connect124 := TconnectNode.Create;
connect124.NodeField := 'translation';
connect124.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS123.Connect := connect124;
{ .SetIS }
Transform122.IS := IS123;
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0,0,0.1);
IS126 := TISNode.Create;
connect127 := TconnectNode.Create;
connect127.NodeField := 'translation';
connect127.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS126.Connect := connect127;
{ .SetIS }
Transform125.IS := IS126;
PlaneSensor128 := TPlaneSensorNode.Create;
PlaneSensor128.Description := 'Grab with mouse to adjust slider';
PlaneSensor128.MaxPosition := Vector2(1,0);
{ .AddChildren }
Transform125.AddChildren([PlaneSensor128]);
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(0,0,0);
TouchSensor130 := TTouchSensorNode.Create;
{ .AddChildren }
Transform129.AddChildren([TouchSensor130]);
{ .AddChildren }
Transform125.AddChildren([Transform129]);
Transform131 := TTransformNode.Create;
Shape132 := TShapeNode.Create;
Text133 := TTextNode.Create;
Text133.SetText(['a=']);
IS134 := TISNode.Create;
connect135 := TconnectNode.Create;
connect135.NodeField := 'string';
connect135.ProtoField := 'textString';
{ .AddConnect }
IS134.Connect := connect135;
{ .SetIS }
Text133.IS := IS134;
FontStyle136 := TFontStyleNode.Create;
FontStyle136.Size := 0.23;
{ .SetFontStyle }
Text133.FontStyle := FontStyle136;
{ .SetGeometry }
Shape132.Geometry := Text133;
Appearance137 := TAppearanceNode.Create;
Material138 := TMaterialNode.Create;
{ .SetMaterial }
Appearance137.Material := Material138;
{ .SetAppearance }
Shape132.Appearance := Appearance137;
{ .AddChild }
Transform131.AddChildren([Shape132]);
{ .AddChildren }
Transform125.AddChildren([Transform131]);
{ .AddChildren }
Transform122.AddChildren([Transform125]);
{ .AddChildren }
Group121.AddChildren([Transform122]);
Script139 := TScriptNode.Create;
Script139.SetUrl(['../javascripts/X3DUser.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js']);
Script139.DirectOutput := True;
Script139.MustEvaluate := True;
field140 := TfieldNode.Create;
field140.NameField := 'protoScale';
field140.AccessType := 'inputOutput';
field140.Type := 'SFFloat';
{ .AddField }
Script139.Field := field140;
field141 := TfieldNode.Create;
field141.NameField := 'petNames';
field141.AccessType := 'inputOutput';
field141.Type := 'MFString';
{ .AddField }
Script139.Field := field141;
field142 := TfieldNode.Create;
field142.NameField := 'protoParameterName';
field142.AccessType := 'inputOutput';
field142.Type := 'SFString';
{ .AddField }
Script139.Field := field142;
field143 := TfieldNode.Create;
field143.NameField := 'shader';
field143.AccessType := 'inputOutput';
field143.Type := 'SFNode';
{ .AddField }
Script139.Field := field143;
field144 := TfieldNode.Create;
field144.NameField := 'newTranslation';
field144.AccessType := 'inputOnly';
field144.Type := 'SFVec3f';
field144.Value := '1 1 1';
{ .AddField }
Script139.Field := field144;
field145 := TfieldNode.Create;
field145.NameField := 'protoValue_changed';
field145.AccessType := 'outputOnly';
field145.Type := 'SFFloat';
field145.Value := '1';
{ .AddField }
Script139.Field := field145;
field146 := TfieldNode.Create;
field146.NameField := 'protoText_changed';
field146.AccessType := 'outputOnly';
field146.Type := 'MFString';
field146.Value := '\"1.0\"';
{ .AddField }
Script139.Field := field146;
IS147 := TISNode.Create;
connect148 := TconnectNode.Create;
connect148.NodeField := 'protoScale';
connect148.ProtoField := 'parameterScale';
{ .AddConnect }
IS147.Connect := connect148;
connect149 := TconnectNode.Create;
connect149.NodeField := 'petNames';
connect149.ProtoField := 'petNames';
{ .AddConnect }
IS147.Connect := connect149;
connect150 := TconnectNode.Create;
connect150.NodeField := 'protoParameterName';
connect150.ProtoField := 'parameterName';
{ .AddConnect }
IS147.Connect := connect150;
connect151 := TconnectNode.Create;
connect151.NodeField := 'shader';
connect151.ProtoField := 'shaderNode';
{ .AddConnect }
IS147.Connect := connect151;
{ .SetIS }
Script139.IS := IS147;
{ .AddChildren }
Group121.AddChildren([Script139]);
Group121.AddRoute(PlaneSensor128.EventTranslation_changed, Transform125.FdTranslation);
{ .AddX3DRoute }
Group121.AddRoute(PlaneSensor128.EventTranslation_changed, Script139.FdNewtranslation);
{ .AddX3DRoute }
Group121.AddRoute(Script139.EventPrototext_changed, Text133.FdString);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody120.AddChildren([Group121]);
{ .SetProtoBody }
ProtoDeclare110.ProtoBody := ProtoBody120;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoDeclare110]);
ProtoInstance155 := TProtoInstanceNode.Create;
ProtoInstance155.NameField := 'SliderProto';
fieldValue156 := TfieldValueNode.Create;
fieldValue156.NameField := 'sliderTranslation';
fieldValue156.Value := '0 0.7 0';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue156;
fieldValue157 := TfieldValueNode.Create;
fieldValue157.NameField := 'transformTranslation';
fieldValue157.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue157;
fieldValue158 := TfieldValueNode.Create;
fieldValue158.NameField := 'sensorTranslation';
fieldValue158.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue158;
fieldValue159 := TfieldValueNode.Create;
fieldValue159.NameField := 'textString';
fieldValue159.Value := '\"a=\"';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue159;
fieldValue160 := TfieldValueNode.Create;
fieldValue160.NameField := 'parameterScale';
fieldValue160.Value := '30';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue160;
fieldValue161 := TfieldValueNode.Create;
fieldValue161.NameField := 'parameterName';
fieldValue161.Value := 'a';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue161;
fieldValue162 := TfieldValueNode.Create;
fieldValue162.NameField := 'petNames';
fieldValue162.Value := '\"yottzumm\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue162;
fieldValue163 := TfieldValueNode.Create;
fieldValue163.NameField := 'shaderNode';
ComposedShader164 := TComposedShaderNode.Create;
ComposedShader164 := ComposedShader69;
{ .AddChildren }
fieldValue163.AddChildren([ComposedShader164]);
{ .AddFieldValue }
ProtoInstance155.FieldValue := fieldValue163;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance155]);
ProtoInstance165 := TProtoInstanceNode.Create;
ProtoInstance165.NameField := 'SliderProto';
fieldValue166 := TfieldValueNode.Create;
fieldValue166.NameField := 'sliderTranslation';
fieldValue166.Value := '0 0.4 0';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue166;
fieldValue167 := TfieldValueNode.Create;
fieldValue167.NameField := 'transformTranslation';
fieldValue167.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue167;
fieldValue168 := TfieldValueNode.Create;
fieldValue168.NameField := 'sensorTranslation';
fieldValue168.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue168;
fieldValue169 := TfieldValueNode.Create;
fieldValue169.NameField := 'textString';
fieldValue169.Value := '\"b=\"';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue169;
fieldValue170 := TfieldValueNode.Create;
fieldValue170.NameField := 'parameterScale';
fieldValue170.Value := '30';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue170;
fieldValue171 := TfieldValueNode.Create;
fieldValue171.NameField := 'parameterName';
fieldValue171.Value := 'b';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue171;
fieldValue172 := TfieldValueNode.Create;
fieldValue172.NameField := 'petNames';
fieldValue172.Value := '\"yottzumm\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue172;
fieldValue173 := TfieldValueNode.Create;
fieldValue173.NameField := 'shaderNode';
ComposedShader174 := TComposedShaderNode.Create;
ComposedShader174 := ComposedShader69;
{ .AddChildren }
fieldValue173.AddChildren([ComposedShader174]);
{ .AddFieldValue }
ProtoInstance165.FieldValue := fieldValue173;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance165]);
ProtoInstance175 := TProtoInstanceNode.Create;
ProtoInstance175.NameField := 'SliderProto';
fieldValue176 := TfieldValueNode.Create;
fieldValue176.NameField := 'sliderTranslation';
fieldValue176.Value := '0 0.1 0';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue176;
fieldValue177 := TfieldValueNode.Create;
fieldValue177.NameField := 'transformTranslation';
fieldValue177.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue177;
fieldValue178 := TfieldValueNode.Create;
fieldValue178.NameField := 'sensorTranslation';
fieldValue178.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue178;
fieldValue179 := TfieldValueNode.Create;
fieldValue179.NameField := 'textString';
fieldValue179.Value := '\"c=\"';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue179;
fieldValue180 := TfieldValueNode.Create;
fieldValue180.NameField := 'parameterScale';
fieldValue180.Value := '20';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue180;
fieldValue181 := TfieldValueNode.Create;
fieldValue181.NameField := 'parameterName';
fieldValue181.Value := 'c';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue181;
fieldValue182 := TfieldValueNode.Create;
fieldValue182.NameField := 'petNames';
fieldValue182.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue182;
fieldValue183 := TfieldValueNode.Create;
fieldValue183.NameField := 'shaderNode';
ComposedShader184 := TComposedShaderNode.Create;
ComposedShader184 := ComposedShader69;
{ .AddChildren }
fieldValue183.AddChildren([ComposedShader184]);
{ .AddFieldValue }
ProtoInstance175.FieldValue := fieldValue183;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance175]);
ProtoInstance185 := TProtoInstanceNode.Create;
ProtoInstance185.NameField := 'SliderProto';
fieldValue186 := TfieldValueNode.Create;
fieldValue186.NameField := 'sliderTranslation';
fieldValue186.Value := '0 -0.2 0';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue186;
fieldValue187 := TfieldValueNode.Create;
fieldValue187.NameField := 'transformTranslation';
fieldValue187.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue187;
fieldValue188 := TfieldValueNode.Create;
fieldValue188.NameField := 'sensorTranslation';
fieldValue188.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue188;
fieldValue189 := TfieldValueNode.Create;
fieldValue189.NameField := 'textString';
fieldValue189.Value := '\"d=\"';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue189;
fieldValue190 := TfieldValueNode.Create;
fieldValue190.NameField := 'parameterScale';
fieldValue190.Value := '20';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue190;
fieldValue191 := TfieldValueNode.Create;
fieldValue191.NameField := 'parameterName';
fieldValue191.Value := 'd';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue191;
fieldValue192 := TfieldValueNode.Create;
fieldValue192.NameField := 'petNames';
fieldValue192.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue192;
fieldValue193 := TfieldValueNode.Create;
fieldValue193.NameField := 'shaderNode';
ComposedShader194 := TComposedShaderNode.Create;
ComposedShader194 := ComposedShader69;
{ .AddChildren }
fieldValue193.AddChildren([ComposedShader194]);
{ .AddFieldValue }
ProtoInstance185.FieldValue := fieldValue193;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance185]);
ProtoInstance195 := TProtoInstanceNode.Create;
ProtoInstance195.NameField := 'SliderProto';
fieldValue196 := TfieldValueNode.Create;
fieldValue196.NameField := 'sliderTranslation';
fieldValue196.Value := '0 -0.5 0';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue196;
fieldValue197 := TfieldValueNode.Create;
fieldValue197.NameField := 'transformTranslation';
fieldValue197.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue197;
fieldValue198 := TfieldValueNode.Create;
fieldValue198.NameField := 'sensorTranslation';
fieldValue198.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue198;
fieldValue199 := TfieldValueNode.Create;
fieldValue199.NameField := 'textString';
fieldValue199.Value := '\"tdelta=\"';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue199;
fieldValue200 := TfieldValueNode.Create;
fieldValue200.NameField := 'parameterScale';
fieldValue200.Value := '6.28';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue200;
fieldValue201 := TfieldValueNode.Create;
fieldValue201.NameField := 'parameterName';
fieldValue201.Value := 'tdelta';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue201;
fieldValue202 := TfieldValueNode.Create;
fieldValue202.NameField := 'petNames';
fieldValue202.Value := '\"yottzumm2\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue202;
fieldValue203 := TfieldValueNode.Create;
fieldValue203.NameField := 'shaderNode';
ComposedShader204 := TComposedShaderNode.Create;
ComposedShader204 := ComposedShader69;
{ .AddChildren }
fieldValue203.AddChildren([ComposedShader204]);
{ .AddFieldValue }
ProtoInstance195.FieldValue := fieldValue203;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance195]);
ProtoInstance205 := TProtoInstanceNode.Create;
ProtoInstance205.NameField := 'SliderProto';
fieldValue206 := TfieldValueNode.Create;
fieldValue206.NameField := 'sliderTranslation';
fieldValue206.Value := '0 -0.8 0';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue206;
fieldValue207 := TfieldValueNode.Create;
fieldValue207.NameField := 'transformTranslation';
fieldValue207.Value := '0 0 0.1';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue207;
fieldValue208 := TfieldValueNode.Create;
fieldValue208.NameField := 'sensorTranslation';
fieldValue208.Value := '0 0 0';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue208;
fieldValue209 := TfieldValueNode.Create;
fieldValue209.NameField := 'textString';
fieldValue209.Value := '\"pdelta=\"';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue209;
fieldValue210 := TfieldValueNode.Create;
fieldValue210.NameField := 'parameterScale';
fieldValue210.Value := '6.28';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue210;
fieldValue211 := TfieldValueNode.Create;
fieldValue211.NameField := 'parameterName';
fieldValue211.Value := 'pdelta';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue211;
fieldValue212 := TfieldValueNode.Create;
fieldValue212.NameField := 'petNames';
fieldValue212.Value := '\"yottzumm2\" \"group1-petname\"';
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue212;
fieldValue213 := TfieldValueNode.Create;
fieldValue213.NameField := 'shaderNode';
ComposedShader214 := TComposedShaderNode.Create;
ComposedShader214 := ComposedShader69;
{ .AddChildren }
fieldValue213.AddChildren([ComposedShader214]);
{ .AddFieldValue }
ProtoInstance205.FieldValue := fieldValue213;
{ .AddChildren }
LayoutLayer95.AddChildren([ProtoInstance205]);
{ .AddLayers }
LayerSet17.Layers := LayoutLayer95;
Layer215 := TLayerNode.Create;
Layer215.Pickable := True;
Layer215.SetObjectType(['ALL']);
Viewpoint216 := TViewpointNode.Create;
Viewpoint216.Description := 'My Humanoids';
Viewpoint216.FieldOfView := 1.570796;
Viewpoint216.Position := Vector3(0,1.75,80);
{ .AddChildren }
Layer215.AddChildren([Viewpoint216]);
Script217 := TScriptNode.Create;
Script217.SetUrl(['../javascripts/X3DAvatar.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js']);
Script217.DirectOutput := True;
Script217.MustEvaluate := True;
{ .AddChildren }
Layer215.AddChildren([Script217]);
Group218 := TGroupNode.Create;
Group219 := TGroupNode.Create;
{ .AddChildren }
Group218.AddChildren([Group219]);
{ .AddChildren }
Layer215.AddChildren([Group218]);
{ .AddLayers }
LayerSet17.Layers := Layer215;
{ .AddChildren }
Group16.AddChildren([LayerSet17]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
