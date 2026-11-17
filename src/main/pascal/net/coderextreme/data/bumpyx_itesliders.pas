unit bumpyx_itesliders;

interface

uses X3DNodes;

function Createbumpyx_itesliders: TX3DRootNode;

implementation

uses CastleVectors;

function Createbumpyx_itesliders: TX3DRootNode;
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
X3DField70: TX3DField;
X3DField71: TX3DField;
ComposedCubeMapTexture72: TComposedCubeMapTextureNode;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
X3DField77: TX3DField;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
X3DField81: TX3DField;
ShaderPart82: TShaderPartNode;
ShaderPart83: TShaderPartNode;
Script84: TScriptNode;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DField88: TX3DField;
X3DField89: TX3DField;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
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
X3DPrototype110: TX3DPrototype;
X3DInterfaceDeclaration111: TX3DInterfaceDeclaration;
X3DField112: TX3DField;
X3DField113: TX3DField;
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
X3DField118: TX3DField;
X3DField119: TX3DField;
X3DPrototype120: TX3DPrototype;
Group121: TGroupNode;
Transform122: TTransformNode;
IS123: TIS;
connect124: Tconnect;
Transform125: TTransformNode;
IS126: TIS;
connect127: Tconnect;
PlaneSensor128: TPlaneSensorNode;
Transform129: TTransformNode;
TouchSensor130: TTouchSensorNode;
Transform131: TTransformNode;
Shape132: TShapeNode;
Text133: TTextNode;
IS134: TIS;
connect135: Tconnect;
FontStyle136: TFontStyleNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
Script139: TScriptNode;
X3DField140: TX3DField;
X3DField141: TX3DField;
X3DField142: TX3DField;
X3DField143: TX3DField;
X3DField144: TX3DField;
X3DField145: TX3DField;
X3DField146: TX3DField;
IS147: TIS;
connect148: Tconnect;
connect149: Tconnect;
connect150: Tconnect;
connect151: Tconnect;
X3DPrototype155: TX3DPrototypeNode;
SFVec3f156: TSFVec3f;
SFVec3f157: TSFVec3f;
SFVec3f158: TSFVec3f;
MFString159: TMFString;
SFFloat160: TSFFloat;
SFString161: TSFString;
MFString162: TMFString;
SFNode163: TSFNode;
ComposedShader164: TComposedShaderNode;
X3DPrototype165: TX3DPrototypeNode;
SFVec3f166: TSFVec3f;
SFVec3f167: TSFVec3f;
SFVec3f168: TSFVec3f;
MFString169: TMFString;
SFFloat170: TSFFloat;
SFString171: TSFString;
MFString172: TMFString;
SFNode173: TSFNode;
ComposedShader174: TComposedShaderNode;
X3DPrototype175: TX3DPrototypeNode;
SFVec3f176: TSFVec3f;
SFVec3f177: TSFVec3f;
SFVec3f178: TSFVec3f;
MFString179: TMFString;
SFFloat180: TSFFloat;
SFString181: TSFString;
MFString182: TMFString;
SFNode183: TSFNode;
ComposedShader184: TComposedShaderNode;
X3DPrototype185: TX3DPrototypeNode;
SFVec3f186: TSFVec3f;
SFVec3f187: TSFVec3f;
SFVec3f188: TSFVec3f;
MFString189: TMFString;
SFFloat190: TSFFloat;
SFString191: TSFString;
MFString192: TMFString;
SFNode193: TSFNode;
ComposedShader194: TComposedShaderNode;
X3DPrototype195: TX3DPrototypeNode;
SFVec3f196: TSFVec3f;
SFVec3f197: TSFVec3f;
SFVec3f198: TSFVec3f;
MFString199: TMFString;
SFFloat200: TSFFloat;
SFString201: TSFString;
MFString202: TMFString;
SFNode203: TSFNode;
ComposedShader204: TComposedShaderNode;
X3DPrototype205: TX3DPrototypeNode;
SFVec3f206: TSFVec3f;
SFVec3f207: TSFVec3f;
SFVec3f208: TSFVec3f;
MFString209: TMFString;
SFFloat210: TSFFloat;
SFString211: TSFString;
MFString212: TMFString;
SFNode213: TSFNode;
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
X3D0.ForceVersion.Minor := 0;
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
Cone41 := Cone31;
{ .SetGeometry }
Shape40.Geometry := Cone41;
Appearance42 := TAppearanceNode.Create;
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
Cone51 := Cone31;
{ .SetGeometry }
Shape50.Geometry := Cone51;
Appearance52 := TAppearanceNode.Create;
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
X3DField70 := TX3DField.Create;
X3DField70.NameField := 'chromaticDispertion';
X3DField70.AccessType := 'inputOnly';
X3DField70.Type := 'SFVec3f';
X3DField70.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader69.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'cube';
X3DField71.Type := 'SFNode';
X3DField71.AccessType := 'inputOnly';
ComposedCubeMapTexture72 := ComposedCubeMapTexture62;
{ .SetComposedCubeMapTexture }
X3DField71.ComposedCubeMapTexture := ComposedCubeMapTexture72;
{ .AddX3DField }
ComposedShader69.X3DField := X3DField71;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'bias';
X3DField73.Type := 'SFFloat';
X3DField73.AccessType := 'inputOnly';
X3DField73.Value := '0.5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'scale';
X3DField74.Type := 'SFFloat';
X3DField74.AccessType := 'inputOnly';
X3DField74.Value := '0.5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'power';
X3DField75.Type := 'SFFloat';
X3DField75.AccessType := 'inputOnly';
X3DField75.Value := '2';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'a';
X3DField76.Type := 'SFFloat';
X3DField76.AccessType := 'inputOutput';
X3DField76.Value := '15';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField76;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'b';
X3DField77.Type := 'SFFloat';
X3DField77.AccessType := 'inputOutput';
X3DField77.Value := '5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField77;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'c';
X3DField78.Type := 'SFFloat';
X3DField78.AccessType := 'inputOutput';
X3DField78.Value := '5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'd';
X3DField79.Type := 'SFFloat';
X3DField79.AccessType := 'inputOutput';
X3DField79.Value := '5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'tdelta';
X3DField80.Type := 'SFFloat';
X3DField80.AccessType := 'inputOutput';
X3DField80.Value := '0';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'pdelta';
X3DField81.Type := 'SFFloat';
X3DField81.AccessType := 'inputOutput';
X3DField81.Value := '0';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField81;
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
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'coordinates';
X3DField85.AccessType := 'inputOutput';
X3DField85.Type := 'MFVec3f';
{ .SetX3DField }
Script84.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'coordIndexes';
X3DField86.AccessType := 'outputOnly';
X3DField86.Type := 'MFInt32';
{ .AddX3DField }
Script84.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'a';
X3DField87.Type := 'SFFloat';
X3DField87.AccessType := 'inputOutput';
X3DField87.Value := '10';
{ .AddX3DField }
Script84.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'b';
X3DField88.Type := 'SFFloat';
X3DField88.AccessType := 'inputOutput';
X3DField88.Value := '10';
{ .AddX3DField }
Script84.X3DField := X3DField88;
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'c';
X3DField89.Type := 'SFFloat';
X3DField89.AccessType := 'inputOutput';
X3DField89.Value := '2';
{ .AddX3DField }
Script84.X3DField := X3DField89;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'd';
X3DField90.Type := 'SFFloat';
X3DField90.AccessType := 'inputOutput';
X3DField90.Value := '2';
{ .AddX3DField }
Script84.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'pdelta';
X3DField91.Type := 'SFFloat';
X3DField91.AccessType := 'inputOutput';
X3DField91.Value := '0';
{ .AddX3DField }
Script84.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'tdelta';
X3DField92.Type := 'SFFloat';
X3DField92.AccessType := 'inputOutput';
X3DField92.Value := '0';
{ .AddX3DField }
Script84.X3DField := X3DField92;

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
X3DPrototype110 := TX3DPrototype.Create;
X3DPrototype110.NameField := 'SliderProto';
X3DInterfaceDeclaration111 := TX3DInterfaceDeclaration.Create(nil);
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'sliderTranslation';
X3DField112.AccessType := 'inputOutput';
X3DField112.Type := 'SFVec3f';
X3DField112.Value := '0 0.7 0';
{ .SetX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField112;
X3DField113 := TX3DField.Create;
X3DField113.NameField := 'transformTranslation';
X3DField113.AccessType := 'inputOutput';
X3DField113.Type := 'SFVec3f';
X3DField113.Value := '0 0 0.1';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField113;
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'sensorTranslation';
X3DField114.AccessType := 'inputOutput';
X3DField114.Type := 'SFVec3f';
X3DField114.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'textString';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'MFString';
X3DField115.Value := '\'a=\'';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'parameterScale';
X3DField116.AccessType := 'inputOutput';
X3DField116.Type := 'SFFloat';
X3DField116.Value := '30';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'parameterName';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'SFString';
X3DField117.Value := 'a';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField117;
X3DField118 := TX3DField.Create;
X3DField118.NameField := 'petNames';
X3DField118.AccessType := 'inputOutput';
X3DField118.Type := 'MFString';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField118;
X3DField119 := TX3DField.Create;
X3DField119.NameField := 'shaderNode';
X3DField119.AccessType := 'inputOutput';
X3DField119.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration111.X3DField := X3DField119;
{ .SetX3DInterfaceDeclaration }
X3DPrototype110.X3DInterfaceDeclaration := X3DInterfaceDeclaration111;
X3DPrototype120 := TX3DPrototype.Create;
Group121 := TGroupNode.Create;
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(0,0.7,0);
IS123 := TIS.Create;
connect124 := Tconnect.Create;
connect124.NodeField := 'translation';
connect124.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS123.Connect := connect124;
{ .SetIS }
Transform122.IS := IS123;
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0,0,0.1);
IS126 := TIS.Create;
connect127 := Tconnect.Create;
connect127.NodeField := 'translation';
connect127.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS126.Connect := connect127;
{ .SetIS }
Transform125.IS := IS126;
PlaneSensor128 := TPlaneSensorNode.Create;
PlaneSensor128.Description := 'Grab with mouse to adjust slider';
PlaneSensor128.MaxPosition := Vector2Single(1,0);
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
IS134 := TIS.Create;
connect135 := Tconnect.Create;
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
X3DField140 := TX3DField.Create;
X3DField140.NameField := 'protoScale';
X3DField140.AccessType := 'inputOutput';
X3DField140.Type := 'SFFloat';
{ .SetX3DField }
Script139.X3DField := X3DField140;
X3DField141 := TX3DField.Create;
X3DField141.NameField := 'petNames';
X3DField141.AccessType := 'inputOutput';
X3DField141.Type := 'MFString';
{ .AddX3DField }
Script139.X3DField := X3DField141;
X3DField142 := TX3DField.Create;
X3DField142.NameField := 'protoParameterName';
X3DField142.AccessType := 'inputOutput';
X3DField142.Type := 'SFString';
{ .AddX3DField }
Script139.X3DField := X3DField142;
X3DField143 := TX3DField.Create;
X3DField143.NameField := 'shader';
X3DField143.AccessType := 'inputOutput';
X3DField143.Type := 'SFNode';
{ .AddX3DField }
Script139.X3DField := X3DField143;
X3DField144 := TX3DField.Create;
X3DField144.NameField := 'newTranslation';
X3DField144.AccessType := 'inputOnly';
X3DField144.Type := 'SFVec3f';
X3DField144.Value := '1 1 1';
{ .AddX3DField }
Script139.X3DField := X3DField144;
X3DField145 := TX3DField.Create;
X3DField145.NameField := 'protoValue_changed';
X3DField145.AccessType := 'outputOnly';
X3DField145.Type := 'SFFloat';
X3DField145.Value := '1';
{ .AddX3DField }
Script139.X3DField := X3DField145;
X3DField146 := TX3DField.Create;
X3DField146.NameField := 'protoText_changed';
X3DField146.AccessType := 'outputOnly';
X3DField146.Type := 'MFString';
X3DField146.Value := '\'1.0\'';
{ .AddX3DField }
Script139.X3DField := X3DField146;
IS147 := TIS.Create;
connect148 := Tconnect.Create;
connect148.NodeField := 'protoScale';
connect148.ProtoField := 'parameterScale';
{ .AddConnect }
IS147.Connect := connect148;
connect149 := Tconnect.Create;
connect149.NodeField := 'petNames';
connect149.ProtoField := 'petNames';
{ .AddConnect }
IS147.Connect := connect149;
connect150 := Tconnect.Create;
connect150.NodeField := 'protoParameterName';
connect150.ProtoField := 'parameterName';
{ .AddConnect }
IS147.Connect := connect150;
connect151 := Tconnect.Create;
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
{ .SetGroup }
X3DPrototype120.Group := Group121;
{ .AddX3DPrototype }
X3DPrototype110.X3DPrototype := X3DPrototype120;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype110;
X3DPrototype155 := TX3DPrototypeNode.Create;
X3DPrototype155.NameField := 'SliderProto';
SFVec3f156 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.7,0));
SFVec3f156.NameField := 'sliderTranslation';
SFVec3f156.Value := '0 0.7 0';
{ .SetSFVec3f }
X3DPrototype155.SFVec3f := SFVec3f156;
SFVec3f157 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f157.NameField := 'transformTranslation';
SFVec3f157.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype155.SFVec3f := SFVec3f157;
SFVec3f158 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f158.NameField := 'sensorTranslation';
SFVec3f158.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype155.SFVec3f := SFVec3f158;
MFString159 := TMFString.Create(SliderProto1, false, 'textString', (['a=']));
MFString159.NameField := 'textString';
MFString159.Value := '\"a=\"';
{ .AddMFString }
X3DPrototype155.MFString := MFString159;
SFFloat160 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat160.NameField := 'parameterScale';
SFFloat160.Value := '30';
{ .AddSFFloat }
X3DPrototype155.SFFloat := SFFloat160;
SFString161 := TSFString.Create(SliderProto1, false, 'parameterName', 'a');
SFString161.NameField := 'parameterName';
SFString161.Value := 'a';
{ .AddSFString }
X3DPrototype155.SFString := SFString161;
MFString162 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm','group1-petname']));
MFString162.NameField := 'petNames';
MFString162.Value := '\"yottzumm\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype155.MFString := MFString162;
SFNode163 := TSFNode.Create;
SFNode163.NameField := 'shaderNode';
ComposedShader164 := ComposedShader69;
{ .SetComposedShader }
SFNode163.ComposedShader := ComposedShader164;
{ .AddSFNode }
X3DPrototype155.SFNode := SFNode163;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype155;
X3DPrototype165 := TX3DPrototypeNode.Create;
X3DPrototype165.NameField := 'SliderProto';
SFVec3f166 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.4,0));
SFVec3f166.NameField := 'sliderTranslation';
SFVec3f166.Value := '0 0.4 0';
{ .SetSFVec3f }
X3DPrototype165.SFVec3f := SFVec3f166;
SFVec3f167 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f167.NameField := 'transformTranslation';
SFVec3f167.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype165.SFVec3f := SFVec3f167;
SFVec3f168 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f168.NameField := 'sensorTranslation';
SFVec3f168.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype165.SFVec3f := SFVec3f168;
MFString169 := TMFString.Create(SliderProto1, false, 'textString', (['b=']));
MFString169.NameField := 'textString';
MFString169.Value := '\"b=\"';
{ .AddMFString }
X3DPrototype165.MFString := MFString169;
SFFloat170 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat170.NameField := 'parameterScale';
SFFloat170.Value := '30';
{ .AddSFFloat }
X3DPrototype165.SFFloat := SFFloat170;
SFString171 := TSFString.Create(SliderProto1, false, 'parameterName', 'b');
SFString171.NameField := 'parameterName';
SFString171.Value := 'b';
{ .AddSFString }
X3DPrototype165.SFString := SFString171;
MFString172 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm','group1-petname']));
MFString172.NameField := 'petNames';
MFString172.Value := '\"yottzumm\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype165.MFString := MFString172;
SFNode173 := TSFNode.Create;
SFNode173.NameField := 'shaderNode';
ComposedShader174 := ComposedShader69;
{ .SetComposedShader }
SFNode173.ComposedShader := ComposedShader174;
{ .AddSFNode }
X3DPrototype165.SFNode := SFNode173;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype165;
X3DPrototype175 := TX3DPrototypeNode.Create;
X3DPrototype175.NameField := 'SliderProto';
SFVec3f176 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.1,0));
SFVec3f176.NameField := 'sliderTranslation';
SFVec3f176.Value := '0 0.1 0';
{ .SetSFVec3f }
X3DPrototype175.SFVec3f := SFVec3f176;
SFVec3f177 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f177.NameField := 'transformTranslation';
SFVec3f177.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype175.SFVec3f := SFVec3f177;
SFVec3f178 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f178.NameField := 'sensorTranslation';
SFVec3f178.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype175.SFVec3f := SFVec3f178;
MFString179 := TMFString.Create(SliderProto1, false, 'textString', (['c=']));
MFString179.NameField := 'textString';
MFString179.Value := '\"c=\"';
{ .AddMFString }
X3DPrototype175.MFString := MFString179;
SFFloat180 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat180.NameField := 'parameterScale';
SFFloat180.Value := '20';
{ .AddSFFloat }
X3DPrototype175.SFFloat := SFFloat180;
SFString181 := TSFString.Create(SliderProto1, false, 'parameterName', 'c');
SFString181.NameField := 'parameterName';
SFString181.Value := 'c';
{ .AddSFString }
X3DPrototype175.SFString := SFString181;
MFString182 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm','yottzumm2','group1-petname']));
MFString182.NameField := 'petNames';
MFString182.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype175.MFString := MFString182;
SFNode183 := TSFNode.Create;
SFNode183.NameField := 'shaderNode';
ComposedShader184 := ComposedShader69;
{ .SetComposedShader }
SFNode183.ComposedShader := ComposedShader184;
{ .AddSFNode }
X3DPrototype175.SFNode := SFNode183;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype175;
X3DPrototype185 := TX3DPrototypeNode.Create;
X3DPrototype185.NameField := 'SliderProto';
SFVec3f186 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.2,0));
SFVec3f186.NameField := 'sliderTranslation';
SFVec3f186.Value := '0 -0.2 0';
{ .SetSFVec3f }
X3DPrototype185.SFVec3f := SFVec3f186;
SFVec3f187 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f187.NameField := 'transformTranslation';
SFVec3f187.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype185.SFVec3f := SFVec3f187;
SFVec3f188 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f188.NameField := 'sensorTranslation';
SFVec3f188.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype185.SFVec3f := SFVec3f188;
MFString189 := TMFString.Create(SliderProto1, false, 'textString', (['d=']));
MFString189.NameField := 'textString';
MFString189.Value := '\"d=\"';
{ .AddMFString }
X3DPrototype185.MFString := MFString189;
SFFloat190 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat190.NameField := 'parameterScale';
SFFloat190.Value := '20';
{ .AddSFFloat }
X3DPrototype185.SFFloat := SFFloat190;
SFString191 := TSFString.Create(SliderProto1, false, 'parameterName', 'd');
SFString191.NameField := 'parameterName';
SFString191.Value := 'd';
{ .AddSFString }
X3DPrototype185.SFString := SFString191;
MFString192 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm','yottzumm2','group1-petname']));
MFString192.NameField := 'petNames';
MFString192.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype185.MFString := MFString192;
SFNode193 := TSFNode.Create;
SFNode193.NameField := 'shaderNode';
ComposedShader194 := ComposedShader69;
{ .SetComposedShader }
SFNode193.ComposedShader := ComposedShader194;
{ .AddSFNode }
X3DPrototype185.SFNode := SFNode193;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype185;
X3DPrototype195 := TX3DPrototypeNode.Create;
X3DPrototype195.NameField := 'SliderProto';
SFVec3f196 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.5,0));
SFVec3f196.NameField := 'sliderTranslation';
SFVec3f196.Value := '0 -0.5 0';
{ .SetSFVec3f }
X3DPrototype195.SFVec3f := SFVec3f196;
SFVec3f197 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f197.NameField := 'transformTranslation';
SFVec3f197.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype195.SFVec3f := SFVec3f197;
SFVec3f198 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f198.NameField := 'sensorTranslation';
SFVec3f198.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype195.SFVec3f := SFVec3f198;
MFString199 := TMFString.Create(SliderProto1, false, 'textString', (['tdelta=']));
MFString199.NameField := 'textString';
MFString199.Value := '\"tdelta=\"';
{ .AddMFString }
X3DPrototype195.MFString := MFString199;
SFFloat200 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat200.NameField := 'parameterScale';
SFFloat200.Value := '6.28';
{ .AddSFFloat }
X3DPrototype195.SFFloat := SFFloat200;
SFString201 := TSFString.Create(SliderProto1, false, 'parameterName', 'tdelta');
SFString201.NameField := 'parameterName';
SFString201.Value := 'tdelta';
{ .AddSFString }
X3DPrototype195.SFString := SFString201;
MFString202 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm2','group1-petname']));
MFString202.NameField := 'petNames';
MFString202.Value := '\"yottzumm2\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype195.MFString := MFString202;
SFNode203 := TSFNode.Create;
SFNode203.NameField := 'shaderNode';
ComposedShader204 := ComposedShader69;
{ .SetComposedShader }
SFNode203.ComposedShader := ComposedShader204;
{ .AddSFNode }
X3DPrototype195.SFNode := SFNode203;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype195;
X3DPrototype205 := TX3DPrototypeNode.Create;
X3DPrototype205.NameField := 'SliderProto';
SFVec3f206 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.8,0));
SFVec3f206.NameField := 'sliderTranslation';
SFVec3f206.Value := '0 -0.8 0';
{ .SetSFVec3f }
X3DPrototype205.SFVec3f := SFVec3f206;
SFVec3f207 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f207.NameField := 'transformTranslation';
SFVec3f207.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype205.SFVec3f := SFVec3f207;
SFVec3f208 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f208.NameField := 'sensorTranslation';
SFVec3f208.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype205.SFVec3f := SFVec3f208;
MFString209 := TMFString.Create(SliderProto1, false, 'textString', (['pdelta=']));
MFString209.NameField := 'textString';
MFString209.Value := '\"pdelta=\"';
{ .AddMFString }
X3DPrototype205.MFString := MFString209;
SFFloat210 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat210.NameField := 'parameterScale';
SFFloat210.Value := '6.28';
{ .AddSFFloat }
X3DPrototype205.SFFloat := SFFloat210;
SFString211 := TSFString.Create(SliderProto1, false, 'parameterName', 'pdelta');
SFString211.NameField := 'parameterName';
SFString211.Value := 'pdelta';
{ .AddSFString }
X3DPrototype205.SFString := SFString211;
MFString212 := TMFString.Create(SliderProto1, false, 'petNames', (['yottzumm2','group1-petname']));
MFString212.NameField := 'petNames';
MFString212.Value := '\"yottzumm2\" \"group1-petname\"';
{ .AddMFString }
X3DPrototype205.MFString := MFString212;
SFNode213 := TSFNode.Create;
SFNode213.NameField := 'shaderNode';
ComposedShader214 := ComposedShader69;
{ .SetComposedShader }
SFNode213.ComposedShader := ComposedShader214;
{ .AddSFNode }
X3DPrototype205.SFNode := SFNode213;
{ .AddX3DPrototype }
LayoutLayer95.X3DPrototype := X3DPrototype205;
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

begin
end.
