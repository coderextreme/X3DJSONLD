unit bumpyfreewrlsliders;

interface

uses X3DNodes;

function Createbumpyfreewrlsliders: TX3DRootNode;

implementation

uses CastleVectors;

function Createbumpyfreewrlsliders: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
LayerSet18: TLayerSetNode;
Layer19: TLayerNode;
NavigationInfo20: TNavigationInfoNode;
DirectionalLight21: TDirectionalLightNode;
DirectionalLight22: TDirectionalLightNode;
Viewpoint23: TViewpointNode;
Group24: TGroupNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Cylinder27: TCylinderNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
Cone32: TConeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Cylinder37: TCylinderNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
Cone42: TConeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
Cylinder47: TCylinderNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Cone52: TConeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
Transform55: TTransformNode;
Background56: TBackgroundNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
Sphere59: TSphereNode;
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
X3DField72: TX3DField;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
X3DField77: TX3DField;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
ShaderPart81: TShaderPartNode;
IS82: TIS;
connect83: Tconnect;
ShaderPart84: TShaderPartNode;
IS85: TIS;
connect86: Tconnect;
DISEntityManager87: TDISEntityManagerNode;
DISEntityTypeMapping88: TDISEntityTypeMappingNode;
DISEntityTypeMapping89: TDISEntityTypeMappingNode;
DISEntityTypeMapping90: TDISEntityTypeMappingNode;
DISEntityTypeMapping91: TDISEntityTypeMappingNode;
Collision92: TCollisionNode;
Group93: TGroupNode;
LayoutLayer96: TLayoutLayerNode;
Transform97: TTransformNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
Material100: TMaterialNode;
Box101: TBoxNode;
Transform102: TTransformNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Text105: TTextNode;
FontStyle106: TFontStyleNode;
Appearance107: TAppearanceNode;
Material108: TMaterialNode;
X3DPrototype109: TX3DPrototype;
X3DInterfaceDeclaration110: TX3DInterfaceDeclaration;
X3DField111: TX3DField;
X3DField112: TX3DField;
X3DField113: TX3DField;
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
X3DField118: TX3DField;
X3DPrototype119: TX3DPrototype;
Group120: TGroupNode;
Transform121: TTransformNode;
IS122: TIS;
connect123: Tconnect;
Transform124: TTransformNode;
IS125: TIS;
connect126: Tconnect;
PlaneSensor127: TPlaneSensorNode;
Transform128: TTransformNode;
TouchSensor129: TTouchSensorNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Text132: TTextNode;
IS133: TIS;
connect134: Tconnect;
FontStyle135: TFontStyleNode;
Appearance136: TAppearanceNode;
Material137: TMaterialNode;
Transform138: TTransformNode;
IS139: TIS;
connect140: Tconnect;
Shape141: TShapeNode;
Text142: TTextNode;
FontStyle143: TFontStyleNode;
Appearance144: TAppearanceNode;
Material145: TMaterialNode;
Script146: TScriptNode;
X3DField147: TX3DField;
X3DField148: TX3DField;
X3DField149: TX3DField;
X3DField150: TX3DField;
X3DField151: TX3DField;
X3DField152: TX3DField;
IS153: TIS;
connect154: Tconnect;
connect155: Tconnect;
connect156: Tconnect;
X3DPrototype160: TX3DPrototypeNode;
SFVec3f161: TSFVec3f;
SFVec3f162: TSFVec3f;
SFVec3f163: TSFVec3f;
SFVec3f164: TSFVec3f;
MFString165: TMFString;
SFString166: TSFString;
SFFloat167: TSFFloat;
SFNode168: TSFNode;
ComposedShader169: TComposedShaderNode;
X3DPrototype170: TX3DPrototypeNode;
SFVec3f171: TSFVec3f;
SFVec3f172: TSFVec3f;
SFVec3f173: TSFVec3f;
SFVec3f174: TSFVec3f;
MFString175: TMFString;
SFString176: TSFString;
SFFloat177: TSFFloat;
SFNode178: TSFNode;
ComposedShader179: TComposedShaderNode;
X3DPrototype180: TX3DPrototypeNode;
SFVec3f181: TSFVec3f;
SFVec3f182: TSFVec3f;
SFVec3f183: TSFVec3f;
SFVec3f184: TSFVec3f;
MFString185: TMFString;
SFString186: TSFString;
SFFloat187: TSFFloat;
SFNode188: TSFNode;
ComposedShader189: TComposedShaderNode;
X3DPrototype190: TX3DPrototypeNode;
SFVec3f191: TSFVec3f;
SFVec3f192: TSFVec3f;
SFVec3f193: TSFVec3f;
SFVec3f194: TSFVec3f;
MFString195: TMFString;
SFString196: TSFString;
SFFloat197: TSFFloat;
SFNode198: TSFNode;
ComposedShader199: TComposedShaderNode;
X3DPrototype200: TX3DPrototypeNode;
SFVec3f201: TSFVec3f;
SFVec3f202: TSFVec3f;
SFVec3f203: TSFVec3f;
SFVec3f204: TSFVec3f;
MFString205: TMFString;
SFString206: TSFString;
SFFloat207: TSFFloat;
SFNode208: TSFNode;
ComposedShader209: TComposedShaderNode;
X3DPrototype210: TX3DPrototypeNode;
SFVec3f211: TSFVec3f;
SFVec3f212: TSFVec3f;
SFVec3f213: TSFVec3f;
SFVec3f214: TSFVec3f;
MFString215: TMFString;
SFString216: TSFString;
SFFloat217: TSFFloat;
SFNode218: TSFNode;
ComposedShader219: TComposedShaderNode;
Layout220: TLayoutNode;
Viewport221: TViewportNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
X3D0.Components['DIS'] := 2;
X3D0.Meta['title'] := 'bumpyfreewrlsliders.x3d';
X3D0.Meta['description'] := 'Bumpy Orbitals with Sliders for FreeWRL';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d';
X3D0.Meta['license'] := 'license.html';
Group17 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet18 := TLayerSetNode.Create;
LayerSet18.ActiveLayer := 1;
LayerSet18.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer19 := TLayerNode.Create;
Layer19.Pickable := True;
Layer19.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo20 := TNavigationInfoNode.Create;
NavigationInfo20.SetType(['EXAMINE','FLY','LOOKAT','ANY']);
NavigationInfo20.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Layer19.AddChildren([NavigationInfo20]);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(0,-1,0);
{ .AddChildren }
Layer19.AddChildren([DirectionalLight21]);
DirectionalLight22 := TDirectionalLightNode.Create;
DirectionalLight22.AmbientIntensity := 0.2;
DirectionalLight22.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Layer19.AddChildren([DirectionalLight22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'My Overview';
Viewpoint23.FieldOfView := 1.570796;
Viewpoint23.Position := Vector3(0,1.75,60);
{ .AddChildren }
Layer19.AddChildren([Viewpoint23]);
{ this group contains the red/green/blue 3D crosshair }
Group24 := TGroupNode.Create;
{ Arrow X }
Transform25 := TTransformNode.Create;
Transform25.Translation := Vector3(25,0,0);
Transform25.Rotation := Vector4(0,0,-1,1.57);
Shape26 := TShapeNode.Create;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.35;
Cylinder27.Height := 50;
{ .SetGeometry }
Shape26.Geometry := Cylinder27;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1,0,0);
Material29.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance28.Material := Material29;
{ .SetAppearance }
Shape26.Appearance := Appearance28;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Group24.AddChildren([Transform25]);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(50,0,0);
Transform30.Rotation := Vector4(0,0,-1,1.57);
Shape31 := TShapeNode.Create;
Cone32 := TConeNode.Create;
Cone32.BottomRadius := 0.8;
Cone32.Height := 3;
{ .SetGeometry }
Shape31.Geometry := Cone32;
Appearance33 := TAppearanceNode.Create;
Material34 := Material29;
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape31.Appearance := Appearance33;
{ .AddChild }
Transform30.AddChildren([Shape31]);
{ .AddChildren }
Group24.AddChildren([Transform30]);
{ Arrow Y }
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,25,0);
Shape36 := TShapeNode.Create;
Cylinder37 := Cylinder27;
{ .SetGeometry }
Shape36.Geometry := Cylinder37;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0,1,0);
Material39.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance38.Material := Material39;
{ .SetAppearance }
Shape36.Appearance := Appearance38;
{ .AddChild }
Transform35.AddChildren([Shape36]);
{ .AddChildren }
Group24.AddChildren([Transform35]);
Transform40 := TTransformNode.Create;
Transform40.Translation := Vector3(0,50,0);
Shape41 := TShapeNode.Create;
Cone42 := Cone32;
{ .SetGeometry }
Shape41.Geometry := Cone42;
Appearance43 := TAppearanceNode.Create;
Material44 := Material39;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape41.Appearance := Appearance43;
{ .AddChild }
Transform40.AddChildren([Shape41]);
{ .AddChildren }
Group24.AddChildren([Transform40]);
{ Arrow Z }
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0,0,25);
Transform45.Rotation := Vector4(1,0,0,1.57);
Shape46 := TShapeNode.Create;
Cylinder47 := Cylinder27;
{ .SetGeometry }
Shape46.Geometry := Cylinder47;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,0,1);
Material49.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance48.Material := Material49;
{ .SetAppearance }
Shape46.Appearance := Appearance48;
{ .AddChild }
Transform45.AddChildren([Shape46]);
{ .AddChildren }
Group24.AddChildren([Transform45]);
Transform50 := TTransformNode.Create;
Transform50.Translation := Vector3(0,0,50);
Transform50.Rotation := Vector4(1,0,0,1.57);
Shape51 := TShapeNode.Create;
Cone52 := Cone32;
{ .SetGeometry }
Shape51.Geometry := Cone52;
Appearance53 := TAppearanceNode.Create;
Material54 := Material49;
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape51.Appearance := Appearance53;
{ .AddChild }
Transform50.AddChildren([Shape51]);
{ .AddChildren }
Group24.AddChildren([Transform50]);
{ .AddChildren }
Layer19.AddChildren([Group24]);
{ the model that is being reviewed by the users of this scene }
Transform55 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background56 := TBackgroundNode.Create;
Background56.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background56.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background56.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background56.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background56.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background56.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform55.AddChildren([Background56]);
Transform57 := TTransformNode.Create;
Shape58 := TShapeNode.Create;
Sphere59 := TSphereNode.Create;
Sphere59.Radius := 5;
{ .SetGeometry }
Shape58.Geometry := Sphere59;
{ <IndexedFaceSet convex="false" DEF="Orbit" creaseAngle="0"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
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
X3DField70.NameField := 'fw_textureCoordGenType';
X3DField70.AccessType := 'inputOutput';
X3DField70.Type := 'SFInt32';
X3DField70.Value := '0';
{ .SetX3DField }
ComposedShader69.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'chromaticDispertion';
X3DField71.AccessType := 'initializeOnly';
X3DField71.Type := 'SFVec3f';
X3DField71.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'bias';
X3DField72.Type := 'SFFloat';
X3DField72.AccessType := 'inputOutput';
X3DField72.Value := '0.5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'scale';
X3DField73.Type := 'SFFloat';
X3DField73.AccessType := 'inputOutput';
X3DField73.Value := '0.5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'power';
X3DField74.Type := 'SFFloat';
X3DField74.AccessType := 'inputOutput';
X3DField74.Value := '2';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'a';
X3DField75.Type := 'SFFloat';
X3DField75.AccessType := 'inputOutput';
X3DField75.Value := '15';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'b';
X3DField76.Type := 'SFFloat';
X3DField76.AccessType := 'inputOutput';
X3DField76.Value := '5';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField76;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'c';
X3DField77.Type := 'SFFloat';
X3DField77.AccessType := 'inputOutput';
X3DField77.Value := '20';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField77;
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'd';
X3DField78.Type := 'SFFloat';
X3DField78.AccessType := 'inputOutput';
X3DField78.Value := '20';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'tdelta';
X3DField79.Type := 'SFFloat';
X3DField79.AccessType := 'inputOutput';
X3DField79.Value := '0';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'pdelta';
X3DField80.Type := 'SFFloat';
X3DField80.AccessType := 'inputOutput';
X3DField80.Value := '0';
{ .AddX3DField }
ComposedShader69.X3DField := X3DField80;
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart81 := TShaderPartNode.Create;
ShaderPart81.Type := 'VERTEX';
IS82 := TIS.Create;
connect83 := Tconnect.Create;
connect83.NodeField := 'url';
connect83.ProtoField := 'vertex';
{ .AddConnect }
IS82.Connect := connect83;
{ .SetIS }
ShaderPart81.IS := IS82;
{ .AddParts }
ComposedShader69.Parts := ShaderPart81;
ShaderPart84 := TShaderPartNode.Create;
ShaderPart84.Type := 'FRAGMENT';
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'url';
connect86.ProtoField := 'fragment';
{ .AddConnect }
IS85.Connect := connect86;
{ .SetIS }
ShaderPart84.IS := IS85;
{ .AddParts }
ComposedShader69.Parts := ShaderPart84;
{ .AddShaders }
Appearance60.Shaders := ComposedShader69;
{ <ComposedShader DEF="freewrlShader" language="GLSL"> }
{ <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart type='VERTEX'> }
{ <IS> }
{ <connect nodeField="url" protoField="vertex"/> }
{ </IS> }
{ </ShaderPart> }
{ <ShaderPart type='FRAGMENT'> }
{ <IS> }
{ <connect nodeField="url" protoField="fragment"/> }
{ </IS> }
{ </ShaderPart> }
{ </ComposedShader> }
{ .SetAppearance }
Shape58.Appearance := Appearance60;
{ .AddChild }
Transform57.AddChildren([Shape58]);
{ .AddChildren }
Transform55.AddChildren([Transform57]);
{ .AddChildren }
Layer19.AddChildren([Transform55]);
{ <Script DEF="OrbitScript"> }
{ <field accessType="inputOutput" name="coordinates" type="MFVec3f"/> }
{ <field accessType="outputOnly" name="coordIndexes" type="MFInt32"/> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
(* <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> *)
{ <ROUTE fromField="coordIndexes" fromNode="OrbitScript" toField="set_coordIndex" toNode="Orbit"/> }
{ <ROUTE fromField="coordinates" fromNode="OrbitScript" toField="set_point" toNode="OrbitCoordinates"/> }
{ DIS multiuser facilities }
DISEntityManager87 := TDISEntityManagerNode.Create;
DISEntityTypeMapping88 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping88.Category := 77;
DISEntityTypeMapping88.Specific := 1;
DISEntityTypeMapping88.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping88]);
DISEntityTypeMapping89 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping89.Category := 77;
DISEntityTypeMapping89.Specific := 2;
DISEntityTypeMapping89.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping89]);
DISEntityTypeMapping90 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping90.Category := 77;
DISEntityTypeMapping90.Specific := 3;
DISEntityTypeMapping90.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping90]);
DISEntityTypeMapping91 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping91.Category := 77;
DISEntityTypeMapping91.Specific := 4;
DISEntityTypeMapping91.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ .AddChildren }
DISEntityManager87.AddChildren([DISEntityTypeMapping91]);
{ .AddChildren }
Layer19.AddChildren([DISEntityManager87]);
Collision92 := TCollisionNode.Create;
Group93 := TGroupNode.Create;
{ .SetProxy }
Collision92.Proxy := Group93;
{ .AddChildren }
Layer19.AddChildren([Collision92]);
Layer19.AddRoute(DISEntityManager87.FdAddedentities, Group93.FdAddchildren);
{ .AddX3DRoute }
Layer19.AddRoute(DISEntityManager87.FdRemovedentities, Group93.FdRemovechildren);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet18.Layers := Layer19;
LayoutLayer96 := TLayoutLayerNode.Create;
LayoutLayer96.Pickable := True;
LayoutLayer96.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform97 := TTransformNode.Create;
Transform97.Translation := Vector3(0,0,-3);
Shape98 := TShapeNode.Create;
Appearance99 := TAppearanceNode.Create;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0.1,0.1,0.1);
Material100.Transparency := 1;
{ .SetMaterial }
Appearance99.Material := Material100;
{ .SetAppearance }
Shape98.Appearance := Appearance99;
Box101 := TBoxNode.Create;
Box101.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape98.Geometry := Box101;
{ .AddChild }
Transform97.AddChildren([Shape98]);
{ .AddChildren }
LayoutLayer96.AddChildren([Transform97]);
Transform102 := TTransformNode.Create;
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(0,0,-20);
Shape104 := TShapeNode.Create;
Text105 := TTextNode.Create;
Text105.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle106 := TFontStyleNode.Create;
FontStyle106.Size := 0.09;
{ .SetFontStyle }
Text105.FontStyle := FontStyle106;
{ .SetGeometry }
Shape104.Geometry := Text105;
Appearance107 := TAppearanceNode.Create;
Material108 := TMaterialNode.Create;
Material108.DiffuseColor := Vector3(0,1,1);
{ .SetMaterial }
Appearance107.Material := Material108;
{ .SetAppearance }
Shape104.Appearance := Appearance107;
{ .AddChild }
Transform103.AddChildren([Shape104]);
{ .AddChildren }
Transform102.AddChildren([Transform103]);
{ .AddChildren }
LayoutLayer96.AddChildren([Transform102]);
X3DPrototype109 := TX3DPrototype.Create;
X3DPrototype109.NameField := 'SliderProto';
X3DInterfaceDeclaration110 := TX3DInterfaceDeclaration.Create(nil);
X3DField111 := TX3DField.Create;
X3DField111.NameField := 'sliderTranslation';
X3DField111.AccessType := 'inputOutput';
X3DField111.Type := 'SFVec3f';
X3DField111.Value := '0 0.7 0';
{ .SetX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField111;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'transformTranslation';
X3DField112.AccessType := 'inputOutput';
X3DField112.Type := 'SFVec3f';
X3DField112.Value := '0 0 0.1';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField112;
X3DField113 := TX3DField.Create;
X3DField113.NameField := 'sensorTranslation';
X3DField113.AccessType := 'inputOutput';
X3DField113.Type := 'SFVec3f';
X3DField113.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField113;
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'numberTranslation';
X3DField114.AccessType := 'inputOutput';
X3DField114.Type := 'SFVec3f';
X3DField114.Value := '0.2 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'textString';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'MFString';
X3DField115.Value := '\'a=\'';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'parameterName';
X3DField116.AccessType := 'inputOutput';
X3DField116.Type := 'SFString';
X3DField116.Value := 'a';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'parameterScale';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'SFFloat';
X3DField117.Value := '30';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField117;
X3DField118 := TX3DField.Create;
X3DField118.NameField := 'shaderNode';
X3DField118.AccessType := 'inputOutput';
X3DField118.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration110.X3DField := X3DField118;
{ .SetX3DInterfaceDeclaration }
X3DPrototype109.X3DInterfaceDeclaration := X3DInterfaceDeclaration110;
X3DPrototype119 := TX3DPrototype.Create;
Group120 := TGroupNode.Create;
Transform121 := TTransformNode.Create;
Transform121.Translation := Vector3(0,0.7,0);
IS122 := TIS.Create;
connect123 := Tconnect.Create;
connect123.NodeField := 'translation';
connect123.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS122.Connect := connect123;
{ .SetIS }
Transform121.IS := IS122;
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0,0,0.1);
IS125 := TIS.Create;
connect126 := Tconnect.Create;
connect126.NodeField := 'translation';
connect126.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS125.Connect := connect126;
{ .SetIS }
Transform124.IS := IS125;
PlaneSensor127 := TPlaneSensorNode.Create;
PlaneSensor127.MaxPosition := Vector2Single(2,0);
{ .AddChildren }
Transform124.AddChildren([PlaneSensor127]);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0,0,0);
TouchSensor129 := TTouchSensorNode.Create;
{ .AddChildren }
Transform128.AddChildren([TouchSensor129]);
{ .AddChildren }
Transform124.AddChildren([Transform128]);
Transform130 := TTransformNode.Create;
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['a=']);
IS133 := TIS.Create;
connect134 := Tconnect.Create;
connect134.NodeField := 'string';
connect134.ProtoField := 'textString';
{ .AddConnect }
IS133.Connect := connect134;
{ .SetIS }
Text132.IS := IS133;
FontStyle135 := TFontStyleNode.Create;
FontStyle135.Size := 0.2;
{ .SetFontStyle }
Text132.FontStyle := FontStyle135;
{ .SetGeometry }
Shape131.Geometry := Text132;
Appearance136 := TAppearanceNode.Create;
Material137 := TMaterialNode.Create;
Material137.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance136.Material := Material137;
{ .SetAppearance }
Shape131.Appearance := Appearance136;
{ .AddChild }
Transform130.AddChildren([Shape131]);
Transform138 := TTransformNode.Create;
IS139 := TIS.Create;
connect140 := Tconnect.Create;
connect140.NodeField := 'translation';
connect140.ProtoField := 'numberTranslation';
{ .AddConnect }
IS139.Connect := connect140;
{ .SetIS }
Transform138.IS := IS139;
Shape141 := TShapeNode.Create;
Text142 := TTextNode.Create;
Text142.SetText(['0']);
FontStyle143 := TFontStyleNode.Create;
FontStyle143.Size := 0.2;
{ .SetFontStyle }
Text142.FontStyle := FontStyle143;
{ .SetGeometry }
Shape141.Geometry := Text142;
Appearance144 := TAppearanceNode.Create;
Material145 := TMaterialNode.Create;
Material145.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance144.Material := Material145;
{ .SetAppearance }
Shape141.Appearance := Appearance144;
{ .AddChild }
Transform138.AddChildren([Shape141]);
{ .AddChildren }
Transform130.AddChildren([Transform138]);
{ .AddChildren }
Transform124.AddChildren([Transform130]);
{ .AddChildren }
Transform121.AddChildren([Transform124]);
{ .AddChildren }
Group120.AddChildren([Transform121]);
Script146 := TScriptNode.Create;
Script146.DirectOutput := True;
Script146.MustEvaluate := True;
X3DField147 := TX3DField.Create;
X3DField147.NameField := 'protoScale';
X3DField147.AccessType := 'inputOutput';
X3DField147.Type := 'SFFloat';
X3DField147.Value := '30';
{ .SetX3DField }
Script146.X3DField := X3DField147;
X3DField148 := TX3DField.Create;
X3DField148.NameField := 'shader';
X3DField148.AccessType := 'inputOutput';
X3DField148.Type := 'SFNode';
{ .AddX3DField }
Script146.X3DField := X3DField148;
X3DField149 := TX3DField.Create;
X3DField149.NameField := 'newTranslation';
X3DField149.AccessType := 'inputOutput';
X3DField149.Type := 'SFVec3f';
X3DField149.Value := '1 1 1';
{ .AddX3DField }
Script146.X3DField := X3DField149;
X3DField150 := TX3DField.Create;
X3DField150.NameField := 'protoValue_changed';
X3DField150.AccessType := 'inputOutput';
X3DField150.Type := 'SFFloat';
X3DField150.Value := '1';
{ .AddX3DField }
Script146.X3DField := X3DField150;
X3DField151 := TX3DField.Create;
X3DField151.NameField := 'protoNumber_changed';
X3DField151.AccessType := 'inputOutput';
X3DField151.Type := 'MFString';
X3DField151.Value := '\'0.0\'';
{ .AddX3DField }
Script146.X3DField := X3DField151;
X3DField152 := TX3DField.Create;
X3DField152.NameField := 'protoParameterName';
X3DField152.AccessType := 'inputOutput';
X3DField152.Type := 'SFString';
X3DField152.Value := 'a';
{ .AddX3DField }
Script146.X3DField := X3DField152;
IS153 := TIS.Create;
connect154 := Tconnect.Create;
connect154.NodeField := 'protoScale';
connect154.ProtoField := 'parameterScale';
{ .AddConnect }
IS153.Connect := connect154;
connect155 := Tconnect.Create;
connect155.NodeField := 'protoParameterName';
connect155.ProtoField := 'parameterName';
{ .AddConnect }
IS153.Connect := connect155;
connect156 := Tconnect.Create;
connect156.NodeField := 'shader';
connect156.ProtoField := 'shaderNode';
{ .AddConnect }
IS153.Connect := connect156;
{ .SetIS }
Script146.IS := IS153;

Script146.SetSourceCode('''ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};''');
{ .AddChildren }
Group120.AddChildren([Script146]);
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, Transform124.FdTranslation);
{ .AddX3DRoute }
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, Script146.FdNewtranslation);
{ .AddX3DRoute }
Group120.AddRoute(Script146.EventProtonumber_changed, Text142.FdString);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype119.Group := Group120;
{ .AddX3DPrototype }
X3DPrototype109.X3DPrototype := X3DPrototype119;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype109;
X3DPrototype160 := TX3DPrototypeNode.Create;
X3DPrototype160.NameField := 'SliderProto';
SFVec3f161 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.7,0));
SFVec3f161.NameField := 'sliderTranslation';
SFVec3f161.Value := '0 0.7 0';
{ .SetSFVec3f }
X3DPrototype160.SFVec3f := SFVec3f161;
SFVec3f162 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f162.NameField := 'transformTranslation';
SFVec3f162.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype160.SFVec3f := SFVec3f162;
SFVec3f163 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f163.NameField := 'sensorTranslation';
SFVec3f163.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype160.SFVec3f := SFVec3f163;
SFVec3f164 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.3,0,0));
SFVec3f164.NameField := 'numberTranslation';
SFVec3f164.Value := '0.3 0 0';
{ .AddSFVec3f }
X3DPrototype160.SFVec3f := SFVec3f164;
MFString165 := TMFString.Create(SliderProto1, false, 'textString', (['a=']));
MFString165.NameField := 'textString';
MFString165.Value := '\"a=\"';
{ .AddMFString }
X3DPrototype160.MFString := MFString165;
SFString166 := TSFString.Create(SliderProto1, false, 'parameterName', 'a');
SFString166.NameField := 'parameterName';
SFString166.Value := 'a';
{ .AddSFString }
X3DPrototype160.SFString := SFString166;
SFFloat167 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat167.NameField := 'parameterScale';
SFFloat167.Value := '30';
{ .AddSFFloat }
X3DPrototype160.SFFloat := SFFloat167;
SFNode168 := TSFNode.Create;
SFNode168.NameField := 'shaderNode';
ComposedShader169 := ComposedShader69;
{ .SetComposedShader }
SFNode168.ComposedShader := ComposedShader169;
{ .AddSFNode }
X3DPrototype160.SFNode := SFNode168;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype160;
X3DPrototype170 := TX3DPrototypeNode.Create;
X3DPrototype170.NameField := 'SliderProto';
SFVec3f171 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.4,0));
SFVec3f171.NameField := 'sliderTranslation';
SFVec3f171.Value := '0 0.4 0';
{ .SetSFVec3f }
X3DPrototype170.SFVec3f := SFVec3f171;
SFVec3f172 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f172.NameField := 'transformTranslation';
SFVec3f172.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype170.SFVec3f := SFVec3f172;
SFVec3f173 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f173.NameField := 'sensorTranslation';
SFVec3f173.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype170.SFVec3f := SFVec3f173;
SFVec3f174 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.3,0,0));
SFVec3f174.NameField := 'numberTranslation';
SFVec3f174.Value := '0.3 0 0';
{ .AddSFVec3f }
X3DPrototype170.SFVec3f := SFVec3f174;
MFString175 := TMFString.Create(SliderProto1, false, 'textString', (['b=']));
MFString175.NameField := 'textString';
MFString175.Value := '\"b=\"';
{ .AddMFString }
X3DPrototype170.MFString := MFString175;
SFString176 := TSFString.Create(SliderProto1, false, 'parameterName', 'b');
SFString176.NameField := 'parameterName';
SFString176.Value := 'b';
{ .AddSFString }
X3DPrototype170.SFString := SFString176;
SFFloat177 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat177.NameField := 'parameterScale';
SFFloat177.Value := '30';
{ .AddSFFloat }
X3DPrototype170.SFFloat := SFFloat177;
SFNode178 := TSFNode.Create;
SFNode178.NameField := 'shaderNode';
ComposedShader179 := ComposedShader69;
{ .SetComposedShader }
SFNode178.ComposedShader := ComposedShader179;
{ .AddSFNode }
X3DPrototype170.SFNode := SFNode178;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype170;
X3DPrototype180 := TX3DPrototypeNode.Create;
X3DPrototype180.NameField := 'SliderProto';
SFVec3f181 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.1,0));
SFVec3f181.NameField := 'sliderTranslation';
SFVec3f181.Value := '0 0.1 0';
{ .SetSFVec3f }
X3DPrototype180.SFVec3f := SFVec3f181;
SFVec3f182 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f182.NameField := 'transformTranslation';
SFVec3f182.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype180.SFVec3f := SFVec3f182;
SFVec3f183 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f183.NameField := 'sensorTranslation';
SFVec3f183.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype180.SFVec3f := SFVec3f183;
SFVec3f184 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.3,0,0));
SFVec3f184.NameField := 'numberTranslation';
SFVec3f184.Value := '0.3 0 0';
{ .AddSFVec3f }
X3DPrototype180.SFVec3f := SFVec3f184;
MFString185 := TMFString.Create(SliderProto1, false, 'textString', (['c=']));
MFString185.NameField := 'textString';
MFString185.Value := '\"c=\"';
{ .AddMFString }
X3DPrototype180.MFString := MFString185;
SFString186 := TSFString.Create(SliderProto1, false, 'parameterName', 'c');
SFString186.NameField := 'parameterName';
SFString186.Value := 'c';
{ .AddSFString }
X3DPrototype180.SFString := SFString186;
SFFloat187 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat187.NameField := 'parameterScale';
SFFloat187.Value := '20';
{ .AddSFFloat }
X3DPrototype180.SFFloat := SFFloat187;
SFNode188 := TSFNode.Create;
SFNode188.NameField := 'shaderNode';
ComposedShader189 := ComposedShader69;
{ .SetComposedShader }
SFNode188.ComposedShader := ComposedShader189;
{ .AddSFNode }
X3DPrototype180.SFNode := SFNode188;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype180;
X3DPrototype190 := TX3DPrototypeNode.Create;
X3DPrototype190.NameField := 'SliderProto';
SFVec3f191 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.2,0));
SFVec3f191.NameField := 'sliderTranslation';
SFVec3f191.Value := '0 -0.2 0';
{ .SetSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f191;
SFVec3f192 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f192.NameField := 'transformTranslation';
SFVec3f192.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f192;
SFVec3f193 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f193.NameField := 'sensorTranslation';
SFVec3f193.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f193;
SFVec3f194 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.3,0,0));
SFVec3f194.NameField := 'numberTranslation';
SFVec3f194.Value := '0.3 0 0';
{ .AddSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f194;
MFString195 := TMFString.Create(SliderProto1, false, 'textString', (['d=']));
MFString195.NameField := 'textString';
MFString195.Value := '\"d=\"';
{ .AddMFString }
X3DPrototype190.MFString := MFString195;
SFString196 := TSFString.Create(SliderProto1, false, 'parameterName', 'd');
SFString196.NameField := 'parameterName';
SFString196.Value := 'd';
{ .AddSFString }
X3DPrototype190.SFString := SFString196;
SFFloat197 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat197.NameField := 'parameterScale';
SFFloat197.Value := '20';
{ .AddSFFloat }
X3DPrototype190.SFFloat := SFFloat197;
SFNode198 := TSFNode.Create;
SFNode198.NameField := 'shaderNode';
ComposedShader199 := ComposedShader69;
{ .SetComposedShader }
SFNode198.ComposedShader := ComposedShader199;
{ .AddSFNode }
X3DPrototype190.SFNode := SFNode198;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype190;
X3DPrototype200 := TX3DPrototypeNode.Create;
X3DPrototype200.NameField := 'SliderProto';
SFVec3f201 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.5,0));
SFVec3f201.NameField := 'sliderTranslation';
SFVec3f201.Value := '0 -0.5 0';
{ .SetSFVec3f }
X3DPrototype200.SFVec3f := SFVec3f201;
SFVec3f202 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f202.NameField := 'transformTranslation';
SFVec3f202.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype200.SFVec3f := SFVec3f202;
SFVec3f203 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f203.NameField := 'sensorTranslation';
SFVec3f203.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype200.SFVec3f := SFVec3f203;
SFVec3f204 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.8,0,0));
SFVec3f204.NameField := 'numberTranslation';
SFVec3f204.Value := '0.8 0 0';
{ .AddSFVec3f }
X3DPrototype200.SFVec3f := SFVec3f204;
MFString205 := TMFString.Create(SliderProto1, false, 'textString', (['tdelta=']));
MFString205.NameField := 'textString';
MFString205.Value := '\"tdelta=\"';
{ .AddMFString }
X3DPrototype200.MFString := MFString205;
SFString206 := TSFString.Create(SliderProto1, false, 'parameterName', 'tdelta');
SFString206.NameField := 'parameterName';
SFString206.Value := 'tdelta';
{ .AddSFString }
X3DPrototype200.SFString := SFString206;
SFFloat207 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat207.NameField := 'parameterScale';
SFFloat207.Value := '6.28';
{ .AddSFFloat }
X3DPrototype200.SFFloat := SFFloat207;
SFNode208 := TSFNode.Create;
SFNode208.NameField := 'shaderNode';
ComposedShader209 := ComposedShader69;
{ .SetComposedShader }
SFNode208.ComposedShader := ComposedShader209;
{ .AddSFNode }
X3DPrototype200.SFNode := SFNode208;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype200;
X3DPrototype210 := TX3DPrototypeNode.Create;
X3DPrototype210.NameField := 'SliderProto';
SFVec3f211 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.8,0));
SFVec3f211.NameField := 'sliderTranslation';
SFVec3f211.Value := '0 -0.8 0';
{ .SetSFVec3f }
X3DPrototype210.SFVec3f := SFVec3f211;
SFVec3f212 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f212.NameField := 'transformTranslation';
SFVec3f212.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype210.SFVec3f := SFVec3f212;
SFVec3f213 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f213.NameField := 'sensorTranslation';
SFVec3f213.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype210.SFVec3f := SFVec3f213;
SFVec3f214 := TSFVec3f.Create(SliderProto1, false, 'numberTranslation', Vector3(0.8,0,0));
SFVec3f214.NameField := 'numberTranslation';
SFVec3f214.Value := '0.8 0 0';
{ .AddSFVec3f }
X3DPrototype210.SFVec3f := SFVec3f214;
MFString215 := TMFString.Create(SliderProto1, false, 'textString', (['pdelta=']));
MFString215.NameField := 'textString';
MFString215.Value := '\"pdelta=\"';
{ .AddMFString }
X3DPrototype210.MFString := MFString215;
SFString216 := TSFString.Create(SliderProto1, false, 'parameterName', 'pdelta');
SFString216.NameField := 'parameterName';
SFString216.Value := 'pdelta';
{ .AddSFString }
X3DPrototype210.SFString := SFString216;
SFFloat217 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat217.NameField := 'parameterScale';
SFFloat217.Value := '6.28';
{ .AddSFFloat }
X3DPrototype210.SFFloat := SFFloat217;
SFNode218 := TSFNode.Create;
SFNode218.NameField := 'shaderNode';
ComposedShader219 := ComposedShader69;
{ .SetComposedShader }
SFNode218.ComposedShader := ComposedShader219;
{ .AddSFNode }
X3DPrototype210.SFNode := SFNode218;
{ .AddX3DPrototype }
LayoutLayer96.X3DPrototype := X3DPrototype210;
Layout220 := TLayoutNode.Create;
Layout220.SetAlign(['LEFT','BOTTOM']);
Layout220.SetOffset([-0.5,0]);
{ .SetLayout }
LayoutLayer96.Layout := Layout220;
Viewport221 := TViewportNode.Create;
{ .SetViewport }
LayoutLayer96.Viewport := Viewport221;
{ .AddLayers }
LayerSet18.Layers := LayoutLayer96;
{ .AddChildren }
Group17.AddChildren([LayerSet18]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;

begin
end.
